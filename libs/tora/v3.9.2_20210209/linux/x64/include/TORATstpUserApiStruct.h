/////////////////////////////////////////////////////////////////////////
///@company �Ϻ�̩����Ϣ�Ƽ����޹�˾
///@file TORATstpUserApiStruct.h
///@brief �����˿ͻ��˽ӿ�ʹ�õ�ҵ�����ݽṹ
///@history 
/////////////////////////////////////////////////////////////////////////

#if !defined(_TORA_TSTPCSTRUCT_H)
#define _TORA_TSTPCSTRUCT_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TORATstpUserApiDataType.h"

/// fens�û���Ϣ
struct CTORATstpFensUserInfoField
{
		
	///��¼�˻�
	TTORATstpLogInAccountType	LogInAccount;

	///��¼�˻�����
	TTORATstpLogInAccountTypeType	LogInAccountType;


};

/// ��¼����
struct CTORATstpReqUserLoginField
{
		
	///��¼�˻�
	TTORATstpLogInAccountType	LogInAccount;

	///��¼�˻�����
	TTORATstpLogInAccountTypeType	LogInAccountType;

	///����(������֤ʱ����)
	TTORATstpPasswordType	Password;

	///�û��˲�Ʒ��Ϣ
	TTORATstpProductInfoType	UserProductInfo;

	///�ӿڶ˲�Ʒ��Ϣ
	TTORATstpProductInfoType	InterfaceProductInfo;

	///Э����Ϣ
	TTORATstpProtocolInfoType	ProtocolInfo;

	///Mac��ַ
	TTORATstpMacAddressType	MacAddress;

	///�ƶ��豸�ֻ���
	TTORATstpMobileType	Mobile;

	///����IP��ַ
	TTORATstpIPAddressType	InnerIPAddress;

	///�ӿ�����
	TTORATstpLangType	Lang;

	///�ն���Ϣ
	TTORATstpTerminalInfoType	TerminalInfo;

	///����Mac��ַ
	TTORATstpMacAddressType	GWMacAddress;

	///��������IP��ַ
	TTORATstpIPAddressType	GWInnerIPAddress;

	///��������IP��ַ
	TTORATstpIPAddressType	GWOuterIPAddress;

	///һ���������루���ʽ��˺ŷ�ʽ��¼ʱ���
	TTORATstpDepartmentIDType	DepartmentID;

	///Ӳ�����к�
	TTORATstpHDSerialType	HDSerial;

	///��֤��ʽ(ָ�ƻ�Կ�״���֤ʱ����)
	TTORATstpAuthModeType	AuthMode;

	///�豸��ʶ(ָ����֤ʱ����)
	TTORATstpDeviceIDType	DeviceID;

	///��֤���к�(ָ�ƻ�Կ�״���֤ʱ����)
	TTORATstpCertSerialType	CertSerial;

	///����IP��ַ
	TTORATstpIPAddressType	OuterIPAddress;

	///��̬����
	TTORATstpPasswordType	DynamicPassword;

	///�����˿ں�
	TTORATstpPortType	OuterPort;


};

/// ��¼Ӧ��
struct CTORATstpRspUserLoginField
{
		
	///��¼ʱ��
	TTORATstpTimeType	LoginTime;

	///��¼�˻�
	TTORATstpLogInAccountType	LogInAccount;

	///��¼�˻�����
	TTORATstpLogInAccountTypeType	LogInAccountType;

	///����ϵͳ����
	TTORATstpSystemNameType	SystemName;

	///ǰ�ñ��
	TTORATstpFrontIDType	FrontID;

	///�Ự���
	TTORATstpSessionIDType	SessionID;

	///��󱨵�����
	TTORATstpOrderRefType	MaxOrderRef;

	///˽��������
	TTORATstpVolumeType	PrivateFlowCount;

	///����������
	TTORATstpVolumeType	PublicFlowCount;

	///������
	TTORATstpDateType	TradingDay;

	///�û�����
	TTORATstpUserIDType	UserID;

	///�û�����
	TTORATstpUserNameType	UserName;

	///�û�����
	TTORATstpUserTypeType	UserType;

	///һ����������
	TTORATstpDepartmentIDType	DepartmentID;

	///�ն�IP��ַ
	TTORATstpIPAddressType	InnerIPAddress;

	///Mac��ַ
	TTORATstpMacAddressType	MacAddress;

	///Ӳ�����к�
	TTORATstpHDSerialType	HDSerial;

	///��������
	TTORATstpCommFluxType	OrderInsertCommFlux;

	///�����޸�����(��),��Ϊ0��������Ч
	TTORATstpCountType	PasswordUpdatePeriod;

	///������Чʣ������
	TTORATstpCountType	PasswordRemainDays;

	///�Ƿ���Ҫ����
	TTORATstpBoolType	NeedUpdatePassword;

	///��������
	TTORATstpCommFluxType	OrderActionCommFlux;

	///�ƶ��豸�ֻ���
	TTORATstpMobileType	Mobile;

	///����IP��ַ
	TTORATstpIPAddressType	OuterIPAddress;

	///��֤���к�
	TTORATstpCertSerialType	CertSerial;

	///�����˿ں�
	TTORATstpPortType	OuterPort;


};

/// ��Ӧ��Ϣ
struct CTORATstpRspInfoField
{
		
	///�������
	TTORATstpErrorIDType	ErrorID;

	///������Ϣ
	TTORATstpErrorMsgType	ErrorMsg;


};

/// �û��ǳ�
struct CTORATstpUserLogoutField
{
		
	///�û�����
	TTORATstpUserIDType	UserID;


};

/// ǿ�ƽ���Ա�˳�
struct CTORATstpForceUserLogoutField
{
		
	///�û�����
	TTORATstpUserIDType	UserID;


};

/// �����û�����
struct CTORATstpUserPasswordUpdateField
{
		
	///�û�����
	TTORATstpUserIDType	UserID;

	///������
	TTORATstpPasswordType	OldPassword;

	///������
	TTORATstpPasswordType	NewPassword;


};

/// ����¼���豸����
struct CTORATstpReqInputDeviceSerialField
{
		
	///�û�����
	TTORATstpUserIDType	UserID;

	///�豸��ʶ
	TTORATstpDeviceIDType	DeviceID;

	///�豸���к�
	TTORATstpCertSerialType	CertSerial;


};

/// ����¼���豸����Ӧ��
struct CTORATstpRspInputDeviceSerialField
{
		
	///�û�����
	TTORATstpUserIDType	UserID;


};

/// ���ý����û�
struct CTORATstpActivateUserField
{
		
	///�û�����
	TTORATstpUserIDType	UserID;


};

/// �û��Ự��ʶ
struct CTORATstpVerifyUserPasswordField
{
		
	///�û�����
	TTORATstpUserIDType	UserID;

	///����
	TTORATstpPasswordType	Password;


};

/// ���뱨��
struct CTORATstpInputOrderField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///��������
	TTORATstpOrderRefType	OrderRef;

	///�û�����
	TTORATstpUserIDType	UserID;

	///�����۸�����
	TTORATstpOrderPriceTypeType	OrderPriceType;

	///��������
	TTORATstpDirectionType	Direction;

	///��Ͽ�ƽ��־
	TTORATstpCombOffsetFlagType	CombOffsetFlag;

	///���Ͷ���ױ���־
	TTORATstpCombHedgeFlagType	CombHedgeFlag;

	///�۸�
	TTORATstpPriceType	LimitPrice;

	///����
	TTORATstpVolumeType	VolumeTotalOriginal;

	///��Ч������
	TTORATstpTimeConditionType	TimeCondition;

	///�ɽ�������
	TTORATstpVolumeConditionType	VolumeCondition;

	///��С�ɽ���
	TTORATstpVolumeType	MinVolume;

	///ǿƽԭ��
	TTORATstpForceCloseReasonType	ForceCloseReason;

	///������
	TTORATstpRequestIDType	RequestID;

	///�û�ǿ����־
	TTORATstpBoolType	UserForceClose;

	///��������־
	TTORATstpBoolType	IsSwapOrder;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///IP��ַ
	TTORATstpIPAddressType	IPAddress;

	///Mac��ַ
	TTORATstpMacAddressType	MacAddress;

	///�۹�ͨ������������,Ĭ����������
	TTORATstpLotTypeType	LotType;

	///ϵͳ�������
	TTORATstpOrderSysIDType	OrderSysID;

	///�ն���Ϣ
	TTORATstpTerminalInfoType	TerminalInfo;

	///���ַ���������Ϣ
	TTORATstpBigsInfoType	BInfo;

	///���ַ���������Ϣ
	TTORATstpShortsInfoType	SInfo;

	///���θ�����Ϣ
	TTORATstpIntInfoType	IInfo;

	///ת�뽻�׵�Ԫ����
	TTORATstpPbuIDType	TransfereePbuID;

	///ί�з�ʽ
	TTORATstpOperwayType	Operway;

	///�������
	TTORATstpCondCheckType	CondCheck;

	///Ӳ�����к�
	TTORATstpHDSerialType	HDSerial;

	///�ƶ��豸�ֻ���
	TTORATstpMobileType	Mobile;

	///��Ч����
	TTORATstpDateType	GTDate;


};

/// ����
struct CTORATstpOrderField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///��������
	TTORATstpOrderRefType	OrderRef;

	///�û�����
	TTORATstpUserIDType	UserID;

	///�����۸�����
	TTORATstpOrderPriceTypeType	OrderPriceType;

	///��������
	TTORATstpDirectionType	Direction;

	///��Ͽ�ƽ��־
	TTORATstpCombOffsetFlagType	CombOffsetFlag;

	///���Ͷ���ױ���־
	TTORATstpCombHedgeFlagType	CombHedgeFlag;

	///�۸�
	TTORATstpPriceType	LimitPrice;

	///����
	TTORATstpVolumeType	VolumeTotalOriginal;

	///��Ч������
	TTORATstpTimeConditionType	TimeCondition;

	///�ɽ�������
	TTORATstpVolumeConditionType	VolumeCondition;

	///��С�ɽ���
	TTORATstpVolumeType	MinVolume;

	///ǿƽԭ��
	TTORATstpForceCloseReasonType	ForceCloseReason;

	///������
	TTORATstpRequestIDType	RequestID;

	///���ر������
	TTORATstpOrderLocalIDType	OrderLocalID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///֤ȯ�ڽ���������
	TTORATstpExchangeInstIDType	ExchangeInstID;

	///���׵�Ԫ����
	TTORATstpTraderIDType	TraderID;

	///�����ύ״̬
	TTORATstpOrderSubmitStatusType	OrderSubmitStatus;

	///������
	TTORATstpDateType	TradingDay;

	///ϵͳ�������
	TTORATstpOrderSysIDType	OrderSysID;

	///����״̬
	TTORATstpOrderStatusType	OrderStatus;

	///��������
	TTORATstpOrderTypeType	OrderType;

	///�ѳɽ�����
	TTORATstpVolumeType	VolumeTraded;

	///ʣ��δ�������
	TTORATstpVolumeType	VolumeTotal;

	///��������
	TTORATstpDateType	InsertDate;

	///����ʱ��
	TTORATstpTimeType	InsertTime;

	///����ʱ��
	TTORATstpTimeType	CancelTime;

	///����޸Ľ��׵�Ԫ����
	TTORATstpTraderIDType	ActiveTraderID;

	///ǰ�ñ��
	TTORATstpFrontIDType	FrontID;

	///�Ự���
	TTORATstpSessionIDType	SessionID;

	///�û��˲�Ʒ��Ϣ
	TTORATstpProductInfoType	UserProductInfo;

	///״̬��Ϣ
	TTORATstpErrorMsgType	StatusMsg;

	///�û�ǿ����־
	TTORATstpBoolType	UserForceClose;

	///�����û�����
	TTORATstpUserIDType	ActiveUserID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///IP��ַ
	TTORATstpIPAddressType	IPAddress;

	///Mac��ַ
	TTORATstpMacAddressType	MacAddress;

	///�۹�ͨ������������,Ĭ����������
	TTORATstpLotTypeType	LotType;

	///���ַ���������Ϣ
	TTORATstpBigsInfoType	BInfo;

	///���ַ���������Ϣ
	TTORATstpShortsInfoType	SInfo;

	///���θ�����Ϣ
	TTORATstpIntInfoType	IInfo;

	///ת�뽻�׵�Ԫ����(����ת�йܲ���ʱ��Ч)
	TTORATstpPbuIDType	TransfereePbuID;

	///ί�з�ʽ
	TTORATstpOperwayType	Operway;

	///һ����������
	TTORATstpDepartmentIDType	DepartmentID;

	///�ʵ��Կ���ҵ�����
	TTORATstpProperCtrlBusinessTypeType	ProperCtrlBusinessType;

	///�ʵ��Կ���ͨ����ʾ
	TTORATstpProperCtrlPassFlagType	ProperCtrlPassFlag;

	///�������
	TTORATstpCondCheckType	CondCheck;

	///�Ƿ�Ԥ��
	TTORATstpBoolType	IsCacheOrder;

	///�ɽ����
	TTORATstpMoneyType	Turnover;

	///�ر����Ӹ�����������Ϣ
	TTORATstpFloatInfoType	RtnFloatInfo;

	///�ر�������������
	TTORATstpIntInfoType	RtnIntInfo;

	///Ӳ�����к�
	TTORATstpHDSerialType	HDSerial;

	///�ƶ��豸�ֻ���
	TTORATstpMobileType	Mobile;

	///��Ч����
	TTORATstpDateType	GTDate;


};

/// �û���ʶ
struct CTORATstpUserRefField
{
		
	///�û�����
	TTORATstpUserIDType	UserID;


};

/// ���볷������
struct CTORATstpInputOrderActionField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///������������
	TTORATstpOrderRefType	OrderActionRef;

	///��������
	TTORATstpOrderRefType	OrderRef;

	///������
	TTORATstpRequestIDType	RequestID;

	///ǰ�ñ��
	TTORATstpFrontIDType	FrontID;

	///�Ự���
	TTORATstpSessionIDType	SessionID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///ϵͳ�������
	TTORATstpOrderSysIDType	OrderSysID;

	///������־
	TTORATstpActionFlagType	ActionFlag;

	///�����۸�
	TTORATstpPriceType	Price;

	///��������
	TTORATstpVolumeType	Volume;

	///�û�����
	TTORATstpUserIDType	UserID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///IP��ַ
	TTORATstpIPAddressType	IPAddress;

	///Mac��ַ
	TTORATstpMacAddressType	MacAddress;

	///���س������
	TTORATstpOrderLocalIDType	CancelOrderLocalID;

	///�ն���Ϣ
	TTORATstpTerminalInfoType	TerminalInfo;

	///���ַ���������Ϣ
	TTORATstpBigsInfoType	BInfo;

	///���ַ���������Ϣ
	TTORATstpShortsInfoType	SInfo;

	///���θ�����Ϣ
	TTORATstpIntInfoType	IInfo;

	///ί�з�ʽ
	TTORATstpOperwayType	Operway;

	///Ӳ�����к�
	TTORATstpHDSerialType	HDSerial;

	///�ƶ��豸�ֻ���
	TTORATstpMobileType	Mobile;


};

/// ��������
struct CTORATstpOrderActionField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///������������
	TTORATstpOrderRefType	OrderActionRef;

	///��������
	TTORATstpOrderRefType	OrderRef;

	///������
	TTORATstpRequestIDType	RequestID;

	///ǰ�ñ��
	TTORATstpFrontIDType	FrontID;

	///�Ự���
	TTORATstpSessionIDType	SessionID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///ϵͳ�������
	TTORATstpOrderSysIDType	OrderSysID;

	///������־
	TTORATstpActionFlagType	ActionFlag;

	///�����۸�
	TTORATstpPriceType	Price;

	///��������
	TTORATstpVolumeType	Volume;

	///��������
	TTORATstpDateType	ActionDate;

	///����ʱ��
	TTORATstpTimeType	ActionTime;

	///���׵�Ԫ����
	TTORATstpTraderIDType	TraderID;

	///���ر������
	TTORATstpOrderLocalIDType	OrderLocalID;

	///�������ر��
	TTORATstpOrderLocalIDType	ActionLocalID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///��������״̬
	TTORATstpOrderActionStatusType	OrderActionStatus;

	///�û�����
	TTORATstpUserIDType	UserID;

	///״̬��Ϣ
	TTORATstpErrorMsgType	StatusMsg;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///IP��ַ
	TTORATstpIPAddressType	IPAddress;

	///Mac��ַ
	TTORATstpMacAddressType	MacAddress;

	///���ַ���������Ϣ
	TTORATstpBigsInfoType	BInfo;

	///���ַ���������Ϣ
	TTORATstpShortsInfoType	SInfo;

	///���θ�����Ϣ
	TTORATstpIntInfoType	IInfo;

	///ί�з�ʽ
	TTORATstpOperwayType	Operway;

	///Ӳ�����к�
	TTORATstpHDSerialType	HDSerial;

	///�ƶ��豸�ֻ���
	TTORATstpMobileType	Mobile;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///��������
	TTORATstpDirectionType	Direction;

	///�����۸�����
	TTORATstpOrderPriceTypeType	OrderPriceType;

	///��Ч������
	TTORATstpTimeConditionType	TimeCondition;

	///�ɽ�������
	TTORATstpVolumeConditionType	VolumeCondition;


};

/// �ɽ�
struct CTORATstpTradeField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///�û�����
	TTORATstpUserIDType	UserID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�ɽ����
	TTORATstpTradeIDType	TradeID;

	///��������
	TTORATstpDirectionType	Direction;

	///ϵͳ�������
	TTORATstpOrderSysIDType	OrderSysID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///֤ȯ�ڽ���������
	TTORATstpExchangeInstIDType	ExchangeInstID;

	///��ƽ��־
	TTORATstpOffsetFlagType	OffsetFlag;

	///Ͷ���ױ���־
	TTORATstpHedgeFlagType	HedgeFlag;

	///�ɽ��۸�
	TTORATstpPriceType	Price;

	///�ɽ�����
	TTORATstpVolumeType	Volume;

	///�ɽ�����
	TTORATstpDateType	TradeDate;

	///�ɽ�ʱ��
	TTORATstpTimeType	TradeTime;

	///���׵�Ԫ����
	TTORATstpTraderIDType	TraderID;

	///���ر������
	TTORATstpOrderLocalIDType	OrderLocalID;

	///������
	TTORATstpDateType	TradingDay;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///��������
	TTORATstpOrderRefType	OrderRef;

	///һ����������
	TTORATstpDepartmentIDType	DepartmentID;


};

/// �������֪ͨ
struct CTORATstpMarketDataField
{
		
	///������
	TTORATstpDateType	TradingDay;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityNameType	SecurityName;

	///�����̼�
	TTORATstpPriceType	PreClosePrice;

	///���̼�
	TTORATstpPriceType	OpenPrice;

	///�ɽ���
	TTORATstpLongVolumeType	Volume;

	///�ɽ����
	TTORATstpMoneyType	Turnover;

	///�ɽ�����
	TTORATstpLongVolumeType	TradingCount;

	///���¼�
	TTORATstpPriceType	LastPrice;

	///��߼�
	TTORATstpPriceType	HighestPrice;

	///��ͼ�
	TTORATstpPriceType	LowestPrice;

	///��1��
	TTORATstpPriceType	BidPrice1;

	///��1��
	TTORATstpPriceType	AskPrice1;

	///��ͣ��
	TTORATstpPriceType	UpperLimitPrice;

	///��ͣ��
	TTORATstpPriceType	LowerLimitPrice;

	///��ӯ��1
	TTORATstpRatioType	PERatio1;

	///��ӯ��2
	TTORATstpRatioType	PERatio2;

	///�۸�����1
	TTORATstpPriceType	PriceUpDown1;

	///�۸�����2
	TTORATstpPriceType	PriceUpDown2;

	///�ֲ���
	TTORATstpLargeVolumeType	OpenInterest;

	///��1��
	TTORATstpLongVolumeType	BidVolume1;

	///��1��
	TTORATstpLongVolumeType	AskVolume1;

	///��2��
	TTORATstpPriceType	BidPrice2;

	///��2��
	TTORATstpLongVolumeType	BidVolume2;

	///��2��
	TTORATstpPriceType	AskPrice2;

	///��2��
	TTORATstpLongVolumeType	AskVolume2;

	///��3��
	TTORATstpPriceType	BidPrice3;

	///��3��
	TTORATstpLongVolumeType	BidVolume3;

	///��3��
	TTORATstpPriceType	AskPrice3;

	///��3��
	TTORATstpLongVolumeType	AskVolume3;

	///��4��
	TTORATstpPriceType	BidPrice4;

	///��4��
	TTORATstpLongVolumeType	BidVolume4;

	///��4��
	TTORATstpPriceType	AskPrice4;

	///��4��
	TTORATstpLongVolumeType	AskVolume4;

	///��5��
	TTORATstpPriceType	BidPrice5;

	///��5��
	TTORATstpLongVolumeType	BidVolume5;

	///��5��
	TTORATstpPriceType	AskPrice5;

	///��5��
	TTORATstpLongVolumeType	AskVolume5;

	///����ʱ��
	TTORATstpTimeType	UpdateTime;

	///���º���
	TTORATstpMillisecType	UpdateMillisec;

	///�����̼�
	TTORATstpPriceType	ClosePrice;

	///�����Ʒʵʱ״̬
	TTORATstpMDSecurityStatType	MDSecurityStat;

	///�Ƿ�ʾ���
	TTORATstpBoolType	HWFlag;

	///����T-1������ʱ�̾�ֵ
	TTORATstpPriceType	PreCloseIOPV;

	///����ʵʱ�ο���ֵ
	TTORATstpPriceType	IOPV;


};

/// �̺�����֪ͨ
struct CTORATstpPHMarketDataField
{
		
	///������
	TTORATstpDateType	TradingDay;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityNameType	SecurityName;

	///�ɽ���
	TTORATstpLongVolumeType	Volume;

	///�ɽ����
	TTORATstpMoneyType	Turnover;

	///�����̼�
	TTORATstpPriceType	ClosePrice;

	///��ͣ��
	TTORATstpPriceType	UpperLimitPrice;

	///��ͣ��
	TTORATstpPriceType	LowerLimitPrice;

	///�����걨����
	TTORATstpLongVolumeType	BidVolume;

	///�����걨����
	TTORATstpLongVolumeType	AskVolume;

	///����ʱ��
	TTORATstpTimeType	UpdateTime;

	///���º���
	TTORATstpMillisecType	UpdateMillisec;

	///�����Ʒʵʱ״̬
	TTORATstpMDSecurityStatType	MDSecurityStat;

	///�Ƿ�ʾ���
	TTORATstpBoolType	HWFlag;


};

/// �г�״̬
struct CTORATstpMarketStatusField
{
		
	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�г�״̬
	TTORATstpMarketStatusType	MarketStatus;


};

