/////////////////////////////////////////////////////////////////////////
///@company 上海泰琰信息科技有限公司
///@file TORATstpMdApi.h
///@brief 定义了客户端接口
///@history 
/////////////////////////////////////////////////////////////////////////

#if !defined(_TORA_TSTPMDAPI_H)
#define _TORA_TSTPMDAPI_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TORATstpUserApiStruct.h"


#ifdef MD_API_EXPORT
#ifdef WINDOWS
#define MD_API_DLL_EXPORT __declspec(dllexport)
#else
#define MD_API_DLL_EXPORT __attribute__ ((visibility("default")))
#endif
#else
#define MD_API_DLL_EXPORT 
#endif

class CTORATstpMdSpi
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
	virtual void OnRspError(CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///登录请求响应
	virtual void OnRspUserLogin(CTORATstpRspUserLoginField *pRspUserLogin, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///登出请求响应
	virtual void OnRspUserLogout(CTORATstpUserLogoutField *pUserLogout, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///订阅行情应答
	virtual void OnRspSubMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///取消订阅行情应答
	virtual void OnRspUnSubMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///订阅盘后行情应答
	virtual void OnRspSubPHMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///取消订阅盘后行情应答
	virtual void OnRspUnSubPHMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	///订阅特定行情应答
	virtual void OnRspSubSpecialMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///取消订阅特定行情应答
	virtual void OnRspUnSubSpecialMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	///查询行情快照应答
	virtual void OnRspInquiryMarketDataMirror(CTORATstpMarketDataField *pMarketDataField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///查询盘后行情快照应答
	virtual void OnRspInquiryPHMarketDataMirror(CTORATstpPHMarketDataField *pPHMarketDataField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///查询特定行情快照应答
	virtual void OnRspInquirySpecialMarketDataMirror(CTORATstpSpecialMarketDataField *pMarketDataField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	///订阅极速行情应答
	virtual void OnRspSubRapidMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///取消订阅极速行情应答
	virtual void OnRspUnSubRapidMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///订阅资金流向行情应答
	virtual void OnRspSubFundsFlowMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///取消订阅资金流向行情应答
	virtual void OnRspUnSubFundsFlowMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///订阅行业指数行情应答
	virtual void OnRspSubIndustryIndexData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///取消订阅行业指数行情应答
	virtual void OnRspUnSubIndustryIndexData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///订阅概念指数行情应答
	virtual void OnRspSubConceptionIndexData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///取消订阅概念指数行情应答
	virtual void OnRspUnSubConceptionIndexData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///订阅地域指数行情应答
	virtual void OnRspSubRegionIndexData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///取消订阅地域指数行情应答
	virtual void OnRspUnSubRegionIndexData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///订阅价格异常波动委托明细应答
	virtual void OnRspSubEffectOrderDetail(CTORATstpEffectDetailItemField *pEffectDetailItem, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///取消订阅价格异常波动委托明细应答
	virtual void OnRspUnSubEffectOrderDetail(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///订阅价格异常波动成交明细应答
	virtual void OnRspSubEffectTradeDetail(CTORATstpEffectDetailItemField *pEffectDetailItem, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///取消订阅价格异常波动成交明细应答
	virtual void OnRspUnSubEffectTradeDetail(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	///深度行情通知
	virtual void OnRtnDepthMarketData(CTORATstpMarketDataField *pDepthMarketData) {};
	
	///盘后行情通知
	virtual void OnRtnPHMarketData(CTORATstpPHMarketDataField *pPHMarketData) {};
	
	///特定行情通知
	virtual void OnRtnSpecialMarketData(CTORATstpSpecialMarketDataField *pSpecialMarketData) {};
	
	///极速行情通知
	virtual void OnRtnRapidMarketData(CTORATstpRapidMarketDataField *pRapidMarketData) {};

	///资金流向行情通知
	virtual void OnRtnFundsFlowMarketData(CTORATstpFundsFlowMarketDataField *pFundsFlowMarketData) {};
	
	///价格波动异常行情通知
	virtual void OnRtnEffectPriceMarketData(CTORATstpEffectPriceMarketDataField *pEffectPriceMarketData) {};

	///数量波动异常行情通知
	virtual void OnRtnEffectVolumeMarketData(CTORATstpEffectVolumeMarketDataField *pEffectVolumeMarketData) {};

	///价格异常波动委托明细通知
	virtual void OnRtnEffectOrderDetail(CTORATstpEffectOrderDetailField *pEffectOrderDetail) {};

	///价格异常波动成交明细通知
	virtual void OnRtnEffectTradeDetail(CTORATstpEffectTradeDetailField *pEffectTradeDetail) {};

	///行业指数行情通知
	virtual void OnRtnIndustryIndexData(CTORATstpIndustryIndexDataField *pIndustryIndexData) {};

	///概念指数行情通知
	virtual void OnRtnConceptionIndexData(CTORATstpConceptionIndexDataField *pConceptionIndexData) {};

	///地域指数行情通知
	virtual void OnRtnRegionIndexData(CTORATstpRegionIndexDataField *pRegionIndexData) {};

	///查询复权信息应答
	virtual void OnRspInquiryRightsAdjustment(CTORATstpRightsAdjustmentDataField *pRightsAdjustmentData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///查询历史资金流向数据应答
	virtual void OnRspInquiryHistoryFundsFlow(CTORATstpHistoryFundsFlowDataField *pHistoryFundsFlowData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///查询财务指标数据应答
	virtual void OnRspInquiryFinancialIndicator(CTORATstpFinancialIndicatorDataField *pFinancialIndicatorData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///查询分红信息应答
	virtual void OnRspInquiryDividend(CTORATstpDividendDataField *pDividendData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///查询送股配股数据应答
	virtual void OnRspInquiryRightIssue(CTORATstpRightIssueDataField *pRightIssueData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///查询公司资料数据应答
	virtual void OnRspInquiryCompanyDescription(CTORATstpCompanyDescriptionDataField *pCompanyDescriptionData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///查询主营业务应答
	virtual void OnRspInquirySalesSegment(CTORATstpSalesSegmentDataField *pSalesSegmentData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///查询股本结构数据应答
	virtual void OnRspInquiryEquityStructure(CTORATstpEquityStructureDataField *pEquityStructureData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///查询十大股东数据应答
	virtual void OnRspInquiryTopTenHolders(CTORATstpTopTenHoldersDataField *pTopTenHoldersData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///查询十大流通股东数据应答
	virtual void OnRspInquiryTopTenFloatHolders(CTORATstpTopTenFloatHoldersDataField *pTopTenFloatHoldersData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///查询个股所属行业板块数据应答
	virtual void OnRspInquiryIndustry(CTORATstpIndustryDataField *pIndustryData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///查询个股所属概念板块数据应答
	virtual void OnRspInquiryConception(CTORATstpConceptionDataField *pConceptionData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///查询个股所属地域板块应答
	virtual void OnRspInquiryRegion(CTORATstpRegionDataField *pRegionData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///查询指数描述信息应答
	virtual void OnRspInquiryIndexDescription(CTORATstpIndexDescriptionDataField *pIndexDescriptionData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///查询行业板块成分股应答
	virtual void OnRspInquiryIndustryConstituents(CTORATstpIndustryConstituentsDataField *pIndustryConstituentsData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///查询概念板块成分股应答
	virtual void OnRspInquiryConceptionConstituents(CTORATstpConceptionConstituentsDataField *pConceptionConstituentsData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///查询地域板块成分股应答
	virtual void OnRspInquiryRegionConstituents(CTORATstpRegionConstituentsDataField *pRegionConstituentsData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///查询行业版块指数列表应答
	virtual void OnRspInquiryIndustryCodeList(CTORATstpIndustryCodeListDataField *pIndustryIndexData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///查询概念版块指数列表应答
	virtual void OnRspInquiryConceptionCodeList(CTORATstpConceptionCodeListDataField *pConceptionIndexData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///查询地域版块指数列表应答
	virtual void OnRspInquiryRegionCodeList(CTORATstpRegionCodeListDataField *pRegionCodeListData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///查询自由流通股本数据应答
	virtual void OnRspInquiryFreeFloatShares(CTORATstpFreeFloatSharesDataField *pFreeFloatSharesData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};
	
	///查询盘口委托应答
	virtual void OnRspInquiryQueueingOrders(CTORATstpQueueingOrderField *pQueueingOrder, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};
	
	///查询持仓量价分布数据应答
	virtual void OnRspInquiryPriceDistribution(CTORATstpPriceDistributionDataField *pPriceDistributionData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///查询历史极值价格信息应答
	virtual void OnRspInquiryPriceExtremum(CTORATstpPriceExtremumDataField *pPriceExtremumData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};
	
};

class MD_API_DLL_EXPORT CTORATstpMdApi
{
public:
	///创建MdApi
	///@return 创建出的MdApi
	static CTORATstpMdApi *CreateTstpMdApi();
	
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

	///注册衍生服务服务器网络地址
	///@param pszNsAddress：衍生服务服务器网络地址。
	///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:15001”。 
	///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”15001”代表服务器端口号。
	virtual void RegisterDeriveServer(char *pszDeriveAddress) = 0;

	///注册回调接口
	///@param pSpi 派生自回调接口类的实例
	virtual void RegisterSpi(CTORATstpMdSpi *pSpi) = 0;
	
	///用户登录请求
	virtual int ReqUserLogin(CTORATstpReqUserLoginField *pReqUserLoginField, int nRequestID) = 0;
	
	///登出请求
	virtual int ReqUserLogout(CTORATstpUserLogoutField *pUserLogout, int nRequestID) = 0;
	
	///订阅行情。
	///@param ppInstrumentID 合约ID  
	///@param nCount 要订阅/退订行情的合约个数
	///@remark 
	virtual int SubscribeMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///退订行情。
	///@param ppInstrumentID 合约ID  
	///@param nCount 要订阅/退订行情的合约个数
	///@remark 
	virtual int UnSubscribeMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///订阅盘后行情。
	///@param ppInstrumentID 合约ID  
	///@param nCount 要订阅/退订行情的合约个数
	///@remark 
	virtual int SubscribePHMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///退订盘后行情。
	///@param ppInstrumentID 合约ID  
	///@param nCount 要订阅/退订行情的合约个数
	///@remark 
	virtual int UnSubscribePHMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchageID) = 0;
		
	///订阅特定行情。
	///@param ppInstrumentID 合约ID  
	///@param nCount 要订阅/退订行情的合约个数
	///@remark 
	virtual int SubscribeSpecialMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///退订特定行情。
	///@param ppInstrumentID 合约ID  
	///@param nCount 要订阅/退订行情的合约个数
	///@remark 
	virtual int UnSubscribeSpecialMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///查询行情快照
	///@param pInquiryMarketDataField 请求
	///@param nRequestID
	virtual int ReqInquiryMarketDataMirror(CTORATstpInquiryMarketDataField *pInquiryMarketDataField, int nRequestID) = 0;

	///查询盘后行情快照
	///@param 
	///@param nRequestID
	virtual int ReqInquiryPHMarketDataMirror(CTORATstpInquiryMarketDataField *pInquiryMarketDataField, int nRequestID) = 0;

	///查询特定行情快照
	///@param pInquiryMarketDataField 请求
	///@param nRequestID
	virtual int ReqInquirySpecialMarketDataMirror(CTORATstpInquirySpecialMarketDataField *pInquirySpecialMarketDataField, int nRequestID) = 0;
	
	///订阅极速行情。
	///@param ppInstrumentID 合约ID  
	///@param nCount 要订阅/退订行情的合约个数
	///@remark 
	virtual int SubscribeRapidMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///退订极速行情。
	///@param ppInstrumentID 合约ID  
	///@param nCount 要订阅/退订行情的合约个数
	///@remark 
	virtual int UnSubscribeRapidMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///订阅资金流向行情。
	///@param ppInstrumentID 合约ID
	///@param nCount 要订阅/退订行情的合约个数
	///@remark
	virtual int SubscribeFundsFlowMarketData(char *ppInstrumentID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///退订资金流向行情。
	///@param ppInstrumentID 合约ID
	///@param nCount 要订阅/退订行情的合约个数
	///@remark
	virtual int UnSubscribeFundsFlowMarketData(char *ppInstrumentID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///订阅行业指数行情。
	///@param ppInstrumentID 合约ID
	///@param nCount 要订阅/退订行情的合约个数
	///@remark
	virtual int SubscribeIndustryIndexData(char *ppInstrumentID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///退订行业指数行情。
	///@param ppInstrumentID 合约ID
	///@param nCount 要订阅/退订行情的合约个数
	///@remark
	virtual int UnSubscribeIndustryIndexData(char *ppInstrumentID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///订阅概念指数行情。
	///@param ppInstrumentID 合约ID
	///@param nCount 要订阅/退订行情的合约个数
	///@remark
	virtual int SubscribeConceptionIndexData(char *ppInstrumentID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///退订概念指数行情。
	///@param ppInstrumentID 合约ID
	///@param nCount 要订阅/退订行情的合约个数
	///@remark
	virtual int UnSubscribeConceptionIndexData(char *ppInstrumentID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///订阅地域指数行情。
	///@param ppInstrumentID 合约ID
	///@param nCount 要订阅/退订行情的合约个数
	///@remark
	virtual int SubscribeRegionIndexData(char *ppInstrumentID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///退订地域指数行情。
	///@param ppInstrumentID 合约ID
	///@param nCount 要订阅/退订行情的合约个数
	///@remark
	virtual int UnSubscribeRegionIndexData(char *ppInstrumentID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///订阅价格波动异常委托明细
	///@param ExchangeID 交易所代码
	///@param SecurityID 合约代码
	///@param Ratio 波动幅度
	///@remark
	virtual int SubscribeEffectOrderDetail(TTORATstpExchangeIDType ExchangeID, TTORATstpSecurityIDType SecurityID, TTORATstpRatioType Ratio) = 0;

	///退订价格波动异常委托明细
	///@param ExchangeID 交易所代码
	///@param SecurityID 合约代码
	///@remark
	virtual int UnSubscribeEffectOrderDetail(TTORATstpExchangeIDType ExchangeID, TTORATstpSecurityIDType SecurityID) = 0;

	///订阅价格波动异常成交明细
	///@param ExchangeID 交易所代码
	///@param SecurityID 合约代码
	///@param Ratio 波动幅度
	///@remark
	virtual int SubscribeEffectTradeDetail(TTORATstpExchangeIDType ExchangeID, TTORATstpSecurityIDType SecurityID, TTORATstpRatioType Ratio) = 0;

	///退订价格波动异常成交明细
	///@param ExchangeID 交易所代码
	///@param SecurityID 合约代码
	///@remark
	virtual int UnSubscribeEffectTradeDetail(TTORATstpExchangeIDType ExchangeID, TTORATstpSecurityIDType SecurityID) = 0;
	
	///查询复权信息
	///@param pQryRightsAdjustmentField 请求
	///@param nRequestID 请求ID
	///@remark
	virtual int ReqQryRightsAdjustmentInfo(CTORATstpQryRightsAdjustmentInfoField *pQryRightsAdjustmentField, int nRequestID) = 0;

	///查询历史资金流向信息
	///@param pQryHistoryFundsFlowField 请求
	///@param nRequestID 请求ID
	///@remark
	virtual int ReqQryHistoryFundsFlowInfo(CTORATstpQryHistoryFundsFlowInfoField *pQryHistoryFundsFlowField, int nRequestID) = 0;

	///查询财务指标信息
	///@param pQryFinancialIndicatorField 请求
	///@param nRequestID 请求ID
	///@remark
	virtual int ReqQryFinancialIndicatorInfo(CTORATstpQryFinancialIndicatorInfoField *pQryFinancialIndicatorField, int nRequestID) = 0;

	///查询分红信息
	///@param pQryDividendInfoField 请求
	///@param nRequestID 请求ID
	///@remark
	virtual int ReqQryDividendInfo(CTORATstpQryDividendInfoField *pQryDividendInfoField, int nRequestID) = 0;

	///查询送股配股数据信息
	///@param pQryRightIssueInfoField 请求
	///@param nRequestID 请求ID
	///@remark
	virtual int ReqQryRightIssueInfo(CTORATstpQryRightIssueInfoField *pQryRightIssueInfoField, int nRequestID) = 0;

	///查询公司资料数据信息
	///@param pQryCompanyDescriptionInfoField 请求
	///@param nRequestID 请求ID
	///@remark
	virtual int ReqQryCompanyDescriptionInfo(CTORATstpQryCompanyDescriptionInfoField *pQryCompanyDescriptionInfoField, int nRequestID) = 0;

	///查询主营业务数据信息
	///@param pQrySalesSegmentInfoField 请求
	///@param nRequestID 请求ID
	///@remark
	virtual int ReqQrySalesSegmentInfo(CTORATstpQrySalesSegmentInfoField *pQrySalesSegmentInfoField, int nRequestID) = 0;

	///查询股本结构数据信息
	///@param pQryEquityStructureInfoField 请求
	///@param nRequestID 请求ID
	///@remark
	virtual int ReqQryEquityStructureInfo(CTORATstpQryEquityStructureInfoField *pQryEquityStructureInfoField, int nRequestID) = 0;

	///查询十大股东数据信息
	///@param pQryTopTenHoldersInfoField 请求
	///@param nRequestID 请求ID
	///@remark
	virtual int ReqQryTopTenHoldersInfo(CTORATstpQryTopTenHoldersInfoField *pQryTopTenHoldersInfoField, int nRequestID) = 0;

	///查询十大流通股东数据信息
	///@param pQryTopTenFloatHoldersInfoField 请求
	///@param nRequestID 请求ID
	///@remark
	virtual int ReqQryTopTenFloatHoldersInfo(CTORATstpQryTopTenFloatHoldersInfoField *pQryTopTenFloatHoldersInfoField, int nRequestID) = 0;

	///查询个股所属行业板块信息
	///@param pQryIndustryInfoField 请求
	///@param nRequestID 请求ID
	///@remark
	virtual int ReqQryIndustryInfo(CTORATstpQryIndustryInfoField *pQryIndustryInfoField, int nRequestID) = 0;

	///查询个股所属概念板块信息
	///@param pQryConceptionInfoField 请求
	///@param nRequestID 请求ID
	///@remark
	virtual int ReqQryConceptionInfo(CTORATstpQryConceptionInfoField *pQryConceptionInfoField, int nRequestID) = 0;

	///查询个股所属地域版块信息
	///@param pQryRegionInfoField 请求
	///@param nRequestID 请求ID
	///@remark
	virtual int ReqQryRegionInfo(CTORATstpQryRegionInfoField *pQryRegionInfoField, int nRequestID) = 0;

	///查询指数描述信息数据信息
	///@param pQryIndexDescriptionInfoField 请求
	///@param nRequestID 请求ID
	///@remark
	virtual int ReqQryIndexDescriptionInfo(CTORATstpQryIndexDescriptionInfoField *pQryIndexDescriptionInfoField, int nRequestID) = 0;

	///查询行业板块成分股数据信息
	///@param pQryIndustryConstituentsInfoField 请求
	///@param nRequestID 请求ID
	///@remark
	virtual int ReqQryIndustryConstituentsInfo(CTORATstpQryIndustryConstituentsInfoField *pQryIndustryConstituentsInfoField, int nRequestID) = 0;

	///查询概念板块成分股数据信息
	///@param pQryConceptionConstituentsInfoField 请求
	///@param nRequestID 请求ID
	///@remark
	virtual int ReqQryConceptionConstituentsInfo(CTORATstpQryConceptionConstituentsInfoField *pQryConceptionConstituentsInfoField, int nRequestID) = 0;

	///查询地域板块成分股数据信息
	///@param pQryRegionInfoField 请求
	///@param nRequestID 请求ID
	///@remark
	virtual int ReqQryRegionConstituentsInfo(CTORATstpQryRegionConstituentsInfoField *pQryRegionConstituentsInfoField, int nRequestID) = 0;

	///查询行业版块指数列表
	///@param pQryIndustryCodeListField 请求
	///@param nRequestID 请求ID
	///@remark
	virtual int ReqQryIndustryCodeList(CTORATstpQryIndustryCodeListField *pQryIndustryCodeListField, int nRequestID) = 0;

	///查询概念版块指数列表
	///@param pQryConceptionCodeListField 请求
	///@param nRequestID 请求ID
	///@remark
	virtual int ReqQryConceptionCodeList(CTORATstpQryConceptionCodeListField *pQryConceptionCodeListField, int nRequestID) = 0;

	///查询地域版块指数列表
	///@param pQryRegionCodeListField 请求
	///@param nRequestID 请求ID
	///@remark
	virtual int ReqQryRegionCodeList(CTORATstpQryRegionCodeListField *pQryRegionCodeListField, int nRequestID) = 0;

	///查询自由流通股本信息
	///@param pQryFreeFloatSharesField 请求
	///@param nRequestID 请求ID
	///@remark
	virtual int ReqQryFreeFloatSharesInfo(CTORATstpQryFreeFloatSharesInfoField *pQryFreeFloatSharesField, int nRequestID) = 0;
	
	///查询盘口委托
	///@param pInquiryQueueingOrdersField 请求
	///@param nRequestID 请求ID
	///@remark
	virtual int ReqQryQueueingOrders(CTORATstpInquiryQueueingOrdersField *pInquiryQueueingOrdersField, int nRequestID) = 0;

	///查询持仓量价分布信息
	///@param pQryPriceDistributionField 请求
	///@param nRequestID 请求ID
	///@remark
	virtual int ReqQryPriceDistributionInfo(CTORATstpQryPriceDistributionInfoField *pQryPriceDistributionField, int nRequestID) = 0;

	///查询历史极值价格信息
	///@param pQryPriceExtremumField 请求
	///@param nRequestID 请求ID
	///@remark
	virtual int ReqQryPriceExtremumInfo(CTORATstpQryPriceExtremumInfoField *pQryPriceExtremumField, int nRequestID) = 0;
	
protected:
	~CTORATstpMdApi(){};
};
#endif
