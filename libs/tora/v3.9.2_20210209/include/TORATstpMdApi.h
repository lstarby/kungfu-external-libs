/////////////////////////////////////////////////////////////////////////
///@company �Ϻ�̩����Ϣ�Ƽ����޹�˾
///@file TORATstpMdApi.h
///@brief �����˿ͻ��˽ӿ�
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
	virtual void OnRspError(CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///��¼������Ӧ
	virtual void OnRspUserLogin(CTORATstpRspUserLoginField *pRspUserLogin, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�ǳ�������Ӧ
	virtual void OnRspUserLogout(CTORATstpUserLogoutField *pUserLogout, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///��������Ӧ��
	virtual void OnRspSubMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ȡ����������Ӧ��
	virtual void OnRspUnSubMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����̺�����Ӧ��
	virtual void OnRspSubPHMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ȡ�������̺�����Ӧ��
	virtual void OnRspUnSubPHMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	///�����ض�����Ӧ��
	virtual void OnRspSubSpecialMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ȡ�������ض�����Ӧ��
	virtual void OnRspUnSubSpecialMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	///��ѯ�������Ӧ��
	virtual void OnRspInquiryMarketDataMirror(CTORATstpMarketDataField *pMarketDataField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///��ѯ�̺��������Ӧ��
	virtual void OnRspInquiryPHMarketDataMirror(CTORATstpPHMarketDataField *pPHMarketDataField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///��ѯ�ض��������Ӧ��
	virtual void OnRspInquirySpecialMarketDataMirror(CTORATstpSpecialMarketDataField *pMarketDataField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	///���ļ�������Ӧ��
	virtual void OnRspSubRapidMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ȡ�����ļ�������Ӧ��
	virtual void OnRspUnSubRapidMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ʽ���������Ӧ��
	virtual void OnRspSubFundsFlowMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ȡ�������ʽ���������Ӧ��
	virtual void OnRspUnSubFundsFlowMarketData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///������ҵָ������Ӧ��
	virtual void OnRspSubIndustryIndexData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ȡ��������ҵָ������Ӧ��
	virtual void OnRspUnSubIndustryIndexData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///���ĸ���ָ������Ӧ��
	virtual void OnRspSubConceptionIndexData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ȡ�����ĸ���ָ������Ӧ��
	virtual void OnRspUnSubConceptionIndexData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///���ĵ���ָ������Ӧ��
	virtual void OnRspSubRegionIndexData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ȡ�����ĵ���ָ������Ӧ��
	virtual void OnRspUnSubRegionIndexData(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///���ļ۸��쳣����ί����ϸӦ��
	virtual void OnRspSubEffectOrderDetail(CTORATstpEffectDetailItemField *pEffectDetailItem, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ȡ�����ļ۸��쳣����ί����ϸӦ��
	virtual void OnRspUnSubEffectOrderDetail(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///���ļ۸��쳣�����ɽ���ϸӦ��
	virtual void OnRspSubEffectTradeDetail(CTORATstpEffectDetailItemField *pEffectDetailItem, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ȡ�����ļ۸��쳣�����ɽ���ϸӦ��
	virtual void OnRspUnSubEffectTradeDetail(CTORATstpSpecificSecurityField *pSpecificSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	///�������֪ͨ
	virtual void OnRtnDepthMarketData(CTORATstpMarketDataField *pDepthMarketData) {};
	
	///�̺�����֪ͨ
	virtual void OnRtnPHMarketData(CTORATstpPHMarketDataField *pPHMarketData) {};
	
	///�ض�����֪ͨ
	virtual void OnRtnSpecialMarketData(CTORATstpSpecialMarketDataField *pSpecialMarketData) {};
	
	///��������֪ͨ
	virtual void OnRtnRapidMarketData(CTORATstpRapidMarketDataField *pRapidMarketData) {};

	///�ʽ���������֪ͨ
	virtual void OnRtnFundsFlowMarketData(CTORATstpFundsFlowMarketDataField *pFundsFlowMarketData) {};
	
	///�۸񲨶��쳣����֪ͨ
	virtual void OnRtnEffectPriceMarketData(CTORATstpEffectPriceMarketDataField *pEffectPriceMarketData) {};

	///���������쳣����֪ͨ
	virtual void OnRtnEffectVolumeMarketData(CTORATstpEffectVolumeMarketDataField *pEffectVolumeMarketData) {};

	///�۸��쳣����ί����ϸ֪ͨ
	virtual void OnRtnEffectOrderDetail(CTORATstpEffectOrderDetailField *pEffectOrderDetail) {};

	///�۸��쳣�����ɽ���ϸ֪ͨ
	virtual void OnRtnEffectTradeDetail(CTORATstpEffectTradeDetailField *pEffectTradeDetail) {};

	///��ҵָ������֪ͨ
	virtual void OnRtnIndustryIndexData(CTORATstpIndustryIndexDataField *pIndustryIndexData) {};

	///����ָ������֪ͨ
	virtual void OnRtnConceptionIndexData(CTORATstpConceptionIndexDataField *pConceptionIndexData) {};

	///����ָ������֪ͨ
	virtual void OnRtnRegionIndexData(CTORATstpRegionIndexDataField *pRegionIndexData) {};

	///��ѯ��Ȩ��ϢӦ��
	virtual void OnRspInquiryRightsAdjustment(CTORATstpRightsAdjustmentDataField *pRightsAdjustmentData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///��ѯ��ʷ�ʽ���������Ӧ��
	virtual void OnRspInquiryHistoryFundsFlow(CTORATstpHistoryFundsFlowDataField *pHistoryFundsFlowData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///��ѯ����ָ������Ӧ��
	virtual void OnRspInquiryFinancialIndicator(CTORATstpFinancialIndicatorDataField *pFinancialIndicatorData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///��ѯ�ֺ���ϢӦ��
	virtual void OnRspInquiryDividend(CTORATstpDividendDataField *pDividendData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///��ѯ�͹��������Ӧ��
	virtual void OnRspInquiryRightIssue(CTORATstpRightIssueDataField *pRightIssueData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///��ѯ��˾��������Ӧ��
	virtual void OnRspInquiryCompanyDescription(CTORATstpCompanyDescriptionDataField *pCompanyDescriptionData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///��ѯ��Ӫҵ��Ӧ��
	virtual void OnRspInquirySalesSegment(CTORATstpSalesSegmentDataField *pSalesSegmentData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///��ѯ�ɱ��ṹ����Ӧ��
	virtual void OnRspInquiryEquityStructure(CTORATstpEquityStructureDataField *pEquityStructureData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///��ѯʮ��ɶ�����Ӧ��
	virtual void OnRspInquiryTopTenHolders(CTORATstpTopTenHoldersDataField *pTopTenHoldersData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///��ѯʮ����ͨ�ɶ�����Ӧ��
	virtual void OnRspInquiryTopTenFloatHolders(CTORATstpTopTenFloatHoldersDataField *pTopTenFloatHoldersData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///��ѯ����������ҵ�������Ӧ��
	virtual void OnRspInquiryIndustry(CTORATstpIndustryDataField *pIndustryData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///��ѯ������������������Ӧ��
	virtual void OnRspInquiryConception(CTORATstpConceptionDataField *pConceptionData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///��ѯ��������������Ӧ��
	virtual void OnRspInquiryRegion(CTORATstpRegionDataField *pRegionData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///��ѯָ��������ϢӦ��
	virtual void OnRspInquiryIndexDescription(CTORATstpIndexDescriptionDataField *pIndexDescriptionData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///��ѯ��ҵ���ɷֹ�Ӧ��
	virtual void OnRspInquiryIndustryConstituents(CTORATstpIndustryConstituentsDataField *pIndustryConstituentsData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///��ѯ������ɷֹ�Ӧ��
	virtual void OnRspInquiryConceptionConstituents(CTORATstpConceptionConstituentsDataField *pConceptionConstituentsData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///��ѯ������ɷֹ�Ӧ��
	virtual void OnRspInquiryRegionConstituents(CTORATstpRegionConstituentsDataField *pRegionConstituentsData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///��ѯ��ҵ���ָ���б�Ӧ��
	virtual void OnRspInquiryIndustryCodeList(CTORATstpIndustryCodeListDataField *pIndustryIndexData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///��ѯ������ָ���б�Ӧ��
	virtual void OnRspInquiryConceptionCodeList(CTORATstpConceptionCodeListDataField *pConceptionIndexData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///��ѯ������ָ���б�Ӧ��
	virtual void OnRspInquiryRegionCodeList(CTORATstpRegionCodeListDataField *pRegionCodeListData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///��ѯ������ͨ�ɱ�����Ӧ��
	virtual void OnRspInquiryFreeFloatShares(CTORATstpFreeFloatSharesDataField *pFreeFloatSharesData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};
	
	///��ѯ�̿�ί��Ӧ��
	virtual void OnRspInquiryQueueingOrders(CTORATstpQueueingOrderField *pQueueingOrder, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};
	
	///��ѯ�ֲ����۷ֲ�����Ӧ��
	virtual void OnRspInquiryPriceDistribution(CTORATstpPriceDistributionDataField *pPriceDistributionData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};

	///��ѯ��ʷ��ֵ�۸���ϢӦ��
	virtual void OnRspInquiryPriceExtremum(CTORATstpPriceExtremumDataField *pPriceExtremumData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageLast, bool bIsTotalLast) {};
	
};

class MD_API_DLL_EXPORT CTORATstpMdApi
{
public:
	///����MdApi
	///@return ��������MdApi
	static CTORATstpMdApi *CreateTstpMdApi();
	
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

	///ע��������������������ַ
	///@param pszNsAddress��������������������ַ��
	///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:15001���� 
	///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����15001������������˿ںš�
	virtual void RegisterDeriveServer(char *pszDeriveAddress) = 0;

	///ע��ص��ӿ�
	///@param pSpi �����Իص��ӿ����ʵ��
	virtual void RegisterSpi(CTORATstpMdSpi *pSpi) = 0;
	
	///�û���¼����
	virtual int ReqUserLogin(CTORATstpReqUserLoginField *pReqUserLoginField, int nRequestID) = 0;
	
	///�ǳ�����
	virtual int ReqUserLogout(CTORATstpUserLogoutField *pUserLogout, int nRequestID) = 0;
	
	///�������顣
	///@param ppInstrumentID ��ԼID  
	///@param nCount Ҫ����/�˶�����ĺ�Լ����
	///@remark 
	virtual int SubscribeMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///�˶����顣
	///@param ppInstrumentID ��ԼID  
	///@param nCount Ҫ����/�˶�����ĺ�Լ����
	///@remark 
	virtual int UnSubscribeMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///�����̺����顣
	///@param ppInstrumentID ��ԼID  
	///@param nCount Ҫ����/�˶�����ĺ�Լ����
	///@remark 
	virtual int SubscribePHMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///�˶��̺����顣
	///@param ppInstrumentID ��ԼID  
	///@param nCount Ҫ����/�˶�����ĺ�Լ����
	///@remark 
	virtual int UnSubscribePHMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchageID) = 0;
		
	///�����ض����顣
	///@param ppInstrumentID ��ԼID  
	///@param nCount Ҫ����/�˶�����ĺ�Լ����
	///@remark 
	virtual int SubscribeSpecialMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///�˶��ض����顣
	///@param ppInstrumentID ��ԼID  
	///@param nCount Ҫ����/�˶�����ĺ�Լ����
	///@remark 
	virtual int UnSubscribeSpecialMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///��ѯ�������
	///@param pInquiryMarketDataField ����
	///@param nRequestID
	virtual int ReqInquiryMarketDataMirror(CTORATstpInquiryMarketDataField *pInquiryMarketDataField, int nRequestID) = 0;

	///��ѯ�̺��������
	///@param 
	///@param nRequestID
	virtual int ReqInquiryPHMarketDataMirror(CTORATstpInquiryMarketDataField *pInquiryMarketDataField, int nRequestID) = 0;

	///��ѯ�ض��������
	///@param pInquiryMarketDataField ����
	///@param nRequestID
	virtual int ReqInquirySpecialMarketDataMirror(CTORATstpInquirySpecialMarketDataField *pInquirySpecialMarketDataField, int nRequestID) = 0;
	
	///���ļ������顣
	///@param ppInstrumentID ��ԼID  
	///@param nCount Ҫ����/�˶�����ĺ�Լ����
	///@remark 
	virtual int SubscribeRapidMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///�˶��������顣
	///@param ppInstrumentID ��ԼID  
	///@param nCount Ҫ����/�˶�����ĺ�Լ����
	///@remark 
	virtual int UnSubscribeRapidMarketData(char **ppSecurityID, int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///�����ʽ��������顣
	///@param ppInstrumentID ��ԼID
	///@param nCount Ҫ����/�˶�����ĺ�Լ����
	///@remark
	virtual int SubscribeFundsFlowMarketData(char *ppInstrumentID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///�˶��ʽ��������顣
	///@param ppInstrumentID ��ԼID
	///@param nCount Ҫ����/�˶�����ĺ�Լ����
	///@remark
	virtual int UnSubscribeFundsFlowMarketData(char *ppInstrumentID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///������ҵָ�����顣
	///@param ppInstrumentID ��ԼID
	///@param nCount Ҫ����/�˶�����ĺ�Լ����
	///@remark
	virtual int SubscribeIndustryIndexData(char *ppInstrumentID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///�˶���ҵָ�����顣
	///@param ppInstrumentID ��ԼID
	///@param nCount Ҫ����/�˶�����ĺ�Լ����
	///@remark
	virtual int UnSubscribeIndustryIndexData(char *ppInstrumentID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///���ĸ���ָ�����顣
	///@param ppInstrumentID ��ԼID
	///@param nCount Ҫ����/�˶�����ĺ�Լ����
	///@remark
	virtual int SubscribeConceptionIndexData(char *ppInstrumentID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///�˶�����ָ�����顣
	///@param ppInstrumentID ��ԼID
	///@param nCount Ҫ����/�˶�����ĺ�Լ����
	///@remark
	virtual int UnSubscribeConceptionIndexData(char *ppInstrumentID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///���ĵ���ָ�����顣
	///@param ppInstrumentID ��ԼID
	///@param nCount Ҫ����/�˶�����ĺ�Լ����
	///@remark
	virtual int SubscribeRegionIndexData(char *ppInstrumentID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///�˶�����ָ�����顣
	///@param ppInstrumentID ��ԼID
	///@param nCount Ҫ����/�˶�����ĺ�Լ����
	///@remark
	virtual int UnSubscribeRegionIndexData(char *ppInstrumentID[], int nCount, TTORATstpExchangeIDType ExchageID) = 0;

	///���ļ۸񲨶��쳣ί����ϸ
	///@param ExchangeID ����������
	///@param SecurityID ��Լ����
	///@param Ratio ��������
	///@remark
	virtual int SubscribeEffectOrderDetail(TTORATstpExchangeIDType ExchangeID, TTORATstpSecurityIDType SecurityID, TTORATstpRatioType Ratio) = 0;

	///�˶��۸񲨶��쳣ί����ϸ
	///@param ExchangeID ����������
	///@param SecurityID ��Լ����
	///@remark
	virtual int UnSubscribeEffectOrderDetail(TTORATstpExchangeIDType ExchangeID, TTORATstpSecurityIDType SecurityID) = 0;

	///���ļ۸񲨶��쳣�ɽ���ϸ
	///@param ExchangeID ����������
	///@param SecurityID ��Լ����
	///@param Ratio ��������
	///@remark
	virtual int SubscribeEffectTradeDetail(TTORATstpExchangeIDType ExchangeID, TTORATstpSecurityIDType SecurityID, TTORATstpRatioType Ratio) = 0;

	///�˶��۸񲨶��쳣�ɽ���ϸ
	///@param ExchangeID ����������
	///@param SecurityID ��Լ����
	///@remark
	virtual int UnSubscribeEffectTradeDetail(TTORATstpExchangeIDType ExchangeID, TTORATstpSecurityIDType SecurityID) = 0;
	
	///��ѯ��Ȩ��Ϣ
	///@param pQryRightsAdjustmentField ����
	///@param nRequestID ����ID
	///@remark
	virtual int ReqQryRightsAdjustmentInfo(CTORATstpQryRightsAdjustmentInfoField *pQryRightsAdjustmentField, int nRequestID) = 0;

	///��ѯ��ʷ�ʽ�������Ϣ
	///@param pQryHistoryFundsFlowField ����
	///@param nRequestID ����ID
	///@remark
	virtual int ReqQryHistoryFundsFlowInfo(CTORATstpQryHistoryFundsFlowInfoField *pQryHistoryFundsFlowField, int nRequestID) = 0;

	///��ѯ����ָ����Ϣ
	///@param pQryFinancialIndicatorField ����
	///@param nRequestID ����ID
	///@remark
	virtual int ReqQryFinancialIndicatorInfo(CTORATstpQryFinancialIndicatorInfoField *pQryFinancialIndicatorField, int nRequestID) = 0;

	///��ѯ�ֺ���Ϣ
	///@param pQryDividendInfoField ����
	///@param nRequestID ����ID
	///@remark
	virtual int ReqQryDividendInfo(CTORATstpQryDividendInfoField *pQryDividendInfoField, int nRequestID) = 0;

	///��ѯ�͹����������Ϣ
	///@param pQryRightIssueInfoField ����
	///@param nRequestID ����ID
	///@remark
	virtual int ReqQryRightIssueInfo(CTORATstpQryRightIssueInfoField *pQryRightIssueInfoField, int nRequestID) = 0;

	///��ѯ��˾����������Ϣ
	///@param pQryCompanyDescriptionInfoField ����
	///@param nRequestID ����ID
	///@remark
	virtual int ReqQryCompanyDescriptionInfo(CTORATstpQryCompanyDescriptionInfoField *pQryCompanyDescriptionInfoField, int nRequestID) = 0;

	///��ѯ��Ӫҵ��������Ϣ
	///@param pQrySalesSegmentInfoField ����
	///@param nRequestID ����ID
	///@remark
	virtual int ReqQrySalesSegmentInfo(CTORATstpQrySalesSegmentInfoField *pQrySalesSegmentInfoField, int nRequestID) = 0;

	///��ѯ�ɱ��ṹ������Ϣ
	///@param pQryEquityStructureInfoField ����
	///@param nRequestID ����ID
	///@remark
	virtual int ReqQryEquityStructureInfo(CTORATstpQryEquityStructureInfoField *pQryEquityStructureInfoField, int nRequestID) = 0;

	///��ѯʮ��ɶ�������Ϣ
	///@param pQryTopTenHoldersInfoField ����
	///@param nRequestID ����ID
	///@remark
	virtual int ReqQryTopTenHoldersInfo(CTORATstpQryTopTenHoldersInfoField *pQryTopTenHoldersInfoField, int nRequestID) = 0;

	///��ѯʮ����ͨ�ɶ�������Ϣ
	///@param pQryTopTenFloatHoldersInfoField ����
	///@param nRequestID ����ID
	///@remark
	virtual int ReqQryTopTenFloatHoldersInfo(CTORATstpQryTopTenFloatHoldersInfoField *pQryTopTenFloatHoldersInfoField, int nRequestID) = 0;

	///��ѯ����������ҵ�����Ϣ
	///@param pQryIndustryInfoField ����
	///@param nRequestID ����ID
	///@remark
	virtual int ReqQryIndustryInfo(CTORATstpQryIndustryInfoField *pQryIndustryInfoField, int nRequestID) = 0;

	///��ѯ����������������Ϣ
	///@param pQryConceptionInfoField ����
	///@param nRequestID ����ID
	///@remark
	virtual int ReqQryConceptionInfo(CTORATstpQryConceptionInfoField *pQryConceptionInfoField, int nRequestID) = 0;

	///��ѯ����������������Ϣ
	///@param pQryRegionInfoField ����
	///@param nRequestID ����ID
	///@remark
	virtual int ReqQryRegionInfo(CTORATstpQryRegionInfoField *pQryRegionInfoField, int nRequestID) = 0;

	///��ѯָ��������Ϣ������Ϣ
	///@param pQryIndexDescriptionInfoField ����
	///@param nRequestID ����ID
	///@remark
	virtual int ReqQryIndexDescriptionInfo(CTORATstpQryIndexDescriptionInfoField *pQryIndexDescriptionInfoField, int nRequestID) = 0;

	///��ѯ��ҵ���ɷֹ�������Ϣ
	///@param pQryIndustryConstituentsInfoField ����
	///@param nRequestID ����ID
	///@remark
	virtual int ReqQryIndustryConstituentsInfo(CTORATstpQryIndustryConstituentsInfoField *pQryIndustryConstituentsInfoField, int nRequestID) = 0;

	///��ѯ������ɷֹ�������Ϣ
	///@param pQryConceptionConstituentsInfoField ����
	///@param nRequestID ����ID
	///@remark
	virtual int ReqQryConceptionConstituentsInfo(CTORATstpQryConceptionConstituentsInfoField *pQryConceptionConstituentsInfoField, int nRequestID) = 0;

	///��ѯ������ɷֹ�������Ϣ
	///@param pQryRegionInfoField ����
	///@param nRequestID ����ID
	///@remark
	virtual int ReqQryRegionConstituentsInfo(CTORATstpQryRegionConstituentsInfoField *pQryRegionConstituentsInfoField, int nRequestID) = 0;

	///��ѯ��ҵ���ָ���б�
	///@param pQryIndustryCodeListField ����
	///@param nRequestID ����ID
	///@remark
	virtual int ReqQryIndustryCodeList(CTORATstpQryIndustryCodeListField *pQryIndustryCodeListField, int nRequestID) = 0;

	///��ѯ������ָ���б�
	///@param pQryConceptionCodeListField ����
	///@param nRequestID ����ID
	///@remark
	virtual int ReqQryConceptionCodeList(CTORATstpQryConceptionCodeListField *pQryConceptionCodeListField, int nRequestID) = 0;

	///��ѯ������ָ���б�
	///@param pQryRegionCodeListField ����
	///@param nRequestID ����ID
	///@remark
	virtual int ReqQryRegionCodeList(CTORATstpQryRegionCodeListField *pQryRegionCodeListField, int nRequestID) = 0;

	///��ѯ������ͨ�ɱ���Ϣ
	///@param pQryFreeFloatSharesField ����
	///@param nRequestID ����ID
	///@remark
	virtual int ReqQryFreeFloatSharesInfo(CTORATstpQryFreeFloatSharesInfoField *pQryFreeFloatSharesField, int nRequestID) = 0;
	
	///��ѯ�̿�ί��
	///@param pInquiryQueueingOrdersField ����
	///@param nRequestID ����ID
	///@remark
	virtual int ReqQryQueueingOrders(CTORATstpInquiryQueueingOrdersField *pInquiryQueueingOrdersField, int nRequestID) = 0;

	///��ѯ�ֲ����۷ֲ���Ϣ
	///@param pQryPriceDistributionField ����
	///@param nRequestID ����ID
	///@remark
	virtual int ReqQryPriceDistributionInfo(CTORATstpQryPriceDistributionInfoField *pQryPriceDistributionField, int nRequestID) = 0;

	///��ѯ��ʷ��ֵ�۸���Ϣ
	///@param pQryPriceExtremumField ����
	///@param nRequestID ����ID
	///@remark
	virtual int ReqQryPriceExtremumInfo(CTORATstpQryPriceExtremumInfoField *pQryPriceExtremumField, int nRequestID) = 0;
	
protected:
	~CTORATstpMdApi(){};
};
#endif