/// ������¼����
struct CTORATstpInputCondOrderField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///��������
	TTORATstpDirectionType	Direction;

	///�۸�����
	TTORATstpOrderPriceTypeType	OrderPriceType;

	///������׼��������
	TTORATstpTriggerOrderVolumeTypeType	TriggerOrderVolumeType;

	///��Ч������
	TTORATstpTimeConditionType	TimeCondition;

	///�ɽ�������
	TTORATstpVolumeConditionType	VolumeCondition;

	///�����۸�
	TTORATstpPriceType	LimitPrice;

	///��������
	TTORATstpVolumeType	VolumeTotalOriginal;

	///��Ͽ�ƽ��־
	TTORATstpCombOffsetFlagType	CombOffsetFlag;

	///���Ͷ���ױ���־
	TTORATstpCombHedgeFlagType	CombHedgeFlag;

	///������������
	TTORATstpOrderRefType	CondOrderRef;

	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///�û�����
	TTORATstpUserIDType	UserID;

	///������
	TTORATstpRequestIDType	RequestID;

	///IP��ַ
	TTORATstpIPAddressType	IPAddress;

	///Mac��ַ
	TTORATstpMacAddressType	MacAddress;

	///�������
	TTORATstpCondOrderIDType	CondOrderID;

	///�ն���Ϣ
	TTORATstpTerminalInfoType	TerminalInfo;

	///���ַ���������Ϣ
	TTORATstpBigsInfoType	BInfo;

	///���ַ���������Ϣ
	TTORATstpShortsInfoType	SInfo;

	///���θ�����Ϣ
	TTORATstpIntInfoType	IInfo;

	///ί�з�ʽ
	TTORATstpOperwayType	Operway;

	///�������
	TTORATstpCondCheckType	CondCheck;

	///��������������
	TTORATstpContingentConditionType	ContingentCondition;

	///������
	TTORATstpPriceType	ConditionPrice;

	///�۸񸡶�tick��
	TTORATstpVolumeType	PriceTicks;

	///������������
	TTORATstpVolumeMultipleType	VolumeMultiple;

	///���ǰ�ñ��
	TTORATstpFrontIDType	RelativeFrontID;

	///��ػỰ���
	TTORATstpSessionIDType	RelativeSessionID;

	///�����������
	TTORATstpRelativeCondParamType	RelativeParam;

	///������������������
	TTORATstpContingentConditionType	AppendContingentCondition;

	///����������
	TTORATstpPriceType	AppendConditionPrice;

	///�������ǰ�ñ��
	TTORATstpFrontIDType	AppendRelativeFrontID;

	///������ػỰ���
	TTORATstpSessionIDType	AppendRelativeSessionID;

	///���������������
	TTORATstpRelativeCondParamType	AppendRelativeParam;

	///Ӳ�����к�
	TTORATstpHDSerialType	HDSerial;

	///�۹�ͨ������������,Ĭ����������
	TTORATstpLotTypeType	LotType;

	///�ƶ��豸�ֻ���
	TTORATstpMobileType	Mobile;

	///������׼������
	TTORATstpTriggerOrderPriceTypeType	TriggerOrderPriceType;

	///��Ч����
	TTORATstpDateType	GTDate;


};

/// ��������
struct CTORATstpConditionOrderField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///��������
	TTORATstpDirectionType	Direction;

	///�۸�����
	TTORATstpOrderPriceTypeType	OrderPriceType;

	///������׼��������
	TTORATstpTriggerOrderVolumeTypeType	TriggerOrderVolumeType;

	///��Ч������
	TTORATstpTimeConditionType	TimeCondition;

	///�ɽ�������
	TTORATstpVolumeConditionType	VolumeCondition;

	///�����۸�
	TTORATstpPriceType	LimitPrice;

	///��������
	TTORATstpVolumeType	VolumeTotalOriginal;

	///��Ͽ�ƽ��־
	TTORATstpCombOffsetFlagType	CombOffsetFlag;

	///���Ͷ���ױ���־
	TTORATstpCombHedgeFlagType	CombHedgeFlag;

	///������������
	TTORATstpOrderRefType	CondOrderRef;

	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///�û�����
	TTORATstpUserIDType	UserID;

	///������
	TTORATstpRequestIDType	RequestID;

	///IP��ַ
	TTORATstpIPAddressType	IPAddress;

	///Mac��ַ
	TTORATstpMacAddressType	MacAddress;

	///�������
	TTORATstpCondOrderIDType	CondOrderID;

	///�ն���Ϣ
	TTORATstpTerminalInfoType	TerminalInfo;

	///���ַ���������Ϣ
	TTORATstpBigsInfoType	BInfo;

	///���ַ���������Ϣ
	TTORATstpShortsInfoType	SInfo;

	///���θ�����Ϣ
	TTORATstpIntInfoType	IInfo;

	///ί�з�ʽ
	TTORATstpOperwayType	Operway;

	///�������
	TTORATstpCondCheckType	CondCheck;

	///��������������
	TTORATstpContingentConditionType	ContingentCondition;

	///������
	TTORATstpPriceType	ConditionPrice;

	///�۸񸡶�tick��
	TTORATstpVolumeType	PriceTicks;

	///������������
	TTORATstpVolumeMultipleType	VolumeMultiple;

	///���ǰ�ñ��
	TTORATstpFrontIDType	RelativeFrontID;

	///��ػỰ���
	TTORATstpSessionIDType	RelativeSessionID;

	///�����������
	TTORATstpRelativeCondParamType	RelativeParam;

	///������������������
	TTORATstpContingentConditionType	AppendContingentCondition;

	///����������
	TTORATstpPriceType	AppendConditionPrice;

	///�������ǰ�ñ��
	TTORATstpFrontIDType	AppendRelativeFrontID;

	///������ػỰ���
	TTORATstpSessionIDType	AppendRelativeSessionID;

	///���������������
	TTORATstpRelativeCondParamType	AppendRelativeParam;

	///������
	TTORATstpDateType	TradingDay;

	///������״̬
	TTORATstpCondOrderStatusType	CondOrderStatus;

	///��������
	TTORATstpDateType	InsertDate;

	///����ʱ��
	TTORATstpTimeType	InsertTime;

	///����ʱ��
	TTORATstpTimeType	CancelTime;

	///�����û�
	TTORATstpUserIDType	CancelUser;

	///ǰ�ñ��
	TTORATstpFrontIDType	FrontID;

	///�Ự���
	TTORATstpSessionIDType	SessionID;

	///�û��˲�Ʒ��Ϣ
	TTORATstpProductInfoType	UserProductInfo;

	///״̬��Ϣ
	TTORATstpErrorMsgType	StatusMsg;

	///һ����������
	TTORATstpDepartmentIDType	DepartmentID;

	///�ʵ��Կ���ҵ�����
	TTORATstpProperCtrlBusinessTypeType	ProperCtrlBusinessType;

	///�ʵ��Կ���ͨ����ʶ
	TTORATstpProperCtrlPassFlagType	ProperCtrlPassFlag;

	///��������
	TTORATstpDateType	ActiveDate;

	///����ʱ��
	TTORATstpTimeType	ActiveTime;

	///Ӳ�����к�
	TTORATstpHDSerialType	HDSerial;

	///�۹�ͨ������������,Ĭ����������
	TTORATstpLotTypeType	LotType;

	///�ƶ��豸�ֻ���
	TTORATstpMobileType	Mobile;

	///������׼������
	TTORATstpTriggerOrderPriceTypeType	TriggerOrderPriceType;

	///��ǰ�����������
	TTORATstpRelativeCondParamType	TriggerRelativeParam;

	///����������Ϣ
	TTORATstpRelativeCondParamType	AppendCondParam;

	///��Ч����
	TTORATstpDateType	GTDate;


};

/// ����������¼��
struct CTORATstpInputCondOrderActionField
{
		
	///������
	TTORATstpRequestIDType	RequestID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///��������������
	TTORATstpOrderRefType	CondOrderActionRef;

	///����������
	TTORATstpOrderRefType	CondOrderRef;

	///ǰ�ñ��
	TTORATstpFrontIDType	FrontID;

	///�Ự���
	TTORATstpSessionIDType	SessionID;

	///���������
	TTORATstpCondOrderIDType	CondOrderID;

	///������־
	TTORATstpActionFlagType	ActionFlag;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///�û�����
	TTORATstpUserIDType	UserID;

	///IP��ַ
	TTORATstpIPAddressType	IPAddress;

	///Mac��ַ
	TTORATstpMacAddressType	MacAddress;

	///�������������
	TTORATstpCondOrderIDType	CancelCondOrderID;

	///�ն���Ϣ
	TTORATstpTerminalInfoType	TerminalInfo;

	///���ַ���������Ϣ
	TTORATstpBigsInfoType	BInfo;

	///���ַ���������Ϣ
	TTORATstpShortsInfoType	SInfo;

	///���θ�����Ϣ
	TTORATstpIntInfoType	IInfo;

	///ί�з�ʽ
	TTORATstpOperwayType	Operway;

	///Ӳ�����к�
	TTORATstpHDSerialType	HDSerial;

	///�ƶ��豸�ֻ���
	TTORATstpMobileType	Mobile;


};

/// ¼��ڵ��ʽ������Ϣ
struct CTORATstpInputNodeFundAssignmentField
{
		
	///һ����������
	TTORATstpDepartmentIDType	DepartmentID;

	///�ʽ��˺�
	TTORATstpAccountIDType	AccountID;

	///����
	TTORATstpCurrencyIDType	CurrencyID;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///�ڵ���1
	TTORATstpNodeIDType	NodeID1;

	///�ʽ����1
	TTORATstpRatioType	AmtRatio1;

	///�ڵ���2
	TTORATstpNodeIDType	NodeID2;

	///�ʽ����2
	TTORATstpRatioType	AmtRatio2;

	///�ڵ���3
	TTORATstpNodeIDType	NodeID3;

	///�ʽ����3
	TTORATstpRatioType	AmtRatio3;

	///�ڵ���4
	TTORATstpNodeIDType	NodeID4;

	///�ʽ����4
	TTORATstpRatioType	AmtRatio4;

	///�ڵ���5
	TTORATstpNodeIDType	NodeID5;

	///�ʽ����5
	TTORATstpRatioType	AmtRatio5;


};

/// ��ѯ�ڵ��ʽ�����������
struct CTORATstpReqInquiryNodeFundAssignmentField
{
		
	///һ����������
	TTORATstpDepartmentIDType	DepartmentID;

	///�ʽ��˺�
	TTORATstpAccountIDType	AccountID;

	///����
	TTORATstpCurrencyIDType	CurrencyID;

	///�ڵ���
	TTORATstpNodeIDType	NodeID;


};

/// ��ѯ�ڵ��ʽ�������Ӧ��
struct CTORATstpRspInquiryNodeFundAssignmentField
{
		
	///һ����������
	TTORATstpDepartmentIDType	DepartmentID;

	///�ʽ��˺�
	TTORATstpAccountIDType	AccountID;

	///����
	TTORATstpCurrencyIDType	CurrencyID;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///�ڵ���1
	TTORATstpNodeIDType	NodeID1;

	///�ʽ����1
	TTORATstpRatioType	AmtRatio1;

	///�ڵ���2
	TTORATstpNodeIDType	NodeID2;

	///�ʽ����2
	TTORATstpRatioType	AmtRatio2;

	///�ڵ���3
	TTORATstpNodeIDType	NodeID3;

	///�ʽ����3
	TTORATstpRatioType	AmtRatio3;

	///�ڵ���4
	TTORATstpNodeIDType	NodeID4;

	///�ʽ����4
	TTORATstpRatioType	AmtRatio4;

	///�ڵ���5
	TTORATstpNodeIDType	NodeID5;

	///�ʽ����5
	TTORATstpRatioType	AmtRatio5;


};

/// ��ѯ���н���ϵͳ�ʽ�����
struct CTORATstpReqInquiryJZFundField
{
		
	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///����
	TTORATstpCurrencyIDType	CurrencyID;

	///һ����������
	TTORATstpDepartmentIDType	DepartmentID;


};

/// ��ѯ���н���ϵͳ�ʽ���Ӧ
struct CTORATstpRspInquiryJZFundField
{
		
	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///����
	TTORATstpCurrencyIDType	CurrencyID;

	///���ý��
	TTORATstpMoneyType	UsefulMoney;

	///��ȡ���
	TTORATstpMoneyType	FetchLimit;

	///һ����������
	TTORATstpDepartmentIDType	DepartmentID;


};

/// �ʽ�ת��
struct CTORATstpInputTransferFundField
{
		
	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///����
	TTORATstpCurrencyIDType	CurrencyID;

	///������ˮ��
	TTORATstpExternalSerialType	ApplySerial;

	///ת�Ʒ���
	TTORATstpTransferDirectionType	TransferDirection;

	///ת�ƽ��
	TTORATstpMoneyType	Amount;

	///һ����������
	TTORATstpDepartmentIDType	DepartmentID;

	///���д���(��֤ת��ʱ����)
	TTORATstpBankIDType	BankID;

	///�ʽ�����(֤ȯת����ʱ����)
	TTORATstpPasswordType	AccountPassword;

	///��������(����ת֤ȯʱ����)
	TTORATstpPasswordType	BankPassword;

	///�ⲿϵͳһ����������(�ⲿϵͳת��ʱ����)
	TTORATstpDepartmentIDType	ExternalDepartmentID;

	///�ⲿϵͳ�ʽ��˻�(�ⲿϵͳת��ʱ����)
	TTORATstpAccountIDType	ExternalAccountID;

	///�ⲿϵͳ����(�ⲿϵͳת��ʱ����)
	TTORATstpCurrencyIDType	ExternalCurrencyID;

	///�ⲿϵͳ���д���(�ⲿϵͳת��ʱ����)
	TTORATstpBankIDType	ExternalBankID;

	///�ⲿϵͳ�ʽ�����(�ⲿϵͳת��ʱ����)
	TTORATstpPasswordType	ExternalAccountPassword;

	///�ⲿϵͳ��������(�ⲿϵͳת��ʱ����)
	TTORATstpPasswordType	ExternalBankPassword;

	///�ⲿϵͳ��������(�ⲿϵͳת��ʱ����)
	TTORATstpPasswordType	ExternalTradePassword;

	///�ⲿ�ڵ���(�ⲿϵͳת��ʱ����)
	TTORATstpNodeIDType	ExternalNodeID;


};

/// ��λת��
struct CTORATstpInputTransferPositionField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///������ˮ��
	TTORATstpExternalSerialType	ApplySerial;

	///ת�Ʒ���
	TTORATstpTransferDirectionType	TransferDirection;

	///����
	TTORATstpVolumeType	Volume;

	///ת�Ƴֲ�����
	TTORATstpTransferPositionTypeType	TransferPositionType;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�ⲿ�ڵ���(�ⲿϵͳת��ʱ����)
	TTORATstpNodeIDType	ExternalNodeID;


};

/// �ʽ�ת�ƻر�
struct CTORATstpTransferFundField
{
		
	///ת����ˮ��
	TTORATstpSerialType	FundSerial;

	///������ˮ��
	TTORATstpExternalSerialType	ApplySerial;

	///ǰ�ñ��
	TTORATstpFrontIDType	FrontID;

	///�Ự���
	TTORATstpSessionIDType	SessionID;

	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///����
	TTORATstpCurrencyIDType	CurrencyID;

	///ת�Ʒ���
	TTORATstpTransferDirectionType	TransferDirection;

	///ת�ƽ��
	TTORATstpMoneyType	Amount;

	///ת��״̬
	TTORATstpTransferStatusType	TransferStatus;

	///������Ա
	TTORATstpUserIDType	OperatorID;

	///��������
	TTORATstpDateType	OperateDate;

	///����ʱ��
	TTORATstpTimeType	OperateTime;

	///һ����������
	TTORATstpDepartmentIDType	DepartmentID;

	///ǩԼ�����˻�
	TTORATstpBankAccountIDType	BankAccountID;

	///���д���
	TTORATstpBankIDType	BankID;

	///IP��ַ
	TTORATstpIPAddressType	IPAddress;

	///Mac��ַ
	TTORATstpMacAddressType	MacAddress;

	///Ӳ�����к�
	TTORATstpHDSerialType	HDSerial;

	///�ƶ����ֻ���
	TTORATstpMobileType	Mobile;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///�ⲿ�ڵ��
	TTORATstpNodeIDType	ExternalNodeID;


};

/// ��λת�ƻر�
struct CTORATstpTransferPositionField
{
		
	///��λת����ˮ��
	TTORATstpSerialType	PositionSerial;

	///������ˮ��
	TTORATstpExternalSerialType	ApplySerial;

	///ǰ�ñ��
	TTORATstpFrontIDType	FrontID;

	///�Ự���
	TTORATstpSessionIDType	SessionID;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///������
	TTORATstpDateType	TradingDay;

	///ת�Ʒ���
	TTORATstpTransferDirectionType	TransferDirection;

	///ת�Ƴֲ�����
	TTORATstpTransferPositionTypeType	TransferPositionType;

	///���ճֲ�����
	TTORATstpVolumeType	HistoryVolume;

	///���������ֲ�����
	TTORATstpVolumeType	TodayBSVolume;

	///��������ֲ�����
	TTORATstpVolumeType	TodayPRVolume;

	///ת��״̬
	TTORATstpTransferStatusType	TransferStatus;

	///������Ա
	TTORATstpUserIDType	OperatorID;

	///��������
	TTORATstpDateType	OperateDate;

	///����ʱ��
	TTORATstpTimeType	OperateTime;

	///IP��ַ
	TTORATstpIPAddressType	IPAddress;

	///Mac��ַ
	TTORATstpMacAddressType	MacAddress;

	///Ӳ�����к�
	TTORATstpHDSerialType	HDSerial;

	///�ƶ����ֻ���
	TTORATstpMobileType	Mobile;

	///�ⲿ�ڵ���
	TTORATstpNodeIDType	ExternalNodeID;

	///���ղ�ֺϲ��ֲ�����
	TTORATstpVolumeType	TodaySMVolume;


};

/// ��������
struct CTORATstpSpecificSecurityField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;


};

/// ����Ʒת������
struct CTORATstpInputTransferCollateralField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///������ˮ��
	TTORATstpExternalSerialType	ApplySerial;

	///����Ʒ��ת����
	TTORATstpCollateralDirectionType	CollateralDirection;

	///����
	TTORATstpVolumeType	Volume;

	///�г�����
	TTORATstpMarketIDType	MarketID;


};

/// ��ѯ�����˻��������
struct CTORATstpReqInquiryBankAccountFundField
{
		
	///һ����������
	TTORATstpDepartmentIDType	DepartmentID;

	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///����
	TTORATstpCurrencyIDType	CurrencyID;

	///���д���
	TTORATstpBankIDType	BankID;

	///��������
	TTORATstpPasswordType	BankPassword;


};

/// ��ѯ�����˻������Ӧ
struct CTORATstpRspInquiryBankAccountFundField
{
		
	///һ����������
	TTORATstpDepartmentIDType	DepartmentID;

	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///����
	TTORATstpCurrencyIDType	CurrencyID;

	///���д���
	TTORATstpBankIDType	BankID;

	///ǩԼ�����˻�
	TTORATstpBankAccountIDType	BankAccountID;

	///�˻����
	TTORATstpMoneyType	Balance;


};

/// ��ѯ�������
struct CTORATstpInquiryMarketDataField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;


};

/// ��ѯӦ����
struct CTORATstpQryRspInfoField
{
		
	///������ʶ
	TTORATstpEndFlagType	EndFlag;

	///�������
	TTORATstpErrorIDType	ErrorID;

	///������Ϣ
	TTORATstpErrorMsgType	ErrorMsg;


};

/// �����޸Ŀ��ֳɱ�
struct CTORATstpReqModifyOpenPosCostField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///���ֳɱ�
	TTORATstpMoneyType	OpenPosCost;


};

/// Lev2����
struct CTORATstpLev2MarketDataField
{
		
	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///���齻��������
	TTORATstpExchangeIDType	ExchangeID;

	///ʱ���
	TTORATstpTimeStampType	DataTimeStamp;

	///������
	TTORATstpPriceType	PreClosePrice;

	///����
	TTORATstpPriceType	OpenPrice;

	///�ɽ�����
	TTORATstpLongVolumeType	NumTrades;

	///�ɽ�����
	TTORATstpLongVolumeType	TotalVolumeTrade;

	///�ɽ��ܽ��
	TTORATstpMoneyType	TotalValueTrade;

	///ί����������
	TTORATstpLongVolumeType	TotalBidVolume;

	///��Ȩƽ��ί����۸�
	TTORATstpPriceType	AvgBidPrice;

	///ί����������
	TTORATstpLongVolumeType	TotalAskVolume;

	///��Ȩƽ��ί�����۸�
	TTORATstpPriceType	AvgAskPrice;

	///��߼�
	TTORATstpPriceType	HighestPrice;

	///��ͼ�
	TTORATstpPriceType	LowestPrice;

	///�ּ�
	TTORATstpPriceType	LastPrice;

	///�����һ
	TTORATstpPriceType	BidPrice1;

	///������һ
	TTORATstpLongVolumeType	BidVolume1;

	///������һ
	TTORATstpPriceType	AskPrice1;

	///������һ
	TTORATstpLongVolumeType	AskVolume1;

	///�����۶�
	TTORATstpPriceType	AskPrice2;

	///��������
	TTORATstpLongVolumeType	AskVolume2;

	///��������
	TTORATstpPriceType	AskPrice3;

	///��������
	TTORATstpLongVolumeType	AskVolume3;

	///����۶�
	TTORATstpPriceType	BidPrice2;

	///��������
	TTORATstpLongVolumeType	BidVolume2;

	///�������
	TTORATstpPriceType	BidPrice3;

	///��������
	TTORATstpLongVolumeType	BidVolume3;

	///��������
	TTORATstpPriceType	AskPrice4;

	///��������
	TTORATstpLongVolumeType	AskVolume4;

	///��������
	TTORATstpPriceType	AskPrice5;

	///��������
	TTORATstpLongVolumeType	AskVolume5;

	///�������
	TTORATstpPriceType	BidPrice4;

	///��������
	TTORATstpLongVolumeType	BidVolume4;

	///�������
	TTORATstpPriceType	BidPrice5;

	///��������
	TTORATstpLongVolumeType	BidVolume5;

	///��������
	TTORATstpPriceType	AskPrice6;

	///��������
	TTORATstpLongVolumeType	AskVolume6;

	///��������
	TTORATstpPriceType	AskPrice7;

	///��������
	TTORATstpLongVolumeType	AskVolume7;

	///�������
	TTORATstpPriceType	BidPrice6;

	///��������
	TTORATstpLongVolumeType	BidVolume6;

	///�������
	TTORATstpPriceType	BidPrice7;

	///��������
	TTORATstpLongVolumeType	BidVolume7;

	///�����۰�
	TTORATstpPriceType	AskPrice8;

	///��������
	TTORATstpLongVolumeType	AskVolume8;

	///�����۾�
	TTORATstpPriceType	AskPrice9;

	///��������
	TTORATstpLongVolumeType	AskVolume9;

	///����۰�
	TTORATstpPriceType	BidPrice8;

	///��������
	TTORATstpLongVolumeType	BidVolume8;

	///����۾�
	TTORATstpPriceType	BidPrice9;

	///��������
	TTORATstpLongVolumeType	BidVolume9;

	///�����ʮ
	TTORATstpPriceType	BidPrice10;

	///������ʮ
	TTORATstpLongVolumeType	BidVolume10;

