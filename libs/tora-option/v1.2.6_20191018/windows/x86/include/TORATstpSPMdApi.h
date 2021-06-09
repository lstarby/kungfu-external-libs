/////////////////////////////////////////////////////////////////////////
///@company 上海泰琰信息科技有限公司
///@file TORATstpSPMdApi.h
///@brief 定义了客户端接口
///@history 
/////////////////////////////////////////////////////////////////////////

#if !defined(_TORA_TSTPSPMDAPI_H)
#define _TORA_TSTPSPMDAPI_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TORATstpSPUserApiStruct.h"


#ifdef SPMD_API_EXPORT
#ifdef WINDOWS
#define SPMD_API_DLL_EXPORT __declspec(dllexport)
#else
#define SPMD_API_DLL_EXPORT __attribute__ ((visibility("default")))
#endif
#else
#define SPMD_API_DLL_EXPORT 
#endif


namespace TORASPAPI
{
	class CTORATstpSPMdSpi
	{
	public:
		///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
		virtual void OnFrontConnected(){};
		
		///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
		///        -3 连接已断开
		///        -4 网络读失败
		///        -5 网络写失败
		///        -6 订阅流错误
		///        -7 流序号错误
		///        -8 错误的心跳报文
		///        -9 错误的报文
		virtual void OnFrontDisconnected(int nReason){};
				
		///错误应答
		virtual void OnRspError(CTORATstpSPRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///登录请求响应
		virtual void OnRspUserLogin(CTORATstpSPRspUserLoginField *pRspUserLogin, CTORATstpSPRspInfoField *pRspInfo, int nRequestID) {};

		///登出请求响应
		virtual void OnRspUserLogout(CTORATstpSPUserLogoutField *pUserLogout, CTORATstpSPRspInfoField *pRspInfo, int nRequestID) {};

		///订阅行情应答
		virtual void OnRspSubMarketData(CTORATstpSPSpecificSecurityField *pSpecificSecurity, CTORATstpSPRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///取消订阅行情应答
		virtual void OnRspUnSubMarketData(CTORATstpSPSpecificSecurityField *pSpecificSecurity, CTORATstpSPRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		virtual void OnRtnDepthMarketData(CTORATstpSPMarketDataField *pDepthMarketData) {};
	};

	class SPMD_API_DLL_EXPORT CTORATstpSPMdApi
	{
	public:
		///创建MdApi
		///@return 创建出的MdApi
		static CTORATstpSPMdApi *CreateTstpSPMdApi();
		
		///获取API版本号
		///@return 版本号
		static const char* GetApiVersion();
		
		///删除接口对象本身
		///@remark 不再使用本接口对象时,调用该函数删除接口对象
		virtual void Release() = 0;
		
		///初始化
		///@remark 初始化运行环境,只有调用后,接口才开始工作
		virtual void Init() = 0;
		
		///等待接口线程结束运行
		///@return 线程退出代码
		virtual int Join() = 0;

		///注册前置机网络地址
		///@param pszFrontAddress：前置机网络地址。
		///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:17001”。 
		///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”17001”代表服务器端口号。
		virtual void RegisterFront(char *pszFrontAddress) = 0;

		///注册名字服务器网络地址
		///@param pszNsAddress：名字服务器网络地址。
		///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:12001”。 
		///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”12001”代表服务器端口号。
		///@remark RegisterNameServer优先于RegisterFront
		virtual void RegisterNameServer(char *pszNsAddress) = 0;
		
		///注册回调接口
		///@param pSpi 派生自回调接口类的实例
		virtual void RegisterSpi(CTORATstpSPMdSpi *pSpi) = 0;
		
		///订阅行情。
		///@param ppSecurityID 合约ID  
		///@param nCount 要订阅/退订行情的合约个数
		///@remark 
		virtual int SubscribeMarketData(char **ppSecurityID, int nCount, TTORATstpSPExchangeIDType ExchageID) = 0;

		///退订行情。
		///@param ppSecurityID 合约ID  
		///@param nCount 要订阅/退订行情的合约个数
		///@remark 
		virtual int UnSubscribeMarketData(char **ppSecurityID, int nCount, TTORATstpSPExchangeIDType ExchageID) = 0;


		///用户登录请求
		virtual int ReqUserLogin(CTORATstpSPReqUserLoginField *pReqUserLoginField, int nRequestID) = 0;
		

		///登出请求
		virtual int ReqUserLogout(CTORATstpSPUserLogoutField *pUserLogout, int nRequestID) = 0;
	protected:
		~CTORATstpSPMdApi(){};
	};
}
#endif
