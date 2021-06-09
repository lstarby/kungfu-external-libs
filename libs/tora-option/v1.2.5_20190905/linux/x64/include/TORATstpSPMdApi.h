/////////////////////////////////////////////////////////////////////////
///@company �Ϻ�̩����Ϣ�Ƽ����޹�˾
///@file TORATstpSPMdApi.h
///@brief �����˿ͻ��˽ӿ�
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
		///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
		virtual void OnFrontConnected(){};
		
		///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
		///        -3 �����ѶϿ�
		///        -4 �����ʧ��
		///        -5 ����дʧ��
		///        -6 ����������
		///        -7 ����Ŵ���
		///        -8 �������������
		///        -9 ����ı���
		virtual void OnFrontDisconnected(int nReason){};
				
		///����Ӧ��
		virtual void OnRspError(CTORATstpSPRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///��¼������Ӧ
		virtual void OnRspUserLogin(CTORATstpSPRspUserLoginField *pRspUserLogin, CTORATstpSPRspInfoField *pRspInfo, int nRequestID) {};

		///�ǳ�������Ӧ
		virtual void OnRspUserLogout(CTORATstpSPUserLogoutField *pUserLogout, CTORATstpSPRspInfoField *pRspInfo, int nRequestID) {};

		///��������Ӧ��
		virtual void OnRspSubMarketData(CTORATstpSPSpecificSecurityField *pSpecificSecurity, CTORATstpSPRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		///ȡ����������Ӧ��
		virtual void OnRspUnSubMarketData(CTORATstpSPSpecificSecurityField *pSpecificSecurity, CTORATstpSPRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

		virtual void OnRtnDepthMarketData(CTORATstpSPMarketDataField *pDepthMarketData) {};
	};

	class SPMD_API_DLL_EXPORT CTORATstpSPMdApi
	{
	public:
		///����MdApi
		///@return ��������MdApi
		static CTORATstpSPMdApi *CreateTstpSPMdApi();
		
		///��ȡAPI�汾��
		///@return �汾��
		static const char* GetApiVersion();
		
		///ɾ���ӿڶ�����
		///@remark ����ʹ�ñ��ӿڶ���ʱ,���øú���ɾ���ӿڶ���
		virtual void Release() = 0;
		
		///��ʼ��
		///@remark ��ʼ�����л���,ֻ�е��ú�,�ӿڲſ�ʼ����
		virtual void Init() = 0;
		
		///�ȴ��ӿ��߳̽�������
		///@return �߳��˳�����
		virtual int Join() = 0;

		///ע��ǰ�û������ַ
		///@param pszFrontAddress��ǰ�û������ַ��
		///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:17001���� 
		///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����17001������������˿ںš�
		virtual void RegisterFront(char *pszFrontAddress) = 0;

		///ע�����ַ����������ַ
		///@param pszNsAddress�����ַ����������ַ��
		///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:12001���� 
		///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����12001������������˿ںš�
		///@remark RegisterNameServer������RegisterFront
		virtual void RegisterNameServer(char *pszNsAddress) = 0;
		
		///ע��ص��ӿ�
		///@param pSpi �����Իص��ӿ����ʵ��
		virtual void RegisterSpi(CTORATstpSPMdSpi *pSpi) = 0;
		
		///�������顣
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int SubscribeMarketData(char **ppSecurityID, int nCount, TTORATstpSPExchangeIDType ExchageID) = 0;

		///�˶����顣
		///@param ppSecurityID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		virtual int UnSubscribeMarketData(char **ppSecurityID, int nCount, TTORATstpSPExchangeIDType ExchageID) = 0;


		///�û���¼����
		virtual int ReqUserLogin(CTORATstpSPReqUserLoginField *pReqUserLoginField, int nRequestID) = 0;
		

		///�ǳ�����
		virtual int ReqUserLogout(CTORATstpSPUserLogoutField *pUserLogout, int nRequestID) = 0;
	protected:
		~CTORATstpSPMdApi(){};
	};
}
#endif