	///������ʮ
	TTORATstpPriceType	AskPrice10;

	///������ʮ
	TTORATstpLongVolumeType	AskVolume10;

	///������Ϣ1
	TTORATstpIntInfoType	Info1;

	///������Ϣ2
	TTORATstpIntInfoType	Info2;

	///������Ϣ3
	TTORATstpIntInfoType	Info3;

	///��ͣ���(ֻ������������Ч)
	TTORATstpPriceType	UpperLimitPrice;

	///��ͣ���(ֻ������������Ч)
	TTORATstpPriceType	LowerLimitPrice;

	///�����̼�(ֻ���Ϻ�������Ч)
	TTORATstpPriceType	ClosePrice;

	///�����Ʒʵʱ״̬
	TTORATstpMDSecurityStatType	MDSecurityStat;

	///�����ܱ���(ֻ���Ϻ�������Ч)
	TTORATstpVolumeType	TotalBidNumber;

	///�����ܱ���(ֻ���Ϻ�������Ч)
	TTORATstpVolumeType	TotalOfferNumber;

	///����ί�гɽ������ȴ�ʱ��(ֻ���Ϻ�������Ч)
	TTORATstpVolumeType	BidTradeMaxDuration;

	///����ί�гɽ������ȴ�ʱ��(ֻ���Ϻ�������Ч)
	TTORATstpVolumeType	OfferTradeMaxDuration;

	///����ʵʱ�ο���ֵ
	TTORATstpPriceType	IOPV;


};

/// Lev2ָ������
struct CTORATstpLev2IndexField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ʱ���
	TTORATstpTimeStampType	DataTimeStamp;

	///ǰ����ָ��
	TTORATstpPriceType	PreCloseIndex;

	///����ָ��
	TTORATstpPriceType	OpenIndex;

	///���ָ��
	TTORATstpPriceType	HighIndex;

	///���ָ��
	TTORATstpPriceType	LowIndex;

	///����ָ��
	TTORATstpPriceType	LastIndex;

	///���������Ӧָ���ĳɽ���Ԫ
	TTORATstpMoneyType	Turnover;

	///���������Ӧָ���Ľ�������(��)
	TTORATstpLongVolumeType	TotalVolumeTraded;

	///������Ϣ1
	TTORATstpIntInfoType	Info1;

	///������Ϣ2
	TTORATstpIntInfoType	Info2;

	///������Ϣ3
	TTORATstpIntInfoType	Info3;

	///����ָ��
	TTORATstpPriceType	CloseIndex;


};

/// Lev2��ʳɽ�
struct CTORATstpLev2TransactionField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ʱ���
	TTORATstpTimeStampType	TradeTime;

	///�ɽ��۸�
	TTORATstpPriceType	TradePrice;

	///�ɽ�����
	TTORATstpLongVolumeType	TradeVolume;

	///�ɽ����
	TTORATstpExecTypeType	ExecType;

	///�����
	TTORATstpSequenceNoType	MainSeq;

	///�����
	TTORATstpLongSequenceType	SubSeq;

	///��ί�����
	TTORATstpLongSequenceType	BuyNo;

	///����ί�����
	TTORATstpLongSequenceType	SellNo;

	///������Ϣ1
	TTORATstpIntInfoType	Info1;

	///������Ϣ2
	TTORATstpIntInfoType	Info2;

	///������Ϣ3
	TTORATstpIntInfoType	Info3;

	///�����̱�־
	TTORATstpTradeBSFlagType	TradeBSFlag;


};

/// Lev2���ί��
struct CTORATstpLev2OrderDetailField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ʱ���
	TTORATstpTimeStampType	OrderTime;

	///ί�м۸�
	TTORATstpPriceType	Price;

	///ί������
	TTORATstpLongVolumeType	Volume;

	///ί�з���
	TTORATstpLSideType	Side;

	///�������
	TTORATstpLOrderTypeType	OrderType;

	///�����
	TTORATstpSequenceNoType	MainSeq;

	///�����
	TTORATstpSequenceNoType	SubSeq;

	///������Ϣ1
	TTORATstpIntInfoType	Info1;

	///������Ϣ2
	TTORATstpIntInfoType	Info2;

	///������Ϣ3
	TTORATstpIntInfoType	Info3;


};

/// Lev2�̺󶨼�����
struct CTORATstpLev2PHMarketDataField
{
		
	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///���齻��������
	TTORATstpExchangeIDType	ExchangeID;

	///ʱ���
	TTORATstpTimeStampType	DataTimeStamp;

	///�����̼�(ֻ���Ϻ�������Ч)
	TTORATstpPriceType	ClosePrice;

	///�����Ʒʵʱ״̬
	TTORATstpMDSecurityStatType	MDSecurityStat;

	///�ɽ�����
	TTORATstpLongVolumeType	NumTrades;

	///�ɽ�����
	TTORATstpLongVolumeType	TotalVolumeTrade;

	///�ɽ��ܽ��
	TTORATstpMoneyType	TotalValueTrade;

	///ί����������
	TTORATstpLongVolumeType	TotalBidVolume;

	///ί����������
	TTORATstpLongVolumeType	TotalAskVolume;

	///���볷������
	TTORATstpLongVolumeType	WithdrawBuyNumber;

	///���볷������
	TTORATstpLongVolumeType	WithdrawBuyAmount;

	///������������
	TTORATstpLongVolumeType	WithdrawSellNumber;

	///������������
	TTORATstpLongVolumeType	WithdrawSellAmount;

	///������1
	TTORATstpLongVolumeType	BidOrderQty;

	///ʵ�ʵ���ί�б���1
	TTORATstpLongVolumeType	BidNumOrders;

	///������1
	TTORATstpLongVolumeType	AskOrderQty;

	///ʵ�ʵ���ί�б���1
	TTORATstpLongVolumeType	AskNumOrders;

	///������Ϣ1
	TTORATstpIntInfoType	Info1;

	///������Ϣ2
	TTORATstpIntInfoType	Info2;

	///������Ϣ3
	TTORATstpIntInfoType	Info3;


};

/// Lev2�̺󶨼���ʳɽ�
struct CTORATstpLev2PHTransactionField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ʱ���
	TTORATstpTimeStampType	TradeTime;

	///�ɽ��۸�
	TTORATstpPriceType	TradePrice;

	///�ɽ�����
	TTORATstpLongVolumeType	TradeVolume;

	///�ɽ����(Ԫ)
	TTORATstpMoneyType	TradeMoney;

	///�ɽ����
	TTORATstpExecTypeType	ExecType;

	///�����
	TTORATstpSequenceNoType	MainSeq;

	///�����
	TTORATstpLongSequenceType	SubSeq;

	///��ί�����
	TTORATstpLongSequenceType	BuyNo;

	///����ί�����
	TTORATstpLongSequenceType	SellNo;

	///������Ϣ1
	TTORATstpIntInfoType	Info1;

	///������Ϣ2
	TTORATstpIntInfoType	Info2;

	///������Ϣ3
	TTORATstpIntInfoType	Info3;

	///�����̱�־
	TTORATstpTradeBSFlagType	TradeBSFlag;


};

/// Lev2��ʳɽ��ش�
struct CTORATstpLev2ResendTransactionField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ʱ���
	TTORATstpTimeStampType	TradeTime;

	///�ɽ��۸�
	TTORATstpPriceType	TradePrice;

	///�ɽ�����
	TTORATstpLongVolumeType	TradeVolume;

	///�ɽ����
	TTORATstpExecTypeType	ExecType;

	///�����
	TTORATstpSequenceNoType	MainSeq;

	///�����
	TTORATstpLongSequenceType	SubSeq;

	///��ί�����
	TTORATstpLongSequenceType	BuyNo;

	///����ί�����
	TTORATstpLongSequenceType	SellNo;

	///������Ϣ1
	TTORATstpIntInfoType	Info1;

	///������Ϣ2
	TTORATstpIntInfoType	Info2;

	///������Ϣ3
	TTORATstpIntInfoType	Info3;

	///�����̱�־
	TTORATstpTradeBSFlagType	TradeBSFlag;


};

/// Lev2���ί���ش�
struct CTORATstpLev2ResendOrderDetailField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ʱ���
	TTORATstpTimeStampType	OrderTime;

	///ί�м۸�
	TTORATstpPriceType	Price;

	///ί������
	TTORATstpLongVolumeType	Volume;

	///ί�з���
	TTORATstpLSideType	Side;

	///�������
	TTORATstpLOrderTypeType	OrderType;

	///�����
	TTORATstpSequenceNoType	MainSeq;

	///�����
	TTORATstpSequenceNoType	SubSeq;

	///������Ϣ1
	TTORATstpIntInfoType	Info1;

	///������Ϣ2
	TTORATstpIntInfoType	Info2;

	///������Ϣ3
	TTORATstpIntInfoType	Info3;


};

/// ����ɶ��˻�֤ȯ����ϵͳȨ��ʵʱ������Ϣ
struct CTORATstpReqInsSecurityPriorAuthField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///��������
	TTORATstpDirectionType	Direction;

	///�Ƿ��ֹ
	TTORATstpBoolType	bForbidden;


};

/// ����ɶ��˻�֤ȯ����ϵͳȨ��ʵʱ������Ϣ
struct CTORATstpReqUpdSecurityPriorAuthField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///��������
	TTORATstpDirectionType	Direction;

	///�Ƿ��ֹ
	TTORATstpBoolType	bForbidden;


};

/// ����ɶ��˻�֤ȯ����ϵͳȨ��ʵʱɾ����Ϣ
struct CTORATstpReqDelSecurityPriorAuthField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///��������
	TTORATstpDirectionType	Direction;


};

/// ����ʵʱ�����Ա�û�����Ȩ��
struct CTORATstpReqInsBrokerUserFunctionField
{
		
	///�û�����
	TTORATstpUserIDType	UserID;

	///���ܴ���
	TTORATstpFunctionIDType	FunctionID;

	///��Χģʽ
	TTORATstpRangeModeType	RangeMode;


};

/// ����ʵʱ���¹�Ա�û�����Ȩ��
struct CTORATstpReqDelBrokerUserFunctionField
{
		
	///�û�����
	TTORATstpUserIDType	UserID;

	///���ܴ���
	TTORATstpFunctionIDType	FunctionID;


};

/// �ش���������
struct CTORATstpUploadTradeDataField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///������
	TTORATstpDateType	TradingDay;

	///�Ƿ�ǿ�ƻش�
	TTORATstpBoolType	bForce;


};

/// �޸Ĺɶ���������
struct CTORATstpGuardSubPasswordUpdateField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///������
	TTORATstpPasswordType	OldPassword;

	///������
	TTORATstpPasswordType	NewPassword;


};

/// ���Ĺɶ���Ϣ
struct CTORATstpGuardSubItemField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///��������
	TTORATstpPasswordType	SubPassword;


};

/// �˶��ɶ���Ϣ
struct CTORATstpGuardUnSubItemField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;


};

/// �ɶ������ر�
struct CTORATstpGuardOrderField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///��������
	TTORATstpDirectionType	Direction;

	///�۸�
	TTORATstpPriceType	LimitPrice;

	///����
	TTORATstpVolumeType	VolumeTotalOriginal;

	///�������
	TTORATstpGOrderTypeType	OrderType;

	///���׵�Ԫ����
	TTORATstpPbuIDType	PbuID;

	///�������
	TTORATstpOrderLocalIDType	OrderLocalID;

	///��������
	TTORATstpDateType	InsertDate;

	///����ʱ��
	TTORATstpTimeType	InsertTime;

	///�۹�ͨ������������,Ĭ����������
	TTORATstpLotTypeType	LotType;


};

/// �ɶ��ɽ��ر�
struct CTORATstpGuardTradeField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///�ɽ����
	TTORATstpTradeIDType	TradeID;

	///���׵�Ԫ����
	TTORATstpPbuIDType	PbuID;

	///�������
	TTORATstpOrderLocalIDType	OrderLocalID;

	///�ɽ��۸�
	TTORATstpPriceType	Price;

	///�ɽ�����
	TTORATstpVolumeType	Volume;

	///�ɽ�����
	TTORATstpDateType	TradeDate;

	///�ɽ�ʱ��
	TTORATstpTimeType	TradeTime;

	///ִ�����
	TTORATstpExecTypeType	ExecType;

	///�������(�ɽ���������������ʱΪ��)
	TTORATstpOrderLocalIDType	CancelOrderLocalID;


};

/// ����ָ�����׵Ǽǳ���
struct CTORATstpInputDesignationRegistrationField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///�û�����
	TTORATstpUserIDType	UserID;

	///ָ�����ײ�������
	TTORATstpDesignationTypeType	DesignationType;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///ϵͳ�������
	TTORATstpOrderSysIDType	OrderSysID;

	///IP��ַ
	TTORATstpIPAddressType	IPAddress;

	///Mac��ַ
	TTORATstpMacAddressType	MacAddress;

	///�ն���Ϣ
	TTORATstpTerminalInfoType	TerminalInfo;

	///Ӳ�����к�
	TTORATstpHDSerialType	HDSerial;

	///�ƶ��豸�ֻ���
	TTORATstpMobileType	Mobile;


};

/// ������֤ת�й�
struct CTORATstpInputCustodyTransferField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///�û�����
	TTORATstpUserIDType	UserID;

	///ת�й�����
	TTORATstpCustodyTransferTypeType	CustodyTransferType;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///ϵͳ�������
	TTORATstpOrderSysIDType	OrderSysID;

	///ת�뽻�׵�Ԫ����
	TTORATstpPbuIDType	TransfereePbuID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ԭʼת�йܱ��ر������
	TTORATstpOrderLocalIDType	OrignalOrderLocalID;

	///���ر������
	TTORATstpOrderLocalIDType	OrderLocalID;

	///����
	TTORATstpVolumeType	VolumeTotalOriginal;

	///IP��ַ
	TTORATstpIPAddressType	IPAddress;

	///Mac��ַ
	TTORATstpMacAddressType	MacAddress;

	///�ն���Ϣ
	TTORATstpTerminalInfoType	TerminalInfo;

	///Ӳ�����к�
	TTORATstpHDSerialType	HDSerial;

	///�ƶ��豸�ֻ���
	TTORATstpMobileType	Mobile;


};

/// ���׳ɽ����ж�
struct CTORATstpInquiryTradeConcentrationField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///Ͷ���߳ɽ���/�ɽ�����
	TTORATstpRatioType	ConcentrationRatio1;

	///Ͷ���߳ɽ����/�ɽ��ܽ��
	TTORATstpRatioType	ConcentrationRatio2;


};

/// �ر�����֪ͨ
struct CTORATstpSpecialMarketDataField
{
		
	///������
	TTORATstpDateType	TradingDay;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityNameType	SecurityName;

	///�ƶ�ƽ����
	TTORATstpPriceType	MovingAvgPrice;

	///�����ƶ�ƽ���۵Ĳ�������
	TTORATstpVolumeType	MovingAvgPriceSamplingNum;

	///����޸�ʱ��
	TTORATstpTimeType	UpdateTime;

	///����޸ĺ���
	TTORATstpMillisecType	UpdateMillisec;


};

/// �۸��쳣��������
struct CTORATstpEffectPriceMarketDataField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///���¼�
	TTORATstpPriceType	LastPrice;

	///��ǰ�ɽ�����
	TTORATstpLongVolumeType	TradeVol;

	///��ǰ�ɽ����
	TTORATstpMoneyType	TradeTurnover;

	///����޸�ʱ��
	TTORATstpTimeType	UpdateTime;

	///����޸ĺ���
	TTORATstpMillisecType	UpdateMillisec;


};

/// �����쳣��������
struct CTORATstpEffectVolumeMarketDataField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///���¼�
	TTORATstpPriceType	LastPrice;

	///��ǰ�ɽ�����
	TTORATstpLongVolumeType	TradeVol;

	///��ǰ�ɽ����
	TTORATstpMoneyType	TradeTurnover;

	///����޸�ʱ��
	TTORATstpTimeType	UpdateTime;

	///����޸ĺ���
	TTORATstpMillisecType	UpdateMillisec;


};

/// �ʽ�������������
struct CTORATstpFundsFlowMarketDataField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///����޸�ʱ��
	TTORATstpTimeType	UpdateTime;

	///����޸ĺ���
	TTORATstpMillisecType	UpdateMillisec;

	///ɢ��������
	TTORATstpMoneyType	RetailBuyTurnover;

	///ɢ����������
	TTORATstpLongVolumeType	RetailBuyVolume;

	///ɢ���������
	TTORATstpLongVolumeType	RetailBuyAmount;

	///ɢ���������
	TTORATstpMoneyType	RetailSellTurnover;

	///ɢ����������
	TTORATstpLongVolumeType	RetailSellVolume;

	///ɢ����������
	TTORATstpLongVolumeType	RetailSellAmount;

	///�л�������
	TTORATstpMoneyType	MiddleBuyTurnover;

	///�л���������
	TTORATstpLongVolumeType	MiddleBuyVolume;

	///�л��������
	TTORATstpLongVolumeType	MiddleBuyAmount;

	///�л��������
	TTORATstpMoneyType	MiddleSellTurnover;

	///�л���������
	TTORATstpLongVolumeType	MiddleSellVolume;

	///�л���������
	TTORATstpLongVolumeType	MiddleSellAmount;

	///��������
	TTORATstpMoneyType	LargeBuyTurnover;

	///����������
	TTORATstpLongVolumeType	LargeBuyVolume;

	///���������
	TTORATstpLongVolumeType	LargeBuyAmount;

	///���������
	TTORATstpMoneyType	LargeSellTurnover;

	///����������
	TTORATstpLongVolumeType	LargeSellVolume;

	///����������
	TTORATstpLongVolumeType	LargeSellAmount;

	///����������
	TTORATstpMoneyType	InstitutionBuyTurnover;

	///������������
	TTORATstpLongVolumeType	InstitutionBuyVolume;

	///�����������
	TTORATstpLongVolumeType	InstitutionBuyAmount;

	///�����������
	TTORATstpMoneyType	InstitutionSellTurnover;

	///������������
	TTORATstpLongVolumeType	InstitutionSellVolume;

	///������������
	TTORATstpLongVolumeType	InstitutionSellAmount;


};

/// ��ѯ��Ȩ��Ϣ
struct CTORATstpQryRightsAdjustmentInfoField
{
		
	///��ʼ����
	TTORATstpDateType	BegDate;

	///��������
	TTORATstpDateType	EndDate;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ÿҳ��¼��
	TTORATstpVolumeType	PageCount;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ѯ��ʷ��Ӧ��Ϣ
struct CTORATstpQryHistoryRspInfoField
{
		
	///�������
	TTORATstpErrorIDType	ErrorID;

	///������Ϣ
	TTORATstpErrorMsgType	ErrorMsg;

	///��ҳ�Ƿ����
	TTORATstpBoolType	bPageEnd;

	///�ܲ�ѯ����Ƿ����
	TTORATstpBoolType	bResultEnd;


};

/// ��Ȩ����
struct CTORATstpRightsAdjustmentDataField
{
		
	///��������
	TTORATstpDateType	TradingDay;

	///��Ȩ�����̼�(Ԫ)
	TTORATstpPriceType	ADJPreClose;

	///��Ȩ���̼�(Ԫ)
	TTORATstpPriceType	ADJOpen;

	///��Ȩ��߼�(Ԫ)
	TTORATstpPriceType	ADJHigh;

	///��Ȩ��ͼ�(Ԫ)
	TTORATstpPriceType	ADJLow;

	///��Ȩ���̼�(Ԫ)
	TTORATstpPriceType	ADJClose;

	///��Ȩ����
	TTORATstpPriceType	ADJFactor;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;

	///���̼�(Ԫ)
	TTORATstpPriceType	Open;

	///��߼�(Ԫ)
	TTORATstpPriceType	High;

	///��ͼ�(Ԫ)
	TTORATstpPriceType	Low;

	///���̼�(Ԫ)
	TTORATstpPriceType	Close;

	///���Ҵ���
	TTORATstpCodeType	CrncyCode;

	///�ǵ�(Ԫ)
	TTORATstpPriceType	Change;

	///�ǵ���(%)
	TTORATstpPriceType	PCTChange;

	///�ɽ���(��)
	TTORATstpPriceType	Volume;

	///�ɽ����(ǧԪ)
	TTORATstpPriceType	Amount;

	///����(VWAP)
	TTORATstpPriceType	AVGPrice;

	///����״̬
	TTORATstpTradeStatusType	TradeStatus;


};

/// ��ѯ��ʷ�ʽ���������
struct CTORATstpQryHistoryFundsFlowInfoField
{
		
	///��ʼ����
	TTORATstpDateType	BegDate;

	///��������
	TTORATstpDateType	EndDate;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ÿҳ��¼��
	TTORATstpVolumeType	PageCount;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��Ȩ��ʷ�ʽ���������
struct CTORATstpHistoryFundsFlowDataField
{
		
	///��������
	TTORATstpDateType	TradingDay;

	///����������(��Ԫ)
	TTORATstpMoneyType	BuyValueExlargeOrder;

	///�����������(��Ԫ)
	TTORATstpMoneyType	SellValueExlargeOrder;

	///��������(��Ԫ)
	TTORATstpMoneyType	BuyValueLargeOrder;

	///���������(��Ԫ)
	TTORATstpMoneyType	SellValueLargeOrder;

	///�л�������(��Ԫ)
	TTORATstpMoneyType	BuyValueMedOrder;

	///�л��������(��Ԫ)
	TTORATstpMoneyType	SellValueMedOrder;

	///ɢ��������(��Ԫ)
	TTORATstpMoneyType	BuyValueSmallOrder;

	///ɢ���������(��Ԫ)
	TTORATstpMoneyType	SellValueSmallOrder;

	///������������(��)
	TTORATstpQuantityType	BuyVolumeExlargeOrder;

	///������������(��)
	TTORATstpQuantityType	SellVolumeExlargeOrder;

	///����������(��)
	TTORATstpQuantityType	BuyVolumeLargeOrder;

	///����������(��)
	TTORATstpQuantityType	SellVolumeLargeOrder;

	///�л���������(��)
	TTORATstpQuantityType	BuyVolumeMedOrder;

	///�л���������(��)
	TTORATstpQuantityType	SellVolumeMedOrder;

	///ɢ����������(��)
	TTORATstpQuantityType	BuyVolumeSmallOrder;

	///ɢ����������(��)
	TTORATstpQuantityType	SellVolumeSmallOrder;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ѯ����ָ����Ϣ
struct CTORATstpQryFinancialIndicatorInfoField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ÿҳ��¼��
	TTORATstpVolumeType	PageCount;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ����ָ������
struct CTORATstpFinancialIndicatorDataField
{
		
	///��������
	TTORATstpDateType	AnnouncementDate;

	///����ÿ������
	TTORATstpPriceType	EPSBasic;

	///ÿ�ɾ��ʲ�
	TTORATstpPriceType	BPS;

	///ÿ���ʱ�����
	TTORATstpPriceType	SurplusCapitalPS;

	///ÿ��δ��������
	TTORATstpPriceType	UndistributedPS;

	///ÿ�ɾ�Ӫ��������ֽ���������
	TTORATstpPriceType	OCFPS;

