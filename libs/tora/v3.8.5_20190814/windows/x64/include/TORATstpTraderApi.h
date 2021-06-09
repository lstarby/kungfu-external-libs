/////////////////////////////////////////////////////////////////////////
///@company �Ϻ�̩����Ϣ�Ƽ����޹�˾
///@file TORATstpTraderApi.h
///@brief �����˿ͻ��˽ӿ�
///@history 
/////////////////////////////////////////////////////////////////////////

#if !defined(TORA_TSTPTRADERAPI_H)
#define TORA_TSTPTRADERAPI_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TORATstpUserApiStruct.h"

#ifdef TRADER_API_EXPORT
#ifdef WINDOWS
#define TRADER_API_DLL_EXPORT __declspec(dllexport)
#else
#define TRADER_API_DLL_EXPORT __attribute__ ((visibility("default")))
#endif
#else
#define TRADER_API_DLL_EXPORT 
#endif

class CTORATstpTraderSpi
{
public:
	///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
	virtual void OnFrontConnected(){};
	
	///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
	///@param nReason ����ԭ��
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
	
	
	//��¼Ӧ��	
	virtual void OnRspUserLogin(CTORATstpRspUserLoginField *pRspUserLoginField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	//�ǳ�Ӧ��	
	virtual void OnRspUserLogout(CTORATstpUserLogoutField *pUserLogoutField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	//�޸�����Ӧ��	
	virtual void OnRspUserPasswordUpdate(CTORATstpUserPasswordUpdateField *pUserPasswordUpdateField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	//����¼���豸����Ӧ��	
	virtual void OnRspInputDeviceSerial(CTORATstpRspInputDeviceSerialField *pRspInputDeviceSerialField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	//����¼��Ӧ��	
	virtual void OnRspOrderInsert(CTORATstpInputOrderField *pInputOrderField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	//�����ر�
	virtual void OnRtnOrder(CTORATstpOrderField *pOrder) {};
	
	//��������ر�
	virtual void OnErrRtnOrderInsert(CTORATstpInputOrderField *pInputOrder, CTORATstpRspInfoField *pRspInfo) {};
	
	//����Ӧ��	
	virtual void OnRspOrderAction(CTORATstpInputOrderActionField *pInputOrderActionField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	//��������ر�
	virtual void OnErrRtnOrderAction(CTORATstpOrderActionField *pOrderAction, CTORATstpRspInfoField *pRspInfo) {};
	
	//�ɽ��ر�
	virtual void OnRtnTrade(CTORATstpTradeField *pTrade) {};
	
	//�����г�״̬
	virtual void OnRtnMarketStatus(CTORATstpMarketStatusField *pMarketStatus) {};
	
	//������¼��������Ӧ	
	virtual void OnRspCondOrderInsert(CTORATstpInputCondOrderField *pInputCondOrderField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	//������֪ͨ
	virtual void OnRtnCondOrder(CTORATstpConditionOrderField *pConditionOrder) {};
	
	//������¼�����ر�
	virtual void OnErrRtnCondOrderInsert(CTORATstpInputCondOrderField *pInputCondOrder, CTORATstpRspInfoField *pRspInfo) {};
	
	//����������������Ӧ	
	virtual void OnRspCondOrderAction(CTORATstpInputCondOrderActionField *pInputCondOrderActionField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	//������������������ر�
	virtual void OnErrRtnCondOrderAction(CTORATstpInputCondOrderActionField *pInputCondOrderAction, CTORATstpRspInfoField *pRspInfo) {};
	
	//��ѯ���н���ϵͳ�ʽ���Ӧ	
	virtual void OnRspInquiryJZFund(CTORATstpRspInquiryJZFundField *pRspInquiryJZFundField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	//�ʽ�ת������Ӧ��	
	virtual void OnRspTransferFund(CTORATstpInputTransferFundField *pInputTransferFundField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	//��λת������Ӧ��	
	virtual void OnRspTransferPosition(CTORATstpInputTransferPositionField *pInputTransferPositionField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	//�ʽ�ת�ƻر�
	virtual void OnRtnTransferFund(CTORATstpTransferFundField *pTransferFund) {};
	
	//�ʽ�ת�ƴ���ر�
	virtual void OnErrRtnTransferFund(CTORATstpInputTransferFundField *pInputTransferFund, CTORATstpRspInfoField *pRspInfo) {};
	
	//��λת�ƻر�
	virtual void OnRtnTransferPosition(CTORATstpTransferPositionField *pTransferPosition) {};
	
	//��λת�ƴ���ر�
	virtual void OnErrRtnTransferPosition(CTORATstpInputTransferPositionField *pInputTransferPosition, CTORATstpRspInfoField *pRspInfo) {};
	
	//����Ʒ��ת��Ӧ	
	virtual void OnRspTransferCollateral(CTORATstpInputTransferCollateralField *pInputTransferCollateralField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	//��ѯ�����˻������Ӧ	
	virtual void OnRspInquiryBankAccountFund(CTORATstpRspInquiryBankAccountFundField *pRspInquiryBankAccountFundField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	//�����޸Ŀ��ֳɱ�Ӧ��	
	virtual void OnRspModifyOpenPosCost(CTORATstpReqModifyOpenPosCostField *pReqModifyOpenPosCostField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	//���׳ɽ����жȲ�ѯ��Ӧ	
	virtual void OnRspInquiryTradeConcentration(CTORATstpInquiryTradeConcentrationField *pInquiryTradeConcentrationField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	//����֪ͨ
	virtual void OnRtnTradingNotice(CTORATstpTradingNoticeField *pTradingNotice) {};
	
	//��ѯ���ί����Ӧ��	
	virtual void OnRspInquiryMaxOrderVolume(CTORATstpRspInquiryMaxOrderVolumeField *pRspInquiryMaxOrderVolumeField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	//��Χϵͳ��λת�ƻر�
	virtual void OnRtnPeripheryTransferPosition(CTORATstpPeripheryPositionTransferDetailField *pPeripheryPositionTransferDetail) {};
	
	//��ѯ��ʷί����Ӧ(��������)
	virtual void OnRspInquiryHistoryOrder(CTORATstpHistoryOrderField *pHistoryOrderField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageEnd, bool bIsTotalEnd) {}; 
	
	//��ѯ��ʷ�ɽ���Ӧ(��������)
	virtual void OnRspInquiryHistoryTrade(CTORATstpHistoryTradeField *pHistoryTradeField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageEnd, bool bIsTotalEnd) {}; 
	
	//¼�����¼���Ӧ(��������)	
	virtual void OnRspInputRemarkEvent(CTORATstpRspInputRemarkEventField *pRspInputRemarkEventField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	//���±���¼���Ӧ(��������)	
	virtual void OnRspUpdateRemarkEvent(CTORATstpRspUpdateRemarkEventField *pRspUpdateRemarkEventField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	//ɾ������¼���Ӧ(��������)	
	virtual void OnRspDeleteRemarkEvent(CTORATstpRspDeleteRemarkEventField *pRspDeleteRemarkEventField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	//��ѯ��ʷ����¼���Ӧ(��������)
	virtual void OnRspInquiryHistoryRemarkEvent(CTORATstpRemarkEventField *pRemarkEventField, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsPageEnd, bool bIsTotalEnd) {}; 
	
	//��ѯ������
	virtual void OnRspQryExchange(CTORATstpExchangeField *pExchange, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯʵʱ����
	virtual void OnRspQryMarketData(CTORATstpMarketDataField *pMarketData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯ֤ȯ��Ϣ
	virtual void OnRspQrySecurity(CTORATstpSecurityField *pSecurity, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯETF�嵥��Ϣ
	virtual void OnRspQryETFFile(CTORATstpETFFileField *pETFFile, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯETF�ɷ�֤ȯ��Ϣ
	virtual void OnRspQryETFBasket(CTORATstpETFBasketField *pETFBasket, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯ�¹���Ϣ
	virtual void OnRspQryIPOInfo(CTORATstpIPOInfoField *pIPOInfo, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯ�����ϵ
	virtual void OnRspQryBUProxy(CTORATstpBUProxyField *pBUProxy, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯUser
	virtual void OnRspQryUser(CTORATstpUserField *pUser, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯͶ����
	virtual void OnRspQryInvestor(CTORATstpInvestorField *pInvestor, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯ�ɶ��˻�
	virtual void OnRspQryShareholderAccount(CTORATstpShareholderAccountField *pShareholderAccount, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//������ѯ
	virtual void OnRspQryOrder(CTORATstpOrderField *pOrder, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯ����
	virtual void OnRspQryOrderAction(CTORATstpOrderActionField *pOrderAction, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//�ɽ���ѯ
	virtual void OnRspQryTrade(CTORATstpTradeField *pTrade, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//�ʽ��˻���ѯ
	virtual void OnRspQryTradingAccount(CTORATstpTradingAccountField *pTradingAccount, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//Ͷ���ֲֲ߳�ѯ
	virtual void OnRspQryPosition(CTORATstpPositionField *pPosition, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯ�������׷���
	virtual void OnRspQryTradingFee(CTORATstpTradingFeeField *pTradingFee, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯӶ�����
	virtual void OnRspQryInvestorTradingFee(CTORATstpInvestorTradingFeeField *pInvestorTradingFee, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯ�¹��깺���
	virtual void OnRspQryIPOQuota(CTORATstpIPOQuotaField *pIPOQuota, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯ�г�
	virtual void OnRspQryMarket(CTORATstpMarketField *pMarket, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//������ϸ�ʽ��ѯ
	virtual void OnRspQryOrderFundDetail(CTORATstpOrderFundDetailField *pOrderFundDetail, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯ�ʽ�ת����ˮ
	virtual void OnRspQryFundTransferDetail(CTORATstpFundTransferDetailField *pFundTransferDetail, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯ�ֲ�ת����ˮ
	virtual void OnRspQryPositionTransferDetail(CTORATstpPositionTransferDetailField *pPositionTransferDetail, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//����Ͷ������Ѻ�ֲֲ�ѯ��Ӧ
	virtual void OnRspQryPledgePosition(CTORATstpPledgePositionField *pPledgePosition, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//����֤ȯ��Ѻ��Ϣ��ѯ��Ӧ
	virtual void OnRspQryPledgeInfo(CTORATstpPledgeInfoField *pPledgeInfo, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//�����תծ��Ϣ��ѯ��Ӧ
	virtual void OnRspQryConversionBondInfo(CTORATstpConversionBondInfoField *pConversionBondInfo, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//����ծȯ������Ϣ��ѯ��Ӧ
	virtual void OnRspQryBondPutbackInfo(CTORATstpBondPutbackInfoField *pBondPutbackInfo, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//�����׼ȯ��Ȳ�ѯ��Ӧ
	virtual void OnRspQryStandardBondPosition(CTORATstpStandardBondPositionField *pStandardBondPosition, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯδ����ծȯ��Ѻ�ع�ί����Ӧ
	virtual void OnRspQryPrematurityRepoOrder(CTORATstpPrematurityRepoOrderField *pPrematurityRepoOrder, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯ�ɶ�������Ӧ
	virtual void OnRspQryShareholderParam(CTORATstpShareholderParamField *pShareholderParam, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯ��Χϵͳ��λ������ˮ
	virtual void OnRspQryPeripheryPositionTransferDetail(CTORATstpPeripheryPositionTransferDetailField *pPeripheryPositionTransferDetail, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯͶ�������������Ʋ�����Ӧ
	virtual void OnRspQryInvestorCondOrderLimitParam(CTORATstpInvestorCondOrderLimitParamField *pInvestorCondOrderLimitParam, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯ��������Ӧ
	virtual void OnRspQryCondOrder(CTORATstpCondOrderField *pCondOrder, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯ������������Ӧ
	virtual void OnRspQryCondOrderAction(CTORATstpCondOrderActionField *pCondOrderAction, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯ����֪ͨ��Ӧ
	virtual void OnRspQryTradingNotice(CTORATstpTradingNoticeField *pTradingNotice, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯ�¹��깺��Ž����Ӧ
	virtual void OnRspQryIPONumberResult(CTORATstpIPONumberResultField *pIPONumberResult, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯ�¹��깺��ǩ�����Ӧ
	virtual void OnRspQryIPOMatchNumberResult(CTORATstpIPOMatchNumberResultField *pIPOMatchNumberResult, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯ���ͨ�����г�����״̬��Ϣ��Ӧ
	virtual void OnRspQrySZSEImcParams(CTORATstpSZSEImcParamsField *pSZSEImcParams, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯ���ͨ�����г�����������Ϣ��Ӧ
	virtual void OnRspQrySZSEImcExchangeRate(CTORATstpSZSEImcExchangeRateField *pSZSEImcExchangeRate, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯ���ͨ��С�۲���Ϣ��Ӧ
	virtual void OnRspQrySZSEHKPriceTickInfo(CTORATstpSZSEHKPriceTickInfoField *pSZSEHKPriceTickInfo, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯ����Э����Ӧ
	virtual void OnRspQryShareholderSpecPrivilege(CTORATstpShareholderSpecPrivilegeField *pShareholderSpecPrivilege, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯͶ�����޲���Ϣ��Ӧ
	virtual void OnRspQryInvestorPositionLimit(CTORATstpInvestorPositionLimitField *pInvestorPositionLimit, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
	
	//��ѯ�̺�����
	virtual void OnRspQryPHMarketData(CTORATstpPHMarketDataField *pPHMarketData, CTORATstpRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}; 
		
};

class TRADER_API_DLL_EXPORT CTORATstpTraderApi
{
public:
	///����TraderApi
	///@param pszFlowPath ����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼
	///@param bEncrpyt ���������Ƿ���ܴ��䣬Ĭ�ϲ�����
	///@return ��������TraderApi
	
	static CTORATstpTraderApi *CreateTstpTraderApi(const char *pszFlowPath = "", bool bEncrypt = false);
	
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
	///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:16001���� 
	///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����16001������������˿ںš�
	virtual void RegisterDeriveServer(char *pszDeriveAddress) = 0;

	///ע��ص��ӿ�
	///@param pSpi �����Իص��ӿ����ʵ��
	virtual void RegisterSpi(CTORATstpTraderSpi *pSpi) = 0;
	
	///����˽������
	///@param nResumeType ˽�����ش���ʽ  
	///        TORA_TERT_RESTART:�ӱ������տ�ʼ�ش�
	///        TORA_TERT_RESUME:���ϴ��յ�������
	///        TORA_TERT_QUICK:ֻ���͵�¼��˽����������
	///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ�˽���������ݡ�
	virtual void SubscribePrivateTopic(TORA_TE_RESUME_TYPE nResumeType) = 0;
	
	///���Ĺ�������
	///@param nResumeType �������ش���ʽ  
	///        TORA_TERT_RESTART:�ӱ������տ�ʼ�ش�
	///        TORA_TERT_RESUME:���ϴ��յ�������
	///        TORA_TERT_QUICK:ֻ���͵�¼�󹫹���������
	///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ������������ݡ�
	virtual void SubscribePublicTopic(TORA_TE_RESUME_TYPE nResumeType) = 0;
	
	
	//��¼����	
	virtual int ReqUserLogin(CTORATstpReqUserLoginField *pReqUserLoginField, int nRequestID) = 0;
	
	//�ǳ�����	
	virtual int ReqUserLogout(CTORATstpUserLogoutField *pUserLogoutField, int nRequestID) = 0;
	
	//�޸���������	
	virtual int ReqUserPasswordUpdate(CTORATstpUserPasswordUpdateField *pUserPasswordUpdateField, int nRequestID) = 0;
	
	//����¼���豸����	
	virtual int ReqInputDeviceSerial(CTORATstpReqInputDeviceSerialField *pReqInputDeviceSerialField, int nRequestID) = 0;
	
	//����¼������	
	virtual int ReqOrderInsert(CTORATstpInputOrderField *pInputOrderField, int nRequestID) = 0;
	
	//��������	
	virtual int ReqOrderAction(CTORATstpInputOrderActionField *pInputOrderActionField, int nRequestID) = 0;
	
	//������¼������	
	virtual int ReqCondOrderInsert(CTORATstpInputCondOrderField *pInputCondOrderField, int nRequestID) = 0;
	
	//��������������	
	virtual int ReqCondOrderAction(CTORATstpInputCondOrderActionField *pInputCondOrderActionField, int nRequestID) = 0;
	
	//��ѯ���н���ϵͳ�ʽ�����	
	virtual int ReqInquiryJZFund(CTORATstpReqInquiryJZFundField *pReqInquiryJZFundField, int nRequestID) = 0;
	
	//�ʽ�ת������	
	virtual int ReqTransferFund(CTORATstpInputTransferFundField *pInputTransferFundField, int nRequestID) = 0;
	
	//��λת������	
	virtual int ReqTransferPosition(CTORATstpInputTransferPositionField *pInputTransferPositionField, int nRequestID) = 0;
	
	//����Ʒ��ת����	
	virtual int ReqTransferCollateral(CTORATstpInputTransferCollateralField *pInputTransferCollateralField, int nRequestID) = 0;
	
	//��ѯ�����˻��������	
	virtual int ReqInquiryBankAccountFund(CTORATstpReqInquiryBankAccountFundField *pReqInquiryBankAccountFundField, int nRequestID) = 0;
	
	//�����޸Ŀ��ֳɱ�	
	virtual int ReqModifyOpenPosCost(CTORATstpReqModifyOpenPosCostField *pReqModifyOpenPosCostField, int nRequestID) = 0;
	
	//��ѯ���׳ɽ����ж�	
	virtual int ReqInquiryTradeConcentration(CTORATstpInquiryTradeConcentrationField *pInquiryTradeConcentrationField, int nRequestID) = 0;
	
	//��ѯ���ί��������	
	virtual int ReqInquiryMaxOrderVolume(CTORATstpReqInquiryMaxOrderVolumeField *pReqInquiryMaxOrderVolumeField, int nRequestID) = 0;
	
	//��ѯ��ʷί������(��������)	
	virtual int ReqInquiryHistoryOrder(CTORATstpQryHistoryOrderField *pQryHistoryOrderField, int nRequestID) = 0;
	
	//��ѯ��ʷ�ɽ�����(��������)	
	virtual int ReqInquiryHistoryTrade(CTORATstpQryHistoryTradeField *pQryHistoryTradeField, int nRequestID) = 0;
	
	//¼�����¼�����(��������)	
	virtual int ReqInputRemarkEvent(CTORATstpInputRemarkEventField *pInputRemarkEventField, int nRequestID) = 0;
	
	//���±���¼�����(��������)	
	virtual int ReqUpdateRemarkEvent(CTORATstpUpdateRemarkEventField *pUpdateRemarkEventField, int nRequestID) = 0;
	
	//ɾ������¼�����(��������)	
	virtual int ReqDeleteRemarkEvent(CTORATstpDeleteRemarkEventField *pDeleteRemarkEventField, int nRequestID) = 0;
	
	//��ѯ��ʷ����¼�����(��������)	
	virtual int ReqInquiryHistoryRemarkEvent(CTORATstpQryRemarkEventField *pQryRemarkEventField, int nRequestID) = 0;
	
	//��ѯ������	
	virtual int ReqQryExchange(CTORATstpQryExchangeField *pQryExchangeField, int nRequestID) = 0;
	
	//��ѯʵʱ����	
	virtual int ReqQryMarketData(CTORATstpQryMarketDataField *pQryMarketDataField, int nRequestID) = 0;
	
	//��ѯ֤ȯ��Ϣ	
	virtual int ReqQrySecurity(CTORATstpQrySecurityField *pQrySecurityField, int nRequestID) = 0;
	
	//��ѯETF�嵥��Ϣ	
	virtual int ReqQryETFFile(CTORATstpQryETFFileField *pQryETFFileField, int nRequestID) = 0;
	
	//��ѯETF�ɷ�֤ȯ��Ϣ	
	virtual int ReqQryETFBasket(CTORATstpQryETFBasketField *pQryETFBasketField, int nRequestID) = 0;
	
	//��ѯ�¹���Ϣ	
	virtual int ReqQryIPOInfo(CTORATstpQryIPOInfoField *pQryIPOInfoField, int nRequestID) = 0;
	
	//��ѯ�����ϵ	
	virtual int ReqQryBUProxy(CTORATstpQryBUProxyField *pQryBUProxyField, int nRequestID) = 0;
	
	//��ѯUser	
	virtual int ReqQryUser(CTORATstpQryUserField *pQryUserField, int nRequestID) = 0;
	
	//��ѯͶ����	
	virtual int ReqQryInvestor(CTORATstpQryInvestorField *pQryInvestorField, int nRequestID) = 0;
	
	//��ѯ�ɶ��˻�	
	virtual int ReqQryShareholderAccount(CTORATstpQryShareholderAccountField *pQryShareholderAccountField, int nRequestID) = 0;
	
	//������ѯ	
	virtual int ReqQryOrder(CTORATstpQryOrderField *pQryOrderField, int nRequestID) = 0;
	
	//��ѯ����	
	virtual int ReqQryOrderAction(CTORATstpQryOrderActionField *pQryOrderActionField, int nRequestID) = 0;
	
	//�ɽ���ѯ	
	virtual int ReqQryTrade(CTORATstpQryTradeField *pQryTradeField, int nRequestID) = 0;
	
	//�ʽ��˻���ѯ	
	virtual int ReqQryTradingAccount(CTORATstpQryTradingAccountField *pQryTradingAccountField, int nRequestID) = 0;
	
	//Ͷ���ֲֲ߳�ѯ	
	virtual int ReqQryPosition(CTORATstpQryPositionField *pQryPositionField, int nRequestID) = 0;
	
	//��ѯ�������׷���	
	virtual int ReqQryTradingFee(CTORATstpQryTradingFeeField *pQryTradingFeeField, int nRequestID) = 0;
	
	//��ѯӶ�����	
	virtual int ReqQryInvestorTradingFee(CTORATstpQryInvestorTradingFeeField *pQryInvestorTradingFeeField, int nRequestID) = 0;
	
	//��ѯ�¹��깺���	
	virtual int ReqQryIPOQuota(CTORATstpQryIPOQuotaField *pQryIPOQuotaField, int nRequestID) = 0;
	
	//��ѯ�г�	
	virtual int ReqQryMarket(CTORATstpQryMarketField *pQryMarketField, int nRequestID) = 0;
	
	//������ϸ�ʽ��ѯ	
	virtual int ReqQryOrderFundDetail(CTORATstpQryOrderFundDetailField *pQryOrderFundDetailField, int nRequestID) = 0;
	
	//��ѯ�ʽ�ת����ˮ	
	virtual int ReqQryFundTransferDetail(CTORATstpQryFundTransferDetailField *pQryFundTransferDetailField, int nRequestID) = 0;
	
	//��ѯ�ֲ�ת����ˮ	
	virtual int ReqQryPositionTransferDetail(CTORATstpQryPositionTransferDetailField *pQryPositionTransferDetailField, int nRequestID) = 0;
	
	//����Ͷ������Ѻ�ֲֲ�ѯ	
	virtual int ReqQryPledgePosition(CTORATstpQryPledgePositionField *pQryPledgePositionField, int nRequestID) = 0;
	
	//����֤ȯ��Ѻ��Ϣ��ѯ	
	virtual int ReqQryPledgeInfo(CTORATstpQryPledgeInfoField *pQryPledgeInfoField, int nRequestID) = 0;
	
	//�����תծ��Ϣ��ѯ	
	virtual int ReqQryConversionBondInfo(CTORATstpQryConversionBondInfoField *pQryConversionBondInfoField, int nRequestID) = 0;
	
	//����ծȯ������Ϣ��ѯ	
	virtual int ReqQryBondPutbackInfo(CTORATstpQryBondPutbackInfoField *pQryBondPutbackInfoField, int nRequestID) = 0;
	
	//�����׼ȯ��Ȳ�ѯ	
	virtual int ReqQryStandardBondPosition(CTORATstpQryStandardBondPositionField *pQryStandardBondPositionField, int nRequestID) = 0;
	
	//��ѯδ����ծȯ��Ѻ�ع�ί��	
	virtual int ReqQryPrematurityRepoOrder(CTORATstpQryPrematurityRepoOrderField *pQryPrematurityRepoOrderField, int nRequestID) = 0;
	
	//��ѯ�ɶ�����	
	virtual int ReqQryShareholderParam(CTORATstpQryShareholderParamField *pQryShareholderParamField, int nRequestID) = 0;
	
	//��ѯ��Χϵͳ��λ������ˮ	
	virtual int ReqQryPeripheryPositionTransferDetail(CTORATstpQryPeripheryPositionTransferDetailField *pQryPeripheryPositionTransferDetailField, int nRequestID) = 0;
	
	//��ѯͶ�������������Ʋ�������	
	virtual int ReqQryInvestorCondOrderLimitParam(CTORATstpQryInvestorCondOrderLimitParamField *pQryInvestorCondOrderLimitParamField, int nRequestID) = 0;
	
	//��ѯ����������	
	virtual int ReqQryCondOrder(CTORATstpQryCondOrderField *pQryCondOrderField, int nRequestID) = 0;
	
	//��ѯ��������������	
	virtual int ReqQryCondOrderAction(CTORATstpQryCondOrderActionField *pQryCondOrderActionField, int nRequestID) = 0;
	
	//��ѯ����֪ͨ����	
	virtual int ReqQryTradingNotice(CTORATstpQryTradingNoticeField *pQryTradingNoticeField, int nRequestID) = 0;
	
	//��ѯ�¹��깺��Ž��	
	virtual int ReqQryIPONumberResult(CTORATstpQryIPONumberResultField *pQryIPONumberResultField, int nRequestID) = 0;
	
	//��ѯ�¹��깺��ǩ���	
	virtual int ReqQryIPOMatchNumberResult(CTORATstpQryIPOMatchNumberResultField *pQryIPOMatchNumberResultField, int nRequestID) = 0;
	
	//��ѯ���ͨ�����г�����״̬��Ϣ����	
	virtual int ReqQrySZSEImcParams(CTORATstpQrySZSEImcParamsField *pQrySZSEImcParamsField, int nRequestID) = 0;
	
	//��ѯ���ͨ�����г�����������Ϣ����	
	virtual int ReqQrySZSEImcExchangeRate(CTORATstpQrySZSEImcExchangeRateField *pQrySZSEImcExchangeRateField, int nRequestID) = 0;
	
	//��ѯ���ͨ��С�۲���Ϣ����	
	virtual int ReqQrySZSEHKPriceTickInfo(CTORATstpQrySZSEHKPriceTickInfoField *pQrySZSEHKPriceTickInfoField, int nRequestID) = 0;
	
	//��ѯ����Э������	
	virtual int ReqQryShareholderSpecPrivilege(CTORATstpQryShareholderSpecPrivilegeField *pQryShareholderSpecPrivilegeField, int nRequestID) = 0;
	
	//��ѯͶ�����޲���Ϣ����	
	virtual int ReqQryInvestorPositionLimit(CTORATstpQryInvestorPositionLimitField *pQryInvestorPositionLimitField, int nRequestID) = 0;
	
	//��ѯ�̺�����	
	virtual int ReqQryPHMarketData(CTORATstpQryPHMarketDataField *pQryPHMarketDataField, int nRequestID) = 0;
	
	
protected:
	~CTORATstpTraderApi(){};
};

#endif