	///ÿ��Ӫҵ����
	TTORATstpPriceType	ORPS;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ѯ�ֺ���Ϣ
struct CTORATstpQryDividendInfoField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ÿҳ��¼��
	TTORATstpVolumeType	PageCount;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// �ֺ�����
struct CTORATstpDividendDataField
{
		
	///���¹�������
	TTORATstpDateType	AnnouncementDate;

	///��������
	TTORATstpProgressType	Progress;

	///��Ȩ��Ϣ��
	TTORATstpDateType	ExDate;

	///ÿ����ת
	TTORATstpShareType	STKDvdPerSh;

	///ÿ����Ϣ(˰ǰ)(Ԫ)
	TTORATstpCashShareType	CashDvdPerShPreTax;

	///ÿ����Ϣ(˰��)(Ԫ)
	TTORATstpCashShareType	CashDvdPerShAfterTax;

	///��Ȩ�Ǽ���
	TTORATstpDateType	EqyRecordDate;

	///��Ϣ��
	TTORATstpDateType	DvdPayoutDate;

	///���������
	TTORATstpDateType	ListingDateOfDvdShr;

	///Ԥ��������
	TTORATstpDateType	PrelanDate;

	///�ɶ���ṫ����
	TTORATstpDateType	SMTGDate;

	///�ֺ�ʵʩ������
	TTORATstpDateType	DvdAnnDate;

	///��׼����
	TTORATstpDateType	BaseDate;

	///��׼�ɱ�(���)
	TTORATstpQuantityType	BaseShare;

	///���Ҵ���
	TTORATstpCodeType	CrncyCode;

	///�����Ƿ���
	TTORATstpIsChangedType	IsChanged;

	///�ֺ����
	TTORATstpDateType	ReportPeriod;

	///�������˵��
	TTORATstpChangeContentType	Change;

	///ÿ���͹ɱ���
	TTORATstpShareType	BonusRate;

	///ÿ��ת������
	TTORATstpShareType	ConversedRate;

	///��ע
	TTORATstpMemoType	Memo;

	///Ԥ��Ԥ��¶������
	TTORATstpDateType	PreAnnDate;

	///�ֺ����
	TTORATstpObjectType	DivObject;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ѯ�͹������Ϣ
struct CTORATstpQryRightIssueInfoField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ÿҳ��¼��
	TTORATstpVolumeType	PageCount;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// �͹��������
struct CTORATstpRightIssueDataField
{
		
	///���¹�������
	TTORATstpDateType	AnnouncementDate;

	///��������
	TTORATstpProgressType	Progress;

	///��ɼ۸�(Ԫ)
	TTORATstpDvdPriceType	Price;

	///��ɱ���
	TTORATstpRatioShareType	Ratio;

	///��ɼƻ�����(���)
	TTORATstpQuantityType	Amount;

	///���ʵ������(���)
	TTORATstpQuantityType	AmountAct;

	///ļ���ʽ�(Ԫ)
	TTORATstpDvdPriceType	NetCollection;

	///��Ȩ�Ǽ���
	TTORATstpDateType	RegDateShare;

	///��Ȩ��
	TTORATstpDateType	ExDividendDate;

	///���������
	TTORATstpDateType	ListedDate;

	///�ɿ���ʼ��
	TTORATstpDateType	PayStartDate;

	///�ɿ���ֹ��
	TTORATstpDateType	PayEndDate;

	///Ԥ��������
	TTORATstpDateType	PrePlanDate;

	///�ɶ���ṫ����
	TTORATstpDateType	SMTGAnnceDate;

	///����ίͨ��������
	TTORATstpDateType	PassDate;

	///֤����׼������
	TTORATstpDateType	ApprovedDate;

	///���ʵʩ������
	TTORATstpDateType	AnnceDate;

	///��ɽ��������
	TTORATstpDateType	ResultDate;

	///���й�����
	TTORATstpDateType	ListAnnDate;

	///��׼���
	TTORATstpDateType	Guarantor;

	///��׼�ɱ�(���)
	TTORATstpQuantityType	Guartype;

	///���۴���
	TTORATstpCodeType	Code;

	///������
	TTORATstpDateType	Year;

	///���˵��
	TTORATstpShareContentType	Content;

	///��ɼ��
	TTORATstpDvdNameType	Name;

	///��ɱ�����ĸ
	TTORATstpRatioShareType	RatioDenominator;

	///��ɱ�������
	TTORATstpRatioShareType	RatioMolecular;

	///�Ϲ���ʽ
	TTORATstpSubscriptionMethodType	SubscriptionMethod;

	///Ԥ��ļ���ʽ�(Ԫ)
	TTORATstpDvdPriceType	ExpectedFundRaising;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ѯ��˾������Ϣ
struct CTORATstpQryCompanyDescriptionInfoField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ÿҳ��¼��
	TTORATstpVolumeType	PageCount;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��˾��������
struct CTORATstpCompanyDescriptionDataField
{
		
	///��˾��������
	TTORATstpCompNameType	CompName;

	///��������
	TTORATstpDateType	ListDate;

	///��Ӫ��Χ
	TTORATstpContentType	BusinessScope;

	///���м۸�(Ԫ)
	TTORATstpIPOPriceType	IPOPrice;

	///�������Ϲɷ��������ϼ�(���)
	TTORATstpQuantityType	IPOAmount;

	///���Ϸ�������(���)
	TTORATstpShareType	AMTByPlacing;

	///���·�������(���)
	TTORATstpShareType	AMTToJur;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ѯ�ɱ��ṹ��Ϣ
struct CTORATstpQryEquityStructureInfoField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ÿҳ��¼��
	TTORATstpVolumeType	PageCount;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// �ɱ��ṹ����
struct CTORATstpEquityStructureDataField
{
		
	///��������
	TTORATstpDateType	TradingDay;

	///�����ܹɱ�
	TTORATstpShareType	TotalShareToday;

	///������ͨ�ɱ�
	TTORATstpShareType	FloatShareToday;

	///�ɶ��ܻ���
	TTORATstpHolderNumType	HolderTotalNum;

	///���¹�������
	TTORATstpDateType	AnnouncementDate;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ѯ��Ӫҵ����Ϣ
struct CTORATstpQrySalesSegmentInfoField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ÿҳ��¼��
	TTORATstpVolumeType	PageCount;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��Ӫҵ������
struct CTORATstpSalesSegmentDataField
{
		
	///������
	TTORATstpDateType	ReportPeriod;

	///���Ҵ���
	TTORATstpCodeType	CrncyCode;

	///��Ŀ���
	TTORATstpItemCodeType	ItemCode;

	///��Ӫҵ����Ŀ
	TTORATstpItemType	Item;

	///��Ӫҵ������(Ԫ)
	TTORATstpPriceType	Sales;

	///��Ӫҵ������(Ԫ)
	TTORATstpPriceType	Profit;

	///��Ӫҵ��ɱ�(Ԫ)
	TTORATstpPriceType	Cost;

	///�Ƿ񹫲�ֵ
	TTORATstpIsChangedType	IsPublishedValue;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ѯʮ��ɶ���Ϣ
struct CTORATstpQryTopTenHoldersInfoField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ÿҳ��¼��
	TTORATstpVolumeType	PageCount;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ʮ��ɶ�����
struct CTORATstpTopTenHoldersDataField
{
		
	///���¹�������
	TTORATstpDateType	AnnouncementDate;

	///�ɶ�����
	TTORATstpHolderNameType	HolderName;

	///�ֹ�����
	TTORATstpQuantityType	HolderQuantity;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ѯʮ����ͨ�ɶ���Ϣ
struct CTORATstpQryTopTenFloatHoldersInfoField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ÿҳ��¼��
	TTORATstpVolumeType	PageCount;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ʮ����ͨ�ɶ�����
struct CTORATstpTopTenFloatHoldersDataField
{
		
	///���¹�������
	TTORATstpDateType	AnnouncementDate;

	///�ɶ�����
	TTORATstpFloatHolderNameType	HolderName;

	///�ֹ�����
	TTORATstpQuantityType	HolderQuantity;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ѯ����������ҵ�����Ϣ
struct CTORATstpQryIndustryInfoField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ÿҳ��¼��
	TTORATstpVolumeType	PageCount;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ����������ҵ�������
struct CTORATstpIndustryDataField
{
		
	///��������
	TTORATstpDateType	EntryDate;

	///�޳�����
	TTORATstpDateType	RemoveDate;

	///��ҵ����
	TTORATstpIndustriesCodeType	IndustriesCode;

	///��ҵ����
	TTORATstpIndustriesNameType	IndustriesName;

	///����
	TTORATstpLevelNumType	LevelNum;

	///�Ƿ���Ч
	TTORATstpUsedType	Used;

	///������
	TTORATstpIndustriesAliasType	IndustriesAlias;

	///չʾ���
	TTORATstpSequenceType	Sequence;

	///��ע
	TTORATstpIndustriesMemoType	Memo;

	///������Ķ���
	TTORATstpChineseDfinitionType	ChineseDfinition;

	///���Ӣ������
	TTORATstpIndustriesNameEngType	IndustriesNameEng;

	///��ҵ��Ӧָ������
	TTORATstpWindCodeType	IndexCode;

	///��ҵ��Ӧָ������
	TTORATstpIndustriesNameType	Name;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ѯ����������������Ϣ
struct CTORATstpQryConceptionInfoField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ÿҳ��¼��
	TTORATstpVolumeType	PageCount;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ������������������
struct CTORATstpConceptionDataField
{
		
	///Wind���������
	TTORATstpConceptionCodeType	ConceptionCode;

	///Wind����������
	TTORATstpConceptionNameType	ConceptionName;

	///��������
	TTORATstpDateType	EntryDate;

	///�޳�����
	TTORATstpDateType	RemoveDate;

	///���±�־
	TTORATstpCurSignType	CurSign;

	///��ҵ����
	TTORATstpIndustriesCodeType	IndustriesCode;

	///��ҵ����
	TTORATstpIndustriesNameType	IndustriesName;

	///����
	TTORATstpLevelNumType	LevelNum;

	///�Ƿ���Ч
	TTORATstpUsedType	Used;

	///������
	TTORATstpIndustriesAliasType	IndustriesAlias;

	///չʾ���
	TTORATstpSequenceType	Sequence;

	///��ע
	TTORATstpIndustriesMemoType	Memo;

	///������Ķ���
	TTORATstpChineseDfinitionType	ChineseDfinition;

	///���Ӣ������
	TTORATstpIndustriesNameEngType	IndustriesNameEng;

	///��ҵ��Ӧָ������
	TTORATstpWindCodeType	IndexCode;

	///��ҵ��Ӧָ������
	TTORATstpIndustriesNameType	Name;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ѯ����������������Ϣ
struct CTORATstpQryRegionInfoField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ÿҳ��¼��
	TTORATstpVolumeType	PageCount;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ������������������
struct CTORATstpRegionDataField
{
		
	///��ҵ����
	TTORATstpIndustriesCodeType	IndustriesCode;

	///��ҵ����
	TTORATstpIndustriesNameType	IndustriesName;

	///����
	TTORATstpLevelNumType	LevelNum;

	///�Ƿ���Ч
	TTORATstpUsedType	Used;

	///������
	TTORATstpIndustriesAliasType	IndustriesAlias;

	///չʾ���
	TTORATstpSequenceType	Sequence;

	///��ע
	TTORATstpIndustriesMemoType	Memo;

	///������Ķ���
	TTORATstpChineseDfinitionType	ChineseDfinition;

	///���Ӣ������
	TTORATstpIndustriesNameEngType	IndustriesNameEng;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ѯָ��������Ϣ
struct CTORATstpQryIndexDescriptionInfoField
{
		
	///ָ������
	TTORATstpIndexIDType	IndexID;

	///ÿҳ��¼��
	TTORATstpVolumeType	PageCount;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ָ��������Ϣ����
struct CTORATstpIndexDescriptionDataField
{
		
	///ָ�����
	TTORATstpIndustriesNameType	Name;

	///������
	TTORATstpIndustryCodeType	IndustryCode;

	///�������
	TTORATstpIndustriesNameType	IndustryName;

	///������2
	TTORATstpIndustryCodeType	IndustryCode2;

	///���Ӣ������
	TTORATstpIndustriesNameEngType	IndustryNameEng;

	///ָ������
	TTORATstpIndexIDType	IndexID;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ѯ��ҵ���ɷֹ���Ϣ
struct CTORATstpQryIndustryConstituentsInfoField
{
		
	///ָ������
	TTORATstpIndexIDType	IndexID;

	///ÿҳ��¼��
	TTORATstpVolumeType	PageCount;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ҵ���ɷֹ�����
struct CTORATstpIndustryConstituentsDataField
{
		
	///��ҵָ������
	TTORATstpIndexIDType	IndexID;

	///��������
	TTORATstpDateType	EntryDate;

	///�޳�����
	TTORATstpDateType	RemoveDate;

	///���±�־
	TTORATstpCurSignType	CurSign;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ѯ������ɷֹ���Ϣ
struct CTORATstpQryConceptionConstituentsInfoField
{
		
	///ָ������
	TTORATstpIndexIDType	IndexID;

	///ÿҳ��¼��
	TTORATstpVolumeType	PageCount;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ������ɷֹ�����
struct CTORATstpConceptionConstituentsDataField
{
		
	///����ָ������
	TTORATstpIndexIDType	IndexID;

	///��������
	TTORATstpDateType	EntryDate;

	///�޳�����
	TTORATstpDateType	RemoveDate;

	///���±�־
	TTORATstpCurSignType	CurSign;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ѯ���ָ��ʵʱ������Ϣ
struct CTORATstpQryIndustryCodeListField
{
		
	///ÿҳ��¼��
	TTORATstpVolumeType	PageCount;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ҵ����б�����
struct CTORATstpIndustryCodeListDataField
{
		
	///������Ķ���
	TTORATstpChineseDfinitionType	ChineseDfinition;

	///��������
	TTORATstpDateType	TradingDay;

	///�������̵�λ
	TTORATstpPriceType	PreClosePoint;

	///ָ������
	TTORATstpIndexIDType	IndexID;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ѯ����ָ��ʵʱ������Ϣ
struct CTORATstpQryConceptionCodeListField
{
		
	///ÿҳ��¼��
	TTORATstpVolumeType	PageCount;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// �������б�����
struct CTORATstpConceptionCodeListDataField
{
		
	///������Ķ���
	TTORATstpChineseDfinitionType	ChineseDfinition;

	///��������
	TTORATstpDateType	TradingDay;

	///�������̵�λ
	TTORATstpPriceType	PreClosePoint;

	///ָ������
	TTORATstpIndexIDType	IndexID;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ѯ������ͨ�ɱ���Ϣ
struct CTORATstpQryFreeFloatSharesInfoField
{
		
	///��ʼ����
	TTORATstpDateType	BegDate;

	///��������
	TTORATstpDateType	EndDate;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ÿҳ��¼��
	TTORATstpVolumeType	PageCount;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ������ͨ�ɱ�����
struct CTORATstpFreeFloatSharesDataField
{
		
	///������ͨ�ɱ�(���)
	TTORATstpShareType	FreeShares;

	///�䶯����(��Ȩ��)
	TTORATstpDateType	ChangeDateEX;

	///�䶯����(������)
	TTORATstpDateType	ChangeDateList;

	///���¹�������
	TTORATstpDateType	AnnouncementDate;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// �����쳣��ϸ��
struct CTORATstpEffectDetailItemField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///������ֵ
	TTORATstpRatioType	EffectRatio;


};

/// �۸��쳣����ί����ϸ
struct CTORATstpEffectOrderDetailField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ί�м۸�
	TTORATstpPriceType	Price;

	///ί������
	TTORATstpLongVolumeType	Volume;

	///ί�����
	TTORATstpLOrderTypeType	OrderType;

	///ί�з���
	TTORATstpLSideType	Side;

	///��������
	TTORATstpRatioType	EffectRatio;

	///ί�������
	TTORATstpSequenceNoType	OrderSeq1;

	///ί�������
	TTORATstpSequenceNoType	OrderSeq2;

	///����ʱ��(��)
	TTORATstpTimeType	UpdateTime;

	///����ʱ��(����)
	TTORATstpMillisecType	UpdateMillisec;


};

/// �۸��쳣�����ɽ���ϸ
struct CTORATstpEffectTradeDetailField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///�ɽ��۸�
	TTORATstpPriceType	TradePrice;

	///�ɽ�����
	TTORATstpLongVolumeType	TradeVolume;

	///�ɽ����
	TTORATstpExecTypeType	ExecType;

	///��������
	TTORATstpRatioType	EffectRatio;

	///�ɽ������
	TTORATstpSequenceNoType	TradeSeq1;

	///�ɽ������
	TTORATstpSequenceNoType	TradeSeq2;

	///��ί�����
	TTORATstpSequenceNoType	BuySideSeq;

	///����ί�����
	TTORATstpSequenceNoType	SelSideSeq;

	///����ʱ��(��)
	TTORATstpTimeType	UpdateTime;

	///����ʱ��(����)
	TTORATstpMillisecType	UpdateMillisec;


};

/// ��ѯ�̿�ί��
struct CTORATstpInquiryQueueingOrdersField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///�̿ڼ۸�
	TTORATstpPriceType	QueuePrice;


};

/// �̿�ί��
struct CTORATstpQueueingOrderField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ί�м۸�
	TTORATstpPriceType	Price;

	///ί������
	TTORATstpLongVolumeType	Volume;

	///ί�����
	TTORATstpLOrderTypeType	OrderType;

	///ί�з���
	TTORATstpLSideType	Side;

	///ί�������
	TTORATstpSequenceNoType	OrderSeq1;

	///ί�������
	TTORATstpSequenceNoType	OrderSeq2;


};

/// ��ѯ�ֲ����۷ֲ���Ϣ
struct CTORATstpQryPriceDistributionInfoField
{
		
	///��ʼ����
	TTORATstpDateType	BegDate;

	///��������
	TTORATstpDateType	EndDate;

	///�ֲַ�λ��ٷֱ�
	TTORATstpPercentValType	PercentNum;

	///�۸������ֲ���״ͼ��������
	TTORATstpVolumeType	DistributionType;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ÿҳ��¼��
	TTORATstpVolumeType	PageCount;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// �ֲ����۷ֲ�����
struct CTORATstpPriceDistributionDataField
{
		
	///��������
	TTORATstpDateType	DataDate;

	///�ֲַ�λ��ٷֱ�
	TTORATstpPercentValType	PercentNum;

	///�ڳֲַ�λ��ļ۸�
	TTORATstpRatioType	PercentValue;

	///�۸������ֲ���״ͼ��������
	TTORATstpVolumeType	DistributionType;

	///�۸������ֲ�������
	TTORATstpDistriValueType	DistributionValue;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ѯ��ʷ��ֵ�۸���Ϣ
struct CTORATstpQryPriceExtremumInfoField
{
		
	///��������
	TTORATstpDateType	TradingDay;

	///��ʼʱ��
	TTORATstpTimeType	BegTime;

	///����ʱ��
	TTORATstpTimeType	EndTime;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ÿҳ��¼��
	TTORATstpVolumeType	PageCount;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ʷ��ֵ�۸�����
struct CTORATstpPriceExtremumDataField
{
		
	///��������
	TTORATstpDateType	HighestTradingDay;

	///����ʱ��
	TTORATstpTimeType	HighestUpdateTime;

	///���º���
	TTORATstpMillisecType	HighestUpdateMillisec;

	///��߼�(Ԫ)
	TTORATstpPriceType	HighestPrice;

	///��������
	TTORATstpDateType	LowestTradingDay;

	///����ʱ��
	TTORATstpTimeType	LowestUpdateTime;

	///���º���
	TTORATstpMillisecType	LowestUpdateMillisec;

	///��߼�(Ԫ)
	TTORATstpPriceType	LowestPrice;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ѯ����������б�
struct CTORATstpQryRegionCodeListField
{
		
	///ÿҳ��¼��
	TTORATstpVolumeType	PageCount;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ����������б�����
struct CTORATstpRegionCodeListDataField
{
		
	///������Ķ���
	TTORATstpChineseDfinitionType	ChineseDfinition;

	///ָ������
	TTORATstpIndexIDType	IndexID;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ���ָ��ʵʱ��������
struct CTORATstpIndustryIndexDataField
{
		
	///��ҵ���ָ������ʵʱ��λ
	TTORATstpPriceType	IndexPoint;

	///��ҵ���ָ���������̵�λ
	TTORATstpPriceType	PreClosePoint;

	///���̵�λ
	TTORATstpPriceType	OpenPoint;

	///�����̵�λ
	TTORATstpPriceType	ClosePoint;

	///��ҵ���ָ��������ߵ�λ
	TTORATstpPriceType	HighestPoint;

	///��ҵ���ָ��������͵�λ
	TTORATstpPriceType	LowestPoint;

	///��������
	TTORATstpDateType	TradingDay;

	///����ʱ��
	TTORATstpTimeType	UpdateTime;

	///���º���
	TTORATstpMillisecType	UpdateMillisec;

	///ָ������
	TTORATstpIndexIDType	IndexID;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ����ָ��ʵʱ��������
struct CTORATstpConceptionIndexDataField
{
		
	///������ָ������ʵʱ��λ
	TTORATstpPriceType	IndexPoint;

	///������ָ���������̵�λ
	TTORATstpPriceType	PreClosePoint;

	///���̵�λ
	TTORATstpPriceType	OpenPoint;

	///�����̵�λ
	TTORATstpPriceType	ClosePoint;

	///������ָ��������ߵ�λ
	TTORATstpPriceType	HighestPoint;

	///������ָ��������͵�λ
	TTORATstpPriceType	LowestPoint;

	///��������
	TTORATstpDateType	TradingDay;

	///����ʱ��
	TTORATstpTimeType	UpdateTime;

	///���º���
	TTORATstpMillisecType	UpdateMillisec;

	///ָ������
	TTORATstpIndexIDType	IndexID;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ����ָ��ʵʱ��������
struct CTORATstpRegionIndexDataField
{
		
	///������ָ������ʵʱ��λ
	TTORATstpPriceType	IndexPoint;

	///������ָ���������̵�λ
	TTORATstpPriceType	PreClosePoint;

	///���̵�λ
	TTORATstpPriceType	OpenPoint;

	///�����̵�λ
	TTORATstpPriceType	ClosePoint;

	///������ָ��������ߵ�λ
	TTORATstpPriceType	HighestPoint;

	///������ָ��������͵�λ
	TTORATstpPriceType	LowestPoint;

	///��������
	TTORATstpDateType	TradingDay;

	///����ʱ��
	TTORATstpTimeType	UpdateTime;

	///���º���
	TTORATstpMillisecType	UpdateMillisec;

	///ָ������
	TTORATstpIndexIDType	IndexID;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ѯ�ض��������
struct CTORATstpInquirySpecialMarketDataField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;


};

/// �����������
struct CTORATstpRapidMarketDataField
{
		
	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///���齻��������
	TTORATstpExchangeIDType	ExchangeID;

	///ʱ���
	TTORATstpTimeStampType	DataTimeStamp;

	///������
	TTORATstpPriceType	PreClosePrice;

	///����
	TTORATstpPriceType	OpenPrice;

	///�ɽ�����
	TTORATstpLongVolumeType	NumTrades;

	///�ɽ�����
	TTORATstpLongVolumeType	TotalVolumeTrade;

	///�ɽ��ܽ��
	TTORATstpMoneyType	TotalValueTrade;

	///ί����������
	TTORATstpLongVolumeType	TotalBidVolume;

	///��Ȩƽ��ί����۸�
	TTORATstpPriceType	AvgBidPrice;

	///ί����������
	TTORATstpLongVolumeType	TotalAskVolume;

	///��Ȩƽ��ί�����۸�
	TTORATstpPriceType	AvgAskPrice;

	///��߼�
	TTORATstpPriceType	HighestPrice;

	///��ͼ�
	TTORATstpPriceType	LowestPrice;

	///�ּ�
	TTORATstpPriceType	LastPrice;

	///�����һ
	TTORATstpPriceType	BidPrice1;

	///������һ
	TTORATstpLongVolumeType	BidVolume1;

	///������һ
	TTORATstpPriceType	AskPrice1;

	///������һ
	TTORATstpLongVolumeType	AskVolume1;

	///�����۶�
	TTORATstpPriceType	AskPrice2;

	///��������
	TTORATstpLongVolumeType	AskVolume2;

	///��������
	TTORATstpPriceType	AskPrice3;

	///��������
	TTORATstpLongVolumeType	AskVolume3;

	///����۶�
	TTORATstpPriceType	BidPrice2;

	///��������
	TTORATstpLongVolumeType	BidVolume2;

	///�������
	TTORATstpPriceType	BidPrice3;

	///��������
	TTORATstpLongVolumeType	BidVolume3;

	///��������
	TTORATstpPriceType	AskPrice4;

	///��������
	TTORATstpLongVolumeType	AskVolume4;

	///��������
	TTORATstpPriceType	AskPrice5;

	///��������
	TTORATstpLongVolumeType	AskVolume5;

	///�������
	TTORATstpPriceType	BidPrice4;

	///��������
	TTORATstpLongVolumeType	BidVolume4;

	///�������
	TTORATstpPriceType	BidPrice5;

	///��������
	TTORATstpLongVolumeType	BidVolume5;

	///��������
	TTORATstpPriceType	AskPrice6;

	///��������
	TTORATstpLongVolumeType	AskVolume6;

	///��������
	TTORATstpPriceType	AskPrice7;

	///��������
	TTORATstpLongVolumeType	AskVolume7;

	///�������
	TTORATstpPriceType	BidPrice6;

	///��������
	TTORATstpLongVolumeType	BidVolume6;

	///�������
	TTORATstpPriceType	BidPrice7;

	///��������
	TTORATstpLongVolumeType	BidVolume7;

	///�����۰�
	TTORATstpPriceType	AskPrice8;

	///��������
	TTORATstpLongVolumeType	AskVolume8;

	///�����۾�
	TTORATstpPriceType	AskPrice9;

	///��������
	TTORATstpLongVolumeType	AskVolume9;

	///����۰�
	TTORATstpPriceType	BidPrice8;

	///��������
	TTORATstpLongVolumeType	BidVolume8;

	///����۾�
	TTORATstpPriceType	BidPrice9;

	///��������
	TTORATstpLongVolumeType	BidVolume9;

	///�����ʮ
	TTORATstpPriceType	BidPrice10;

	///������ʮ
	TTORATstpLongVolumeType	BidVolume10;

	///������ʮ
	TTORATstpPriceType	AskPrice10;

	///������ʮ
	TTORATstpLongVolumeType	AskVolume10;

	///������Ϣ1
	TTORATstpIntInfoType	Info1;

	///������Ϣ2
	TTORATstpIntInfoType	Info2;

	///������Ϣ3
	TTORATstpIntInfoType	Info3;

	///��ͣ���(ֻ������������Ч)
	TTORATstpPriceType	UpperLimitPrice;

	///��ͣ���(ֻ������������Ч)
	TTORATstpPriceType	LowerLimitPrice;

	///�����̼�(ֻ���Ϻ�������Ч)
	TTORATstpPriceType	ClosePrice;

	///�����Ʒʵʱ״̬
	TTORATstpMDSecurityStatType	MDSecurityStat;

	///�����ܱ���(ֻ���Ϻ�������Ч)
	TTORATstpVolumeType	TotalBidNumber;

	///�����ܱ���(ֻ���Ϻ�������Ч)
	TTORATstpVolumeType	TotalOfferNumber;

	///����ί�гɽ������ȴ�ʱ��(ֻ���Ϻ�������Ч)
	TTORATstpVolumeType	BidTradeMaxDuration;

	///����ί�гɽ������ȴ�ʱ��(ֻ���Ϻ�������Ч)
	TTORATstpVolumeType	OfferTradeMaxDuration;

	///����ʵʱ�ο���ֵ
	TTORATstpPriceType	IOPV;


};

/// ��ѯ������ɷֹ���Ϣ
struct CTORATstpQryRegionConstituentsInfoField
{
		
	///ָ������
	TTORATstpIndexIDType	IndexID;

	///ÿҳ��¼��
	TTORATstpVolumeType	PageCount;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ������ɷֹ�����
struct CTORATstpRegionConstituentsDataField
{
		
	///����ָ������
	TTORATstpIndexIDType	IndexID;

	///����ָ������
	TTORATstpIndustriesNameType	RegionName;

	///��������
	TTORATstpDateType	EntryDate;

	///�޳�����
	TTORATstpDateType	RemoveDate;

	///���±�־
	TTORATstpCurSignType	CurSign;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ѯ�ļ�ί������
struct CTORATstpInquiryFileOrderField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ί����ʼ��ˮ��
	TTORATstpSequenceNoType	OrderSerialBeg;

	///ί�н�����ˮ��
	TTORATstpSequenceNoType	OrderSerialEnd;

	///ί���ύ״̬
	TTORATstpCommitStatusType	CommitStatus;


};

/// �ļ�ί��
struct CTORATstpFileOrderField
{
		
	///������
	TTORATstpRequestIDType	RequestID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///��������
	TTORATstpOrderRefType	OrderRef;

	///�ļ��������
	TTORATstpFileOrderTypeType	FileOrderType;

	///��������
	TTORATstpDirectionType	Direction;

	///�޼۵��۸�
	TTORATstpPriceType	LimitPrice;

	///��������
	TTORATstpVolumeType	VolumeTotalOriginal;

	///ί�з�ʽ
	TTORATstpOperwayType	Operway;

	///������������
	TTORATstpOrderRefType	OrderActionRef;

	///�������
	TTORATstpOrderSysIDType	OrderSysID;

	///ί�м��
	TTORATstpCondCheckType	CondCheck;

	///ί����ˮ��
	TTORATstpSequenceNoType	OrderSerial;

	///�ļ�ί���ύ״̬
	TTORATstpCommitStatusType	CommitStatus;

	///�ļ�ί��״̬��Ϣ
	TTORATstpStatusMsgType	StatusMsg;

	///ί��ʱ���
	TTORATstpBigTimeStampType	TimeStamp;


};

/// �ļ�ί�и�������
struct CTORATstpReviewFileOrderField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ί����ʼ��ˮ��
	TTORATstpSequenceNoType	OrderSerialBeg;

	///ί�н�����ˮ��
	TTORATstpSequenceNoType	OrderSerialEnd;


};

/// �ļ��ύ��Ϣ
struct CTORATstpCommitInfoField
{
		
	///ί����ˮ��
	TTORATstpSequenceNoType	OrderSerial;

	///�ļ�ί���ύ״̬
	TTORATstpCommitStatusType	CommitStatus;

	///�ļ�ί��״̬��Ϣ
	TTORATstpStatusMsgType	StatusMsg;


};

/// ������뽻��֪ͨ
struct CTORATstpReqInsTradingNoticeField
{
		
	///֪ͨ��ˮ��
	TTORATstpSerialType	NoticeSerial;

	///֪ͨ����
	TTORATstpDateType	InsertDate;

	///֪ͨʱ��
	TTORATstpTimeType	InsertTime;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///֪ͨ��Ϣ����
	TTORATstpContentType	Content;

	///����Ա
	TTORATstpUserIDType	OperatorID;


};

/// ����֪ͨ
struct CTORATstpTradingNoticeField
{
		
	///֪ͨ��ˮ��
	TTORATstpSerialType	NoticeSerial;

	///֪ͨ����
	TTORATstpDateType	InsertDate;

	///֪ͨʱ��
	TTORATstpTimeType	InsertTime;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///֪ͨ��Ϣ����
	TTORATstpContentType	Content;

	///����Ա
	TTORATstpUserIDType	OperatorID;


};

/// װ���ļ�ί��
struct CTORATstpLoadFileOrderField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///�Ƿ���Ҫ����
	TTORATstpBoolType	bReview;


};

/// �ļ�ί����Ϣ
struct CTORATstpFileOrderInfoField
{
		
	///������
	TTORATstpRequestIDType	RequestID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///��������
	TTORATstpOrderRefType	OrderRef;

	///�ļ��������
	TTORATstpFileOrderTypeType	FileOrderType;

	///��������
	TTORATstpDirectionType	Direction;

	///�޼۵��۸�
	TTORATstpPriceType	LimitPrice;

	///��������
	TTORATstpVolumeType	VolumeTotalOriginal;

	///ί�з�ʽ
	TTORATstpOperwayType	Operway;

	///������������
	TTORATstpOrderRefType	OrderActionRef;

	///�������
	TTORATstpOrderSysIDType	OrderSysID;

	///ί�м��
	TTORATstpCondCheckType	CondCheck;

	///ί����ˮ��
	TTORATstpSequenceNoType	OrderSerial;

	///�ļ�ί���ύ״̬
	TTORATstpCommitStatusType	CommitStatus;

	///�ļ�ί��״̬��Ϣ
	TTORATstpStatusMsgType	StatusMsg;


};

/// ��ѯ��󱨵�������
struct CTORATstpReqInquiryMaxOrderVolumeField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///��������
	TTORATstpDirectionType	Direction;

	///�����۸�����
	TTORATstpOrderPriceTypeType	OrderPriceType;

	///��Ͽ�ƽ��־
	TTORATstpCombOffsetFlagType	CombOffsetFlag;

	///���Ͷ���ױ���־
	TTORATstpCombHedgeFlagType	CombHedgeFlag;

	///��Ч������
	TTORATstpTimeConditionType	TimeCondition;

	///�ɽ�������
	TTORATstpVolumeConditionType	VolumeCondition;

	///�۸�
	TTORATstpPriceType	LimitPrice;

	///ת�뽻�׵�Ԫ����(����ת�йܲ���ʱ��Ч)
	TTORATstpPbuIDType	TransfereePbuID;

	///���ί������
	TTORATstpVolumeType	MaxVolume;

	///�۹�ͨ������������,Ĭ����������
	TTORATstpLotTypeType	LotType;


};

/// ��ѯ��󱨵���Ӧ��
struct CTORATstpRspInquiryMaxOrderVolumeField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///��������
	TTORATstpDirectionType	Direction;

	///�����۸�����
	TTORATstpOrderPriceTypeType	OrderPriceType;

	///��Ͽ�ƽ��־
	TTORATstpCombOffsetFlagType	CombOffsetFlag;

	///���Ͷ���ױ���־
	TTORATstpCombHedgeFlagType	CombHedgeFlag;

	///��Ч������
	TTORATstpTimeConditionType	TimeCondition;

	///�ɽ�������
	TTORATstpVolumeConditionType	VolumeCondition;

	///�۸�
	TTORATstpPriceType	LimitPrice;

	///ת�뽻�׵�Ԫ����(����ת�йܲ���ʱ��Ч)
	TTORATstpPbuIDType	TransfereePbuID;

	///���ί������
	TTORATstpVolumeType	MaxVolume;

	///�۹�ͨ������������,Ĭ����������
	TTORATstpLotTypeType	LotType;


};

/// ��Χϵͳ��λת�ƻر�
struct CTORATstpRtnPeripheryTransferPositionField
{
		
	///��λ������ˮ��
	TTORATstpIntSerialType	PositionSerial;

	///��λ����������ˮ��
	TTORATstpIntSerialType	ApplySerial;

	///ǰ�ñ��
	TTORATstpFrontIDType	FrontID;

	///�Ự���
	TTORATstpSessionIDType	SessionID;

	///��λ��������
	TTORATstpTransferDirectionType	TransferDirection;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///����������λת��ת������
	TTORATstpVolumeType	TodayBSPos;

	///���������λת������
	TTORATstpVolumeType	TodayPRPos;

	///���ղ�λת������
	TTORATstpVolumeType	HistoryPos;

	///������
	TTORATstpDateType	TradingDay;

	///��λ����ԭ��
	TTORATstpTransferReasonType	TransferReason;

	///ת��״̬
	TTORATstpTransferStatusType	TransferStatus;

	///��������
	TTORATstpDateType	OperateDate;

	///����ʱ��
	TTORATstpTimeType	OperateTime;

	///��������
	TTORATstpDateType	RepealDate;

	///����ʱ��
	TTORATstpTimeType	RepealTime;

	///����ԭ��
	TTORATstpTransferReasonType	RepealReason;

	///״̬��Ϣ
	TTORATstpErrorMsgType	StatusMsg;

	///���ղ�ֺϲ���λת������
	TTORATstpVolumeType	TodaySMPos;


};

/// ��Χϵͳ�ʽ�ת�ƻر�
struct CTORATstpRtnPeripheryTransferFundField
{
		
	///�ʽ������ˮ��
	TTORATstpIntSerialType	FundSerial;

	///�ʽ����������ˮ��
	TTORATstpIntSerialType	ApplySerial;

	///ǰ�ñ��
	TTORATstpFrontIDType	FrontID;

	///�Ự���
	TTORATstpSessionIDType	SessionID;

	///�ʽ��������
	TTORATstpTransferDirectionType	TransferDirection;

	///һ����������
	TTORATstpDepartmentIDType	DepartmentID;

	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///����
	TTORATstpCurrencyIDType	CurrencyID;

	///ת�ƽ��
	TTORATstpMoneyType	Amount;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///�ʽ����ԭ��
	TTORATstpTransferReasonType	TransferReason;

	///ת��״̬
	TTORATstpTransferStatusType	TransferStatus;

	///��������
	TTORATstpDateType	OperateDate;

	///����ʱ��
	TTORATstpTimeType	OperateTime;

	///��������
	TTORATstpDateType	RepealDate;

	///����ʱ��
	TTORATstpTimeType	RepealTime;

	///����ԭ��
	TTORATstpTransferReasonType	RepealReason;

	///״̬��Ϣ
	TTORATstpErrorMsgType	StatusMsg;


};

/// ��ѯ��ʷί��
struct CTORATstpQryHistoryOrderField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///��ʼ����
	TTORATstpDateType	BegDate;

	///��������
	TTORATstpDateType	EndDate;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ÿҳ��¼��
	TTORATstpVolumeType	PageCount;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ʷί����Ϣ
struct CTORATstpHistoryOrderField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///��������
	TTORATstpOrderRefType	OrderRef;

	///�û�����
	TTORATstpUserIDType	UserID;

	///�����۸�����
	TTORATstpOrderPriceTypeType	OrderPriceType;

	///��������
	TTORATstpDirectionType	Direction;

	///��Ͽ�ƽ��־
	TTORATstpCombOffsetFlagType	CombOffsetFlag;

	///���Ͷ���ױ���־
	TTORATstpCombHedgeFlagType	CombHedgeFlag;

	///�۸�
	TTORATstpPriceType	LimitPrice;

	///����
	TTORATstpVolumeType	VolumeTotalOriginal;

	///��Ч������
	TTORATstpTimeConditionType	TimeCondition;

	///�ɽ�������
	TTORATstpVolumeConditionType	VolumeCondition;

	///��С�ɽ���
	TTORATstpVolumeType	MinVolume;

	///ǿƽԭ��
	TTORATstpForceCloseReasonType	ForceCloseReason;

	///������
	TTORATstpRequestIDType	RequestID;

	///���ر������
	TTORATstpOrderLocalIDType	OrderLocalID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///֤ȯ�ڽ���������
	TTORATstpExchangeInstIDType	ExchangeInstID;

	///���׵�Ԫ����
	TTORATstpTraderIDType	TraderID;

	///�����ύ״̬
	TTORATstpOrderSubmitStatusType	OrderSubmitStatus;

	///������
	TTORATstpDateType	TradingDay;

	///ϵͳ�������
	TTORATstpOrderSysIDType	OrderSysID;

	///����״̬
	TTORATstpOrderStatusType	OrderStatus;

	///��������
	TTORATstpOrderTypeType	OrderType;

	///�ѳɽ�����
	TTORATstpVolumeType	VolumeTraded;

	///ʣ��δ�������
	TTORATstpVolumeType	VolumeTotal;

	///��������
	TTORATstpDateType	InsertDate;

	///����ʱ��
	TTORATstpTimeType	InsertTime;

	///����ʱ��
	TTORATstpTimeType	CancelTime;

	///����޸Ľ��׵�Ԫ����
	TTORATstpTraderIDType	ActiveTraderID;

	///ǰ�ñ��
	TTORATstpFrontIDType	FrontID;

	///�Ự���
	TTORATstpSessionIDType	SessionID;

	///�û��˲�Ʒ��Ϣ
	TTORATstpProductInfoType	UserProductInfo;

	///״̬��Ϣ
	TTORATstpErrorMsgType	StatusMsg;

	///�û�ǿ����־
	TTORATstpBoolType	UserForceClose;

	///�����û�����
	TTORATstpUserIDType	ActiveUserID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///IP��ַ
	TTORATstpIPAddressType	IPAddress;

	///Mac��ַ
	TTORATstpMacAddressType	MacAddress;

	///�۹�ͨ������������,Ĭ����������
	TTORATstpLotTypeType	LotType;

	///���ַ���������Ϣ
	TTORATstpBigsInfoType	BInfo;

	///���ַ���������Ϣ
	TTORATstpShortsInfoType	SInfo;

	///���θ�����Ϣ
	TTORATstpIntInfoType	IInfo;

	///ת�뽻�׵�Ԫ����(����ת�йܲ���ʱ��Ч)
	TTORATstpPbuIDType	TransfereePbuID;

	///ί�з�ʽ
	TTORATstpOperwayType	Operway;

	///һ����������
	TTORATstpDepartmentIDType	DepartmentID;

	///�ʵ��Կ���ҵ�����
	TTORATstpProperCtrlBusinessTypeType	ProperCtrlBusinessType;

	///�ʵ��Կ���ͨ����ʾ
	TTORATstpProperCtrlPassFlagType	ProperCtrlPassFlag;

	///�������
	TTORATstpCondCheckType	CondCheck;

	///�Ƿ�Ԥ��
	TTORATstpBoolType	IsCacheOrder;

	///�ɽ����
	TTORATstpMoneyType	Turnover;

	///�ر����Ӹ�����������Ϣ
	TTORATstpFloatInfoType	RtnFloatInfo;

	///�ر�������������
	TTORATstpIntInfoType	RtnIntInfo;

	///Ӳ�����к�
	TTORATstpHDSerialType	HDSerial;

	///�ƶ��豸�ֻ���
	TTORATstpMobileType	Mobile;

	///��Ч����
	TTORATstpDateType	GTDate;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ѯ��ʷ�ɽ�
struct CTORATstpQryHistoryTradeField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///��ʼ����
	TTORATstpDateType	BegDate;

	///��������
	TTORATstpDateType	EndDate;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ÿҳ��¼��
	TTORATstpVolumeType	PageCount;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ʷ�ɽ���Ϣ
struct CTORATstpHistoryTradeField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///�û�����
	TTORATstpUserIDType	UserID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�ɽ����
	TTORATstpTradeIDType	TradeID;

	///��������
	TTORATstpDirectionType	Direction;

	///ϵͳ�������
	TTORATstpOrderSysIDType	OrderSysID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///֤ȯ�ڽ���������
	TTORATstpExchangeInstIDType	ExchangeInstID;

	///��ƽ��־
	TTORATstpOffsetFlagType	OffsetFlag;

	///Ͷ���ױ���־
	TTORATstpHedgeFlagType	HedgeFlag;

	///�ɽ��۸�
	TTORATstpPriceType	Price;

	///�ɽ�����
	TTORATstpVolumeType	Volume;

	///�ɽ�����
	TTORATstpDateType	TradeDate;

	///�ɽ�ʱ��
	TTORATstpTimeType	TradeTime;

	///���׵�Ԫ����
	TTORATstpTraderIDType	TraderID;

	///���ر������
	TTORATstpOrderLocalIDType	OrderLocalID;

	///������
	TTORATstpDateType	TradingDay;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///��������
	TTORATstpOrderRefType	OrderRef;

	///һ����������
	TTORATstpDepartmentIDType	DepartmentID;

	///ʵ��Ӷ��
	TTORATstpPriceType	ActualBrokerage;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ¼�����¼�
struct CTORATstpInputRemarkEventField
{
		
	///¼�����¼����
	TTORATstpEventSequenceNoType	SequenceNo;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///�������
	TTORATstpRemarkType	Remark;


};

/// ¼�����¼��������
struct CTORATstpRspInputRemarkEventField
{
		
	///¼�����¼����
	TTORATstpEventSequenceNoType	SequenceNo;

	///��������
	TTORATstpDateType	EventDate;

	///����ʱ��
	TTORATstpTimeType	EventTime;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///�������
	TTORATstpRemarkType	Remark;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;


};

/// ���±���¼�
struct CTORATstpUpdateRemarkEventField
{
		
	///¼�����¼���ţ���ѯ���������ɸ��£�
	TTORATstpEventSequenceNoType	SequenceNo;

	///�������ڣ�������ų�ͻʱ��Ϊ��ѯ����ʹ�á����ɸ��£�
	TTORATstpDateType	EventDate;

	///����ʱ�䣨������ų�ͻʱ��Ϊ��ѯ����ʹ�á����ɸ��£�
	TTORATstpTimeType	EventTime;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///�������
	TTORATstpRemarkType	Remark;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;


};

/// ���±���¼��������
struct CTORATstpRspUpdateRemarkEventField
{
		
	///¼�����¼���ţ���ѯ���������ɸ��£�
	TTORATstpEventSequenceNoType	SequenceNo;

	///�������ڣ�������ų�ͻʱ��Ϊ��ѯ����ʹ�á����ɸ��£�
	TTORATstpDateType	EventDate;

	///����ʱ�䣨������ų�ͻʱ��Ϊ��ѯ����ʹ�á����ɸ��£�
	TTORATstpTimeType	EventTime;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///�������
	TTORATstpRemarkType	Remark;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;


};

/// ɾ������¼�
struct CTORATstpDeleteRemarkEventField
{
		
	///ɾ������¼���ţ���ѯ����������Ϊ�գ�
	TTORATstpEventSequenceNoType	SequenceNo;

	///�������ڣ�������ų�ͻʱ��Ϊ��ѯ����ʹ�á���Ϊ�գ�
	TTORATstpDateType	EventDate;

	///����ʱ�䣨������ų�ͻʱ��Ϊ��ѯ����ʹ�á���Ϊ�գ�
	TTORATstpTimeType	EventTime;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;


};

/// ɾ������¼��������
struct CTORATstpRspDeleteRemarkEventField
{
		

};

/// ��ѯ��ʷ����¼�
struct CTORATstpQryRemarkEventField
{
		
	///¼�����¼����
	TTORATstpEventSequenceNoType	SequenceNo;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///������ʼ����
	TTORATstpDateType	EventDateStart;

	///������������
	TTORATstpDateType	EventDateEnd;

	///������ʼʱ��
	TTORATstpTimeType	EventTimeStart;

	///��������ʱ��
	TTORATstpTimeType	EventTimeEnd;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///ÿҳ��¼��
	TTORATstpVolumeType	PageCount;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ����¼�
struct CTORATstpRemarkEventField
{
		
	///¼�����¼����
	TTORATstpEventSequenceNoType	SequenceNo;

	///��������
	TTORATstpDateType	EventDate;

	///����ʱ��
	TTORATstpTimeType	EventTime;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///�������
	TTORATstpRemarkType	Remark;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///ҳ��λ��
	TTORATstpPageLocateType	PageLocate;


};

/// ��ѯ������
struct CTORATstpQryExchangeField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;


};

/// ������
struct CTORATstpExchangeField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///����������
	TTORATstpNameType	ExchangeName;

	///������
	TTORATstpDateType	TradingDay;


};

/// ��ѯPBU
struct CTORATstpQryPBUField
{
		
	///���׵�Ԫ����
	TTORATstpPbuIDType	PbuID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;


};

/// PBU
struct CTORATstpPBUField
{
		
	///���׵�Ԫ����
	TTORATstpPbuIDType	PbuID;

	///���׵�Ԫ����
	TTORATstpNameType	PbuName;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;


};

/// ��ѯʵʱ����
struct CTORATstpQryMarketDataField
{
		
	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;


};

/// ��ѯ֤ȯ��Ϣ
struct CTORATstpQrySecurityField
{
		
	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ�ڽ���������
	TTORATstpExchangeInstIDType	ExchangeInstID;

	///��Ʒ����
	TTORATstpProductIDType	ProductID;


};

/// ֤ȯ��Ϣ
struct CTORATstpSecurityField
{
		
	///��Լ����
	TTORATstpSecurityIDType	SecurityID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///��Լ����
	TTORATstpSecurityNameType	SecurityName;

	///��Լ�ڽ������Ĵ���
	TTORATstpExchangeInstIDType	ExchangeInstID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///��Ʒ����
	TTORATstpProductIDType	ProductID;

	///֤ȯ������
	TTORATstpSecurityTypeType	SecurityType;

	///�걨��λ
	TTORATstpOrderUnitType	OrderUnit;

	///�޼����뽻�׵�λ
	TTORATstpTradingUnitType	LimitBuyTradingUnit;

	///�޼��������׵�λ
	TTORATstpTradingUnitType	LimitSellTradingUnit;

	///�м۵�������µ���
	TTORATstpVolumeType	MaxMarketOrderBuyVolume;

	///�м۵�����С�µ���
	TTORATstpVolumeType	MinMarketOrderBuyVolume;

	///�޼۵�������µ���
	TTORATstpVolumeType	MaxLimitOrderBuyVolume;

	///�޼۵�����С�µ���
	TTORATstpVolumeType	MinLimitOrderBuyVolume;

	///�м۵�������µ���
	TTORATstpVolumeType	MaxMarketOrderSellVolume;

	///�м۵�����С�µ���
	TTORATstpVolumeType	MinMarketOrderSellVolume;

	///�޼۵�������µ���
	TTORATstpVolumeType	MaxLimitOrderSellVolume;

	///�޼۵�����С�µ���
	TTORATstpVolumeType	MinLimitOrderSellVolume;

	///��������
	TTORATstpVolumeMultipleType	VolumeMultiple;

	///��С�䶯��λ
	TTORATstpPriceTickType	PriceTick;

	///������
	TTORATstpDateType	OpenDate;

	///�ֲ�����
	TTORATstpPositionTypeType	PositionType;

	///��ֵ
	TTORATstpParValueType	ParValue;

	///֤ȯ״̬
	TTORATstpSecurityStatusType	SecurityStatus;

	///ծȯӦ����Ϣ
	TTORATstpInterestType	BondInterest;

	///������
	TTORATstpRatioType	ConversionRate;

	///�Ƿ񵣱�Ʒ
	TTORATstpBoolType	IsCollateral;

	///�����̼�
	TTORATstpPriceType	PreClosePrice;

	///��ͣ���
	TTORATstpPriceType	UpperLimitPrice;

	///��ͣ���
	TTORATstpPriceType	LowerLimitPrice;

	///������
	TTORATstpDateType	TradingDay;

	///֤ȯ����(��)
	TTORATstpShortSecurityNameType	ShortSecurityName;

	///�м����뽻�׵�λ
	TTORATstpTradingUnitType	MarketBuyTradingUnit;

	///�м��������׵�λ
	TTORATstpTradingUnitType	MarketSellTradingUnit;

	///�̺󶨼����뽻�׵�λ
	TTORATstpTradingUnitType	FixPriceBuyTradingUnit;

	///�̺󶨼��������׵�λ
	TTORATstpTradingUnitType	FixPriceSellTradingUnit;

	///�̺󶨼�������µ���
	TTORATstpVolumeType	MaxFixPriceOrderBuyVolume;

	///�̺󶨼�����С�µ���
	TTORATstpVolumeType	MinFixPriceOrderBuyVolume;

	///�̺󶨼�������µ���
	TTORATstpVolumeType	MaxFixPriceOrderSellVolume;

	///�̺󶨼�����С�µ���
	TTORATstpVolumeType	MinFixPriceOrderSellVolume;


};

/// ��ѯETF�嵥��Ϣ
struct CTORATstpQryETFFileField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///ETF�����г����״���
	TTORATstpSecurityIDType	ETFSecurityID;

	///ETFһ���г��������
	TTORATstpSecurityIDType	ETFCreRedSecurityID;


};

/// ETF�嵥��Ϣ
struct CTORATstpETFFileField
{
		
	///������
	TTORATstpDateType	TradingDay;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///ETF���״���
	TTORATstpSecurityIDType	ETFSecurityID;

	///ETF�������
	TTORATstpSecurityIDType	ETFCreRedSecurityID;

	///��С�깺��ص�λ����
	TTORATstpVolumeType	CreationRedemptionUnit;

	///����ֽ��������
	TTORATstpRatioType	Maxcashratio;

	///�Ƿ���깺
	TTORATstpBoolType	CreationStatus;

	///�Ƿ�����
	TTORATstpBoolType	RedemptionStatus;

	///Ԥ���ֽ���
	TTORATstpMoneyType	EstimateCashComponent;

	///ǰһ�������ֽ���
	TTORATstpMoneyType	CashComponent;

	///ǰһ�����ջ���λ��ֵ
	TTORATstpMoneyType	NAV;

	///ǰһ�����������׼��λ��ֵ
	TTORATstpMoneyType	NAVperCU;

	///�����깺��ػ�׼��λ�ĺ������
	TTORATstpMoneyType	DividendPerCU;

	///ETF��������
	TTORATstpCreRedTypeType	ETFCreRedType;

	///ETF֤ȯ����
	TTORATstpSecurityNameType	ETFSecurityName;


};

/// ��ѯETF�ɷ�֤ȯ��Ϣ
struct CTORATstpQryETFBasketField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///ETF�����г����״���
	TTORATstpSecurityIDType	ETFSecurityID;

	///ETF�ɷ�֤ȯ����
	TTORATstpSecurityIDType	SecurityID;


};

/// ETF�ɷ�֤ȯ��Ϣ
struct CTORATstpETFBasketField
{
		
	///������
	TTORATstpDateType	TradingDay;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///ETF���״���
	TTORATstpSecurityIDType	ETFSecurityID;

	///ETF�ɷ�֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///�ɷ�֤ȯ����
	TTORATstpSecurityNameType	SecurityName;

	///�ɷ�֤ȯ����
	TTORATstpVolumeType	Volume;

	///�ֽ������־
	TTORATstpETFCurrenceReplaceStatusType	ETFCurrenceReplaceStatus;

	///��۱���
	TTORATstpRatioType	Premium;

	///�깺������
	TTORATstpMoneyType	CreationReplaceAmount;

	///���������
	TTORATstpMoneyType	RedemptionReplaceAmount;

	///�����г�
	TTORATstpMarketIDType	MarketID;

	///ETF��������
	TTORATstpCreRedTypeType	ETFCreRedType;


};

/// ��ѯ���͹�˾������Ϣ
struct CTORATstpQryDepartmentInfoField
{
		
	///һ����������
	TTORATstpDepartmentIDType	DepartmentID;


};

/// ���͹�˾������Ϣ
struct CTORATstpDepartmentInfoField
{
		
	///���͹�˾���Ŵ���
	TTORATstpDepartmentIDType	DepartmentID;

	///���͹�˾��������
	TTORATstpNameType	DepartmentName;


};

/// ��ѯ�¹���Ϣ
struct CTORATstpQryIPOInfoField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�깺����
	TTORATstpSecurityIDType	SecurityID;


};

/// �¹���Ϣ
struct CTORATstpIPOInfoField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�깺����
	TTORATstpSecurityIDType	SecurityID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///��Ʒ����
	TTORATstpProductIDType	ProductID;

	///֤ȯ������
	TTORATstpSecurityTypeType	SecurityType;

	///�����깺����
	TTORATstpVolumeType	OnlineLimit;

	///���м۸�
	TTORATstpPriceType	Price;

	///���ִ���
	TTORATstpCurrencyIDType	CurrencyID;

	///�깺֤ȯ����
	TTORATstpSecurityNameType	SecurityName;

	///�¹�֤ȯ����
	TTORATstpSecurityIDType	UnderlyingSecurityID;

	///�¹�֤ȯ����
	TTORATstpSecurityNameType	UnderlyingSecurityName;

	///�����깺��С����
	TTORATstpVolumeType	OnlineMinVol;

	///�����깺��λ����
	TTORATstpVolumeType	OnlineVolUnit;

	///���з�ʽ
	TTORATstpIssueModeType	IssueMode;

	///������
	TTORATstpDateType	TradingDay;


};

/// ��ѯBrokerUserFunction
struct CTORATstpQryBrokerUserFunctionField
{
		
	///�û�����
	TTORATstpUserIDType	UserID;


};

/// BrokerUserFunction
struct CTORATstpBrokerUserFunctionField
{
		
	///�û�����
	TTORATstpUserIDType	UserID;

	///���ܴ���
	TTORATstpFunctionIDType	FunctionID;


};

/// ��ѯ���͹�˾�û���Ͷ���߹�ϵ
struct CTORATstpQryBUProxyField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///�û�����
	TTORATstpUserIDType	UserID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;


};

/// ���͹�˾�û���Ͷ���߹�ϵ
struct CTORATstpBUProxyField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///�û�����
	TTORATstpUserIDType	UserID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///һ�������������
	TTORATstpDepartmentIDType	ManageDepartmentID;

	///������������
	TTORATstpBranchIDType	InnerBranchID;


};

/// ��ѯUser
struct CTORATstpQryUserField
{
		
	///�û�����
	TTORATstpUserIDType	UserID;

	///�û�����
	TTORATstpUserTypeType	UserType;


};

/// User
struct CTORATstpUserField
{
		
	///�û�����
	TTORATstpUserIDType	UserID;

	///�û�����
	TTORATstpUserNameType	UserName;

	///�û�����
	TTORATstpUserTypeType	UserType;

	///�Ƿ��Ծ
	TTORATstpBoolType	IsActive;

	///��¼����
	TTORATstpLoginLimitType	LoginLimit;


};

/// ��ѯͶ����
struct CTORATstpQryInvestorField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;


};

/// Ͷ����
struct CTORATstpInvestorField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///Ͷ��������
	TTORATstpInvestorNameType	InvestorName;

	///֤������
	TTORATstpIdCardTypeType	IdCardType;

	///֤������
	TTORATstpIdCardNoType	IdCardNo;

	///��ϵ�绰
	TTORATstpTelephoneType	Telephone;

	///ͨѶ��ַ
	TTORATstpAddressType	Address;

	///��������
	TTORATstpDateType	OpenDate;

	///�ֻ�
	TTORATstpMobileType	Mobile;

	///ί�з�ʽ
	TTORATstpOperwaysType	Operways;

	///�ͻ����յȼ�
	TTORATstpCRiskLevelType	CRiskLevel;

	///רҵͶ�������
	TTORATstpProfInvestorTypeType	ProfInvestorType;

	///һ����������
	TTORATstpDepartmentIDType	DepartmentID;

	///������������
	TTORATstpBranchIDType	InnerBranchID;

	///һ�������������
	TTORATstpDepartmentIDType	ManageDepartmentID;

	///�Ƿ��Ծ
	TTORATstpBoolType	IsActive;

	///��¼����
	TTORATstpLoginLimitType	LoginLimit;


};

/// ��ѯ���ױ���
struct CTORATstpQryShareholderAccountField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�ɶ��˻��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///�ɶ��˻�����
	TTORATstpClientIDTypeType	TradingCodeClass;


};

/// ���ױ���
struct CTORATstpShareholderAccountField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�ͻ�����
	TTORATstpShareholderIDType	ShareholderID;

	///���ױ�������
	TTORATstpClientIDTypeType	ClientIDType;

	///�г�����
	TTORATstpMarketIDType	MarketID;


};

/// ��ѯͶ�ʵ�Ԫ
struct CTORATstpQryBusinessUnitField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;


};

/// Ͷ�ʵ�Ԫ
struct CTORATstpBusinessUnitField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitNameType	BusinessUnitName;


};

/// ��ѯͶ�ʵ�Ԫ�뽻���˻���ϵ
struct CTORATstpQryBusinessUnitAndTradingAcctField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///��Ʒ����
	TTORATstpProductIDType	ProductID;

	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///����
	TTORATstpCurrencyIDType	CurrencyID;


};

/// Ͷ�ʵ�Ԫ�뽻���˻���ϵ
struct CTORATstpBusinessUnitAndTradingAcctField
{
		
	///���͹�˾����
	TTORATstpInvestorIDType	InvestorID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�ͻ�����
	TTORATstpShareholderIDType	ShareholderID;

	///��Ʒ����
	TTORATstpProductIDType	ProductID;

	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///�ʽ��˻�����
	TTORATstpCurrencyIDType	CurrencyID;

	///�û�����
	TTORATstpUserIDType	UserID;


};

/// ��ѯ����
struct CTORATstpQryOrderField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///ϵͳ�������
	TTORATstpOrderSysIDType	OrderSysID;

	///Insert Time
	TTORATstpTimeType	InsertTimeStart;

	///Insert Time
	TTORATstpTimeType	InsertTimeEnd;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///���ַ���������Ϣ
	TTORATstpBigsInfoType	BInfo;

	///���ַ���������Ϣ
	TTORATstpShortsInfoType	SInfo;

	///���θ�����Ϣ
	TTORATstpIntInfoType	IInfo;

	///�Ƿ�ɳ�
	TTORATstpBoolType	IsCancel;


};

/// ��ѯ����
struct CTORATstpQryOrderActionField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///���ַ���������Ϣ
	TTORATstpBigsInfoType	BInfo;

	///���ַ���������Ϣ
	TTORATstpShortsInfoType	SInfo;

	///���θ�����Ϣ
	TTORATstpIntInfoType	IInfo;


};

/// ��ѯ�ɽ�
struct CTORATstpQryTradeField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///�ɽ����
	TTORATstpTradeIDType	TradeID;

	///Insert Time
	TTORATstpTimeType	TradeTimeStart;

	///Insert Time
	TTORATstpTimeType	TradeTimeEnd;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;


};

/// ��ѯ�ʽ��˻�
struct CTORATstpQryTradingAccountField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///����
	TTORATstpCurrencyIDType	CurrencyID;

	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///�ʽ��˻�����
	TTORATstpAccountTypeType	AccountType;

	///һ����������
	TTORATstpDepartmentIDType	DepartmentID;


};

/// �ʽ��˻�
struct CTORATstpTradingAccountField
{
		
	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///�����ʽ�
	TTORATstpMoneyType	Available;

	///��ȡ�ʽ�
	TTORATstpMoneyType	WithdrawQuota;

	///���ִ���
	TTORATstpCurrencyIDType	CurrencyID;

	///�����
	TTORATstpMoneyType	Deposit;

	///������
	TTORATstpMoneyType	Withdraw;

	///����δ���ս��(�۹�ͨר���ֶ�)
	TTORATstpMoneyType	UnDeliveredMoney;

	///������ʽ�(�۹�ͨ���ֶβ�����δ���ղ��ֶ����ʽ�)
	TTORATstpMoneyType	FrozenCash;

	///�����������(�۹�ͨ���ֶβ�����δ���ղ��ֶ���������)
	TTORATstpMoneyType	FrozenCommission;

	///����δ���ս��(�۹�ͨר���ֶ�)
	TTORATstpMoneyType	PreUnDeliveredMoney;

	///������(�۹�ͨ���ֶβ�����δ���ղ���������)
	TTORATstpMoneyType	Commission;

	///�ʽ��˻�����
	TTORATstpAccountTypeType	AccountType;

	///�ʽ��˻�����Ͷ���ߴ���
	TTORATstpInvestorIDType	AccountOwner;

	///���Ŵ���
	TTORATstpDepartmentIDType	DepartmentID;

	///���д���
	TTORATstpBankIDType	BankID;

	///�����˻�
	TTORATstpBankAccountIDType	BankAccountID;

	///����δ���ս��(�۹�ͨר��)
	TTORATstpMoneyType	UnDeliveredFrozenCash;

	///����δ����������(�۹�ͨר��)
	TTORATstpMoneyType	UnDeliveredFrozenCommission;

	///ռ��δ����������(�۹�ͨר��)
	TTORATstpMoneyType	UnDeliveredCommission;


};

/// ��ѯͶ���ֲ߳�
struct CTORATstpQryPositionField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;


};

/// Ͷ���ֲ߳�
struct CTORATstpPositionField
{
		
	///��Լ����
	TTORATstpSecurityIDType	SecurityID;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�ͻ�����
	TTORATstpShareholderIDType	ShareholderID;

	///������
	TTORATstpDateType	TradingDay;

	///���
	TTORATstpVolumeType	HistoryPos;

	///��ֶ���
	TTORATstpVolumeType	HistoryPosFrozen;

	///��������
	TTORATstpVolumeType	TodayBSPos;

	///�������ֶ���
	TTORATstpVolumeType	TodayBSFrozen;

	///��������ֲ�
	TTORATstpVolumeType	TodayPRPos;

	///��������ֲֶ���
	TTORATstpVolumeType	TodayPRFrozen;

	///�ֲֳɱ�
	TTORATstpMoneyType	TotalPosCost;

	///���ֺϲ��ֲ�
	TTORATstpVolumeType	TodaySMPos;

	///���ֺϲ��ֲֶ���
	TTORATstpVolumeType	TodaySMPosFrozen;

	///�����ֶ�
	TTORATstpVolumeType	MarginBuyPos;

	///�����ֶ�
	TTORATstpVolumeType	ShortSellPos;

	///�ϴ����(���в���)
	TTORATstpVolumeType	PrePosition;

	///�ɷݿ���
	TTORATstpVolumeType	AvailablePosition;

	///�ɷ����
	TTORATstpVolumeType	CurrentPosition;

	///���¼�
	TTORATstpPriceType	LastPrice;

	///���ֳɱ�
	TTORATstpMoneyType	OpenPosCost;

	///֤ȯ����
	TTORATstpSecurityNameType	SecurityName;


};

/// ��ѯ�������׷���
struct CTORATstpQryTradingFeeField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;


};

/// �������׷���
struct CTORATstpTradingFeeField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///��Ʒ����
	TTORATstpProductIDType	ProductID;

	///֤ȯ������
	TTORATstpSecurityTypeType	SecurityType;

	///��Լ����
	TTORATstpSecurityIDType	SecurityID;

	///ҵ�����
	TTORATstpBizClassType	BizClass;

	///ӡ��˰(�۹�ӡ��˰)�������ȡ����
	TTORATstpRatioType	StampTaxRatioByAmt;

	///ӡ��˰(�۹�ӡ��˰)����ֵ��ȡ����
	TTORATstpRatioType	StampTaxRatioByPar;

	///ӡ��˰(�۹�ӡ��˰,��λ�۱�)������ȡ���
	TTORATstpMoneyType	StampTaxFeePerOrder;

	///ӡ��˰(�۹�ӡ��˰,��λ�۱�)�����ȡ���
	TTORATstpMoneyType	StampTaxFeeMin;

	///ӡ��˰(�۹�ӡ��˰,��λ�۱�)�����ȡ���
	TTORATstpMoneyType	StampTaxFeeMax;

	///������(�۹�֤ȯ��Ϸ�)�������ȡ����
	TTORATstpRatioType	TransferRatioByAmt;

	///������(�۹�֤ȯ��Ϸ�)����ֵ��ȡ����
	TTORATstpRatioType	TransferRatioByPar;

	///������(�۹�֤ȯ��Ϸ�,��λ�۱�)������ȡ���
	TTORATstpMoneyType	TransferFeePerOrder;

	///������(�۹�֤ȯ��Ϸ�,��λ�۱�)�����ȡ���
	TTORATstpMoneyType	TransferFeeMin;

	///������(�۹�֤ȯ��Ϸ�,��λ�۱�)�����ȡ���
	TTORATstpMoneyType	TransferFeeMax;

	///���ַ�(�۹ɽ��׷�)�������ȡ����
	TTORATstpRatioType	HandlingRatioByAmt;

	///���ַ�(�۹ɽ��׷�)����ֵ��ȡ����
	TTORATstpRatioType	HandlingRatioByPar;

	///���ַ�(�۹ɽ��׷�,��λ�۱�)������ȡ���
	TTORATstpMoneyType	HandlingFeePerOrder;

	///���ַ�(�۹ɽ��׷�,��λ�۱�)�����ȡ���
	TTORATstpMoneyType	HandlingFeeMin;

	///���ַ�(�۹ɽ��׷�,��λ�۱�)�����ȡ���
	TTORATstpMoneyType	HandlingFeeMax;

	///֤�ܷ�(�۹ɽ�������)�������ȡ����
	TTORATstpRatioType	RegulateRatioByAmt;

	///֤�ܷ�(�۹ɽ�������)����ֵ��ȡ����
	TTORATstpRatioType	RegulateRatioByPar;

	///֤�ܷ�(�۹ɽ�������,��λ�۱�)������ȡ���
	TTORATstpMoneyType	RegulateFeePerOrder;

	///֤�ܷ�(�۹ɽ�������,��λ�۱�)�����ȡ���
	TTORATstpMoneyType	RegulateFeeMin;

	///֤�ܷ�(�۹ɽ�������,��λ�۱�)�����ȡ���
	TTORATstpMoneyType	RegulateFeeMax;

	///������(�۹�֤ȯ��Ϸ�,��λ�۱�)��������ȡ���
	TTORATstpMoneyType	TransferFeeByVolume;

	///���ַ�(�۹ɽ��׷�,��λ�۱�)��������ȡ���
	TTORATstpMoneyType	HandlingFeeByVolume;

	///�����(�۹ɹɷݽ��շ�)�������ȡ����
	TTORATstpRatioType	SettlementRatioByAmt;

	///�����(�۹ɹɷݽ��շ�)����ֵ��ȡ����
	TTORATstpRatioType	SettlementRatioByPar;

	///�����(�۹ɹɷݽ��շ�,��λ�۱�)������ȡ���
	TTORATstpMoneyType	SettlementFeePerOrder;

	///�����(�۹ɹɷݽ��շ�,��λ�۱�)��������ȡ���
	TTORATstpMoneyType	SettlementFeeByVolume;

	///�����(�۹ɹɷݽ��շ�,��λ�۱�)�����ȡ���
	TTORATstpMoneyType	SettlementFeeMin;

	///�����(�۹ɹɷݽ��շ�,��λ�۱�)�����ȡ���
	TTORATstpMoneyType	SettlementFeeMax;

	///ӡ��˰(�۹�ӡ��˰,��λ�۱�)��������ȡ���
	TTORATstpMoneyType	StampTaxFeeByVolume;

	///֤�ܷ�(�۹ɽ�������,��λ�۱�)��������ȡ���
	TTORATstpMoneyType	RegulateFeeByVolume;


};

/// ��ѯӶ�����
struct CTORATstpQryInvestorTradingFeeField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///һ����������
	TTORATstpDepartmentIDType	DepartmentID;


};

/// Ӷ�����
struct CTORATstpInvestorTradingFeeField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///��Ʒ����
	TTORATstpProductIDType	ProductID;

	///֤ȯ������
	TTORATstpSecurityTypeType	SecurityType;

	///��Լ����
	TTORATstpSecurityIDType	SecurityID;

	///ҵ�����
	TTORATstpBizClassType	BizClass;

	///Ӷ������
	TTORATstpBrokerageTypeType	BrokerageType;

	///Ӷ�𰴽����ȡ����
	TTORATstpRatioType	RatioByAmt;

	///Ӷ����ֵ��ȡ����
	TTORATstpRatioType	RatioByPar;

	///Ӷ�𰴱���ȡ���
	TTORATstpMoneyType	FeePerOrder;

	///Ӷ�������ȡ���
	TTORATstpMoneyType	FeeMin;

	///Ӷ�������ȡ���
	TTORATstpMoneyType	FeeMax;

	///Ӷ��������ȡ���
	TTORATstpMoneyType	FeeByVolume;

	///���͹�˾���Ŵ���
	TTORATstpDepartmentIDType	DepartmentID;

	///��������
	TTORATstpOrderTypeType	OrderType;


};

/// ��ѯ�¹��깺���
struct CTORATstpQryIPOQuotaField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;


};

/// �¹��깺���
struct CTORATstpIPOQuotaField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�ͻ�����
	TTORATstpShareholderIDType	ShareholderID;

	///���깺���
	TTORATstpLongVolumeType	MaxVolume;

	///�ƴ�����깺���
	TTORATstpLongVolumeType	KCMaxVolume;


};

/// ��ѯ�г�
struct CTORATstpQryMarketField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;


};

/// �г�
struct CTORATstpMarketField
{
		
	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�г�����
	TTORATstpNameType	MarketName;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�״̬
	TTORATstpMarketStatusType	MarketStatus;


};

/// ��ѯ������ϸ�ʽ�
struct CTORATstpQryOrderFundDetailField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///ϵͳ�������
	TTORATstpOrderSysIDType	OrderSysID;

	///Insert Time
	TTORATstpTimeType	InsertTimeStart;

	///Insert Time
	TTORATstpTimeType	InsertTimeEnd;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;


};

/// ������ϸ�ʽ�
struct CTORATstpOrderFundDetailField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///��Լ����
	TTORATstpSecurityIDType	SecurityID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///������
	TTORATstpDateType	TradingDay;

	///ϵͳ�������
	TTORATstpOrderSysIDType	OrderSysID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///��ʼ������
	TTORATstpMoneyType	TotalFrozen;

	///�ܷ���
	TTORATstpMoneyType	TotalFee;

	///ӡ��˰(�۹�Ϊӡ��˰)
	TTORATstpMoneyType	StampTaxFee;

	///���ַ�(�۹�Ϊ���׷�)
	TTORATstpMoneyType	HandlingFee;

	///������(�۹�Ϊ֤ȯ��Ϸ�)
	TTORATstpMoneyType	TransferFee;

	///֤�ܷ�(�۹�Ϊ��������)
	TTORATstpMoneyType	RegulateFee;

	///Ӷ��
	TTORATstpMoneyType	BrokerageFee;

	///�����(�۹�Ϊ�ɷݽ��շ�)
	TTORATstpMoneyType	SettlementFee;

	///��ʼ������úϼ�
	TTORATstpMoneyType	TotalFeeFrozen;

	///������ʼ������
	TTORATstpMoneyType	OrderAmount;


};

/// ��ѯ�ʽ�ת����ˮ
struct CTORATstpQryFundTransferDetailField
{
		
	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///����
	TTORATstpCurrencyIDType	CurrencyID;

	///ת�Ʒ���
	TTORATstpTransferDirectionType	TransferDirection;

	///һ����������
	TTORATstpDepartmentIDType	DepartmentID;


};

/// �ʽ�ת����ˮ
struct CTORATstpFundTransferDetailField
{
		
	///ת����ˮ��
	TTORATstpSerialType	FundSerial;

	///������ˮ��
	TTORATstpExternalSerialType	ApplySerial;

	///ǰ�ñ��
	TTORATstpFrontIDType	FrontID;

	///�Ự���
	TTORATstpSessionIDType	SessionID;

	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///����
	TTORATstpCurrencyIDType	CurrencyID;

	///ת�Ʒ���
	TTORATstpTransferDirectionType	TransferDirection;

	///�������
	TTORATstpMoneyType	Amount;

	///ת��״̬
	TTORATstpTransferStatusType	TransferStatus;

	///������Դ
	TTORATstpOperateSourceType	OperateSource;

	///������Ա
	TTORATstpUserIDType	OperatorID;

	///��������
	TTORATstpDateType	OperateDate;

	///����ʱ��
	TTORATstpTimeType	OperateTime;

	///״̬��Ϣ
	TTORATstpErrorMsgType	StatusMsg;

	///���͹�˾���Ŵ���
	TTORATstpDepartmentIDType	DepartmentID;

	///���д���
	TTORATstpBankIDType	BankID;

	///ǩԼ�����˻�
	TTORATstpBankAccountIDType	BankAccountID;

	///IP��ַ
	TTORATstpIPAddressType	IPAddress;

	///Mac��ַ
	TTORATstpMacAddressType	MacAddress;

	///Ӳ�����к�
	TTORATstpHDSerialType	HDSerial;

	///�ƶ��豸�ֻ���
	TTORATstpMobileType	Mobile;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///�ⲿϵͳ�ڵ��
	TTORATstpNodeIDType	ExternalNodeID;


};

/// ��ѯ�ֲ�ת����ˮ
struct CTORATstpQryPositionTransferDetailField
{
		
	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ת�Ʒ���
	TTORATstpTransferDirectionType	TransferDirection;


};

/// �ֲ�ת����ˮ
struct CTORATstpPositionTransferDetailField
{
		
	///��ˮ��
	TTORATstpSerialType	PositionSerial;

	///������ˮ��
	TTORATstpExternalSerialType	ApplySerial;

	///ǰ�ñ��
	TTORATstpFrontIDType	FrontID;

	///�Ự���
	TTORATstpSessionIDType	SessionID;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�����˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///��������
	TTORATstpDateType	TradingDay;

	///ת�Ʒ���
	TTORATstpTransferDirectionType	TransferDirection;

	///ת�Ƴֲ�����
	TTORATstpTransferPositionTypeType	TransferPositionType;

	///ת��״̬
	TTORATstpTransferStatusType	TransferStatus;

	///���ղ�λ����
	TTORATstpVolumeType	HistoryVolume;

	///����������λ����
	TTORATstpVolumeType	TodayBSVolume;

	///���������λ����
	TTORATstpVolumeType	TodayPRVolume;

	///������Ա
	TTORATstpUserIDType	OperatorID;

	///��������
	TTORATstpDateType	OperateDate;

	///����ʱ��
	TTORATstpTimeType	OperateTime;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///״̬��Ϣ
	TTORATstpErrorMsgType	StatusMsg;

	///IP��ַ
	TTORATstpIPAddressType	IPAddress;

	///Mac��ַ
	TTORATstpMacAddressType	MacAddress;

	///Ӳ�����к�
	TTORATstpHDSerialType	HDSerial;

	///�ƶ��豸�ֻ���
	TTORATstpMobileType	Mobile;

	///�ⲿ�ڵ���
	TTORATstpNodeIDType	ExternalNodeID;


};

/// ��ѯͶ������Ѻ�ֲ�
struct CTORATstpQryPledgePositionField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;


};

/// Ͷ������Ѻ�ֲ�
struct CTORATstpPledgePositionField
{
		
	///��Լ����
	TTORATstpSecurityIDType	SecurityID;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�ͻ�����
	TTORATstpShareholderIDType	ShareholderID;

	///������
	TTORATstpDateType	TradingDay;

	///������Ѻ�ֲ�
	TTORATstpVolumeType	HisPledgePos;

	///������Ѻ�ֲֶ���
	TTORATstpVolumeType	HisPledgePosFrozen;

	///����������Ѻ�ֲ�
	TTORATstpVolumeType	TodayPledgePos;

	///����������Ѻ�ֲֶ���
	TTORATstpVolumeType	TodayPledgePosFrozen;

	///������Ѻ������ȯ����
	TTORATstpVolumeType	PreTotalPledgePos;

	///������Ѻ������ȯ��������
	TTORATstpVolumeType	preAvailablePledgePos;


};

/// ��ѯ֤ȯ��Ѻ��Ϣ
struct CTORATstpQryPledgeInfoField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;


};

/// ֤ȯ��Ѻ��Ϣ
struct CTORATstpPledgeInfoField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///��Ѻ�걨����
	TTORATstpSecurityIDType	PledgeOrderID;

	///��׼ȯ����
	TTORATstpSecurityIDType	StandardBondID;

	///�Ƿ�����
	TTORATstpBoolType	AllowPledgeIn;

	///�Ƿ�ɳ���
	TTORATstpBoolType	AllowPledgeOut;

	///��׼ȯ������/����ֵ
	TTORATstpRatioType	ConversionRate;

	///ÿ�ο���������С���׵�λ
	TTORATstpTradingUnitType	PledgeInTradingUnit;

	///ÿ�ο��Գ������С���׵�λ
	TTORATstpTradingUnitType	PledgeOutTradingUnit;

	///֤ȯ���������������
	TTORATstpVolumeType	PledgeInVolMax;

	///֤ȯ����������С����
	TTORATstpVolumeType	PledgeInVolMin;

	///֤ȯ���Գ�����������
	TTORATstpVolumeType	PledgeOutVolMax;

	///֤ȯ���Գ������С����
	TTORATstpVolumeType	PledgeOutVolMin;

	///������Ѻ������Ѻȯ�Ƿ��ܳ���
	TTORATstpBoolType	IsTodayToPlegeOut;

	///�Ƿ�ɳ���
	TTORATstpBoolType	IsCancelOrder;

	///��Ѻ����
	TTORATstpSecurityNameType	PledgeName;


};

/// ��ѯծȯת����Ϣ
struct CTORATstpQryConversionBondInfoField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;


};

/// ծȯת����Ϣ
struct CTORATstpConversionBondInfoField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///ת���걨����
	TTORATstpSecurityIDType	ConvertOrderID;

	///ת�ɼ۸�
	TTORATstpPriceType	ConvertPrice;

	///ÿ�ο���ת����С���׵�λ
	TTORATstpTradingUnitType	ConvertVolUnit;

	///֤ȯ����ת�ɵ��������
	TTORATstpVolumeType	ConvertVolMax;

	///֤ȯ����ת�ɵ���С����
	TTORATstpVolumeType	ConvertVolMin;

	///ת�ɿ�ʼ����
	TTORATstpDateType	BeginDate;

	///ת�ɽ�������
	TTORATstpDateType	EndDate;

	///�Ƿ�ɳ���
	TTORATstpBoolType	IsSupportCancel;

	///ת������
	TTORATstpSecurityNameType	ConvertName;

	///�Ƿ���ת����
	TTORATstpBoolType	IsSupportConvert;


};

/// ��ѯծȯ������Ϣ
struct CTORATstpQryBondPutbackInfoField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;


};

/// ծȯ������Ϣ
struct CTORATstpBondPutbackInfoField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///�����걨����
	TTORATstpSecurityIDType	PutbackOrderID;

	///���ۼ۸�
	TTORATstpPriceType	PutbackPrice;

	///ÿ�ο��Ի�����С���׵�λ
	TTORATstpTradingUnitType	PutbackVolUnit;

	///ծȯ���Ի��۵��������
	TTORATstpVolumeType	PutbackVolMax;

	///ծȯ���Ի��۵���С����
	TTORATstpVolumeType	PutbackVolMin;

	///���ۿ�ʼ����
	TTORATstpDateType	BeginDate;

	///���۽�������
	TTORATstpDateType	EndDate;

	///�Ƿ�ɳ���
	TTORATstpBoolType	IsSupportCancel;

	///��������
	TTORATstpSecurityNameType	PutbackName;

	///�Ƿ��ڻ�����
	TTORATstpBoolType	IsSupportPutback;

	///�Ƿ��ڳ�����
	TTORATstpBoolType	IsSupportDelieve;


};

/// ��ѯͶ���߱�׼ȯ���
struct CTORATstpQryStandardBondPositionField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;


};

/// Ͷ���߱�׼ȯ���
struct CTORATstpStandardBondPositionField
{
		
	///��Լ����
	TTORATstpSecurityIDType	SecurityID;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�ͻ�����
	TTORATstpShareholderIDType	ShareholderID;

	///������
	TTORATstpDateType	TradingDay;

	///��׼ȯ���ö��
	TTORATstpPositionVolumeType	AvailablePosition;

	///��׼ȯ���ö�ȶ���
	TTORATstpPositionVolumeType	AvailablePosFrozen;

	///��׼ȯ�������
	TTORATstpPositionVolumeType	TotalPosition;


};

/// ��ѯָ�����׵Ǽ�&��������
struct CTORATstpQryDesignationRegistrationField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///ϵͳ�������
	TTORATstpOrderSysIDType	OrderSysID;

	///Insert Time
	TTORATstpTimeType	InsertTimeStart;

	///Insert Time
	TTORATstpTimeType	InsertTimeEnd;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;


};

/// ָ�����׵Ǽ�&��������
struct CTORATstpDesignationRegistrationField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///�û�����
	TTORATstpUserIDType	UserID;

	///��������
	TTORATstpDesignationTypeType	DesignationType;

	///���ر������
	TTORATstpOrderLocalIDType	OrderLocalID;

	///�ͻ�����
	TTORATstpShareholderIDType	ShareholderID;

	///���׵�Ԫ����
	TTORATstpPbuIDType	PbuID;

	///�����ύ״̬
	TTORATstpOrderSubmitStatusType	OrderSubmitStatus;

	///������
	TTORATstpDateType	TradingDay;

	///�������
	TTORATstpOrderSysIDType	OrderSysID;

	///����״̬
	TTORATstpOrderStatusType	OrderStatus;

	///��������
	TTORATstpDateType	InsertDate;

	///ί��ʱ��
	TTORATstpTimeType	InsertTime;

	///״̬��Ϣ
	TTORATstpErrorMsgType	StatusMsg;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///����
	TTORATstpCurrencyIDType	CurrencyID;

	///���͹�˾���Ŵ���
	TTORATstpDepartmentIDType	DepartmentID;

	///IP��ַ
	TTORATstpIPAddressType	IPAddress;

	///Mac��ַ
	TTORATstpMacAddressType	MacAddress;

	///Ӳ�����к�
	TTORATstpHDSerialType	HDSerial;

	///�ƶ��豸�ֻ���
	TTORATstpMobileType	Mobile;


};

/// ���ת�йܱ�����
struct CTORATstpQryCustodyTransferField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///ϵͳ�������
	TTORATstpOrderSysIDType	OrderSysID;

	///Insert Time
	TTORATstpTimeType	InsertTimeStart;

	///Insert Time
	TTORATstpTimeType	InsertTimeEnd;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;


};

/// ��ת�йܱ�����
struct CTORATstpCustodyTransferField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///�û�����
	TTORATstpUserIDType	UserID;

	///ת�й�����
	TTORATstpCustodyTransferTypeType	CustodyTransferType;

	///���ر������
	TTORATstpOrderLocalIDType	OrderLocalID;

	///�ͻ�����
	TTORATstpShareholderIDType	ShareholderID;

	///���׵�Ԫ����
	TTORATstpPbuIDType	PbuID;

	///�����ύ״̬
	TTORATstpOrderSubmitStatusType	OrderSubmitStatus;

	///������
	TTORATstpDateType	TradingDay;

	///�������
	TTORATstpOrderSysIDType	OrderSysID;

	///����״̬
	TTORATstpOrderStatusType	OrderStatus;

	///��������
	TTORATstpDateType	InsertDate;

	///ί��ʱ��
	TTORATstpTimeType	InsertTime;

	///״̬��Ϣ
	TTORATstpErrorMsgType	StatusMsg;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///����
	TTORATstpCurrencyIDType	CurrencyID;

	///���͹�˾���Ŵ���
	TTORATstpDepartmentIDType	DepartmentID;

	///ת�뽻�׵�Ԫ����
	TTORATstpPbuIDType	TransfereePbuID;

	///��Լ����
	TTORATstpSecurityIDType	SecurityID;

	///���س������,������������ת�йܵ�ԭʼ���
	TTORATstpOrderLocalIDType	OrignalOrderLocalID;

	///��������
	TTORATstpVolumeType	VolumeTotalOriginal;

	///����ʱ��
	TTORATstpTimeType	CancelTime;

	///�������׵�Ԫ����
	TTORATstpPbuIDType	ActiveTraderID;

	///��������Ա
	TTORATstpUserIDType	ActiveUserID;

	///IP��ַ
	TTORATstpIPAddressType	IPAddress;

	///Mac��ַ
	TTORATstpMacAddressType	MacAddress;

	///Ӳ�����к�
	TTORATstpHDSerialType	HDSerial;

	///�ƶ��豸�ֻ���
	TTORATstpMobileType	Mobile;


};

/// ��ѯδ����ծȯ��Ѻ�ع�ί��
struct CTORATstpQryPrematurityRepoOrderField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///���ر������
	TTORATstpOrderLocalIDType	OrderLocalID;

	///֤ȯƷ�ִ���
	TTORATstpProductIDType	ProductID;

	///֤ȯ������
	TTORATstpSecurityTypeType	SecurityType;

	///��������
	TTORATstpDirectionType	Direction;

	///�ɽ����
	TTORATstpTradeIDType	TradeID;


};

/// δ����ծȯ��Ѻ�ع�ί��
struct CTORATstpPrematurityRepoOrderField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///�����˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///�ɽ�����
	TTORATstpDateType	TradeDay;

	///��������
	TTORATstpDateType	ExpireDay;

	///�������
	TTORATstpOrderLocalIDType	OrderLocalID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///֤ȯ����
	TTORATstpSecurityNameType	SecurityName;

	///֤ȯƷ�ִ���
	TTORATstpProductIDType	ProductID;

	///֤ȯ������
	TTORATstpSecurityTypeType	SecurityType;

	///�������
	TTORATstpDirectionType	Direction;

	///�ɽ�����
	TTORATstpVolumeType	VolumeTraded;

	///�ɽ��۸�
	TTORATstpPriceType	Price;

	///�ɽ����
	TTORATstpMoneyType	Turnover;

	///�ɽ����
	TTORATstpTradeIDType	TradeID;

	///����Ӧ�ս��
	TTORATstpMoneyType	RepoTotalMoney;

	///��Ϣ���
	TTORATstpMoneyType	InterestAmount;


};

/// ��ѯ�ɶ�����
struct CTORATstpQryShareholderParamField
{
		
	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///�ɶ��˻�����
	TTORATstpClientIDTypeType	TradingCodeClass;

	///֤ȯ��Ʒ����
	TTORATstpProductIDType	ProductID;

	///֤ȯ������
	TTORATstpSecurityTypeType	SecurityType;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///��������
	TTORATstpParamTypeType	ParamType;

	///����������
	TTORATstpExchangeIDType	ExchangeID;


};

/// �ɶ�����
struct CTORATstpShareholderParamField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�����˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///�˻�����
	TTORATstpClientIDTypeType	TradingCodeClass;

	///֤ȯƷ��
	TTORATstpProductIDType	ProductID;

	///֤ȯ���
	TTORATstpSecurityTypeType	SecurityType;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///�ɶ���������
	TTORATstpParamTypeType	ParamType;

	///�ɶ�����ֵ
	TTORATstpParameterCharValType	ParamValue;


};

/// ��ѯ��Χϵͳ��λ������ˮ
struct CTORATstpQryPeripheryPositionTransferDetailField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///��λ��������
	TTORATstpTransferDirectionType	TransferDirection;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;


};

/// ��Χϵͳ��λ������ˮ
struct CTORATstpPeripheryPositionTransferDetailField
{
		
	///��λ����ϵͳ��ˮ��
	TTORATstpIntSerialType	PositionSerial;

	///��λ����������ˮ��
	TTORATstpIntSerialType	ApplySerial;

	///ǰ�ñ��
	TTORATstpFrontIDType	FrontID;

	///�Ự���
	TTORATstpSessionIDType	SessionID;

	///��λ��������
	TTORATstpTransferDirectionType	TransferDirection;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�ֻ�ϵͳͶ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///�ֻ�ϵͳͶ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///�ֻ�ϵͳ�����˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///����������λת��ת������
	TTORATstpVolumeType	TodayBSPos;

	///���������λת������
	TTORATstpVolumeType	TodayPRPos;

	///���ղ�λת������
	TTORATstpVolumeType	HistoryPos;

	///��������
	TTORATstpDateType	TradingDay;

	///��λ����ԭ��
	TTORATstpTransferReasonType	TransferReason;

	///ת��״̬
	TTORATstpTransferStatusType	TransferStatus;

	///��������
	TTORATstpDateType	OperateDate;

	///����ʱ��
	TTORATstpTimeType	OperateTime;

	///��������
	TTORATstpDateType	RepealDate;

	///����ʱ��
	TTORATstpTimeType	RepealTime;

	///����ԭ��
	TTORATstpTransferReasonType	RepealReason;

	///״̬��Ϣ
	TTORATstpErrorMsgType	StatusMsg;


};

/// ��ѯͶ�������������Ʋ���
struct CTORATstpQryInvestorCondOrderLimitParamField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;


};

/// Ͷ�������������Ʋ���
struct CTORATstpInvestorCondOrderLimitParamField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///�����������
	TTORATstpVolumeType	MaxCondOrderLimitCnt;

	///��ǰ��������
	TTORATstpVolumeType	CurrCondOrderCnt;


};

/// ��ѯ������
struct CTORATstpQryCondOrderField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�ɶ��˻��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///�������
	TTORATstpCondOrderIDType	CondOrderID;

	///Insert Time
	TTORATstpTimeType	InsertTimeStart;

	///Insert Time
	TTORATstpTimeType	InsertTimeEnd;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///���ַ���������Ϣ
	TTORATstpBigsInfoType	BInfo;

	///���ַ���������Ϣ
	TTORATstpShortsInfoType	SInfo;

	///���θ�����Ϣ
	TTORATstpIntInfoType	IInfo;


};

/// ������
struct CTORATstpCondOrderField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///��Լ����
	TTORATstpSecurityIDType	SecurityID;

	///��������
	TTORATstpDirectionType	Direction;

	///�۸�����
	TTORATstpOrderPriceTypeType	OrderPriceType;

	///������׼��������
	TTORATstpTriggerOrderVolumeTypeType	TriggerOrderVolumeType;

	///��Ч������
	TTORATstpTimeConditionType	TimeCondition;

	///�ɽ�������
	TTORATstpVolumeConditionType	VolumeCondition;

	///�����۸�
	TTORATstpPriceType	LimitPrice;

	///��������
	TTORATstpVolumeType	VolumeTotalOriginal;

	///��Ͽ�ƽ��־
	TTORATstpCombOffsetFlagType	CombOffsetFlag;

	///���Ͷ���ױ���־
	TTORATstpCombHedgeFlagType	CombHedgeFlag;

	///������������
	TTORATstpOrderRefType	CondOrderRef;

	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///�û�����
	TTORATstpUserIDType	UserID;

	///������
	TTORATstpRequestIDType	RequestID;

	///IP��ַ
	TTORATstpIPAddressType	IPAddress;

	///Mac��ַ
	TTORATstpMacAddressType	MacAddress;

	///�����������
	TTORATstpCondOrderIDType	CondOrderID;

	///�ն���Ϣ
	TTORATstpTerminalInfoType	TerminalInfo;

	///���ַ���������Ϣ
	TTORATstpBigsInfoType	BInfo;

	///���ַ���������Ϣ
	TTORATstpShortsInfoType	SInfo;

	///���θ�����Ϣ
	TTORATstpIntInfoType	IInfo;

	///ί�з�ʽ
	TTORATstpOperwayType	Operway;

	///�������
	TTORATstpCondCheckType	CondCheck;

	///��������
	TTORATstpContingentConditionType	ContingentCondition;

	///������
	TTORATstpPriceType	ConditionPrice;

	///�۸񸡶�tick��
	TTORATstpVolumeType	PriceTicks;

	///������������
	TTORATstpVolumeMultipleType	VolumeMultiple;

	///���ǰ�ñ��
	TTORATstpFrontIDType	RelativeFrontID;

	///��ػỰ���
	TTORATstpSessionIDType	RelativeSessionID;

	///�����������
	TTORATstpRelativeCondParamType	RelativeParam;

	///���Ӵ�������
	TTORATstpContingentConditionType	AppendContingentCondition;

	///����������
	TTORATstpPriceType	AppendConditionPrice;

	///�������ǰ�ñ��
	TTORATstpFrontIDType	AppendRelativeFrontID;

	///������ػỰ���
	TTORATstpSessionIDType	AppendRelativeSessionID;

	///���������������
	TTORATstpRelativeCondParamType	AppendRelativeParam;

	///������
	TTORATstpDateType	TradingDay;

	///������״̬
	TTORATstpCondOrderStatusType	CondOrderStatus;

	///��������
	TTORATstpDateType	InsertDate;

	///ί��ʱ��
	TTORATstpTimeType	InsertTime;

	///����ʱ��
	TTORATstpTimeType	CancelTime;

	///�����û�
	TTORATstpUserIDType	CancelUser;

	///ǰ�ñ��
	TTORATstpFrontIDType	FrontID;

	///�Ự���
	TTORATstpSessionIDType	SessionID;

	///�û��˲�Ʒ��Ϣ
	TTORATstpProductInfoType	UserProductInfo;

	///״̬��Ϣ
	TTORATstpErrorMsgType	StatusMsg;

	///���͹�˾���Ŵ���
	TTORATstpDepartmentIDType	DepartmentID;

	///�ʵ��Կ���ҵ�����
	TTORATstpProperCtrlBusinessTypeType	ProperCtrlBusinessType;

	///�ʵ��Կ���ͨ����ʾ
	TTORATstpProperCtrlPassFlagType	ProperCtrlPassFlag;

	///��������
	TTORATstpDateType	ActiveDate;

	///����ʱ��
	TTORATstpTimeType	ActiveTime;

	///Ӳ�����к�
	TTORATstpHDSerialType	HDSerial;

	///�۹�ͨ������������
	TTORATstpLotTypeType	LotType;

	///�ֻ���
	TTORATstpMobileType	Mobile;

	///������׼������
	TTORATstpTriggerOrderPriceTypeType	TriggerOrderPriceType;

	///��ǰ�����������
	TTORATstpRelativeCondParamType	TriggerRelativeParam;

	///����������Ϣ
	TTORATstpRelativeCondParamType	AppendCondParam;

	///��Ч����
	TTORATstpDateType	GTDate;


};

/// ��ѯ����������
struct CTORATstpQryCondOrderActionField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///���ַ���������Ϣ
	TTORATstpBigsInfoType	BInfo;

	///���ַ���������Ϣ
	TTORATstpShortsInfoType	SInfo;

	///���θ�����Ϣ
	TTORATstpIntInfoType	IInfo;


};

/// ����������
struct CTORATstpCondOrderActionField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///������
	TTORATstpRequestIDType	RequestID;

	///��������������
	TTORATstpOrderRefType	CondOrderActionRef;

	///����������
	TTORATstpOrderRefType	CondOrderRef;

	///ǰ�ñ��
	TTORATstpFrontIDType	FrontID;

	///�Ự���
	TTORATstpSessionIDType	SessionID;

	///���������
	TTORATstpCondOrderIDType	CondOrderID;

	///������־
	TTORATstpActionFlagType	ActionFlag;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///��Լ����
	TTORATstpSecurityIDType	SecurityID;

	///�û�����
	TTORATstpUserIDType	UserID;

	///�������������
	TTORATstpCondOrderIDType	CancelCondOrderID;

	///IP��ַ
	TTORATstpIPAddressType	IPAddress;

	///MAC��ַ
	TTORATstpMacAddressType	MacAddress;

	///�ն���Ϣ
	TTORATstpTerminalInfoType	TerminalInfo;

	///���ַ���������Ϣ
	TTORATstpBigsInfoType	BInfo;

	///���ַ���������Ϣ
	TTORATstpShortsInfoType	SInfo;

	///���θ�����Ϣ
	TTORATstpIntInfoType	IInfo;

	///ί�з�ʽ
	TTORATstpOperwayType	Operway;

	///Ͷ�ʵ�Ԫ����
	TTORATstpBusinessUnitIDType	BusinessUnitID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///��������
	TTORATstpDateType	ActionDate;

	///����ʱ��
	TTORATstpTimeType	ActionTime;


};

/// ��ѯBrokerUserRole
struct CTORATstpQryBrokerUserRoleField
{
		
	///��ɫ���
	TTORATstpRoleIDType	RoleID;


};

/// BrokerUserRole
struct CTORATstpBrokerUserRoleField
{
		
	///��ɫ���
	TTORATstpRoleIDType	RoleID;

	///��ɫ����
	TTORATstpRoleDescriptionType	RoleDescription;

	///����Ȩ�޼���
	TTORATstpFunctionsType	Functions;


};

/// ��ѯBrokerUserRoleAssignment
struct CTORATstpQryBrokerUserRoleAssignmentField
{
		
	///�û�����
	TTORATstpUserIDType	UserID;


};

/// BrokerUserRoleAssignment
struct CTORATstpBrokerUserRoleAssignmentField
{
		
	///�û�����
	TTORATstpUserIDType	UserID;

	///��ɫ���
	TTORATstpRoleIDType	RoleID;

	///��ɫ����
	TTORATstpRoleDescriptionType	RoleDescription;


};

/// ��ѯ����֪ͨ
struct CTORATstpQryTradingNoticeField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///Insert Date
	TTORATstpDateType	InsertDateStart;

	///Insert Date
	TTORATstpDateType	InsertDateEnd;

	///Insert Time
	TTORATstpTimeType	InsertTimeStart;

	///Insert Time
	TTORATstpTimeType	InsertTimeEnd;


};

/// ��ѯ�¹��깺��Ž��
struct CTORATstpQryIPONumberResultField
{
		
	///�깺����
	TTORATstpSecurityIDType	SecurityID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�ɶ�����
	TTORATstpShareholderIDType	ShareholderID;


};

/// �¹��깺��Ž��
struct CTORATstpIPONumberResultField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///����
	TTORATstpDateType	Day;

	///�깺֤ȯ����
	TTORATstpSecurityNameType	SecurityName;

	///�ɶ�����
	TTORATstpShareholderIDType	ShareholderID;

	///֤ȯ������
	TTORATstpSecurityTypeType	SecurityType;

	///��ʼ���
	TTORATstpIPONumberIDType	BeginNumberID;

	///�������
	TTORATstpVolumeType	Volume;


};

/// ��ѯ�¹��깺��ǩ���
struct CTORATstpQryIPOMatchNumberResultField
{
		
	///�깺����
	TTORATstpSecurityIDType	SecurityID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�ɶ�����
	TTORATstpShareholderIDType	ShareholderID;

	///��ǩ���
	TTORATstpIPONumberIDType	MatchNumberID;


};

/// �¹��깺��ǩ���
struct CTORATstpIPOMatchNumberResultField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///����
	TTORATstpDateType	Day;

	///�깺֤ȯ����
	TTORATstpSecurityNameType	SecurityName;

	///�ɶ�����
	TTORATstpShareholderIDType	ShareholderID;

	///֤ȯ������
	TTORATstpSecurityTypeType	SecurityType;

	///��ǩ���
	TTORATstpIPONumberIDType	MatchNumberID;

	///����ǩ��ӵ�е�֤ȯ����
	TTORATstpVolumeType	Volume;

	///�깺�۸�
	TTORATstpPriceType	Price;

	///�깺���
	TTORATstpMoneyType	Amout;


};

/// ��ѯ���͹�˾������Ϣ
struct CTORATstpQryInnerBranchInfoField
{
		
	///������������
	TTORATstpBranchIDType	InnerBranchID;


};

/// ���͹�˾������Ϣ
struct CTORATstpInnerBranchInfoField
{
		
	///������������
	TTORATstpBranchIDType	InnerBranchID;

	///������������
	TTORATstpNameType	InnerBranchName;


};

/// ��ѯ������֯��ϵ������Ϣ
struct CTORATstpQryDepartmentBranchInfoField
{
		
	///һ����������
	TTORATstpDepartmentIDType	DepartmentID;

	///������������
	TTORATstpBranchIDType	InnerBranchID;


};

/// ������֯��ϵ������Ϣ
struct CTORATstpDepartmentBranchInfoField
{
		
	///һ����������
	TTORATstpDepartmentIDType	DepartmentID;

	///һ����������
	TTORATstpNameType	DepartmentName;

	///������������
	TTORATstpBranchIDType	InnerBranchID;

	///������������
	TTORATstpNameType	InnerBranchName;


};

/// ��ѯ������֯��ϵ������Ϣ
struct CTORATstpQryDepartmentManageInfoField
{
		
	///һ�������������
	TTORATstpDepartmentIDType	ManageDepartmentID;

	///������������
	TTORATstpBranchIDType	InnerBranchID;


};

/// ������֯��ϵ������Ϣ
struct CTORATstpDepartmentManageInfoField
{
		
	///һ�������������
	TTORATstpDepartmentIDType	ManageDepartmentID;

	///һ�������������
	TTORATstpNameType	DepartmentName;

	///������������
	TTORATstpBranchIDType	InnerBranchID;

	///������������
	TTORATstpNameType	InnerBranchName;


};

/// ��ѯBrokerUser
struct CTORATstpQryBrokerUserField
{
		
	///�û�����
	TTORATstpUserIDType	UserID;

	///һ����������
	TTORATstpDepartmentIDType	DepartmentID;


};

/// BrokerUser
struct CTORATstpBrokerUserField
{
		
	///�û�����
	TTORATstpUserIDType	UserID;

	///�û�����
	TTORATstpUserNameType	UserName;

	///�û�����
	TTORATstpUserTypeType	UserType;

	///״̬
	TTORATstpActiveStatusType	Status;

	///��¼����
	TTORATstpLoginLimitType	LoginLimit;

	///�������������������
	TTORATstpLoginLimitType	PasswordFailLimit;

	///һ����������
	TTORATstpDepartmentIDType	DepartmentID;

	///������������
	TTORATstpBranchIDType	InnerBranchID;

	///�����޸�����
	TTORATstpCountType	PasswordUpdatePeriod;

	///������Чʣ������
	TTORATstpCountType	PasswordRemainDays;

	///һ�������������
	TTORATstpDepartmentIDType	ManageDepartmentID;


};

/// ��ѯ���ͨ�����г�����״̬��Ϣ
struct CTORATstpQrySZSEImcParamsField
{
		
	///�г�����
	TTORATstpMarketIDType	MarketID;


};

/// ���ͨ�����г�����״̬��Ϣ
struct CTORATstpSZSEImcParamsField
{
		
	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�Ƿ񿪷�
	TTORATstpBoolType	OpenFlag;

	///��ʼ���
	TTORATstpMoneyType	ThresholdAmount;

	///����ʣ����
	TTORATstpMoneyType	PosAmt;

	///����Ƿ����
	TTORATstpBoolType	AmountStatus;


};

/// ��ѯ���ͨ�����г�����������Ϣ
struct CTORATstpQrySZSEImcExchangeRateField
{
		
	///Դ���ұ���
	TTORATstpCurrencyIDType	FromCurrency;

	///Ŀ����ұ���
	TTORATstpCurrencyIDType	ToCurrency;


};

/// ���ͨ�����г�����������Ϣ
struct CTORATstpSZSEImcExchangeRateField
{
		
	///Դ���ұ���
	TTORATstpCurrencyIDType	FromCurrency;

	///Ŀ����ұ���
	TTORATstpCurrencyIDType	ToCurrency;

	///�ο����������
	TTORATstpPriceType	BidRate;

	///�ο�����������
	TTORATstpPriceType	OfferRate;

	///�ο������м��
	TTORATstpPriceType	MidPointRate;


};

/// ��ѯ���ͨ��С�۲���Ϣ
struct CTORATstpQrySZSEHKPriceTickInfoField
{
		
	///�۲�Ʒ��
	TTORATstpPriceTickIDType	PriceTickID;


};

/// ���ͨ��С�۲���Ϣ
struct CTORATstpSZSEHKPriceTickInfoField
{
		
	///�۲�Ʒ��
	TTORATstpPriceTickIDType	PriceTickID;

	///�۲����
	TTORATstpPriceTickGroupIDType	PriceTickGroupID;

	///�۲����
	TTORATstpPriceTickTypeType	PriceTickType;

	///�۲�����ʼ�۸�
	TTORATstpPriceType	BeginPrice;

	///�۲�������۸�
	TTORATstpPriceType	EndPrice;

	///�۲�ֵ
	TTORATstpPriceType	PriceTick;


};

/// ��ѯ����Э��
struct CTORATstpQryShareholderSpecPrivilegeField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;


};

/// ����Э��
struct CTORATstpShareholderSpecPrivilegeField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///����Э�����
	TTORATstpSpecPrivilegeTypeType	SpecPrivilegeType;

	///��������
	TTORATstpDirectionType	Direction;

	///�Ƿ��ֹ
	TTORATstpBoolType	bForbidden;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;


};

/// ��ѯͶ�����޲���Ϣ
struct CTORATstpQryInvestorPositionLimitField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;


};

/// Ͷ�����޲���Ϣ
struct CTORATstpInvestorPositionLimitField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///����������
	TTORATstpVolumeType	BuyLimit;

	///��ʹ�õ���������
	TTORATstpVolumeType	BuyFrozen;

	///�����������
	TTORATstpVolumeType	SellLimit;

	///��ʹ�õ����������
	TTORATstpVolumeType	SellFrozen;

	///�����깺���
	TTORATstpVolumeType	PurchaseLimit;

	///��ʹ�õ����깺���
	TTORATstpVolumeType	PurchaseFrozen;

	///������ض��
	TTORATstpVolumeType	RedeemLimit;

	///��ʹ�õ�����ض��
	TTORATstpVolumeType	RedeemFrozen;

	///������Ѻ�����
	TTORATstpVolumeType	PledgeInLimit;

	///��ʹ�õ�����Ѻ�����
	TTORATstpVolumeType	PledgeInFrozen;

	///������Ѻ������
	TTORATstpVolumeType	PledgeOutLimit;

	///��ʹ�õ�����Ѻ������
	TTORATstpVolumeType	PledgeOutFrozen;

	///����ծת�ɶ��
	TTORATstpVolumeType	ConvertLimit;

	///��ʹ�õ���ծת�ɶ��
	TTORATstpVolumeType	ConvertFrozen;

	///����ծȯ���۶��
	TTORATstpVolumeType	PutbackLimit;

	///��ʹ�õ���ծȯ���۶��
	TTORATstpVolumeType	PutbackFrozen;

	///���������ծ���
	TTORATstpVolumeType	RationalLimit;

	///��ʹ�õ��������ծ���
	TTORATstpVolumeType	RationalFrozen;

	///�ֲֶܳ��
	TTORATstpVolumeType	TotalPositionLimit;

	///��ʹ���ֲֶܳ��
	TTORATstpVolumeType	TotalPositionFrozen;

	///���ղ�ֶ��
	TTORATstpVolumeType	SplitLimit;

	///��ʹ�õ��ղ�ֶ��
	TTORATstpVolumeType	SplitFrozen;

	///���պϲ����
	TTORATstpVolumeType	MergeLimit;

	///��ʹ�õ��պϲ����
	TTORATstpVolumeType	MergeFrozen;


};

/// ��ѯ�̺�����
struct CTORATstpQryPHMarketDataField
{
		
	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///����������
	TTORATstpExchangeIDType	ExchangeID;


};

/// ��ѯ�ɶ��˻�֤ȯ����ϵͳȨ��
struct CTORATstpQrySecurityPriorAuthField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;


};

/// �ɶ��˻�֤ȯ����ϵͳȨ��
struct CTORATstpSecurityPriorAuthField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///�ɶ��˻�����
	TTORATstpShareholderIDType	ShareholderID;

	///֤ȯ����
	TTORATstpSecurityIDType	SecurityID;

	///��������
	TTORATstpDirectionType	Direction;

	///�Ƿ��ֹ
	TTORATstpBoolType	bForbidden;


};

/// ��ѯ�����ծ��Ϣ
struct CTORATstpQryRationalInfoField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�����ծ����
	TTORATstpSecurityIDType	SecurityID;


};

/// �����ծ��Ϣ
struct CTORATstpRationalInfoField
{
		
	///������
	TTORATstpDateType	TradingDay;

	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�깺����
	TTORATstpSecurityIDType	SecurityID;

	///�����ծ�۸�
	TTORATstpPriceType	Price;

	///�г�����
	TTORATstpMarketIDType	MarketID;

	///֤ȯƷ�ִ���
	TTORATstpProductIDType	ProductID;

	///֤ȯ������
	TTORATstpSecurityTypeType	SecurityType;

	///�����ծ����
	TTORATstpVolumeType	RationalLimit;

	///�������
	TTORATstpSecurityNameType	SecurityName;

	///����֤ȯ����
	TTORATstpSecurityIDType	UnderlyingSecurityID;

	///����֤ȯ����
	TTORATstpSecurityNameType	UnderlyingSecurityName;

	///�����ծ��С����
	TTORATstpVolumeType	RationalMinVol;

	///�����ծ��λ����
	TTORATstpVolumeType	RationalVolUnit;


};

/// ��ѯ��Χϵͳ�ʽ�ת����ˮ
struct CTORATstpQryPeripheryFundTransferDetailField
{
		
	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///һ����������
	TTORATstpDepartmentIDType	DepartmentID;

	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///����
	TTORATstpCurrencyIDType	CurrencyID;

	///�ʽ��������
	TTORATstpTransferDirectionType	TransferDirection;


};

/// ��Χϵͳ�ʽ�ת����ˮ
struct CTORATstpPeripheryFundTransferDetailField
{
		
	///ת����ˮ��
	TTORATstpIntSerialType	FundSerial;

	///������ˮ��
	TTORATstpIntSerialType	ApplySerial;

	///ǰ�ñ��
	TTORATstpFrontIDType	FrontID;

	///�Ự���
	TTORATstpSessionIDType	SessionID;

	///���͹�˾���Ŵ���
	TTORATstpDepartmentIDType	DepartmentID;

	///�ʽ��˻�����
	TTORATstpAccountIDType	AccountID;

	///����
	TTORATstpCurrencyIDType	CurrencyID;

	///ת�Ʒ���
	TTORATstpTransferDirectionType	TransferDirection;

	///�������
	TTORATstpMoneyType	Amount;

	///Ͷ���ߴ���
	TTORATstpInvestorIDType	InvestorID;

	///ת��״̬
	TTORATstpTransferStatusType	TransferStatus;

	///�ʽ����ԭ��
	TTORATstpTransferReasonType	TransferReason;

	///��������
	TTORATstpDateType	OperateDate;

	///����ʱ��
	TTORATstpTimeType	OperateTime;

	///��������
	TTORATstpDateType	RepealDate;

	///����ʱ��
	TTORATstpTimeType	RepealTime;

	///����ԭ��
	TTORATstpTransferReasonType	RepealReason;

	///״̬��Ϣ
	TTORATstpErrorMsgType	StatusMsg;


};

/// ��ѯϵͳ�ڵ���Ϣ
struct CTORATstpQrySystemNodeInfoField
{
		
	///�ڵ���
	TTORATstpNodeIDType	NodeID;


};

/// ϵͳ�ڵ���Ϣ
struct CTORATstpSystemNodeInfoField
{
		
	///�ڵ���
	TTORATstpNodeIDType	NodeID;

	///�ڵ���Ϣ
	TTORATstpNodeInfoType	NodeInfo;

	///�Ƿ�ǰ�ڵ�
	TTORATstpBoolType	bCurrent;


};

/// ��ѯLOF������Ϣ
struct CTORATstpQryLofFundInfoField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�������
	TTORATstpSecurityIDType	FundID;

	///���������
	TTORATstpSecurityIDType	MainFundID;


};

/// LOF������Ϣ
struct CTORATstpLofFundInfoField
{
		
	///����������
	TTORATstpExchangeIDType	ExchangeID;

	///�������
	TTORATstpSecurityIDType	FundID;

	///���������
	TTORATstpSecurityIDType	MainFundID;

	///��������
	TTORATstpFundTypeType	FundType;

	///���������λ
	TTORATstpVolumeType	SplitUnit;

	///��С�������
	TTORATstpVolumeType	SplitMinVol;

	///�ϲ�������λ
	TTORATstpVolumeType	MergeUnit;

	///��С�ϲ�����
	TTORATstpVolumeType	MergeMinVol;

	///����ת��ϵ��
	TTORATstpRatioType	FundRatio;


};

#endif