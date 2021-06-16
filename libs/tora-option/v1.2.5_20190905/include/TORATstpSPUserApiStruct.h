/////////////////////////////////////////////////////////////////////////
///@company �Ϻ�̩����Ϣ�Ƽ����޹�˾
///@file TORATstpSPUserApiStruct.h
///@brief �����˿ͻ��˽ӿ�ʹ�õ�ҵ�����ݽṹ
///@history 
/////////////////////////////////////////////////////////////////////////

#if !defined(_TORA_TSTPSPUSERAPISTRUCT_H)
#define _TORA_TSTPSPUSERAPISTRUCT_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TORATstpSPUserApiDataType.h"

namespace TORASPAPI
{

	/// fens�û���Ϣ
	struct CTORATstpSPFensUserInfoField
	{
		 
		///��¼�˻�
		TTORATstpSPLogInAccountType	LogInAccount;

		///��¼�˻�����
		TTORATstpSPLogInAccountTypeType	LogInAccountType;

	};

	/// ��¼����
	struct CTORATstpSPReqUserLoginField
	{
		 
		///��¼�˻�
		TTORATstpSPLogInAccountType	LogInAccount;

		///��¼�˻�����
		TTORATstpSPLogInAccountTypeType	LogInAccountType;

		///����
		TTORATstpSPPasswordType	Password;

		///�û��˲�Ʒ��Ϣ
		TTORATstpSPProductInfoType	UserProductInfo;

		///Э����Ϣ
		TTORATstpSPProtocolInfoType	ProtocolInfo;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///��̬����
		TTORATstpSPPasswordType	OneTimePassword;

		///�ն�IP��ַ
		TTORATstpSPIPAddressType	ClientIPAddress;

		///�ӿ�����
		TTORATstpSPLangType	Lang;

		///�ն���Ϣ
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///����Mac��ַ
		TTORATstpSPMacAddressType	GWMacAddress;

		///��������IP��ַ
		TTORATstpSPIPAddressType	GWInnerIPAddress;

		///��������IP��ַ
		TTORATstpSPIPAddressType	GWOuterIPAddress;

		///���͹�˾���Ŵ��루���ʽ��˺ŷ�ʽ��¼ʱ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///Ӳ�����кţ��û����룩
		TTORATstpSPHDSerialType	HDSerial;

		///��֤��ʽ(ָ����֤ʱ����)
		TTORATstpSPAuthModeType	AuthMode;

		///�豸��ʶ(ָ����֤ʱ����)
		TTORATstpSPDeviceIDType	DeviceID;

		///�豸���к�(ָ����֤ʱ����)
		TTORATstpSPDeviceSerialType	DeviceSerial;

		///�ƶ��豸�ֻ���
		TTORATstpSPMobileType	Mobile;

	};

	/// ��¼Ӧ��
	struct CTORATstpSPRspUserLoginField
	{
		 
		///��¼�ɹ�ʱ��
		TTORATstpSPTimeType	LoginTime;

		///��¼�˻�
		TTORATstpSPLogInAccountType	LogInAccount;

		///��¼�˻�����
		TTORATstpSPLogInAccountTypeType	LogInAccountType;

		///����ϵͳ����
		TTORATstpSPSystemNameType	SystemName;

		///ǰ�ñ��
		TTORATstpSPFrontIDType	FrontID;

		///�Ự���
		TTORATstpSPSessionIDType	SessionID;

		///��󱨵�����
		TTORATstpSPOrderRefType	MaxOrderRef;

		///˽��������
		TTORATstpSPVolumeType	PrivateFlowCount;

		///����������
		TTORATstpSPVolumeType	PublicFlowCount;

		///�û�������
		TTORATstpSPRequestIDType	RequestID;

		///���׷���������
		TTORATstpSPDateType	TradingDay;

		///�û�����
		TTORATstpSPUserIDType	UserID;

		///�û�����
		TTORATstpSPUserNameType	UserName;

		///�û�����
		TTORATstpSPUserTypeType	UserType;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///�ն�IP��ַ
		TTORATstpSPIPAddressType	ClientIPAddress;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///Ӳ�����к�
		TTORATstpSPHDSerialType	HDSerial;

		///��������
		TTORATstpSPCommFluxType	OrderInsertCommFlux;

		///��������
		TTORATstpSPCommFluxType	OrderActionCommFlux;

		///�ƶ��豸�ֻ���
		TTORATstpSPMobileType	Mobile;

		///�����޸�����(��),��Ϊ0��������Ч
		TTORATstpSPCountType	PasswordUpdatePeriod;

		///������Чʣ������
		TTORATstpSPCountType	PasswordRemainDays;

		///�Ƿ���Ҫ����
		TTORATstpSPBoolType	NeedUpdatePassword;

	};

	/// ��Ӧ��Ϣ
	struct CTORATstpSPRspInfoField
	{
		 
		///�������
		TTORATstpSPErrorIDType	ErrorID;

		///������Ϣ
		TTORATstpSPErrorMsgType	ErrorMsg;

	};

	/// �û��ǳ�
	struct CTORATstpSPUserLogoutField
	{
		 
		///�û�����
		TTORATstpSPUserIDType	UserID;

	};

	/// ǿ�ƽ���Ա�˳�
	struct CTORATstpSPForceUserLogoutField
	{
		 
		///�û�����
		TTORATstpSPUserIDType	UserID;

	};

	/// �����û�����
	struct CTORATstpSPUserPasswordUpdateField
	{
		 
		///�û�����
		TTORATstpSPUserIDType	UserID;

		///������
		TTORATstpSPPasswordType	OldPassword;

		///������
		TTORATstpSPPasswordType	NewPassword;

	};

	/// �����û�
	struct CTORATstpSPActivateUserField
	{
		 
		///�û�����
		TTORATstpSPUserIDType	UserID;

	};

	/// У���û�����
	struct CTORATstpSPVerifyUserPasswordField
	{
		 
		///�û�����
		TTORATstpSPUserIDType	UserID;

		///����
		TTORATstpSPPasswordType	Password;

	};

	/// ����¼���豸����
	struct CTORATstpSPReqInputDeviceSerialField
	{
		 
		///�û�����
		TTORATstpSPUserIDType	UserID;

		///�豸��ʶ
		TTORATstpSPDeviceIDType	DeviceID;

		///�豸���к�
		TTORATstpSPDeviceSerialType	DeviceSerial;

	};

	/// ����¼���豸����Ӧ��
	struct CTORATstpSPRspInputDeviceSerialField
	{
		 
		///�û�������
		TTORATstpSPRequestIDType	RequestID;

		///�û�����
		TTORATstpSPUserIDType	UserID;

	};

	/// ���뱨��
	struct CTORATstpSPInputOrderField
	{
		 
		///��Լ��ϵͳ�еı��
		TTORATstpSPSecurityIDType	SecurityID;

		///Ͷ����˵���ĶԱ�����Ψһ����
		TTORATstpSPOrderRefType	OrderRef;

		///�޼۵����м۵�
		TTORATstpSPOrderPriceTypeType	OrderPriceType;

		///����
		TTORATstpSPDirectionType	Direction;

		///���ֽڱ�ʾ��������Լ�Ŀ�ƽ����
		TTORATstpSPCombOffsetFlagType	CombOffsetFlag;

		///���ֽڱ�ʾ��������Լ������ױ���־
		TTORATstpSPCombHedgeFlagType	CombHedgeFlag;

		///�޼۵��۸�
		TTORATstpSPPriceType	LimitPrice;

		///��������
		TTORATstpSPVolumeType	VolumeTotalOriginal;

		///IOC��GFS��GFD��GTD��GTC��GFA
		TTORATstpSPTimeConditionType	TimeCondition;

		///AV��MV��CV
		TTORATstpSPVolumeConditionType	VolumeCondition;

		///���ɽ�������ΪMVʱ��Ч
		TTORATstpSPVolumeType	MinVolume;

		///ǿƽԭ��
		TTORATstpSPForceCloseReasonType	ForceCloseReason;

		///�û�ǿ����־
		TTORATstpSPBoolType	UserForceClose;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///һ���������ı��
		TTORATstpSPExchangeIDType	ExchangeID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�ʽ��˻�
		TTORATstpSPAccountIDType	AccountID;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///�������
		TTORATstpSPOrderSysIDType	OrderSysID;

		///�ն���Ϣ
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

		///ί�з�ʽ
		TTORATstpSPOperwayType	Operway;

		///Ӳ�����к�
		TTORATstpSPHDSerialType	HDSerial;

		///�������
		TTORATstpSPCondCheckType	CondCheck;

	};

	/// ����
	struct CTORATstpSPOrderField
	{
		 
		///������
		TTORATstpSPDateType	TradingDay;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Լ��ϵͳ�еı��
		TTORATstpSPSecurityIDType	SecurityID;

		///ǰ�ñ��
		TTORATstpSPFrontIDType	FrontID;

		///ÿһλ����Ա��������¼�ߵ�¼ϵͳ��õĻỰ��ţ���ǰʱ��Ψһ
		TTORATstpSPSessionIDType	SessionID;

		///Ͷ����˵���ĶԱ�����Ψһ����
		TTORATstpSPOrderRefType	OrderRef;

		///�������
		TTORATstpSPOrderSysIDType	OrderSysID;

		///���׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///���ر���˳���
		TTORATstpSPOrderLocalIDType	OrderLocalID;

		///�޼۵����м۵�
		TTORATstpSPOrderPriceTypeType	OrderPriceType;

		///����
		TTORATstpSPDirectionType	Direction;

		///���ֽڱ�ʾ��������Լ�Ŀ�ƽ����
		TTORATstpSPCombOffsetFlagType	CombOffsetFlag;

		///���ֽڱ�ʾ��������Լ������ױ���־
		TTORATstpSPCombHedgeFlagType	CombHedgeFlag;

		///�޼۵��۸�
		TTORATstpSPPriceType	Price;

		///��������
		TTORATstpSPVolumeType	VolumeTotalOriginal;

		///IOC��GFS��GFD��GTD��GTC��GFA
		TTORATstpSPTimeConditionType	TimeCondition;

		///AV��MV��CV
		TTORATstpSPVolumeConditionType	VolumeCondition;

		///���ɽ�������ΪMVʱ��Ч
		TTORATstpSPVolumeType	MinVolume;

		///������
		TTORATstpSPRequestIDType	RequestID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///�ͻ���ϵͳ�еı�ţ����Ψһ����ѭ�������ƶ��ı������
		TTORATstpSPShareholderIDType	ShareholderID;

		///��������״̬
		TTORATstpSPOrderOperateStatusType	OrderOperateStatus;

		///�����Ѵ����������ѽ��ա����ֳɽ���ȫ���ɽ���������ȫ�����ϵ���
		TTORATstpSPOrderStatusType	OrderStatus;

		///�����������
		TTORATstpSPVolumeType	VolumeTraded;

		///��������
		TTORATstpSPDateType	InsertDate;

		///ί��ʱ��
		TTORATstpSPTimeType	InsertTime;

		///����������ʱ��
		TTORATstpSPTimeType	AcceptTime;

		///����ʱ��
		TTORATstpSPTimeType	CancelTime;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///״̬��Ϣ
		TTORATstpSPStatusMsgType	StatusMsg;

		///�û�ǿ����־
		TTORATstpSPBoolType	UserForceClose;

		///�걨����Ա
		TTORATstpSPUserIDType	InsertUserID;

		///�걨��������Ա
		TTORATstpSPUserIDType	CancelUserID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///�ʽ��˻�
		TTORATstpSPAccountIDType	AccountID;

		///����
		TTORATstpSPCurrencyIDType	CurrencyID;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

		///ǿƽԭ��
		TTORATstpSPForceCloseReasonType	ForceCloseReason;

		///�ն���Ϣ
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///ί�з�ʽ
		TTORATstpSPOperwayType	Operway;

		///Ӳ�����к�
		TTORATstpSPHDSerialType	HDSerial;

		///���������صĳ�������
		TTORATstpSPVolumeType	VolumeCanceled;

	};

	/// �û���ʶ
	struct CTORATstpSPUserRefField
	{
		 
		///�û�����
		TTORATstpSPUserIDType	UserID;

	};

	/// ���볷������
	struct CTORATstpSPInputOrderActionField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ����˵���ĶԱ���������Ψһ����
		TTORATstpSPOrderRefType	OrderActionRef;

		///Ͷ����˵���ĶԱ�����Ψһ����
		TTORATstpSPOrderRefType	OrderRef;

		///ǰ�ñ��
		TTORATstpSPFrontIDType	FrontID;

		///ÿһλ����Ա��������¼�ߵ�¼ϵͳ��õĻỰ��ţ���ǰʱ��Ψһ
		TTORATstpSPSessionIDType	SessionID;

		///һ���������ı��
		TTORATstpSPExchangeIDType	ExchangeID;

		///�������
		TTORATstpSPOrderSysIDType	OrderSysID;

		///ί�в�����־
		TTORATstpSPOrderActionFlagType	OrderActionFlag;

		///��Լ��ϵͳ�еı��
		TTORATstpSPSecurityIDType	SecurityID;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///ȫϵͳ��Ψһ������š�
		TTORATstpSPOrderLocalIDType	CancelOrderLocalID;

		///�ն���Ϣ
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

		///ί�з�ʽ
		TTORATstpSPOperwayType	Operway;

		///Ӳ�����к�
		TTORATstpSPHDSerialType	HDSerial;

	};

	/// �ɽ�
	struct CTORATstpSPTradeField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///��Լ��ϵͳ�еı��
		TTORATstpSPSecurityIDType	SecurityID;

		///�û�����
		TTORATstpSPUserIDType	InsertUserID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�ɽ����
		TTORATstpSPTradeIDType	TradeID;

		///����
		TTORATstpSPDirectionType	Direction;

		///�������
		TTORATstpSPOrderSysIDType	OrderSysID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///�ͻ���ϵͳ�еı�ţ����Ψһ����ѭ�������ƶ��ı������
		TTORATstpSPShareholderIDType	ShareholderID;

		///���֡�ƽ�ֵ�
		TTORATstpSPOffsetFlagType	OffsetFlag;

		///Ͷ����������
		TTORATstpSPHedgeFlagType	HedgeFlag;

		///�ɽ��۸�
		TTORATstpSPPriceType	Price;

		///�ɽ�����
		TTORATstpSPVolumeType	Volume;

		///�ɽ�����
		TTORATstpSPDateType	TradeDate;

		///�ɽ�ʱ��
		TTORATstpSPTimeType	TradeTime;

		///���������׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///���ر���˳���
		TTORATstpSPOrderLocalIDType	OrderLocalID;

		///���׷���������
		TTORATstpSPDateType	TradingDay;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�ʽ��˻�
		TTORATstpSPAccountIDType	AccountID;

		///����
		TTORATstpSPCurrencyIDType	CurrencyID;

		///��������
		TTORATstpSPOrderRefType	OrderRef;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

	};

	/// ��Ȩ����
	struct CTORATstpSPInputExerciseField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///��Լ��ϵͳ�еı��
		TTORATstpSPSecurityIDType	SecurityID;

		///Ͷ����˵���Ķ���Ȩ��Ψһ����
		TTORATstpSPOrderRefType	ExerciseRef;

		///��Ȩ����
		TTORATstpSPVolumeType	Volume;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///ִ������
		TTORATstpSPExerciseTypeType	ExerciseType;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

		///�ʽ��˻�
		TTORATstpSPAccountIDType	AccountID;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///ϵͳ��Ȩ���
		TTORATstpSPOrderSysIDType	ExerciseSysID;

		///�ն���Ϣ
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

		///ί�з�ʽ
		TTORATstpSPOperwayType	Operway;

		///Ӳ�����к�
		TTORATstpSPHDSerialType	HDSerial;

	};

	/// ��Ȩ�ر�
	struct CTORATstpSPExerciseField
	{
		 
		///������
		TTORATstpSPDateType	TradingDay;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Լ��ϵͳ�еı��
		TTORATstpSPSecurityIDType	SecurityID;

		///ǰ�ñ��
		TTORATstpSPFrontIDType	FrontID;

		///�Ự���
		TTORATstpSPSessionIDType	SessionID;

		///Ͷ����˵���ĶԱ�����Ψһ����
		TTORATstpSPOrderRefType	ExerciseRef;

		///ȫϵͳ��Ψһ�������
		TTORATstpSPOrderSysIDType	ExerciseSysID;

		///���׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///���ر������
		TTORATstpSPOrderLocalIDType	ExerciseLocalID;

		///ִ������
		TTORATstpSPExerciseTypeType	ExerciseType;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///��Ȩ����
		TTORATstpSPVolumeType	Volume;

		///���������صĳ�������
		TTORATstpSPVolumeType	VolumeCanceled;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

		///a����ͨ��b�����ã�c������Ʒ
		TTORATstpSPShareholderIDTypeType	ShareholderIDType;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///�ʽ��˻�
		TTORATstpSPAccountIDType	AccountID;

		///����
		TTORATstpSPCurrencyIDType	CurrencyID;

		///��Ȩ״̬
		TTORATstpSPExerciseStatusType	ExerciseStatus;

		///��Ȩ����״̬
		TTORATstpSPOrderOperateStatusType	ExerciseOperateStatus;

		///״̬��Ϣ
		TTORATstpSPStatusMsgType	StatusMsg;

		///ϵͳ�������
		TTORATstpSPErrorIDType	ErrorID;

		///������ΪӪҵ������Ĵ���
		TTORATstpSPBranchIDType	BranchID;

		///�����걨�û�
		TTORATstpSPUserIDType	InsertUserID;

		///�걨����
		TTORATstpSPDateType	InsertDate;

		///�걨ʱ��
		TTORATstpSPTimeType	InsertTime;

		///�걨ʱ��(����)
		TTORATstpSPMillisecType	InsertMillisec;

		///����������ʱ��
		TTORATstpSPTimeType	AcceptTime;

		///����ʱ��
		TTORATstpSPTimeType	CancelTime;

		///�����걨�û�
		TTORATstpSPUserIDType	CancelUserID;

		///�ֻ���λ��Ȩ������ˮ��
		TTORATstpSPIntSerialType	StockPositionExerciseSerial;

		///�ֻ�ϵͳ��λ������ˮ��
		TTORATstpSPIntSerialType	StockPositionSerial;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///������
		TTORATstpSPRequestIDType	RequestID;

		///�ն���Ϣ
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///��¼���(����֤����ʹ��)
		TTORATstpSPSequenceNoType	RecordNumber;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

		///ί�з�ʽ
		TTORATstpSPOperwayType	Operway;

		///Ӳ�����к�
		TTORATstpSPHDSerialType	HDSerial;

		///�ƶ��豸�ֻ���
		TTORATstpSPMobileType	Mobile;

	};

	/// ��Ȩ��������
	struct CTORATstpSPInputExerciseActionField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///������������
		TTORATstpSPOrderRefType	ExerciseActionRef;

		///��������
		TTORATstpSPOrderRefType	ExerciseRef;

		///ǰ�ñ��
		TTORATstpSPFrontIDType	FrontID;

		///�Ự���
		TTORATstpSPSessionIDType	SessionID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///ȫϵͳ��Ψһ������š�
		TTORATstpSPOrderSysIDType	ExerciseSysID;

		///������־
		TTORATstpSPOrderActionFlagType	ExerciseActionFlag;

		///��Լ��ϵͳ�еı��
		TTORATstpSPSecurityIDType	SecurityID;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///ȫϵͳ��Ψһ������š�
		TTORATstpSPOrderLocalIDType	CancelExerciseLocalID;

		///�ն���Ϣ
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

		///ί�з�ʽ
		TTORATstpSPOperwayType	Operway;

		///Ӳ�����к�
		TTORATstpSPHDSerialType	HDSerial;

	};

	/// ��������
	struct CTORATstpSPInputLockField
	{
		 
		///��Լ��ϵͳ�еı��
		TTORATstpSPSecurityIDType	SecurityID;

		///Ͷ����˵���Ķ�������Ψһ����
		TTORATstpSPOrderRefType	LockRef;

		///�������
		TTORATstpSPLockTypeType	LockType;

		///��������
		TTORATstpSPVolumeType	Volume;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///һ���������ı��
		TTORATstpSPExchangeIDType	ExchangeID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///�ն���Ϣ
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///�������
		TTORATstpSPOrderSysIDType	LockSysID;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

		///ί�з�ʽ
		TTORATstpSPOperwayType	Operway;

		///Ӳ�����к�
		TTORATstpSPHDSerialType	HDSerial;

	};

	/// ����ί��
	struct CTORATstpSPLockField
	{
		 
		///������
		TTORATstpSPDateType	TradingDay;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Լ��ϵͳ�еı��
		TTORATstpSPSecurityIDType	SecurityID;

		///ǰ�ñ��
		TTORATstpSPFrontIDType	FrontID;

		///ÿһλ����Ա��������¼�ߵ�¼ϵͳ��õĻỰ��ţ���ǰʱ��Ψһ
		TTORATstpSPSessionIDType	SessionID;

		///Ͷ����˵���Ķ�������Ψһ����
		TTORATstpSPOrderRefType	LockRef;

		///�������
		TTORATstpSPOrderSysIDType	LockSysID;

		///���׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///���ر���˳���
		TTORATstpSPOrderLocalIDType	LockLocalID;

		///�������
		TTORATstpSPLockTypeType	LockType;

		///��������
		TTORATstpSPVolumeType	Volume;

		///���������صĳ�������
		TTORATstpSPVolumeType	VolumeCanceled;

		///������
		TTORATstpSPRequestIDType	RequestID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///�ͻ���ϵͳ�еı�ţ����Ψһ����ѭ�������ƶ��ı������
		TTORATstpSPShareholderIDType	ShareholderID;

		///��ͨ�����á�����Ʒ
		TTORATstpSPShareholderIDTypeType	ShareholderIDType;

		///����״̬
		TTORATstpSPLockStatusType	LockStatus;

		///��������
		TTORATstpSPDateType	InsertDate;

		///�걨ʱ��
		TTORATstpSPTimeType	InsertTime;

		///����������ʱ��
		TTORATstpSPTimeType	AcceptTime;

		///����ʱ��
		TTORATstpSPTimeType	CancelTime;

		///������Ӫҵ������
		TTORATstpSPBranchIDType	BranchID;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///���̴������
		TTORATstpSPErrorIDType	ErrorID;

		///״̬��Ϣ
		TTORATstpSPStatusMsgType	StatusMsg;

		///�걨����Ա
		TTORATstpSPUserIDType	InsertUserID;

		///�����걨�û�
		TTORATstpSPUserIDType	CancelUserID;

		///�ֻ���λ������ˮ��
		TTORATstpSPIntSerialType	StockPositionLockSerial;

		///�ֻ�ϵͳ��λ������ˮ��
		TTORATstpSPIntSerialType	StockPositionSerial;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///�ն���Ϣ
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

		///��¼���(����֤����ʹ��)
		TTORATstpSPSequenceNoType	RecordNumber;

		///ί�з�ʽ
		TTORATstpSPOperwayType	Operway;

		///Ӳ�����к�
		TTORATstpSPHDSerialType	HDSerial;

		///�ƶ��豸�ֻ���
		TTORATstpSPMobileType	Mobile;

	};

	/// ��Ȩ��������
	struct CTORATstpSPInputLockActionField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///������������
		TTORATstpSPOrderRefType	LockActionRef;

		///��������
		TTORATstpSPOrderRefType	LockRef;

		///ǰ�ñ��
		TTORATstpSPFrontIDType	FrontID;

		///�Ự���
		TTORATstpSPSessionIDType	SessionID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///ȫϵͳ��Ψһ������š�
		TTORATstpSPOrderSysIDType	LockSysID;

		///������־
		TTORATstpSPOrderActionFlagType	LockActionFlag;

		///��Լ��ϵͳ�еı��
		TTORATstpSPSecurityIDType	SecurityID;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///ȫϵͳ��Ψһ������š�
		TTORATstpSPOrderLocalIDType	CancelLockLocalID;

		///�ն���Ϣ
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

		///ί�з�ʽ
		TTORATstpSPOperwayType	Operway;

		///Ӳ�����к�
		TTORATstpSPHDSerialType	HDSerial;

	};

	/// ֤ȯ��������
	struct CTORATstpSPInputStockDisposalField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///������Ȩ��ĺ�Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///Ͷ����˵���Ķ�֤ȯ���õ�Ψһ����
		TTORATstpSPOrderRefType	StockDisposalRef;

		///֤ȯ�������������ɵ�λΪ�ɣ�ETF��λΪ�ݣ�
		TTORATstpSPVolumeType	Volume;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///֤ȯ�������
		TTORATstpSPStockDisposalTypeType	StockDisposalType;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///ϵͳ֤ȯ���ñ��
		TTORATstpSPOrderSysIDType	StockDisposalSysID;

		///�ն���Ϣ
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

		///ί�з�ʽ
		TTORATstpSPOperwayType	Operway;

		///Ӳ�����к�
		TTORATstpSPHDSerialType	HDSerial;

	};

	/// ֤ȯ���ñ�
	struct CTORATstpSPStockDisposalField
	{
		 
		///������
		TTORATstpSPDateType	TradingDay;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///������Ȩ��ĺ�Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///ǰ�ñ��
		TTORATstpSPFrontIDType	FrontID;

		///�Ự���
		TTORATstpSPSessionIDType	SessionID;

		///Ͷ����˵���Ķ�֤ȯ���õ�Ψһ����
		TTORATstpSPOrderRefType	StockDisposalRef;

		///ϵͳ֤ȯ���ñ��
		TTORATstpSPOrderSysIDType	StockDisposalSysID;

		///���׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///����֤ȯ���ñ��
		TTORATstpSPOrderLocalIDType	StockDisposalLocalID;

		///֤ȯ�������
		TTORATstpSPStockDisposalTypeType	StockDisposalType;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///֤ȯ��������
		TTORATstpSPVolumeType	Volume;

		///֤ȯ���ó�������
		TTORATstpSPVolumeType	VolumeCanceled;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

		///��ͨ�����á�����Ʒ
		TTORATstpSPShareholderIDTypeType	ShareholderIDType;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///֤ȯ����״̬
		TTORATstpSPStockDisposalStatusType	StockDisposalStatus;

		///֤ȯ���ò���״̬
		TTORATstpSPOrderOperateStatusType	StockDisposalOperateStatus;

		///״̬��Ϣ
		TTORATstpSPStatusMsgType	StatusMsg;

		///ϵͳ�������
		TTORATstpSPErrorIDType	ErrorID;

		///������ΪӪҵ������Ĵ���
		TTORATstpSPBranchIDType	BranchID;

		///�����걨�û�
		TTORATstpSPUserIDType	InsertUserID;

		///�걨����
		TTORATstpSPDateType	InsertDate;

		///�걨ʱ��
		TTORATstpSPTimeType	InsertTime;

		///�걨ʱ��(����)
		TTORATstpSPMillisecType	InsertMillisec;

		///����������ʱ��
		TTORATstpSPTimeType	AcceptTime;

		///����ʱ��
		TTORATstpSPTimeType	CancelTime;

		///�����걨�û�
		TTORATstpSPUserIDType	CancelUserID;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///������
		TTORATstpSPRequestIDType	RequestID;

		///�ն���Ϣ
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///��¼���(����֤����ʹ��)
		TTORATstpSPSequenceNoType	RecordNumber;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

		///ί�з�ʽ
		TTORATstpSPOperwayType	Operway;

		///Ӳ�����к�
		TTORATstpSPHDSerialType	HDSerial;

		///�ƶ��豸�ֻ���
		TTORATstpSPMobileType	Mobile;

	};

	/// ֤ȯ���ò�������
	struct CTORATstpSPInputStockDisposalActionField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///֤ȯ���ò�������
		TTORATstpSPOrderRefType	StockDisposalActionRef;

		///֤ȯ��������
		TTORATstpSPOrderRefType	StockDisposalRef;

		///ǰ�ñ��
		TTORATstpSPFrontIDType	FrontID;

		///�Ự���
		TTORATstpSPSessionIDType	SessionID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///֤ȯ����ϵͳ���
		TTORATstpSPOrderSysIDType	StockDisposalSysID;

		///������־
		TTORATstpSPOrderActionFlagType	StockDisposalActionFlag;

		///��Լ��ϵͳ�еı��
		TTORATstpSPSecurityIDType	SecurityID;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///ȫϵͳ��Ψһ������š�
		TTORATstpSPOrderLocalIDType	CancelStockDisposalLocalID;

		///�ն���Ϣ
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

		///ί�з�ʽ
		TTORATstpSPOperwayType	Operway;

		///Ӳ�����к�
		TTORATstpSPHDSerialType	HDSerial;

	};

	/// ���ί������
	struct CTORATstpSPInputCombOrderField
	{
		 
		///��Ϻ�Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///Ͷ����˵���Ķ���ϵ�Ψһ����
		TTORATstpSPOrderRefType	CombOrderRef;

		///��ϲ���
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

		///��ϱ������
		TTORATstpSPCombDirectionType	CombDirection;

		///��������ϱ���(���ʱ����)
		TTORATstpSPExchangeCombIDType	ExchangeCombID;

		///��������
		TTORATstpSPVolumeType	Volume;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///һ���������ı��
		TTORATstpSPExchangeIDType	ExchangeID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�ʽ��˻�
		TTORATstpSPAccountIDType	AccountID;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///�ն���Ϣ
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///���ϵͳ���
		TTORATstpSPOrderSysIDType	CombOrderSysID;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

		///ί�з�ʽ
		TTORATstpSPOperwayType	Operway;

		///Ӳ�����к�
		TTORATstpSPHDSerialType	HDSerial;

	};

	/// ֤ȯ���ί��
	struct CTORATstpSPCombOrderField
	{
		 
		///������
		TTORATstpSPDateType	TradingDay;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Ϻ�Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///��ϲ���
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

		///��ϱ������
		TTORATstpSPCombDirectionType	CombDirection;

		///ǰ�ñ��
		TTORATstpSPFrontIDType	FrontID;

		///ÿһλ����Ա��������¼�ߵ�¼ϵͳ��õĻỰ��ţ���ǰʱ��Ψһ
		TTORATstpSPSessionIDType	SessionID;

		///Ͷ����˵���Ķ���ϵ�Ψһ����
		TTORATstpSPOrderRefType	CombOrderRef;

		///���ϵͳ���
		TTORATstpSPOrderSysIDType	CombOrderSysID;

		///���׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///������ϱ������
		TTORATstpSPOrderLocalIDType	CombOrderLocalID;

		///��������
		TTORATstpSPVolumeType	Volume;

		///���������صĳ�������
		TTORATstpSPVolumeType	VolumeCanceled;

		///������
		TTORATstpSPRequestIDType	RequestID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///�ͻ���ϵͳ�еı�ţ����Ψһ����ѭ�������ƶ��ı������
		TTORATstpSPShareholderIDType	ShareholderID;

		///��ͨ�����á�����Ʒ
		TTORATstpSPShareholderIDTypeType	ShareholderIDType;

		///���ί��״̬
		TTORATstpSPOrderStatusType	CombOrderStatus;

		///���ί�в���״̬
		TTORATstpSPOrderOperateStatusType	CombOrderOperateStatus;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///�ʽ��˻�
		TTORATstpSPAccountIDType	AccountID;

		///����
		TTORATstpSPCurrencyIDType	CurrencyID;

		///��������ϱ���
		TTORATstpSPExchangeCombIDType	ExchangeCombID;

		///��������
		TTORATstpSPDateType	InsertDate;

		///�걨ʱ��
		TTORATstpSPTimeType	InsertTime;

		///�걨ʱ��(����)
		TTORATstpSPMillisecType	InsertMillisec;

		///����������ʱ��
		TTORATstpSPTimeType	AcceptTime;

		///����ʱ��
		TTORATstpSPTimeType	CancelTime;

		///������Ӫҵ������
		TTORATstpSPBranchIDType	BranchID;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///���̴������
		TTORATstpSPErrorIDType	ErrorID;

		///״̬��Ϣ
		TTORATstpSPStatusMsgType	StatusMsg;

		///�걨����Ա
		TTORATstpSPUserIDType	InsertUserID;

		///�����걨�û�
		TTORATstpSPUserIDType	CancelUserID;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///�ն���Ϣ
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///��¼���(����֤����ʹ��)
		TTORATstpSPSequenceNoType	RecordNumber;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

		///ί�з�ʽ
		TTORATstpSPOperwayType	Operway;

		///Ӳ�����к�
		TTORATstpSPHDSerialType	HDSerial;

		///�ƶ��豸�ֻ���
		TTORATstpSPMobileType	Mobile;

	};

	/// ���ί�в�������
	struct CTORATstpSPInputCombOrderActionField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///��ϱ�����������
		TTORATstpSPOrderRefType	CombOrderActionRef;

		///��ϱ�������
		TTORATstpSPOrderRefType	CombOrderRef;

		///ǰ�ñ��
		TTORATstpSPFrontIDType	FrontID;

		///�Ự���
		TTORATstpSPSessionIDType	SessionID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///ȫϵͳ��Ψһ��ϱ�����š�
		TTORATstpSPOrderSysIDType	CombOrderSysID;

		///��ϱ���������־
		TTORATstpSPOrderActionFlagType	CombOrderActionFlag;

		///��Ϻ�Լ��ϵͳ�еı��
		TTORATstpSPSecurityIDType	SecurityID;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///ȫϵͳ��Ψһ����ϱ����������
		TTORATstpSPOrderLocalIDType	CancelCombOrderLocalID;

		///�ն���Ϣ
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

		///ί�з�ʽ
		TTORATstpSPOperwayType	Operway;

		///Ӳ�����к�
		TTORATstpSPHDSerialType	HDSerial;

	};

	/// ������¼����
	struct CTORATstpSPInputCondOrderField
	{
		 
		///��Լ��ϵͳ�еı��
		TTORATstpSPSecurityIDType	SecurityID;

		///Ͷ����˵���Ķ���������Ψһ����
		TTORATstpSPOrderRefType	CondOrderRef;

		///�޼۵����м۵�
		TTORATstpSPOrderPriceTypeType	OrderPriceType;

		///����
		TTORATstpSPDirectionType	Direction;

		///���ֽڱ�ʾ��������Լ�Ŀ�ƽ����
		TTORATstpSPCombOffsetFlagType	CombOffsetFlag;

		///���ֽڱ�ʾ��������Լ������ױ���־
		TTORATstpSPCombHedgeFlagType	CombHedgeFlag;

		///�޼۵��۸�
		TTORATstpSPPriceType	LimitPrice;

		///��������
		TTORATstpSPVolumeType	VolumeTotalOriginal;

		///IOC��GFS��GFD��GTD��GTC��GFA
		TTORATstpSPTimeConditionType	TimeCondition;

		///AV��MV��CV
		TTORATstpSPVolumeConditionType	VolumeCondition;

		///���ɽ�������ΪMVʱ��Ч
		TTORATstpSPVolumeType	MinVolume;

		///ǿƽԭ��
		TTORATstpSPForceCloseReasonType	ForceCloseReason;

		///�û�ǿ����־
		TTORATstpSPBoolType	UserForceClose;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///һ���������ı��
		TTORATstpSPExchangeIDType	ExchangeID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�ʽ��˻�
		TTORATstpSPAccountIDType	AccountID;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///�������
		TTORATstpSPCondOrderIDType	CondOrderID;

		///�ն���Ϣ
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

		///������������
		TTORATstpSPOrderVolumeTypeType	OrderVolumeType;

		///��������������
		TTORATstpSPContingentConditionType	ContingentCondition;

		///������
		TTORATstpSPPriceType	ConditionPrice;

		///�۸񸡶�tick��,>0���ϸ���,<0���¸���,=0������
		TTORATstpSPVolumeType	PriceTicks;

		///������������,����>=0
		TTORATstpSPVolumeMultipleType	VolumeMultiple;

		///���ǰ�ñ��
		TTORATstpSPFrontIDType	RelativeFrontID;

		///��ػỰ���
		TTORATstpSPSessionIDType	RelativeSessionID;

		///�����������,����ΪOrderRef��OrderSysID��Time��SecurityID
		TTORATstpSPRelativeCondParamType	RelativeParam;

		///���Ӵ�������
		TTORATstpSPContingentConditionType	AppendContingentCondition;

		///����������
		TTORATstpSPPriceType	AppendConditionPrice;

		///�������ǰ�ñ��
		TTORATstpSPFrontIDType	AppendRelativeFrontID;

		///������ػỰ���
		TTORATstpSPSessionIDType	AppendRelativeSessionID;

		///���������������,����ΪOrderRef��OrderSysID��Time��SecurityID
		TTORATstpSPRelativeCondParamType	AppendRelativeParam;

		///ί�з�ʽ
		TTORATstpSPOperwayType	Operway;

		///Ӳ�����к�
		TTORATstpSPHDSerialType	HDSerial;

	};

	/// ��������
	struct CTORATstpSPConditionOrderField
	{
		 
		///������
		TTORATstpSPDateType	TradingDay;

		///��Լ��ϵͳ�еı��
		TTORATstpSPSecurityIDType	SecurityID;

		///Ͷ����˵���Ķ���������Ψһ����
		TTORATstpSPOrderRefType	CondOrderRef;

		///�޼۵����м۵�
		TTORATstpSPOrderPriceTypeType	OrderPriceType;

		///����
		TTORATstpSPDirectionType	Direction;

		///���ֽڱ�ʾ��������Լ�Ŀ�ƽ����
		TTORATstpSPCombOffsetFlagType	CombOffsetFlag;

		///���ֽڱ�ʾ��������Լ������ױ���־
		TTORATstpSPCombHedgeFlagType	CombHedgeFlag;

		///�޼۵��۸�
		TTORATstpSPPriceType	LimitPrice;

		///��������
		TTORATstpSPVolumeType	VolumeTotalOriginal;

		///IOC��GFS��GFD��GTD��GTC��GFA
		TTORATstpSPTimeConditionType	TimeCondition;

		///AV��MV��CV
		TTORATstpSPVolumeConditionType	VolumeCondition;

		///���ɽ�������ΪMVʱ��Ч
		TTORATstpSPVolumeType	MinVolume;

		///ǿƽԭ��
		TTORATstpSPForceCloseReasonType	ForceCloseReason;

		///������
		TTORATstpSPRequestIDType	RequestID;

		///�û�ǿ����־
		TTORATstpSPBoolType	UserForceClose;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///һ���������ı��
		TTORATstpSPExchangeIDType	ExchangeID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�ʽ��˻�
		TTORATstpSPAccountIDType	AccountID;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///�������
		TTORATstpSPCondOrderIDType	CondOrderID;

		///�ն���Ϣ
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

		///������������
		TTORATstpSPOrderVolumeTypeType	OrderVolumeType;

		///��������������
		TTORATstpSPContingentConditionType	ContingentCondition;

		///������
		TTORATstpSPPriceType	ConditionPrice;

		///�۸񸡶�tick��,>0���ϸ���,<0���¸���,=0������
		TTORATstpSPVolumeType	PriceTicks;

		///������������,����>=0
		TTORATstpSPVolumeMultipleType	VolumeMultiple;

		///���ǰ�ñ��
		TTORATstpSPFrontIDType	RelativeFrontID;

		///��ػỰ���
		TTORATstpSPSessionIDType	RelativeSessionID;

		///�����������,����ΪOrderRef��OrderSysID��Time��SecurityID
		TTORATstpSPRelativeCondParamType	RelativeParam;

		///���Ӵ�������
		TTORATstpSPContingentConditionType	AppendContingentCondition;

		///����������
		TTORATstpSPPriceType	AppendConditionPrice;

		///�������ǰ�ñ��
		TTORATstpSPFrontIDType	AppendRelativeFrontID;

		///������ػỰ���
		TTORATstpSPSessionIDType	AppendRelativeSessionID;

		///���������������,����ΪOrderRef��OrderSysID��Time��SecurityID
		TTORATstpSPRelativeCondParamType	AppendRelativeParam;

		///ǰ�ñ��
		TTORATstpSPFrontIDType	FrontID;

		///�Ự���
		TTORATstpSPSessionIDType	SessionID;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///������״̬
		TTORATstpSPCondOrderStatusType	CondOrderStatus;

		///״̬��Ϣ
		TTORATstpSPErrorMsgType	StatusMsg;

		///�����걨�û�
		TTORATstpSPUserIDType	InsertUserID;

		///��������
		TTORATstpSPDateType	InsertDate;

		///ί��ʱ��
		TTORATstpSPTimeType	InsertTime;

		///�걨ʱ��(����)
		TTORATstpSPMillisecType	InsertMillisec;

		///����ʱ��
		TTORATstpSPTimeType	CancelTime;

		///�����û�
		TTORATstpSPUserIDType	CancelUserID;

		///����ʱ��
		TTORATstpSPTimeType	ActiveTime;

		///ί�з�ʽ
		TTORATstpSPOperwayType	Operway;

		///Ӳ�����к�
		TTORATstpSPHDSerialType	HDSerial;

	};

	/// ����������¼��
	struct CTORATstpSPInputCondOrderActionField
	{
		 
		///һ���������ı��
		TTORATstpSPExchangeIDType	ExchangeID;

		///��������������
		TTORATstpSPOrderRefType	CondOrderActionRef;

		///����������
		TTORATstpSPOrderRefType	CondOrderRef;

		///ǰ�ñ��
		TTORATstpSPFrontIDType	FrontID;

		///�Ự���
		TTORATstpSPSessionIDType	SessionID;

		///�������
		TTORATstpSPCondOrderIDType	CondOrderID;

		///ί�в�����־
		TTORATstpSPOrderActionFlagType	OrderActionFlag;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///��Լ��ϵͳ�еı��
		TTORATstpSPSecurityIDType	SecurityID;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///�������������
		TTORATstpSPCondOrderIDType	CancelCondOrderID;

		///�ն���Ϣ
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

		///ί�з�ʽ
		TTORATstpSPOperwayType	Operway;

		///Ӳ�����к�
		TTORATstpSPHDSerialType	HDSerial;

	};

	/// ��ѯ�����Ϻ�Լ��֤����䶯����
	struct CTORATstpSPReqInquirySplitCombMarginDifferenceField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Ϻ�Լ����
		TTORATstpSPSecurityIDType	CombSecurityID;

		///��������ϱ���
		TTORATstpSPExchangeCombIDType	ExchangeCombID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///��ϲ���
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

		///��������
		TTORATstpSPVolumeType	Volume;

	};

	/// ��ѯ�����Ϻ�Լ��֤����䶯������Ӧ
	struct CTORATstpSPRspInquirySplitCombMarginDifferenceField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Ϻ�Լ����
		TTORATstpSPSecurityIDType	CombSecurityID;

		///��������ϱ���
		TTORATstpSPExchangeCombIDType	ExchangeCombID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///��ϲ���
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

		///��������
		TTORATstpSPVolumeType	Volume;

		///�û�������
		TTORATstpSPRequestIDType	RequestID;

		///���Ⱥ�Լռ�ñ�֤��
		TTORATstpSPPriceType	LeftLegPosMargin;

		///���Ⱥ�Լռ��ʵʱ��֤��
		TTORATstpSPPriceType	LeftLegPosLiveMargin;

		///���Ⱥ�Լռ�ñ�֤���
		TTORATstpSPPriceType	RightLegPosMargin;

		///���Ⱥ�Լռ��ʵʱ��֤���
		TTORATstpSPPriceType	RightLegPosLiveMargin;

		///��ϲ�λռ�õı�֤��
		TTORATstpSPPriceType	CombPosMargin;

		///��ϲ�λռ�õ�ʵʱ��֤��
		TTORATstpSPPriceType	CombPosLiveMargin;

		///��֤�����Ϻ�Լ��ֺ�����ǰ��֤��Ĳ�
		TTORATstpSPPriceType	MarginDifference;

		///ʵʱ��֤�����Ϻ�Լ��ֺ�����ǰ��֤��Ĳ�
		TTORATstpSPPriceType	LiveMarginDifference;

	};

	/// �ʽ�ת��
	struct CTORATstpSPInputTransferFundField
	{
		 
		///������ˮ��
		TTORATstpSPIntSerialType	ApplySerial;

		///�ʽ��˻�
		TTORATstpSPAccountIDType	AccountID;

		///����
		TTORATstpSPCurrencyIDType	CurrencyID;

		///ת�Ʒ���
		TTORATstpSPTransferDirectionType	TransferDirection;

		///ת�˽��
		TTORATstpSPMoneyType	Amount;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///�ʽ�����
		TTORATstpSPPasswordType	TradingAccountPassword;

		///���д���
		TTORATstpSPBankIDType	BankID;

		///�����˻�����
		TTORATstpSPPasswordType	BankAccountPassword;

	};

	/// �ʽ�ת�ƻر�
	struct CTORATstpSPTransferFundField
	{
		 
		///ת����ˮ��(��̨���)
		TTORATstpSPIntSerialType	FundSerial;

		///������ˮ��
		TTORATstpSPIntSerialType	ApplySerial;

		///ǰ�ñ��
		TTORATstpSPFrontIDType	FrontID;

		///�Ự���
		TTORATstpSPSessionIDType	SessionID;

		///�ʽ��˻�����
		TTORATstpSPAccountIDType	AccountID;

		///���ִ���
		TTORATstpSPCurrencyIDType	CurrencyID;

		///ת�Ʒ���
		TTORATstpSPTransferDirectionType	TransferDirection;

		///�ʽ��˻����ճ������
		TTORATstpSPMoneyType	Amount;

		///ת��״̬
		TTORATstpSPTransferStatusType	TransferStatus;

		///������Ա
		TTORATstpSPUserIDType	OperatorID;

		///��������
		TTORATstpSPDateType	OperateDate;

		///����ʱ��
		TTORATstpSPTimeType	OperateTime;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///ǩԼ�����˻�
		TTORATstpSPBankAccountIDType	BankAccountID;

		///���д���
		TTORATstpSPBankIDType	BankID;

	};

	/// ��λת��
	struct CTORATstpSPInputTransferPositionField
	{
		 
		///������ˮ��
		TTORATstpSPIntSerialType	ApplySerial;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///ת�Ʒ���
		TTORATstpSPTransferDirectionType	TransferDirection;

		///����
		TTORATstpSPVolumeType	Volume;

		///ת�Ƴֲ�����
		TTORATstpSPTransferPositionTypeType	TransferPositionType;

		///�ࡢ��
		TTORATstpSPPosiDirectionType	PosiDirection;

		///Ͷ���ױ���־
		TTORATstpSPHedgeFlagType	HedgeFlag;

	};

	/// ��λת�ƻر�
	struct CTORATstpSPTransferPositionField
	{
		 
		///��λת����ˮ��
		TTORATstpSPIntSerialType	PositionSerial;

		///������ˮ��
		TTORATstpSPIntSerialType	ApplySerial;

		///ǰ�ñ��
		TTORATstpSPFrontIDType	FrontID;

		///�Ự���
		TTORATstpSPSessionIDType	SessionID;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///�ࡢ��
		TTORATstpSPPosiDirectionType	PosiDirection;

		///Ͷ���ױ���־
		TTORATstpSPHedgeFlagType	HedgeFlag;

		///֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///������
		TTORATstpSPDateType	TradingDay;

		///ת�Ʒ���
		TTORATstpSPTransferDirectionType	TransferDirection;

		///ת�Ƴֲ�����
		TTORATstpSPTransferPositionTypeType	TransferPositionType;

		///���ղ�λת��ת��������
		TTORATstpSPVolumeType	HistoryVolume;

		///���ղ�λת��ת��������
		TTORATstpSPVolumeType	TodayVolume;

		///ת��״̬��0��������1���ѳ���
		TTORATstpSPTransferStatusType	TransferStatus;

		///������Ա
		TTORATstpSPUserIDType	OperatorID;

		///��������
		TTORATstpSPDateType	OperateDate;

		///����ʱ��
		TTORATstpSPTimeType	OperateTime;

	};

	/// ֤ȯ��λת������
	struct CTORATstpSPInputTransferStockPositionField
	{
		 
		///������ˮ��
		TTORATstpSPIntSerialType	ApplySerial;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///������Ȩ����ֻ�ת��ԭ��
		TTORATstpSPSPStockTransferReasonType	SPStockTransferReason;

		///����
		TTORATstpSPVolumeType	Volume;

		///ת�Ƴֲ�����
		TTORATstpSPTransferPositionTypeType	TransferPositionType;

	};

	/// ֤ȯ��λת�ƻر�
	struct CTORATstpSPTransferStockPositionField
	{
		 
		///��λת����ˮ��
		TTORATstpSPIntSerialType	PositionSerial;

		///������ˮ��
		TTORATstpSPIntSerialType	ApplySerial;

		///ǰ�ñ��
		TTORATstpSPFrontIDType	FrontID;

		///�Ự���
		TTORATstpSPSessionIDType	SessionID;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///������
		TTORATstpSPDateType	TradingDay;

		///������Ȩ����ֻ�ת��ԭ��
		TTORATstpSPSPStockTransferReasonType	SPStockTransferReason;

		///ת�Ƴֲ�����
		TTORATstpSPTransferPositionTypeType	TransferPositionType;

		///���ղ�λת��ת������
		TTORATstpSPVolumeType	HistoryVolume;

		///����������λת��ת������
		TTORATstpSPVolumeType	TodayBSVolume;

		///���������λת��ת������
		TTORATstpSPVolumeType	TodayPRVolume;

		///���ڴ���ʧ�ܵ�
		TTORATstpSPTransferStatusType	TransferStatus;

		///������Ա
		TTORATstpSPUserIDType	OperatorID;

		///��������
		TTORATstpSPDateType	OperateDate;

		///����ʱ��
		TTORATstpSPTimeType	OperateTime;

	};

	/// ��ѯ���н���ϵͳ�ʽ�����
	struct CTORATstpSPReqInquiryJZFundField
	{
		 
		///�ʽ��˻�
		TTORATstpSPAccountIDType	AccountID;

		///����
		TTORATstpSPCurrencyIDType	CurrencyID;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

	};

	/// ��ѯ���н���ϵͳ�ʽ���Ӧ
	struct CTORATstpSPRspInquiryJZFundField
	{
		 
		///�ʽ��˻�
		TTORATstpSPAccountIDType	AccountID;

		///����
		TTORATstpSPCurrencyIDType	CurrencyID;

		///���ý��
		TTORATstpSPMoneyType	UsefulMoney;

		///��ȡ���
		TTORATstpSPMoneyType	FetchLimit;

		///�û�������
		TTORATstpSPRequestIDType	RequestID;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

	};

	/// �ش���������
	struct CTORATstpSPUploadTradeDataField
	{
		 
		///���������룬Ŀǰ֧�� SSE(�Ϻ�֤ȯ������)��SZSE(����֤ȯ������)
		TTORATstpSPExchangeIDType	ExchangeID;

		///������
		TTORATstpSPDateType	TradingDay;

		///�Ƿ�ǿ�ƻش���0=��;1=��
		TTORATstpSPBoolType	bForce;

		///�ش�����
		TTORATstpSPUploadTypeType	UploadType;

	};

	/// ��ѯ�����˻��������
	struct CTORATstpSPReqInquiryBankAccountFundField
	{
		 
		///�ʽ��˻�
		TTORATstpSPAccountIDType	AccountID;

		///����
		TTORATstpSPCurrencyIDType	CurrencyID;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///�����˻�����
		TTORATstpSPPasswordType	BankAccountPassword;

	};

	/// ��ѯ�����˻������Ӧ
	struct CTORATstpSPRspInquiryBankAccountFundField
	{
		 
		///�ʽ��˻�
		TTORATstpSPAccountIDType	AccountID;

		///����
		TTORATstpSPCurrencyIDType	CurrencyID;

		///�˻����
		TTORATstpSPMoneyType	Balance;

		///�û�������
		TTORATstpSPRequestIDType	RequestID;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///���д���
		TTORATstpSPBankIDType	BankID;

		///ǩԼ�����˻�
		TTORATstpSPBankAccountIDType	BankAccountID;

	};

	/// API����ͬ�����ҹɷݲ����λ��Ϣ
	struct CTORATstpSPSyncInsufficientCoveredStockPosField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

		///�����˻�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///�ʽ��˻�
		TTORATstpSPAccountIDType	AccountID;

		///����
		TTORATstpSPCurrencyIDType	CurrencyID;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// ��ѯ�ֻ�ϵͳ��λ����
	struct CTORATstpSPReqInquiryStockPositionField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�������µĽ����г�
		TTORATstpSPMarketIDType	MarketID;

		///�����˻�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///��������
		TTORATstpSPDateType	TradingDay;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�ֻ�֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// ��ѯ�ֻ�ϵͳ��λ��Ӧ
	struct CTORATstpSPRspInquiryStockPositionField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///�����˻�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///��������
		TTORATstpSPDateType	TradingDay;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///���ճֲ֣��������ճֲֶ���������
		TTORATstpSPVolumeType	HistoryPos;

		///���ճֲֶ���
		TTORATstpSPVolumeType	HistoryPosFrozen;

		///���������ֲ֣��������������ֲֶ���������
		TTORATstpSPVolumeType	TodayBSPos;

		///���������ֲֶ���
		TTORATstpSPVolumeType	TodayBSPosFrozen;

		///��������ֲ֣�������������ֲֶ���������
		TTORATstpSPVolumeType	TodayPRPos;

		///��������ֲֶ���
		TTORATstpSPVolumeType	TodayPRPosFrozen;

		///���ղ�ֺϲ��ֲ֣��������ղ�ֺϲ��ֲֶ���������
		TTORATstpSPVolumeType	TodaySMPos;

		///���ղ�ֺϲ��ֲֶ���
		TTORATstpSPVolumeType	TodaySMPosFrozen;

		///���ճֲֳɱ���
		TTORATstpSPMoneyType	HistoryPosCost;

		///�ֲֳܳɱ�
		TTORATstpSPMoneyType	TotalPosCost;

		///���ʲ�λ
		TTORATstpSPVolumeType	MarginBuyPos;

		///��ȯ��λ������������ȯ��λ��
		TTORATstpSPVolumeType	ShortSellPos;

		///������ȯ��λ
		TTORATstpSPVolumeType	TodayShortSellPos;

		///�ϴ����(���в���)
		TTORATstpSPVolumeType	PrePosition;

		///�ɷݿ���
		TTORATstpSPVolumeType	AvailablePosition;

		///�ɷ����
		TTORATstpSPVolumeType	CurrentPosition;

		///�û�������
		TTORATstpSPRequestIDType	RequestID;

	};

	/// ��������
	struct CTORATstpSPSpecificSecurityField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// �������֪ͨ
	struct CTORATstpSPMarketDataField
	{
		 
		///֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///������
		TTORATstpSPDateType	TradingDay;

		///֤ȯ����
		TTORATstpSPSecurityNameType	SecurityName;

		///��һ�����̼�
		TTORATstpSPPriceType	PreClosePrice;

		///���տ��̼�
		TTORATstpSPPriceType	OpenPrice;

		///��ͣ�۸�
		TTORATstpSPPriceType	UpperLimitPrice;

		///��ͣ�۸�
		TTORATstpSPPriceType	LowerLimitPrice;

		///��֤ȯ�ڵ��յĳɽ�����
		TTORATstpSPLongVolumeType	Volume;

		///��֤ȯ�ڵ��յĳɽ����
		TTORATstpSPMoneyType	Turnover;

		///��֤ȯ�ڵ��յĳɽ�����
		TTORATstpSPLongVolumeType	TradingCount;

		///���ո�֤ȯ�����ڼ�����³ɽ��۸�
		TTORATstpSPPriceType	LastPrice;

		///���̼۸�
		TTORATstpSPPriceType	ClosePrice;

		///һ��ʱ���ڸ�֤ȯ�ɽ����е���߳ɽ��۸�
		TTORATstpSPPriceType	HighestPrice;

		///һ��ʱ���ڸ�֤ȯ�ɽ����е���ͳɽ��۸�
		TTORATstpSPPriceType	LowestPrice;

		///ָ��֤ȯ��ǰ����ӯ��
		TTORATstpSPRatioType	PERatio1;

		///ָ��֤ȯ��ǰ����ӯ��
		TTORATstpSPRatioType	PERatio2;

		///���¼�-ǰ���̼۸�
		TTORATstpSPPriceType	PriceUpDown1;

		///���¼�-�ϱʳɽ��۸�
		TTORATstpSPPriceType	PriceUpDown2;

		///�ֲ���
		TTORATstpSPLargeVolumeType	OpenInterest;

		///��֤ȯ��ǰ��������۸�
		TTORATstpSPPriceType	BidPrice1;

		///��֤ȯ��ǰ���������۸�
		TTORATstpSPPriceType	AskPrice1;

		///��֤ȯ��ǰ���ż�λ�������������
		TTORATstpSPLongVolumeType	BidVolume1;

		///��֤ȯ��ǰ���ż�λ��������������
		TTORATstpSPLongVolumeType	AskVolume1;

		///��֤ȯ��ǰ�ڶ�������۸�
		TTORATstpSPPriceType	BidPrice2;

		///��֤ȯ��ǰ�ڶ��ż�λ�������������
		TTORATstpSPLongVolumeType	BidVolume2;

		///��֤ȯ��ǰ�ڶ��������۸�
		TTORATstpSPPriceType	AskPrice2;

		///��֤ȯ��ǰ�ڶ��ż�λ��������������
		TTORATstpSPLongVolumeType	AskVolume2;

		///��֤ȯ��ǰ����������۸�
		TTORATstpSPPriceType	BidPrice3;

		///��֤ȯ��ǰ�����ż�λ�������������
		TTORATstpSPLongVolumeType	BidVolume3;

		///��֤ȯ��ǰ�����������۸�
		TTORATstpSPPriceType	AskPrice3;

		///��֤ȯ��ǰ�����ż�λ��������������
		TTORATstpSPLongVolumeType	AskVolume3;

		///��֤ȯ��ǰ����������۸�
		TTORATstpSPPriceType	BidPrice4;

		///��֤ȯ��ǰ�����ż�λ�������������
		TTORATstpSPLongVolumeType	BidVolume4;

		///��֤ȯ��ǰ�����������۸�
		TTORATstpSPPriceType	AskPrice4;

		///��֤ȯ��ǰ�����ż�λ��������������
		TTORATstpSPLongVolumeType	AskVolume4;

		///��֤ȯ��ǰ����������۸�
		TTORATstpSPPriceType	BidPrice5;

		///��֤ȯ��ǰ�����ż�λ�������������
		TTORATstpSPLongVolumeType	BidVolume5;

		///��֤ȯ��ǰ�����������۸�
		TTORATstpSPPriceType	AskPrice5;

		///��֤ȯ��ǰ�����ż�λ��������������
		TTORATstpSPLongVolumeType	AskVolume5;

		///����޸�ʱ��
		TTORATstpSPTimeType	UpdateTime;

		///����޸ĺ���
		TTORATstpSPMillisecType	UpdateMillisec;

		///�����Ʒʵʱ״̬
		TTORATstpSPMDSecurityStatType	MDSecurityStat;

		///��Լ�����
		TTORATstpSPPriceType	SettlementPrice;

	};

	/// �г�״̬
	struct CTORATstpSPMarketStatusField
	{
		 
		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///�г�״̬
		TTORATstpSPMarketStatusType	MarketStatus;

	};

	/// ����֪ͨ
	struct CTORATstpSPTradingNoticeField
	{
		 
		///֪ͨ��ˮ��
		TTORATstpSPSerialType	NoticeSerial;

		///֪ͨ����
		TTORATstpSPDateType	InsertDate;

		///֪ͨʱ��
		TTORATstpSPTimeType	InsertTime;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///֪ͨ��Ϣ����
		TTORATstpSPMessageType	Content;

		///����Ա
		TTORATstpSPUserIDType	OperatorID;

	};

	/// ��ѯ������
	struct CTORATstpSPQryExchangeField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

	};

	/// ������
	struct CTORATstpSPExchangeField
	{
		 
		///
		TTORATstpSPExchangeIDType	ExchangeID;

		///
		TTORATstpSPNameType	ExchangeName;

		///
		TTORATstpSPDateType	TradingDay;

		///
		TTORATstpSPDataSyncStatusType	DataSyncStatus;

	};

	/// ��ѯʵʱ����
	struct CTORATstpSPQryMarketDataField
	{
		 
		///֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

	};

	/// ��ѯ��Լ��Ϣ
	struct CTORATstpSPQrySecurityField
	{
		 
		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

	};

	/// ��Լ��Ϣ
	struct CTORATstpSPSecurityField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///��������Լ����
		TTORATstpSPExchSecurityIDType	ExchSecurityID;

		///��Լ����
		TTORATstpSPSecurityNameType	SecurityName;

		///����֤ȯ����
		TTORATstpSPSecurityIDType	UnderlyingSecurityID;

		///����֤ȯ����
		TTORATstpSPSecurityNameType	UnderlyingSecurityName;

		///��Լ������Ʒ����
		TTORATstpSPVolumeMultipleType	UnderlyingMultiple;

		///ִ�з�ʽ
		TTORATstpSPStrikeModeType	StrikeMode;

		///��Ȩ����
		TTORATstpSPOptionsTypeType	OptionsType;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

		///��Ʒ����
		TTORATstpSPProductIDType	ProductID;

		///֤ȯ������
		TTORATstpSPSecurityTypeType	SecurityType;

		///�걨��λ
		TTORATstpSPOrderUnitType	OrderUnit;

		///���뽻�׵�λ
		TTORATstpSPTradingUnitType	BuyTradingUnit;

		///�������׵�λ
		TTORATstpSPTradingUnitType	SellTradingUnit;

		///�м۵�������µ���
		TTORATstpSPVolumeType	MaxMarketOrderBuyVolume;

		///�м۵�����С�µ���
		TTORATstpSPVolumeType	MinMarketOrderBuyVolume;

		///�޼۵�������µ���
		TTORATstpSPVolumeType	MaxLimitOrderBuyVolume;

		///�޼۵�����С�µ���
		TTORATstpSPVolumeType	MinLimitOrderBuyVolume;

		///�м۵�������µ���
		TTORATstpSPVolumeType	MaxMarketOrderSellVolume;

		///�м۵�����С�µ���
		TTORATstpSPVolumeType	MinMarketOrderSellVolume;

		///�޼۵�������µ���
		TTORATstpSPVolumeType	MaxLimitOrderSellVolume;

		///�޼۵�����С�µ���
		TTORATstpSPVolumeType	MinLimitOrderSellVolume;

		///��������
		TTORATstpSPVolumeMultipleType	VolumeMultiple;

		///��С�䶯��λ
		TTORATstpSPPriceTickType	PriceTick;

		///�ֲ�����
		TTORATstpSPPositionTypeType	PositionType;

		///֤ȯ״̬
		TTORATstpSPSecurityStatusType	SecurityStatus;

		///ִ�м�
		TTORATstpSPPriceType	StrikePrice;

		///�׽�����
		TTORATstpSPDateType	FirstDate;

		///�������
		TTORATstpSPDateType	LastDate;

		///��Ȩ��
		TTORATstpSPDateType	StrikeDate;

		///������
		TTORATstpSPDateType	ExpireDate;

		///������
		TTORATstpSPDateType	DelivDate;

		///�Ƿ����ǵ�������
		TTORATstpSPBoolType	IsUpDownLimit;

		///��Ȩ��λ��֤��
		TTORATstpSPPriceType	MarginUnit;

		///��Լǰ�����
		TTORATstpSPPriceType	PreSettlementPrice;

		///��Լǰ���̼�
		TTORATstpSPPriceType	PreClosePrice;

		///��ĺ�Լǰ���̼�
		TTORATstpSPPriceType	UnderlyingPreClosePrice;

	};

	/// ��ѯ���͹�˾�û���Ͷ���߹�ϵ
	struct CTORATstpSPQryBUProxyField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///�����û�����
		TTORATstpSPUserIDType	UserID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

	};

	/// ���͹�˾�û���Ͷ���߹�ϵ
	struct CTORATstpSPBUProxyField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///�û�����
		TTORATstpSPUserIDType	UserID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

	};

	/// ��ѯUser
	struct CTORATstpSPQryUserField
	{
		 
		///�û�����
		TTORATstpSPUserIDType	UserID;

		///�û�����
		TTORATstpSPUserTypeType	UserType;

	};

	/// User
	struct CTORATstpSPUserField
	{
		 
		///�û�����
		TTORATstpSPUserIDType	UserID;

		///�û�����
		TTORATstpSPUserNameType	UserName;

		///�û�����
		TTORATstpSPUserTypeType	UserType;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///��¼����
		TTORATstpSPLoginLimitType	LoginLimit;

		///�������������������
		TTORATstpSPLoginLimitType	PasswordFailLimit;

		///״̬
		TTORATstpSPActiveStatusType	Status;

		///��ϵ��
		TTORATstpSPContacterType	Contacter;

		///����
		TTORATstpSPFaxType	Fax;

		///��ϵ�绰
		TTORATstpSPTelephoneType	Telephone;

		///�����ʼ�
		TTORATstpSPEmailType	Email;

		///ͨѶ��ַ
		TTORATstpSPAddressType	Address;

		///��������
		TTORATstpSPZipCodeType	ZipCode;

		///��������
		TTORATstpSPDateType	OpenDate;

		///��������
		TTORATstpSPDateType	CloseDate;

		///ͨѶ����
		TTORATstpSPCommFluxType	OrderInsertCommFlux;

		///��������
		TTORATstpSPCommFluxType	OrderActionCommFlux;

	};

	/// ��ѯͶ����
	struct CTORATstpSPQryInvestorField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

	};

	/// Ͷ����
	struct CTORATstpSPInvestorField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///Ͷ��������
		TTORATstpSPInvestorTypeType	InvestorType;

		///Ͷ��������
		TTORATstpSPInvestorNameType	InvestorName;

		///֤������
		TTORATstpSPIdCardTypeType	IdCardType;

		///֤������
		TTORATstpSPIdCardNoType	IdCardNo;

		///��ͬ���
		TTORATstpSPContractNoType	ContractNo;

		///��������
		TTORATstpSPDateType	OpenDate;

		///��������
		TTORATstpSPDateType	CloseDate;

		///״̬
		TTORATstpSPActiveStatusType	TradeStatus;

		///Ԥ���ֶ�1
		TTORATstpSPBranchIDType	Reserve1;

		///Ͷ���߷ּ����
		TTORATstpSPInvestorLevelType	InvestorLevel;

		///�ֻ�
		TTORATstpSPMobileType	Mobile;

		///��ϵ�绰
		TTORATstpSPTelephoneType	Telephone;

		///�����ʼ�
		TTORATstpSPEmailType	Email;

		///����
		TTORATstpSPFaxType	Fax;

		///ͨѶ��ַ
		TTORATstpSPAddressType	Address;

		///��������
		TTORATstpSPZipCodeType	ZipCode;

		///Ԥ���ֶ�2
		TTORATstpSPRemarkType	Reserve2;

		///ί�з�ʽ
		TTORATstpSPOperwaysType	Operways;

		///�Ƿ��Ծ
		TTORATstpSPActiveStatusType	LoginStatus;

		///��¼����
		TTORATstpSPLoginLimitType	LoginLimit;

	};

	/// ��ѯBrokerUserFunction
	struct CTORATstpSPQryBrokerUserFunctionField
	{
		 
		///�����û�����
		TTORATstpSPUserIDType	UserID;

	};

	/// BrokerUserFunction
	struct CTORATstpSPBrokerUserFunctionField
	{
		 
		///�û�����
		TTORATstpSPUserIDType	UserID;

		///���ܴ���
		TTORATstpSPFunctionIDType	FunctionID;

	};

	/// ��ѯ�ɶ��˻�
	struct CTORATstpSPQryShareholderAccountField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

		///��ͨ�����ã�����Ʒ��
		TTORATstpSPShareholderIDTypeType	ShareholderIDType;

	};

	/// �ɶ��˻�
	struct CTORATstpSPShareholderAccountField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�ͻ�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///���ױ�������
		TTORATstpSPShareholderIDTypeType	ShareholderIDType;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

	};

	/// ��ѯ�ʽ��˻�
	struct CTORATstpSPQryTradingAccountField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///����
		TTORATstpSPCurrencyIDType	CurrencyID;

		///�ʽ��˻�
		TTORATstpSPAccountIDType	AccountID;

		///��ͨ�����á�����Ʒ��
		TTORATstpSPAccountTypeType	AccountType;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

	};

	/// �ʽ��˻�
	struct CTORATstpSPTradingAccountField
	{
		 
		///���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///�ʽ��˻�����
		TTORATstpSPAccountIDType	AccountID;

		///���ִ���
		TTORATstpSPCurrencyIDType	CurrencyID;

		///�ʽ��˻�����
		TTORATstpSPAccountTypeType	AccountType;

		///���ս��
		TTORATstpSPMoneyType	PreDeposit;

		///����Ȩ�����ն����ʽ�
		TTORATstpSPMoneyType	PreFrozenCash;

		///�����ʽ�
		TTORATstpSPMoneyType	UsefulMoney;

		///��ȡ�ʽ�
		TTORATstpSPMoneyType	FetchLimit;

		///�����
		TTORATstpSPMoneyType	Deposit;

		///������
		TTORATstpSPMoneyType	Withdraw;

		///����ı�֤��
		TTORATstpSPMoneyType	FrozenMargin;

		///������ʽ�
		TTORATstpSPMoneyType	FrozenCash;

		///�����������
		TTORATstpSPMoneyType	FrozenCommission;

		///��ǰ��֤���ܶ�
		TTORATstpSPMoneyType	CurrMargin;

		///������
		TTORATstpSPMoneyType	Commission;

		///Ȩ��������
		TTORATstpSPMoneyType	RoyaltyIn;

		///Ȩ����֧��
		TTORATstpSPMoneyType	RoyaltyOut;

		///�ʽ��˻�����Ͷ���ߴ���
		TTORATstpSPInvestorIDType	AccountOwner;

		///ǩԼ�����˻�
		TTORATstpSPBankAccountIDType	BankAccountID;

		///���д���
		TTORATstpSPBankIDType	BankID;

		///������Ȩ�����ն����ʽ�
		TTORATstpSPMoneyType	ExcerciseFrozen;

	};

	/// ��ѯ����
	struct CTORATstpSPQryOrderField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///��Լ��ϵͳ�еı��
		TTORATstpSPSecurityIDType	SecurityID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///�ͻ���ϵͳ�еı�ţ����Ψһ����ѭ�������ƶ��ı������
		TTORATstpSPShareholderIDType	ShareholderID;

		///�������
		TTORATstpSPOrderSysIDType	OrderSysID;

		///Time
		TTORATstpSPTimeType	InsertTimeStart;

		///Time
		TTORATstpSPTimeType	InsertTimeEnd;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

	};

	/// ��ѯ�ɽ�
	struct CTORATstpSPQryTradeField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///��Լ��ϵͳ�еı��
		TTORATstpSPSecurityIDType	SecurityID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///�ͻ���ϵͳ�еı�ţ����Ψһ����ѭ�������ƶ��ı������
		TTORATstpSPShareholderIDType	ShareholderID;

		///�ɽ����
		TTORATstpSPTradeIDType	TradeID;

		///Time
		TTORATstpSPTimeType	TradeTimeStart;

		///Time
		TTORATstpSPTimeType	TradeTimeEnd;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

	};

	/// ��ѯͶ���ֲ߳�
	struct CTORATstpSPQryPositionField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///�����˻�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�ࡢ��
		TTORATstpSPPosiDirectionType	PosiDirection;

		///Ͷ���ױ���־
		TTORATstpSPHedgeFlagType	HedgeFlag;

	};

	/// Ͷ���ֲ߳�
	struct CTORATstpSPPositionField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

		///�ͻ�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///������
		TTORATstpSPDateType	TradingDay;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///�ֲַ���
		TTORATstpSPPosiDirectionType	PosiDirection;

		///�ֲַ���
		TTORATstpSPHedgeFlagType	HedgeFlag;

		///���ճֲ�
		TTORATstpSPVolumeType	HistoryPos;

		///���ճֲֶ���
		TTORATstpSPVolumeType	HistoryPosFrozen;

		///���������ֲ�
		TTORATstpSPVolumeType	TodayPos;

		///���������ֲֶ���
		TTORATstpSPVolumeType	TodayPosFrozen;

		///�ֲֳɱ�
		TTORATstpSPMoneyType	TotalPosCost;

		///��ͷ���ᣨ���뿪��+����ƽ�֣��ĳֲ�����
		TTORATstpSPVolumeType	LongFrozen;

		///��ͷ���ᣨ��������+����ƽ�֣��ĳֲ�����
		TTORATstpSPVolumeType	ShortFrozen;

		///��ͷ��������Ľ������������ѡ���֤��
		TTORATstpSPMoneyType	LongFrozenAmount;

		///��ͷ��������Ľ������������ѡ���֤��
		TTORATstpSPMoneyType	ShortFrozenAmount;

		///������
		TTORATstpSPVolumeType	OpenVolume;

		///ƽ����
		TTORATstpSPVolumeType	CloseVolume;

		///���ֽ��
		TTORATstpSPMoneyType	OpenAmount;

		///ƽ�ֽ��
		TTORATstpSPMoneyType	CloseAmount;

		///ռ�õı�֤��
		TTORATstpSPMoneyType	Margin;

		///����ı�֤��
		TTORATstpSPMoneyType	FrozenMargin;

		///������ʽ�
		TTORATstpSPMoneyType	FrozenCash;

		///�����������
		TTORATstpSPMoneyType	FrozenCommission;

		///�ʽ���
		TTORATstpSPMoneyType	CashIn;

		///������
		TTORATstpSPMoneyType	Commission;

		///ִ�ж���
		TTORATstpSPVolumeType	StrikeFrozen;

		///ִ�ж�����
		TTORATstpSPMoneyType	StrikeFrozenAmount;

		///�ϴ����(���в���)
		TTORATstpSPVolumeType	PrePosition;

		///���¼�
		TTORATstpSPPriceType	LastPrice;

		///���ճֲ���ϲ�λ
		TTORATstpSPVolumeType	HistoryCombPos;

		///���ճֲ���ϲ�λ
		TTORATstpSPVolumeType	TodayCombPos;

		///������ϳֲֲ�ֶ���
		TTORATstpSPVolumeType	HistoryCombPosSplitFrozen;

		///������ϳֲֲ�ֶ���
		TTORATstpSPVolumeType	TodayCombPosSplitFrozen;

		///���ճֲ���϶���
		TTORATstpSPVolumeType	HistoryPosCombFrozen;

		///���ճֲ���϶���
		TTORATstpSPVolumeType	TodayPosCombFrozen;

		///�����ֶ�
		TTORATstpSPMoneyType	OpenPosCost;

		///�����ֶ�
		TTORATstpSPMoneyType	TodayProfit;

	};

	/// ��ѯ�������׷���
	struct CTORATstpSPQryTradingFeeField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

	};

	/// �������׷���
	struct CTORATstpSPTradingFeeField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Ʒ����
		TTORATstpSPProductIDType	ProductID;

		///֤ȯ������
		TTORATstpSPSecurityTypeType	SecurityType;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///ҵ�����
		TTORATstpSPBusinessClassType	BusinessClass;

		///ϵͳ��ʶ
		TTORATstpSPSystemFlagType	SystemFlag;

		///ӡ��˰�������ȡ����
		TTORATstpSPRatioType	StampTaxRatioByAmt;

		///ӡ��˰����ֵ��ȡ����
		TTORATstpSPRatioType	StampTaxRatioByPar;

		///ӡ��˰��������ȡ���
		TTORATstpSPMoneyType	StampTaxFeeByVolume;

		///ӡ��˰������ȡ���
		TTORATstpSPMoneyType	StampTaxFeePerOrder;

		///ӡ��˰�����ȡ���
		TTORATstpSPMoneyType	StampTaxFeeMin;

		///ӡ��˰�����ȡ���
		TTORATstpSPMoneyType	StampTaxFeeMax;

		///�����Ѱ������ȡ����
		TTORATstpSPRatioType	TransferRatioByAmt;

		///�����Ѱ���ֵ��ȡ����
		TTORATstpSPRatioType	TransferRatioByPar;

		///�����Ѱ�����ȡ���
		TTORATstpSPMoneyType	TransferFeePerOrder;

		///�����Ѱ�������ȡ���
		TTORATstpSPMoneyType	TransferFeeByVolume;

		///�����������ȡ���
		TTORATstpSPMoneyType	TransferFeeMin;

		///�����������ȡ���
		TTORATstpSPMoneyType	TransferFeeMax;

		///���ַѰ������ȡ����
		TTORATstpSPRatioType	HandlingRatioByAmt;

		///���ַѰ���ֵ��ȡ����
		TTORATstpSPRatioType	HandlingRatioByPar;

		///���ַѰ�����ȡ���
		TTORATstpSPMoneyType	HandlingFeePerOrder;

		///���ַѰ�������ȡ���
		TTORATstpSPMoneyType	HandlingFeeByVolume;

		///���ַ������ȡ���
		TTORATstpSPMoneyType	HandlingFeeMin;

		///���ַ������ȡ���
		TTORATstpSPMoneyType	HandlingFeeMax;

		///֤�ܷѰ������ȡ����
		TTORATstpSPRatioType	RegulateRatioByAmt;

		///֤�ܷѰ���ֵ��ȡ����
		TTORATstpSPRatioType	RegulateRatioByPar;

		///֤�ܷѰ�������ȡ���
		TTORATstpSPMoneyType	RegulateFeeByVolume;

		///֤�ܷѰ�����ȡ���
		TTORATstpSPMoneyType	RegulateFeePerOrder;

		///֤�ܷ������ȡ���
		TTORATstpSPMoneyType	RegulateFeeMin;

		///֤�ܷ������ȡ���
		TTORATstpSPMoneyType	RegulateFeeMax;

		///����Ѱ������ȡ����
		TTORATstpSPRatioType	SettlementRatioByAmt;

		///����Ѱ���ֵ��ȡ����
		TTORATstpSPRatioType	SettlementRatioByPar;

		///����Ѱ�����ȡ���
		TTORATstpSPMoneyType	SettlementFeePerOrder;

		///����Ѱ�������ȡ���
		TTORATstpSPMoneyType	SettlementFeeByVolume;

		///����������ȡ���
		TTORATstpSPMoneyType	SettlementFeeMin;

		///����������ȡ���
		TTORATstpSPMoneyType	SettlementFeeMax;

	};

	/// ��ѯӶ�����
	struct CTORATstpSPQryInvestorTradingFeeField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

	};

	/// Ӷ�����
	struct CTORATstpSPInvestorTradingFeeField
	{
		 
		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Ʒ����
		TTORATstpSPProductIDType	ProductID;

		///֤ȯ������
		TTORATstpSPSecurityTypeType	SecurityType;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///ҵ�����
		TTORATstpSPBusinessClassType	BusinessClass;

		///Ӷ������
		TTORATstpSPBrokerageTypeType	BrokerageType;

		///Ӷ�𰴽����ȡ����
		TTORATstpSPRatioType	RatioByAmt;

		///Ӷ����ֵ��ȡ����
		TTORATstpSPRatioType	RatioByPar;

		///Ӷ�𰴱���ȡ���
		TTORATstpSPMoneyType	FeePerOrder;

		///Ӷ�������ȡ���
		TTORATstpSPMoneyType	FeeMin;

		///Ӷ�������ȡ���
		TTORATstpSPMoneyType	FeeMax;

		///Ӷ��������ȡ���
		TTORATstpSPMoneyType	FeeByVolume;

	};

	/// ��ѯ��֤�����
	struct CTORATstpSPQryInvestorMarginFeeField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///��Ʒ����
		TTORATstpSPProductIDType	ProductID;

		///֤ȯ������
		TTORATstpSPSecurityTypeType	SecurityType;

		///ҵ�����
		TTORATstpSPBusinessClassType	BusinessClass;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// ��֤�����
	struct CTORATstpSPInvestorMarginFeeField
	{
		 
		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Ʒ����
		TTORATstpSPProductIDType	ProductID;

		///֤ȯ������
		TTORATstpSPSecurityTypeType	SecurityType;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///ҵ�����
		TTORATstpSPBusinessClassType	BusinessClass;

		///Ӷ��������ȡ���
		TTORATstpSPMoneyType	FeeByVolume;

		///�ϸ�����
		TTORATstpSPRatioType	UpperRatio;

	};

	/// ��ѯ������ϸ�ʽ�
	struct CTORATstpSPQryOrderFundDetailField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///ϵͳ�������
		TTORATstpSPOrderSysIDType	OrderSysID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

	};

	/// ������ϸ�ʽ�
	struct CTORATstpSPOrderFundDetailField
	{
		 
		///��������
		TTORATstpSPDateType	TradingDay;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///ϵͳ�������
		TTORATstpSPOrderSysIDType	OrderSysID;

		///���������׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///���������׵�Ԫ����
		TTORATstpSPOrderLocalIDType	OrderLocalID;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///�ʽ��˻�����
		TTORATstpSPAccountIDType	AccountID;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�ɽ����
		TTORATstpSPMoneyType	TradeAmount;

		///ӡ��˰
		TTORATstpSPMoneyType	StampTaxFee;

		///������
		TTORATstpSPMoneyType	TransferFee;

		///���ַ�
		TTORATstpSPMoneyType	HandlingFee;

		///֤�ܷ�
		TTORATstpSPMoneyType	RegulateFee;

		///Ӷ��
		TTORATstpSPMoneyType	BrokerageFee;

		///�����
		TTORATstpSPMoneyType	SettlementFee;

		///��֤��
		TTORATstpSPMoneyType	Margin;

		///������ʼ������
		TTORATstpSPMoneyType	OrderCashFrozen;

		///��ʼ������úϼ�
		TTORATstpSPMoneyType	TotalFeeFrozen;

		///�걨���
		TTORATstpSPMoneyType	OrderAmount;

	};

	/// ��ѯ�ʽ�ת����ˮ
	struct CTORATstpSPQryFundTransferDetailField
	{
		 
		///�ʽ��˻�����
		TTORATstpSPAccountIDType	AccountID;

		///����
		TTORATstpSPCurrencyIDType	CurrencyID;

		///ת�Ʒ���
		TTORATstpSPTransferDirectionType	TransferDirection;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

	};

	/// �ʽ�ת����ˮ
	struct CTORATstpSPFundTransferDetailField
	{
		 
		///ת����ˮ��
		TTORATstpSPIntSerialType	FundSerial;

		///������ˮ��
		TTORATstpSPIntSerialType	ApplySerial;

		///ǰ�ñ��
		TTORATstpSPFrontIDType	FrontID;

		///�Ự���
		TTORATstpSPSessionIDType	SessionID;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///�ʽ��˻�����
		TTORATstpSPAccountIDType	AccountID;

		///����
		TTORATstpSPCurrencyIDType	CurrencyID;

		///ת�Ʒ���
		TTORATstpSPTransferDirectionType	TransferDirection;

		///�������
		TTORATstpSPMoneyType	Amount;

		///ת��״̬
		TTORATstpSPTransferStatusType	TransferStatus;

		///������Դ
		TTORATstpSPOperateSourceType	OperateSource;

		///������Ա
		TTORATstpSPUserIDType	OperatorID;

		///��������
		TTORATstpSPDateType	OperateDate;

		///����ʱ��
		TTORATstpSPTimeType	OperateTime;

		///״̬��Ϣ
		TTORATstpSPErrorMsgType	StatusMsg;

		///ǩԼ�����˻�
		TTORATstpSPBankAccountIDType	BankAccountID;

		///���д���
		TTORATstpSPBankIDType	BankID;

	};

	/// ��ѯ�ֲ�ת����ˮ
	struct CTORATstpSPQryPositionTransferDetailField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

		///֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///ת�Ʒ���
		TTORATstpSPTransferDirectionType	TransferDirection;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�ࡢ��
		TTORATstpSPPosiDirectionType	PosiDirection;

		///Ͷ���ױ���־
		TTORATstpSPHedgeFlagType	HedgeFlag;

	};

	/// �ֲ�ת����ˮ
	struct CTORATstpSPPositionTransferDetailField
	{
		 
		///��ˮ��
		TTORATstpSPIntSerialType	PositionSerial;

		///������ˮ��
		TTORATstpSPIntSerialType	ApplySerial;

		///ǰ�ñ��
		TTORATstpSPFrontIDType	FrontID;

		///�Ự���
		TTORATstpSPSessionIDType	SessionID;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�����˻�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

		///�ֲַ���
		TTORATstpSPPosiDirectionType	PosiDirection;

		///Ͷ���ױ���־
		TTORATstpSPHedgeFlagType	HedgeFlag;

		///֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///��������
		TTORATstpSPDateType	TradingDay;

		///ת�Ʒ���
		TTORATstpSPTransferDirectionType	TransferDirection;

		///ת�Ƴֲ�����
		TTORATstpSPTransferPositionTypeType	TransferPositionType;

		///���ղ�λ����
		TTORATstpSPVolumeType	HistoryVolume;

		///����������λ����
		TTORATstpSPVolumeType	TodayVolume;

		///ת��״̬
		TTORATstpSPTransferStatusType	TransferStatus;

		///������Ա
		TTORATstpSPUserIDType	OperatorID;

		///��������
		TTORATstpSPDateType	OperateDate;

		///����ʱ��
		TTORATstpSPTimeType	OperateTime;

		///״̬��Ϣ
		TTORATstpSPErrorMsgType	StatusMsg;

	};

	/// ��ѯ����
	struct CTORATstpSPQryOrderActionField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///���׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///ȫϵͳ��Ψһ������š�
		TTORATstpSPOrderLocalIDType	CancelOrderLocalID;

		///���ر������
		TTORATstpSPOrderLocalIDType	OrderLocalID;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

	};

	/// ����
	struct CTORATstpSPOrderActionField
	{
		 
		///������
		TTORATstpSPDateType	TradingDay;

		///�������ر��
		TTORATstpSPOrderLocalIDType	CancelOrderLocalID;

		///����ǰ�ñ��
		TTORATstpSPFrontIDType	ActionFrontID;

		///�����Ự���
		TTORATstpSPSessionIDType	ActionSessionID;

		///��������
		TTORATstpSPOrderRefType	OrderActionRef;

		///���ر����������
		TTORATstpSPOrderLocalIDType	OrderLocalID;

		///�������
		TTORATstpSPOrderSysIDType	OrderSysID;

		///ǰ�ñ��
		TTORATstpSPFrontIDType	FrontID;

		///�Ự���
		TTORATstpSPSessionIDType	SessionID;

		///��������
		TTORATstpSPOrderRefType	OrderRef;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

		///�ɶ��˻�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///������־
		TTORATstpSPOrderActionFlagType	OrderActionFlag;

		///����״̬
		TTORATstpSPCancelOrderStatusType	CancelOrderStatus;

		///��������
		TTORATstpSPVolumeType	VolumeCanceled;

		///״̬��Ϣ
		TTORATstpSPStatusMsgType	StatusMsg;

		///ϵͳ�������
		TTORATstpSPErrorIDType	ErrorID;

		///������Ӫҵ������
		TTORATstpSPBranchIDType	BranchID;

		///���������׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///�����걨�û�
		TTORATstpSPUserIDType	InsertUserID;

		///��������
		TTORATstpSPDateType	InsertDate;

		///����ʱ��
		TTORATstpSPTimeType	InsertTime;

		///�걨ʱ��(����)
		TTORATstpSPMillisecType	InsertMillisec;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///������
		TTORATstpSPRequestIDType	RequestID;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

		///ί�з�ʽ
		TTORATstpSPOperwayType	Operway;

		///Ӳ�����к�
		TTORATstpSPHDSerialType	HDSerial;

		///�ƶ��豸�ֻ���
		TTORATstpSPMobileType	Mobile;

	};

	/// ��ѯͶ�����ֻ��ֲ�
	struct CTORATstpSPQryStockPositionField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///�����˻�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

	};

	/// Ͷ�����ֻ��ֲ�
	struct CTORATstpSPStockPositionField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

		///�ͻ�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///������
		TTORATstpSPDateType	TradingDay;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///���ճֲ�
		TTORATstpSPVolumeType	HistoryPos;

		///���ճֲֶ���
		TTORATstpSPVolumeType	HistoryPosFrozen;

		///���������ֲ�
		TTORATstpSPVolumeType	TodayBSPos;

		///���������ֲֶ���
		TTORATstpSPVolumeType	TodayBSPosFrozen;

		///��������ֲ�
		TTORATstpSPVolumeType	TodayPRPos;

		///��������ֲֶ���
		TTORATstpSPVolumeType	TodayPRPosFrozen;

	};

	/// ��ѯ����ί��
	struct CTORATstpSPQryLockField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///��Լ��ϵͳ�еı��
		TTORATstpSPSecurityIDType	SecurityID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///�ͻ���ϵͳ�еı�ţ����Ψһ����ѭ�������ƶ��ı������
		TTORATstpSPShareholderIDType	ShareholderID;

		///�������
		TTORATstpSPOrderSysIDType	LockSysID;

		///Time
		TTORATstpSPTimeType	InsertTimeStart;

		///Time
		TTORATstpSPTimeType	InsertTimeEnd;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�������
		TTORATstpSPLockTypeType	LockType;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

	};

	/// ��ѯ��Ȩί��
	struct CTORATstpSPQryExerciseField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///��Լ��ϵͳ�еı��
		TTORATstpSPSecurityIDType	SecurityID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

		///ȫϵͳ��Ψһ�������
		TTORATstpSPOrderSysIDType	ExerciseSysID;

		///Time
		TTORATstpSPTimeType	InsertTimeStart;

		///Time
		TTORATstpSPTimeType	InsertTimeEnd;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

	};

	/// ��ѯͶ���������ֲ�
	struct CTORATstpSPQryLockPositionField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///�����˻�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

	};

	/// Ͷ���������ֲ�
	struct CTORATstpSPLockPositionField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

		///�ͻ�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///������
		TTORATstpSPDateType	TradingDay;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///�����ֲ�������
		TTORATstpSPVolumeType	Volume;

		///�����ֲֶ�������
		TTORATstpSPVolumeType	FrozenVolume;

		///���ճֲ�
		TTORATstpSPVolumeType	HistoryPos;

		///���������ֲ�
		TTORATstpSPVolumeType	TodayBSPos;

		///��������ֲ�
		TTORATstpSPVolumeType	TodayPRPos;

	};

	/// ��ѯ��Ȩ����
	struct CTORATstpSPQryExerciseActionField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///���׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///ȫϵͳ��Ψһ������š�
		TTORATstpSPOrderLocalIDType	CancelExerciseLocalID;

		///���ر������
		TTORATstpSPOrderLocalIDType	ExerciseLocalID;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

	};

	/// ��Ȩ����
	struct CTORATstpSPExerciseActionField
	{
		 
		///������
		TTORATstpSPDateType	TradingDay;

		///������Ӫҵ������
		TTORATstpSPBranchIDType	BranchID;

		///���������׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///������Ȩ�������
		TTORATstpSPOrderLocalIDType	CancelExerciseLocalID;

		///����ǰ�ñ��
		TTORATstpSPFrontIDType	ActionFrontID;

		///�����Ự���
		TTORATstpSPSessionIDType	ActionSessionID;

		///��Ȩ��������
		TTORATstpSPOrderRefType	ExerciseActionRef;

		///����������Ȩ�������
		TTORATstpSPOrderLocalIDType	ExerciseLocalID;

		///����ϵͳ��Ȩ�������
		TTORATstpSPOrderSysIDType	ExerciseSysID;

		///ǰ�ñ��
		TTORATstpSPFrontIDType	FrontID;

		///�Ự���
		TTORATstpSPSessionIDType	SessionID;

		///��Ȩ����
		TTORATstpSPOrderRefType	ExerciseRef;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

		///�ɶ��˻�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///ί�в�����־
		TTORATstpSPOrderActionFlagType	ExerciseActionFlag;

		///����״̬
		TTORATstpSPCancelOrderStatusType	CancelOrderStatus;

		///��������
		TTORATstpSPVolumeType	VolumeCanceled;

		///״̬��Ϣ
		TTORATstpSPStatusMsgType	StatusMsg;

		///ϵͳ�������
		TTORATstpSPErrorIDType	ErrorID;

		///�����걨�û�
		TTORATstpSPUserIDType	InsertUserID;

		///��������
		TTORATstpSPDateType	InsertDate;

		///����ʱ��
		TTORATstpSPTimeType	InsertTime;

		///�걨ʱ��(����)
		TTORATstpSPMillisecType	InsertMillisec;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///������
		TTORATstpSPRequestIDType	RequestID;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

		///ί�з�ʽ
		TTORATstpSPOperwayType	Operway;

		///Ӳ�����к�
		TTORATstpSPHDSerialType	HDSerial;

		///�ƶ��豸�ֻ���
		TTORATstpSPMobileType	Mobile;

	};

	/// ��ѯ��������
	struct CTORATstpSPQryLockActionField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///���׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///ȫϵͳ��Ψһ������š�
		TTORATstpSPOrderLocalIDType	CancelLockLocalID;

		///���ر���˳���
		TTORATstpSPOrderLocalIDType	LockLocalID;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

	};

	/// ��������
	struct CTORATstpSPLockActionField
	{
		 
		///������
		TTORATstpSPDateType	TradingDay;

		///������Ӫҵ������
		TTORATstpSPBranchIDType	BranchID;

		///���������׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///���������������
		TTORATstpSPOrderLocalIDType	CancelLockLocalID;

		///����ǰ�ñ��
		TTORATstpSPFrontIDType	ActionFrontID;

		///�����Ự���
		TTORATstpSPSessionIDType	ActionSessionID;

		///������������
		TTORATstpSPOrderRefType	LockActionRef;

		///�������������������
		TTORATstpSPOrderLocalIDType	LockLocalID;

		///����ϵͳ�����������
		TTORATstpSPOrderSysIDType	LockSysID;

		///ǰ�ñ��
		TTORATstpSPFrontIDType	FrontID;

		///�Ự���
		TTORATstpSPSessionIDType	SessionID;

		///��������
		TTORATstpSPOrderRefType	LockRef;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

		///�ɶ��˻�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///����������־
		TTORATstpSPOrderActionFlagType	LockActionFlag;

		///����״̬
		TTORATstpSPCancelOrderStatusType	CancelOrderStatus;

		///��������
		TTORATstpSPVolumeType	VolumeCanceled;

		///״̬��Ϣ
		TTORATstpSPStatusMsgType	StatusMsg;

		///ϵͳ�������
		TTORATstpSPErrorIDType	ErrorID;

		///�����걨�û�
		TTORATstpSPUserIDType	InsertUserID;

		///��������
		TTORATstpSPDateType	InsertDate;

		///����ʱ��
		TTORATstpSPTimeType	InsertTime;

		///�걨ʱ��(����)
		TTORATstpSPMillisecType	InsertMillisec;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///������
		TTORATstpSPRequestIDType	RequestID;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

		///ί�з�ʽ
		TTORATstpSPOperwayType	Operway;

		///Ӳ�����к�
		TTORATstpSPHDSerialType	HDSerial;

		///�ƶ��豸�ֻ���
		TTORATstpSPMobileType	Mobile;

	};

	/// ��ѯ�ֲ�ת����ˮ
	struct CTORATstpSPQryStockPositionTransferDetailField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

		///֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///������Ȩ����ֻ�ת��ԭ��
		TTORATstpSPSPStockTransferReasonType	SPStockTransferReason;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///ת�Ƴֲ�����
		TTORATstpSPTransferPositionTypeType	TransferPositionType;

	};

	/// �ֲ�ת����ˮ
	struct CTORATstpSPStockPositionTransferDetailField
	{
		 
		///��ˮ��
		TTORATstpSPIntSerialType	PositionSerial;

		///������ˮ��
		TTORATstpSPIntSerialType	ApplySerial;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�����˻�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///�ֻ�ϵͳͶ���ߴ���
		TTORATstpSPInvestorIDType	OuterInvestorID;

		///�ֻ�ϵͳͶ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	OuterBusinessUnitID;

		///�ֻ�ϵͳ�����˻�����
		TTORATstpSPShareholderIDType	OuterShareholderID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

		///֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///��������
		TTORATstpSPDateType	TradingDay;

		///������Ȩ����ֻ�ת��ԭ��
		TTORATstpSPSPStockTransferReasonType	SPStockTransferReason;

		///ת�Ƴֲ�����
		TTORATstpSPTransferPositionTypeType	TransferPositionType;

		///���ղ�λ����
		TTORATstpSPVolumeType	HistoryVolume;

		///����������λ����
		TTORATstpSPVolumeType	TodayBSVolume;

		///��������ֲ�����
		TTORATstpSPVolumeType	TodayPRVolume;

		///ת��״̬
		TTORATstpSPTransferStatusType	TransferStatus;

		///������Ա
		TTORATstpSPUserIDType	OperatorID;

		///��������
		TTORATstpSPDateType	OperateDate;

		///����ʱ��
		TTORATstpSPTimeType	OperateTime;

		///״̬��Ϣ
		TTORATstpSPErrorMsgType	StatusMsg;

		///��λת���ֻ�ϵͳ��ˮ��
		TTORATstpSPIntSerialType	StockPositionSerial;

		///�Ƿ����
		TTORATstpSPBoolType	bRepeal;

		///ԭʼ��λת����ˮ��
		TTORATstpSPIntSerialType	OriginPositionSerial;

		///������Դ
		TTORATstpSPOperateSourceType	OperateSource;

	};

	/// ��ѯ����֪ͨ
	struct CTORATstpSPQryTradingNoticeField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Date
		TTORATstpSPDateType	DateStart;

		///Date
		TTORATstpSPDateType	DateEnd;

		///Time
		TTORATstpSPTimeType	TimeStart;

		///Time
		TTORATstpSPTimeType	TimeEnd;

	};

	/// ��ѯ֤ȯ����
	struct CTORATstpSPQryStockDisposalField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///������Ȩ��ĺ�Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

		///ϵͳ֤ȯ���ñ��
		TTORATstpSPOrderSysIDType	StockDisposalSysID;

		///Time
		TTORATstpSPTimeType	InsertTimeStart;

		///Time
		TTORATstpSPTimeType	InsertTimeEnd;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

	};

	/// ��ѯ֤ȯ���ó���
	struct CTORATstpSPQryStockDisposalActionField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///���׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///ȫϵͳ��Ψһ������š�
		TTORATstpSPOrderLocalIDType	CancelStockDisposalLocalID;

		///����֤ȯ���ñ��
		TTORATstpSPOrderLocalIDType	StockDisposalLocalID;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

	};

	/// ֤ȯ���ó���
	struct CTORATstpSPStockDisposalActionField
	{
		 
		///������
		TTORATstpSPDateType	TradingDay;

		///������Ӫҵ������
		TTORATstpSPBranchIDType	BranchID;

		///���������׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///����֤ȯ���ó������
		TTORATstpSPOrderLocalIDType	CancelStockDisposalLocalID;

		///����ǰ�ñ��
		TTORATstpSPFrontIDType	ActionFrontID;

		///�����Ự���
		TTORATstpSPSessionIDType	ActionSessionID;

		///֤ȯ���ó�������
		TTORATstpSPOrderRefType	StockDisposalActionRef;

		///��������֤ȯ���ñ������
		TTORATstpSPOrderLocalIDType	StockDisposalLocalID;

		///����֤ȯ����ϵͳ�������
		TTORATstpSPOrderSysIDType	StockDisposalSysID;

		///ǰ�ñ��
		TTORATstpSPFrontIDType	FrontID;

		///�Ự���
		TTORATstpSPSessionIDType	SessionID;

		///����֤ȯ��������
		TTORATstpSPOrderRefType	StockDisposalRef;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

		///�ɶ��˻�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///֤ȯ���ò�����־
		TTORATstpSPOrderActionFlagType	StockDisposalActionFlag;

		///����״̬
		TTORATstpSPCancelOrderStatusType	CancelStockDisposalStatus;

		///��������
		TTORATstpSPVolumeType	VolumeCanceled;

		///״̬��Ϣ
		TTORATstpSPStatusMsgType	StatusMsg;

		///ϵͳ�������
		TTORATstpSPErrorIDType	ErrorID;

		///�����걨�û�
		TTORATstpSPUserIDType	InsertUserID;

		///��������
		TTORATstpSPDateType	InsertDate;

		///����ʱ��
		TTORATstpSPTimeType	InsertTime;

		///�걨ʱ��(����)
		TTORATstpSPMillisecType	InsertMillisec;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///������
		TTORATstpSPRequestIDType	RequestID;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

		///ί�з�ʽ
		TTORATstpSPOperwayType	Operway;

		///Ӳ�����к�
		TTORATstpSPHDSerialType	HDSerial;

		///�绰
		TTORATstpSPMobileType	Mobile;

	};

	/// ��ѯ������
	struct CTORATstpSPQryCondOrderField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

		///�������
		TTORATstpSPCondOrderIDType	CondOrderID;

		///Time
		TTORATstpSPTimeType	InsertTimeStart;

		///Time
		TTORATstpSPTimeType	InsertTimeEnd;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

	};

	/// ������
	struct CTORATstpSPCondOrderField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�ɶ��˻�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///��������
		TTORATstpSPDirectionType	Direction;

		///�������۸�����
		TTORATstpSPOrderPriceTypeType	OrderPriceType;

		///��������������
		TTORATstpSPOrderVolumeTypeType	OrderVolumeType;

		///��Ч������
		TTORATstpSPTimeConditionType	TimeCondition;

		///�ɽ�������
		TTORATstpSPVolumeConditionType	VolumeCondition;

		///��С�ɽ���
		TTORATstpSPVolumeType	MinVolume;

		///ǿƽԭ��
		TTORATstpSPForceCloseReasonType	ForceCloseReason;

		///�����۸�
		TTORATstpSPPriceType	LimitPrice;

		///��������
		TTORATstpSPVolumeType	VolumeTotalOriginal;

		///��Ͽ�ƽ��־
		TTORATstpSPCombOffsetFlagType	CombOffsetFlag;

		///���Ͷ���ױ���־
		TTORATstpSPCombHedgeFlagType	CombHedgeFlag;

		///������������
		TTORATstpSPOrderRefType	CondOrderRef;

		///�ʽ��˻�����
		TTORATstpSPAccountIDType	AccountID;

		///������
		TTORATstpSPRequestIDType	RequestID;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///�����������
		TTORATstpSPCondOrderIDType	CondOrderID;

		///�ն���Ϣ
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

		///��������
		TTORATstpSPContingentConditionType	ContingentCondition;

		///������
		TTORATstpSPPriceType	ConditionPrice;

		///�۸񸡶�tick��
		TTORATstpSPVolumeType	PriceTicks;

		///������������
		TTORATstpSPVolumeMultipleType	VolumeMultiple;

		///���ǰ�ñ��
		TTORATstpSPFrontIDType	RelativeFrontID;

		///��ػỰ���
		TTORATstpSPSessionIDType	RelativeSessionID;

		///�����������
		TTORATstpSPRelativeCondParamType	RelativeParam;

		///���Ӵ�������
		TTORATstpSPContingentConditionType	AppendContingentCondition;

		///����������
		TTORATstpSPPriceType	AppendConditionPrice;

		///�������ǰ�ñ��
		TTORATstpSPFrontIDType	AppendRelativeFrontID;

		///������ػỰ���
		TTORATstpSPSessionIDType	AppendRelativeSessionID;

		///���������������
		TTORATstpSPRelativeCondParamType	AppendRelativeParam;

		///������
		TTORATstpSPDateType	TradingDay;

		///ǰ�ñ��
		TTORATstpSPFrontIDType	FrontID;

		///�Ự���
		TTORATstpSPSessionIDType	SessionID;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///������״̬
		TTORATstpSPCondOrderStatusType	CondOrderStatus;

		///״̬��Ϣ
		TTORATstpSPStatusMsgType	StatusMsg;

		///�����걨�û�
		TTORATstpSPUserIDType	InsertUserID;

		///��������
		TTORATstpSPDateType	InsertDate;

		///ί��ʱ��
		TTORATstpSPTimeType	InsertTime;

		///ί�к���
		TTORATstpSPMillisecType	InsertMillisec;

		///����ʱ��
		TTORATstpSPTimeType	CancelTime;

		///�����û�
		TTORATstpSPUserIDType	CancelUserID;

		///����ʱ��
		TTORATstpSPTimeType	ActiveTime;

		///ί�з�ʽ
		TTORATstpSPOperwayType	Operway;

		///Ӳ�����к�
		TTORATstpSPHDSerialType	HDSerial;

		///�ƶ��豸�ֻ���
		TTORATstpSPMobileType	Mobile;

	};

	/// ��ѯ����������
	struct CTORATstpSPQryCondOrderActionField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///һ���������ı��
		TTORATstpSPExchangeIDType	ExchangeID;

		///�ɶ��˻�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

	};

	/// ����������
	struct CTORATstpSPCondOrderActionField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///������
		TTORATstpSPRequestIDType	RequestID;

		///��������������
		TTORATstpSPOrderRefType	CondOrderActionRef;

		///����������
		TTORATstpSPOrderRefType	CondOrderRef;

		///ǰ�ñ��
		TTORATstpSPFrontIDType	FrontID;

		///�Ự���
		TTORATstpSPSessionIDType	SessionID;

		///���������
		TTORATstpSPCondOrderIDType	CondOrderID;

		///������־
		TTORATstpSPOrderActionFlagType	OrderActionFlag;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///�������������
		TTORATstpSPCondOrderIDType	CancelCondOrderID;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///MAC��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///�ն���Ϣ
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�ɶ��˻�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///�걨�û�
		TTORATstpSPUserIDType	InsertUserID;

		///�걨����
		TTORATstpSPDateType	InsertDate;

		///�걨ʱ��
		TTORATstpSPTimeType	InsertTime;

		///�걨����
		TTORATstpSPMillisecType	InsertMillisec;

		///ί�з�ʽ
		TTORATstpSPOperwayType	Operway;

		///Ӳ�����к�
		TTORATstpSPHDSerialType	HDSerial;

		///�ƶ��豸�ֻ���
		TTORATstpSPMobileType	Mobile;

	};

	/// ��ѯͶ�����޲ֶ��
	struct CTORATstpSPQryInvestorLimitPositionField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///���֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// Ͷ�����޲ֶ��
	struct CTORATstpSPInvestorLimitPositionField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///���֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///�ֲܳ��޶�
		TTORATstpSPVolumeType	TotalPositionLimit;

		///��ͷ�ֲ��޶�
		TTORATstpSPVolumeType	LongPositionLimit;

		///�������뿪���޶�
		TTORATstpSPVolumeType	TodayBuyOpenLimit;

		///�������������޶�
		TTORATstpSPVolumeType	TodaySellOpenLimit;

		///���ձ��ҿ����޶�
		TTORATstpSPVolumeType	TodayCoveredOpenLimit;

		///���տ����޶�
		TTORATstpSPVolumeType	TodayOpenLimit;

		///�Ϲ���ͷ�ֲ��޶�
		TTORATstpSPVolumeType	LongCallPositionLimit;

		///�Ϲ���ͷ�ֲ��޶�
		TTORATstpSPVolumeType	LongPutPositionLimit;

		///��Ķ�ͷ�ֲ��޶�
		TTORATstpSPVolumeType	LongUnderlyingPositionLimit;

		///��Ŀ�ͷ�ֲ��޶�
		TTORATstpSPVolumeType	ShortUnderlyingPositionLimit;

		///�ֲֶܳ�����
		TTORATstpSPVolumeType	TotalPositionFrozen;

		///��ͷ�ֲֶ�����
		TTORATstpSPVolumeType	LongPositionFrozen;

		///�������뿪�ֶ�����
		TTORATstpSPVolumeType	TodayBuyOpenFrozen;

		///�����������ֶ�����
		TTORATstpSPVolumeType	TodaySellOpenFrozen;

		///���ձ��ҿ��ֶ�����
		TTORATstpSPVolumeType	TodayCoveredOpenFrozen;

		///���տ��ֶ�����
		TTORATstpSPVolumeType	TodayOpenFrozen;

		///�Ϲ���ͷ�ֲֶ�����
		TTORATstpSPVolumeType	LongCallPositionFrozen;

		///�Ϲ���ͷ�ֲֶ�����
		TTORATstpSPVolumeType	LongPutPositionFrozen;

		///��Ķ�ͷ�ֲֶ�����
		TTORATstpSPVolumeType	LongUnderlyingPositionFrozen;

		///��Ŀ�ͷ�ֲֶ�����
		TTORATstpSPVolumeType	ShortUnderlyingPositionFrozen;

	};

	/// ��ѯͶ�����޶�
	struct CTORATstpSPQryInvestorLimitAmountField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

	};

	/// Ͷ�����޶�
	struct CTORATstpSPInvestorLimitAmountField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///��ͷ����޶�
		TTORATstpSPMoneyType	LongAmountLimit;

		///��ͷ����
		TTORATstpSPMoneyType	LongAmountFrozen;

	};

	/// ��ѯ��ϳ���
	struct CTORATstpSPQryCombOrderActionField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///���׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///ȫϵͳ��Ψһ����ϱ����������
		TTORATstpSPOrderLocalIDType	CancelCombOrderLocalID;

		///������ϱ������
		TTORATstpSPOrderLocalIDType	CombOrderLocalID;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

	};

	/// ��ϳ���
	struct CTORATstpSPCombOrderActionField
	{
		 
		///������
		TTORATstpSPDateType	TradingDay;

		///������Ӫҵ������
		TTORATstpSPBranchIDType	BranchID;

		///���׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///�������ί�г������
		TTORATstpSPOrderLocalIDType	CancelCombOrderLocalID;

		///��ϳ���ǰ�ñ��
		TTORATstpSPFrontIDType	ActionFrontID;

		///��ϳ����Ự���
		TTORATstpSPSessionIDType	ActionSessionID;

		///��ϳ�������
		TTORATstpSPOrderRefType	CombOrderActionRef;

		///�����������ί�б������
		TTORATstpSPOrderLocalIDType	CombOrderLocalID;

		///����ϵͳ��ϱ������
		TTORATstpSPOrderSysIDType	CombOrderSysID;

		///ǰ�ñ��
		TTORATstpSPFrontIDType	FrontID;

		///�Ự���
		TTORATstpSPSessionIDType	SessionID;

		///��ϱ�������
		TTORATstpSPOrderRefType	OrderRef;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

		///�ɶ��˻�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��ϴ���
		TTORATstpSPSecurityIDType	SecurityID;

		///���ί�в�����־
		TTORATstpSPOrderActionFlagType	CombOrderActionFlag;

		///����״̬
		TTORATstpSPCancelOrderStatusType	CancelOrderStatus;

		///��������
		TTORATstpSPVolumeType	VolumeCanceled;

		///״̬��Ϣ
		TTORATstpSPStatusMsgType	StatusMsg;

		///ϵͳ�������
		TTORATstpSPErrorIDType	ErrorID;

		///�����걨�û�
		TTORATstpSPUserIDType	InsertUserID;

		///��������
		TTORATstpSPDateType	InsertDate;

		///����ʱ��
		TTORATstpSPTimeType	InsertTime;

		///�걨ʱ��(����)
		TTORATstpSPMillisecType	InsertMillisec;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///������
		TTORATstpSPRequestIDType	RequestID;

		///�ն���Ϣ
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

		///ί�з�ʽ
		TTORATstpSPOperwayType	Operway;

		///Ӳ�����к�
		TTORATstpSPHDSerialType	HDSerial;

		///�ƶ��豸�ֻ���
		TTORATstpSPMobileType	Mobile;

	};

	/// ��ѯ���ί��
	struct CTORATstpSPQryCombOrderField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///��Ϻ�Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///�ͻ���ϵͳ�еı�ţ����Ψһ����ѭ�������ƶ��ı������
		TTORATstpSPShareholderIDType	ShareholderID;

		///���ϵͳ���
		TTORATstpSPOrderSysIDType	CombOrderSysID;

		///Time
		TTORATstpSPTimeType	InsertTimeStart;

		///Time
		TTORATstpSPTimeType	InsertTimeEnd;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///��ϲ���
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

		///��ϱ������
		TTORATstpSPCombDirectionType	CombDirection;

		///���ַ���������Ϣ
		TTORATstpSPBigsInfoType	BInfo;

		///���ַ���������Ϣ
		TTORATstpSPShortsInfoType	SInfo;

		///���θ�����Ϣ
		TTORATstpSPIntInfoType	IInfo;

	};

	/// ��ѯͶ������ϳֲ�
	struct CTORATstpSPQryCombPositionField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///���֤ȯ����(A&B)
		TTORATstpSPSecurityIDType	SecurityID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///�����˻�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///��ϲ���(CNSJC/CXSJC/PXSJC/PNSJC/KS/KKS/ZBD)
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

	};

	/// Ͷ������ϳֲ�
	struct CTORATstpSPCombPositionField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

		///�ͻ�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///������
		TTORATstpSPDateType	TradingDay;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///���֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///��ϲ���
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

		///���ճֲ�
		TTORATstpSPVolumeType	HistoryPos;

		///���ճֲֶ���
		TTORATstpSPVolumeType	HistoryPosFrozen;

		///���������ֲ�
		TTORATstpSPVolumeType	TodayPos;

		///���������ֲֶ���
		TTORATstpSPVolumeType	TodayPosFrozen;

		///ռ�õı�֤��
		TTORATstpSPMoneyType	Margin;

		///����ı�֤��
		TTORATstpSPMoneyType	FrozenMargin;

		///�����������
		TTORATstpSPMoneyType	FrozenCommission;

		///������
		TTORATstpSPMoneyType	Commission;

		///�ϴ����(���в���)
		TTORATstpSPVolumeType	PrePosition;

	};

	/// ��ѯͶ������ϳֲ���ϸ
	struct CTORATstpSPQryCombPosDetailField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///��Ϻ�Լ����
		TTORATstpSPSecurityIDType	CombSecurityID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

		///�����˻�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///��ϲ���
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

		///��������ϱ���
		TTORATstpSPExchangeCombIDType	ExchangeCombID;

		///���״̬
		TTORATstpSPCombinationStatusType	CombinationStatus;

	};

	/// Ͷ������ϳֲ���ϸ
	struct CTORATstpSPCombPosDetailField
	{
		 
		///������
		TTORATstpSPDateType	TradingDay;

		///��������ϱ���
		TTORATstpSPExchangeCombIDType	ExchangeCombID;

		///��ϲ���
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

		///���֤ȯ����
		TTORATstpSPSecurityIDType	CombSecurityID;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

		///�ͻ�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///���ճֲ�
		TTORATstpSPVolumeType	HistoryPos;

		///���������ֲ�
		TTORATstpSPVolumeType	TodayPos;

		///���ʱ��
		TTORATstpSPDateType	TradeDate;

		///���ʱ��
		TTORATstpSPTimeType	TradeTime;

		///���״̬
		TTORATstpSPCombinationStatusType	CombinationStatus;

		///�ɷݺ�Լ���������������
		TTORATstpSPRecordCntType	NoLegs;

		///��һ�Ⱥ�Լ����
		TTORATstpSPSecurityIDType	Leg1SecurityID;

		///��һ�������������
		TTORATstpSPVolumeType	Leg1HistoryPos;

		///��һ�Ƚ����������
		TTORATstpSPVolumeType	Leg1TodayPos;

		///��һ�ȳֲַ���
		TTORATstpSPPosiDirectionType	Leg1PosiDirection;

		///��һ����Ȩ����
		TTORATstpSPOptionsTypeType	Leg1OptionsType;

		///�ڶ��Ⱥ�Լ����
		TTORATstpSPSecurityIDType	Leg2SecurityID;

		///�ڶ��������������
		TTORATstpSPVolumeType	Leg2HistoryPos;

		///�ڶ��Ƚ����������
		TTORATstpSPVolumeType	Leg2TodayPos;

		///�ڶ��ȳֲַ���
		TTORATstpSPPosiDirectionType	Leg2PosiDirection;

		///�ڶ�����Ȩ����
		TTORATstpSPOptionsTypeType	Leg2OptionsType;

	};

	/// ��ѯ��Ȩָ����ϸ
	struct CTORATstpSPQryExerciseAppointmentField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Ȩ����
		TTORATstpSPDateType	ExerciseDay;

		///���׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///�ͻ���ϵͳ�еı�ţ����Ψһ����ѭ�������ƶ��ı������
		TTORATstpSPShareholderIDType	ShareholderID;

		///�ʽ��˻�
		TTORATstpSPAccountIDType	AccountID;

		///��Լ��ϵͳ�еı��
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// ��Ȩָ����ϸ
	struct CTORATstpSPExerciseAppointmentField
	{
		 
		///Ͷ������Ȩָ����ϸ
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Ȩ����
		TTORATstpSPDateType	ExerciseDay;

		///���������׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///�ɶ��˻�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///�ʽ��˻�����
		TTORATstpSPAccountIDType	AccountID;

		///����
		TTORATstpSPCurrencyIDType	CurrencyID;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///��Ȩ����
		TTORATstpSPOptionsTypeType	OptionsType;

		///��Լ��λ
		TTORATstpSPVolumeType	OptionUnit;

		///���֤ȯ����
		TTORATstpSPSecurityIDType	UnderlyingSecurityID;

		///��Ȩ����
		TTORATstpSPVolumeType	ExerciseVolume;

		///��Ȩ��
		TTORATstpSPMoneyType	ExercisePrice;

		///��Ȩ����
		TTORATstpSPExerciseDirectionType	ExerciseDirection;

		///���ұ�־
		TTORATstpSPCoverFlagType	CoverFlag;

	};

	/// ��ѯ���͹�˾�޲ֱ�Ķ��
	struct CTORATstpSPQryBrokerLimitPositionField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///���֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// ���͹�˾�޲ֱ�Ķ��
	struct CTORATstpSPBrokerLimitPositionField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///���֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///�ֲܳ��޶�
		TTORATstpSPBigVolumeType	TotalPositionLimit;

		///����ҵ��ֲ��޶�
		TTORATstpSPBigVolumeType	BrokeragePositionLimit;

		///��Ӫҵ��ֲ��޶�
		TTORATstpSPBigVolumeType	SelfOperatedPositionLimit;

		///��ͷ�ֲ��޶�
		TTORATstpSPBigVolumeType	LongPositionLimit;

		///�������뿪���޶�
		TTORATstpSPBigVolumeType	TodayBuyOpenLimit;

		///�������������޶�
		TTORATstpSPBigVolumeType	TodaySellOpenLimit;

		///���ձ��ҿ����޶�
		TTORATstpSPBigVolumeType	TodayCoveredOpenLimit;

		///���տ����޶�
		TTORATstpSPBigVolumeType	TodayOpenLimit;

		///�Ϲ���ͷ�ֲ��޶�
		TTORATstpSPBigVolumeType	LongCallPositionLimit;

		///�Ϲ���ͷ�ֲ��޶�
		TTORATstpSPBigVolumeType	LongPutPositionLimit;

		///��Ķ�ͷ�ֲ��޶�
		TTORATstpSPBigVolumeType	LongUnderlyingPositionLimit;

		///��Ŀ�ͷ�ֲ��޶�
		TTORATstpSPBigVolumeType	ShortUnderlyingPositionLimit;

		///�ֲֶܳ�����
		TTORATstpSPBigVolumeType	TotalPositionFrozen;

		///����ҵ��ֲֶ�����
		TTORATstpSPBigVolumeType	BrokeragePositionFrozen;

		///��Ӫҵ��ֲֶ�����
		TTORATstpSPBigVolumeType	SelfOperatedPositionFrozen;

		///��ͷ�ֲֶ�����
		TTORATstpSPBigVolumeType	LongPositionFrozen;

		///�������뿪�ֶ�����
		TTORATstpSPBigVolumeType	TodayBuyOpenFrozen;

		///�����������ֶ�����
		TTORATstpSPBigVolumeType	TodaySellOpenFrozen;

		///���ձ��ҿ��ֶ�����
		TTORATstpSPBigVolumeType	TodayCoveredOpenFrozen;

		///���տ��ֶ�����
		TTORATstpSPBigVolumeType	TodayOpenFrozen;

		///�Ϲ���ͷ�ֲֶ�����
		TTORATstpSPBigVolumeType	LongCallPositionFrozen;

		///�Ϲ���ͷ�ֲֶ�����
		TTORATstpSPBigVolumeType	LongPutPositionFrozen;

		///��Ķ�ͷ�ֲֶ�����
		TTORATstpSPBigVolumeType	LongUnderlyingPositionFrozen;

		///��Ŀ�ͷ�ֲֶ�����
		TTORATstpSPBigVolumeType	ShortUnderlyingPositionFrozen;

	};

	/// ��ѯ���ҹɷݲ����λ
	struct CTORATstpSPQryInsufficientCoveredStockPositionField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///���֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

	};

	/// ���ҹɷݲ����λ
	struct CTORATstpSPInsufficientCoveredStockPositionField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

		///�ͻ�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///������
		TTORATstpSPDateType	TradingDay;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///��ʼ���ҹɷݲ�������
		TTORATstpSPVolumeType	TotalInsufficientVolume;

		///��ʼ���ҹɷ�Ԥ��������
		TTORATstpSPVolumeType	PreFrozenVolume;

		///����ƽ���ѳ����ı��ҹɷ�����
		TTORATstpSPVolumeType	RepaidVolume;

	};

	/// ��ѯ��Ϻ�Լ��Ϣ
	struct CTORATstpSPQryCombSecurityField
	{
		 
		///��Ϻ�Լ����
		TTORATstpSPSecurityIDType	CombSecurityID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��ϲ���
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

	};

	/// ��Ϻ�Լ��Ϣ
	struct CTORATstpSPCombSecurityField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Ϻ�Լ����
		TTORATstpSPSecurityIDType	CombSecurityID;

		///��ϲ���
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

		///�ɷ�һ��Լ����
		TTORATstpSPSecurityIDType	Leg1SecurityID;

		///�ɷ�һ��Լ����
		TTORATstpSPSecurityNameType	Leg1SecurityName;

		///����Ҫ��ĳɷ�һ��Լ��շ���
		TTORATstpSPPosiDirectionType	RequiredLeg1PosiDirection;

		///�ɷֶ���Լ����
		TTORATstpSPSecurityIDType	Leg2SecurityID;

		///�ɷֶ���Լ����
		TTORATstpSPSecurityNameType	Leg2SecurityName;

		///����Ҫ��ĳɷֶ���Լ��շ���
		TTORATstpSPPosiDirectionType	RequiredLeg2PosiDirection;

	};

	/// ��ѯ���͹�˾������Ϣ
	struct CTORATstpSPQryDepartmentInfoField
	{
		 
		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

	};

	/// ���͹�˾������Ϣ
	struct CTORATstpSPDepartmentInfoField
	{
		 
		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///���͹�˾��������
		TTORATstpSPNameType	DepartmentName;

		///���͹�˾��������
		TTORATstpSPDepartmentIDType	ParentDepartmentID;

	};

	/// �������SystemParam
	struct CTORATstpSPReqInsSystemParamField
	{
		 
		///�������
		TTORATstpSPSystemParamTypeType	PrmType;

		///����ֵ
		TTORATstpSPParameterCharValType	PrmCharVal;

		///����˵��
		TTORATstpSPParameterRemarkType	PrmRmk;

	};

	/// �������SystemParam
	struct CTORATstpSPReqUpdSystemParamField
	{
		 
		///�������
		TTORATstpSPSystemParamTypeType	PrmType;

		///����ֵ
		TTORATstpSPParameterCharValType	PrmCharVal;

		///����˵��
		TTORATstpSPParameterRemarkType	PrmRmk;

	};

	/// ����ɾ��SystemParam
	struct CTORATstpSPReqDelSystemParamField
	{
		 
		///�������
		TTORATstpSPSystemParamTypeType	PrmType;

	};

	/// �������AppInfo
	struct CTORATstpSPReqInsAppInfoField
	{
		 
		///Ӧ�ó�������
		TTORATstpSPAppNameType	AppName;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///Ӧ������
		TTORATstpSPAppTypeType	AppType;

	};

	/// �������AppInfo
	struct CTORATstpSPReqUpdAppInfoField
	{
		 
		///Ӧ�ó�������
		TTORATstpSPAppNameType	AppName;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///Ӧ������
		TTORATstpSPAppTypeType	AppType;

	};

	/// ����ɾ��AppInfo
	struct CTORATstpSPReqDelAppInfoField
	{
		 
		///Ӧ�ó�������
		TTORATstpSPAppNameType	AppName;

	};

	/// �������AppRunningInfo
	struct CTORATstpSPReqInsAppRunningInfoField
	{
		 
		///Ӧ������
		TTORATstpSPAppNameType	AppName;

		///˵���ý���Ա�ı��̳���ı��
		TTORATstpSPRunIDType	RunID;

		///һ���������ı��
		TTORATstpSPExchangeIDType	ExchangeID;

		///Ӧ������
		TTORATstpSPAppTypeType	AppType;

		///����״̬
		TTORATstpSPAppConnectStatusType	AppConnectStatus;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///ǰ��ID
		TTORATstpSPFrontIDType	FrontID;

		///�ỰID
		TTORATstpSPSessionIDType	SessionID;

		///�����������������
		TTORATstpSPDateType	ConnectRequestDate;

		///�������������ʱ��
		TTORATstpSPTimeType	ConnectRequestTime;

	};

	/// �������AppRunningInfo
	struct CTORATstpSPReqUpdAppRunningInfoField
	{
		 
		///Ӧ������
		TTORATstpSPAppNameType	AppName;

		///˵���ý���Ա�ı��̳���ı��
		TTORATstpSPRunIDType	RunID;

		///һ���������ı��
		TTORATstpSPExchangeIDType	ExchangeID;

		///Ӧ������
		TTORATstpSPAppTypeType	AppType;

		///����״̬
		TTORATstpSPAppConnectStatusType	AppConnectStatus;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///ǰ��ID
		TTORATstpSPFrontIDType	FrontID;

		///�ỰID
		TTORATstpSPSessionIDType	SessionID;

		///�����������������
		TTORATstpSPDateType	ConnectRequestDate;

		///�������������ʱ��
		TTORATstpSPTimeType	ConnectRequestTime;

	};

	/// ����ɾ��AppRunningInfo
	struct CTORATstpSPReqDelAppRunningInfoField
	{
		 
		///Ӧ������
		TTORATstpSPAppNameType	AppName;

		///˵���ý���Ա�ı��̳���ı��
		TTORATstpSPRunIDType	RunID;

	};

	/// �������AppUser
	struct CTORATstpSPReqInsAppUserField
	{
		 
		///Ӧ�ó�������
		TTORATstpSPAppNameType	AppName;

		///Ӧ�ó�������ID
		TTORATstpSPRunIDType	RunID;

		///����
		TTORATstpSPPasswordType	AppPassword;

		///��ʼ�����á����á������
		TTORATstpSPActiveStatusType	Status;

	};

	/// �������AppUser
	struct CTORATstpSPReqUpdAppUserField
	{
		 
		///Ӧ�ó�������
		TTORATstpSPAppNameType	AppName;

		///Ӧ�ó�������ID
		TTORATstpSPRunIDType	RunID;

		///����
		TTORATstpSPPasswordType	AppPassword;

		///��ʼ�����á����á������
		TTORATstpSPActiveStatusType	Status;

	};

	/// ����ɾ��AppUser
	struct CTORATstpSPReqDelAppUserField
	{
		 
		///Ӧ�ó�������
		TTORATstpSPAppNameType	AppName;

		///Ӧ�ó�������ID
		TTORATstpSPRunIDType	RunID;

	};

	/// �������BrokerUserRole
	struct CTORATstpSPReqInsBrokerUserRoleField
	{
		 
		///��ɫ���
		TTORATstpSPRoleIDType	RoleID;

		///��ɫ����
		TTORATstpSPRoleDescriptionType	RoleDescription;

		///����Ȩ�޼���
		TTORATstpSPFunctionsType	Functions;

	};

	/// �������BrokerUserRole
	struct CTORATstpSPReqUpdBrokerUserRoleField
	{
		 
		///��ɫ���
		TTORATstpSPRoleIDType	RoleID;

		///��ɫ����
		TTORATstpSPRoleDescriptionType	RoleDescription;

		///����Ȩ�޼���
		TTORATstpSPFunctionsType	Functions;

	};

	/// ����ɾ��BrokerUserRole
	struct CTORATstpSPReqDelBrokerUserRoleField
	{
		 
		///��ɫ���
		TTORATstpSPRoleIDType	RoleID;

	};

	/// �������User
	struct CTORATstpSPReqInsUserField
	{
		 
		///�û�����
		TTORATstpSPUserIDType	UserID;

		///�û�����
		TTORATstpSPUserNameType	UserName;

		///�û�����
		TTORATstpSPUserTypeType	UserType;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///����
		TTORATstpSPUserPasswordType	UserPassword;

		///�����û�ͬʱ���ڼ����Ự�е�¼��Ͷ�����û�Ĭ��Ϊ1
		TTORATstpSPLoginLimitType	LoginLimit;

		///�����û���������������, -1��ʾ������
		TTORATstpSPLoginLimitType	PasswordFailLimit;

		///��ʼ�����á����á������
		TTORATstpSPActiveStatusType	Status;

		///��ϵ��
		TTORATstpSPContacterType	Contacter;

		///����
		TTORATstpSPFaxType	Fax;

		///�ֻ�
		TTORATstpSPMobileType	Mobile;

		///��ϵ�绰
		TTORATstpSPTelephoneType	Telephone;

		///�����ʼ�
		TTORATstpSPEmailType	Email;

		///ͨѶ��ַ
		TTORATstpSPAddressType	Address;

		///��������
		TTORATstpSPZipCodeType	ZipCode;

		///��������
		TTORATstpSPDateType	OpenDate;

		///��������
		TTORATstpSPDateType	CloseDate;

		///ͨѶ����
		TTORATstpSPCommFluxType	OrderInsertCommFlux;

		///��������
		TTORATstpSPCommFluxType	OrderActionCommFlux;

		///���ܷ�ʽ
		TTORATstpSPEncodeModeType	PasswordEncodeMode;

		///�����޸�����(��)
		TTORATstpSPCountType	PasswordUpdatePeriod;

		///������Чʣ������
		TTORATstpSPCountType	PasswordRemainDays;

		///�Ƿ���Ҫ����
		TTORATstpSPBoolType	NeedUpdatePassword;

	};

	/// �������User
	struct CTORATstpSPReqUpdUserField
	{
		 
		///�û�����
		TTORATstpSPUserIDType	UserID;

		///�û�����
		TTORATstpSPUserNameType	UserName;

		///�û�����
		TTORATstpSPUserTypeType	UserType;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///����
		TTORATstpSPUserPasswordType	UserPassword;

		///�����û�ͬʱ���ڼ����Ự�е�¼��Ͷ�����û�Ĭ��Ϊ1
		TTORATstpSPLoginLimitType	LoginLimit;

		///�����û���������������, -1��ʾ������
		TTORATstpSPLoginLimitType	PasswordFailLimit;

		///��ʼ�����á����á������
		TTORATstpSPActiveStatusType	Status;

		///��ϵ��
		TTORATstpSPContacterType	Contacter;

		///����
		TTORATstpSPFaxType	Fax;

		///�ֻ�
		TTORATstpSPMobileType	Mobile;

		///��ϵ�绰
		TTORATstpSPTelephoneType	Telephone;

		///�����ʼ�
		TTORATstpSPEmailType	Email;

		///ͨѶ��ַ
		TTORATstpSPAddressType	Address;

		///��������
		TTORATstpSPZipCodeType	ZipCode;

		///��������
		TTORATstpSPDateType	OpenDate;

		///��������
		TTORATstpSPDateType	CloseDate;

		///ͨѶ����
		TTORATstpSPCommFluxType	OrderInsertCommFlux;

		///��������
		TTORATstpSPCommFluxType	OrderActionCommFlux;

		///���ܷ�ʽ
		TTORATstpSPEncodeModeType	PasswordEncodeMode;

		///�����޸�����(��)
		TTORATstpSPCountType	PasswordUpdatePeriod;

		///������Чʣ������
		TTORATstpSPCountType	PasswordRemainDays;

		///�Ƿ���Ҫ����
		TTORATstpSPBoolType	NeedUpdatePassword;

	};

	/// ����ɾ��User
	struct CTORATstpSPReqDelUserField
	{
		 
		///�û�����
		TTORATstpSPUserIDType	UserID;

	};

	/// �������UserIPLimit
	struct CTORATstpSPReqInsUserIPLimitField
	{
		 
		///�����û�����
		TTORATstpSPUserIDType	UserID;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///IP��ַ����
		TTORATstpSPIPAddressType	IPMask;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

	};

	/// �������UserIPLimit
	struct CTORATstpSPReqUpdUserIPLimitField
	{
		 
		///�����û�����
		TTORATstpSPUserIDType	UserID;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///IP��ַ����
		TTORATstpSPIPAddressType	IPMask;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

	};

	/// ����ɾ��UserIPLimit
	struct CTORATstpSPReqDelUserIPLimitField
	{
		 
		///�����û�����
		TTORATstpSPUserIDType	UserID;

		///IP��ַ
		TTORATstpSPIPAddressType	IPAddress;

		///IP��ַ����
		TTORATstpSPIPAddressType	IPMask;

		///Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

	};

	/// �������BrokerUserFunction
	struct CTORATstpSPReqInsBrokerUserFunctionField
	{
		 
		///�����û�����
		TTORATstpSPUserIDType	UserID;

		///���ܴ���
		TTORATstpSPFunctionIDType	FunctionID;

	};

	/// �������BrokerUserFunction
	struct CTORATstpSPReqUpdBrokerUserFunctionField
	{
		 
		///�����û�����
		TTORATstpSPUserIDType	UserID;

		///���ܴ���
		TTORATstpSPFunctionIDType	FunctionID;

	};

	/// ����ɾ��BrokerUserFunction
	struct CTORATstpSPReqDelBrokerUserFunctionField
	{
		 
		///�����û�����
		TTORATstpSPUserIDType	UserID;

		///���ܴ���
		TTORATstpSPFunctionIDType	FunctionID;

	};

	/// �������BrokerUserRoleAssignment
	struct CTORATstpSPReqInsBrokerUserRoleAssignmentField
	{
		 
		///�����û�����
		TTORATstpSPUserIDType	UserID;

		///��ɫ���
		TTORATstpSPRoleIDType	RoleID;

	};

	/// �������BrokerUserRoleAssignment
	struct CTORATstpSPReqUpdBrokerUserRoleAssignmentField
	{
		 
		///�����û�����
		TTORATstpSPUserIDType	UserID;

		///��ɫ���
		TTORATstpSPRoleIDType	RoleID;

	};

	/// ����ɾ��BrokerUserRoleAssignment
	struct CTORATstpSPReqDelBrokerUserRoleAssignmentField
	{
		 
		///�����û�����
		TTORATstpSPUserIDType	UserID;

		///��ɫ���
		TTORATstpSPRoleIDType	RoleID;

	};

	/// �������BUProxy
	struct CTORATstpSPReqInsBUProxyField
	{
		 
		///�����û�����
		TTORATstpSPUserIDType	UserID;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

	};

	/// ����ɾ��BUProxy
	struct CTORATstpSPReqDelBUProxyField
	{
		 
		///�����û�����
		TTORATstpSPUserIDType	UserID;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

	};

	/// �������BrokerUserProxy
	struct CTORATstpSPReqInsBrokerUserProxyField
	{
		 
		///�����Ա�û�����
		TTORATstpSPUserIDType	ManageUserID;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///��Ա�û�����
		TTORATstpSPUserIDType	UserID;

	};

	/// ����ɾ��BrokerUserProxy
	struct CTORATstpSPReqDelBrokerUserProxyField
	{
		 
		///�����Ա�û�����
		TTORATstpSPUserIDType	ManageUserID;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///��Ա�û�����
		TTORATstpSPUserIDType	UserID;

	};

	/// �������Investor
	struct CTORATstpSPReqInsInvestorField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///��Ȼ�ˡ����ˡ����ⷨ�ˡ��ʹܡ������
		TTORATstpSPInvestorTypeType	InvestorType;

		///Ͷ��������
		TTORATstpSPInvestorNameType	InvestorName;

		///֤������
		TTORATstpSPIdCardTypeType	IdCardType;

		///֤������
		TTORATstpSPIdCardNoType	IdCardNo;

		///��ͬ���
		TTORATstpSPContractNoType	ContractNo;

		///��ʼ�����á����á������
		TTORATstpSPActiveStatusType	Status;

		///Ԥ���ֶ�1
		TTORATstpSPBranchIDType	Reserve1;

		///Ͷ���߷ּ����
		TTORATstpSPInvestorLevelType	InvestorLevel;

		///Ԥ���ֶ�2
		TTORATstpSPRemarkType	Reserve2;

		///Ӷ��ģ�����
		TTORATstpSPTradingFeeTemplateIDType	TradingFeeTemplateID;

		///��֤��ģ�����
		TTORATstpSPMarginFeeTemplateIDType	MarginFeeTemplateID;

		///��ز���ģ�����
		TTORATstpSPRiskParamTemplateIDType	RiskParamTemplateID;

		///ί�з�ʽ
		TTORATstpSPOperwaysType	Operways;

		///רҵͶ�������
		TTORATstpSPProfInvestorTypeType	ProfInvestorType;

	};

	/// �������Investor
	struct CTORATstpSPReqUpdInvestorField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///��Ȼ�ˡ����ˡ����ⷨ�ˡ��ʹܡ������
		TTORATstpSPInvestorTypeType	InvestorType;

		///Ͷ��������
		TTORATstpSPInvestorNameType	InvestorName;

		///֤������
		TTORATstpSPIdCardTypeType	IdCardType;

		///֤������
		TTORATstpSPIdCardNoType	IdCardNo;

		///��ͬ���
		TTORATstpSPContractNoType	ContractNo;

		///��ʼ�����á����á������
		TTORATstpSPActiveStatusType	Status;

		///Ԥ���ֶ�1
		TTORATstpSPBranchIDType	Reserve1;

		///Ͷ���߷ּ����
		TTORATstpSPInvestorLevelType	InvestorLevel;

		///Ԥ���ֶ�2
		TTORATstpSPRemarkType	Reserve2;

		///Ӷ��ģ�����
		TTORATstpSPTradingFeeTemplateIDType	TradingFeeTemplateID;

		///��֤��ģ�����
		TTORATstpSPMarginFeeTemplateIDType	MarginFeeTemplateID;

		///��ز���ģ�����
		TTORATstpSPRiskParamTemplateIDType	RiskParamTemplateID;

		///ί�з�ʽ
		TTORATstpSPOperwaysType	Operways;

		///רҵͶ�������
		TTORATstpSPProfInvestorTypeType	ProfInvestorType;

	};

	/// ����ɾ��Investor
	struct CTORATstpSPReqDelInvestorField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

	};

	/// �������BusinessUnit
	struct CTORATstpSPReqInsBusinessUnitField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitNameType	BusinessUnitName;

	};

	/// �������BusinessUnit
	struct CTORATstpSPReqUpdBusinessUnitField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitNameType	BusinessUnitName;

	};

	/// ����ɾ��BusinessUnit
	struct CTORATstpSPReqDelBusinessUnitField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

	};

	/// �������BusinessUnitAccount
	struct CTORATstpSPReqInsBusinessUnitAccountField
	{
		 
		///��¼�û�
		TTORATstpSPUserIDType	UserID;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

		///��ͨ�����á�����Ʒ��
		TTORATstpSPShareholderIDTypeType	ShareholderIDType;

		///֤ȯ�г��еľ���Ʒ�֣����Ϻ���Ʊ
		TTORATstpSPProductIDType	ProductID;

		///�ʽ��˻�
		TTORATstpSPAccountIDType	AccountID;

		///����
		TTORATstpSPCurrencyIDType	CurrencyID;

	};

	/// �������BusinessUnitAccount
	struct CTORATstpSPReqUpdBusinessUnitAccountField
	{
		 
		///��¼�û�
		TTORATstpSPUserIDType	UserID;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

		///��ͨ�����á�����Ʒ��
		TTORATstpSPShareholderIDTypeType	ShareholderIDType;

		///֤ȯ�г��еľ���Ʒ�֣����Ϻ���Ʊ
		TTORATstpSPProductIDType	ProductID;

		///�ʽ��˻�
		TTORATstpSPAccountIDType	AccountID;

		///����
		TTORATstpSPCurrencyIDType	CurrencyID;

	};

	/// ����ɾ��BusinessUnitAccount
	struct CTORATstpSPReqDelBusinessUnitAccountField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��¼�û�
		TTORATstpSPUserIDType	UserID;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

		///֤ȯ�г��еľ���Ʒ�֣����Ϻ���Ʊ
		TTORATstpSPProductIDType	ProductID;

		///����
		TTORATstpSPCurrencyIDType	CurrencyID;

	};

	/// �������ShareholderAccount
	struct CTORATstpSPReqInsShareholderAccountField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///��ͨ�����ã�����Ʒ��
		TTORATstpSPShareholderIDTypeType	ShareholderIDType;

		///���׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///������Ӫҵ������
		TTORATstpSPBranchIDType	BranchID;

		///����Ȩ��ģ��
		TTORATstpSPTradingRightTemplateIDType	TradingRightTemplateID;

	};

	/// �������ShareholderAccount
	struct CTORATstpSPReqUpdShareholderAccountField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///��ͨ�����ã�����Ʒ��
		TTORATstpSPShareholderIDTypeType	ShareholderIDType;

		///���׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///������Ӫҵ������
		TTORATstpSPBranchIDType	BranchID;

		///����Ȩ��ģ��
		TTORATstpSPTradingRightTemplateIDType	TradingRightTemplateID;

	};

	/// ����ɾ��ShareholderAccount
	struct CTORATstpSPReqDelShareholderAccountField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///Ŀǰ���ֶδ�ŵ�����֤�������ڵĹɶ����롣
		TTORATstpSPShareholderIDType	ShareholderID;

	};

	/// �������ShareholderSystemRelation
	struct CTORATstpSPReqInsShareholderSystemRelationField
	{
		 
		///�����г��ı��
		TTORATstpSPMarketIDType	MarketID;

		///���ɹɶ�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///����Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///����Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�ֻ��г����
		TTORATstpSPMarketIDType	OuterMarketID;

		///�ֻ��ɶ�����
		TTORATstpSPShareholderIDType	OuterShareholderID;

		///�ֻ�Ͷ���ߴ���
		TTORATstpSPInvestorIDType	OuterInvestorID;

		///�ֻ�Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	OuterBusinessUnitID;

		///һ���������ı��
		TTORATstpSPExchangeIDType	ExchangeID;

	};

	/// �������ShareholderSystemRelation
	struct CTORATstpSPReqUpdShareholderSystemRelationField
	{
		 
		///�����г��ı��
		TTORATstpSPMarketIDType	MarketID;

		///���ɹɶ�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///����Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///����Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///�ֻ��г����
		TTORATstpSPMarketIDType	OuterMarketID;

		///�ֻ��ɶ�����
		TTORATstpSPShareholderIDType	OuterShareholderID;

		///�ֻ�Ͷ���ߴ���
		TTORATstpSPInvestorIDType	OuterInvestorID;

		///�ֻ�Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	OuterBusinessUnitID;

		///һ���������ı��
		TTORATstpSPExchangeIDType	ExchangeID;

	};

	/// ����ɾ��ShareholderSystemRelation
	struct CTORATstpSPReqDelShareholderSystemRelationField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�����г��ı��
		TTORATstpSPMarketIDType	MarketID;

		///���ɹɶ�����
		TTORATstpSPShareholderIDType	ShareholderID;

	};

	/// �������InvestorCondOrderLimitParam
	struct CTORATstpSPReqInsInvestorCondOrderLimitParamField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///�����������
		TTORATstpSPVolumeType	MaxCondOrderLimitCnt;

		///��ǰ��������
		TTORATstpSPVolumeType	CurrCondOrderCnt;

	};

	/// �������InvestorCondOrderLimitParam
	struct CTORATstpSPReqUpdInvestorCondOrderLimitParamField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///�����������
		TTORATstpSPVolumeType	MaxCondOrderLimitCnt;

		///��ǰ��������
		TTORATstpSPVolumeType	CurrCondOrderCnt;

	};

	/// ����ɾ��InvestorCondOrderLimitParam
	struct CTORATstpSPReqDelInvestorCondOrderLimitParamField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

	};

	/// �������SecurityBlackList
	struct CTORATstpSPReqInsSecurityBlackListField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�ɶ��˻�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///����ƽ����
		TTORATstpSPOffsetFlagType	OffsetFlag;

		///�������
		TTORATstpSPDirectionType	Direction;

		///Ͷ���ױ���־
		TTORATstpSPHedgeFlagType	HedgeFlag;

	};

	/// �������SecurityBlackList
	struct CTORATstpSPReqUpdSecurityBlackListField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�ɶ��˻�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///����ƽ����
		TTORATstpSPOffsetFlagType	OffsetFlag;

		///�������
		TTORATstpSPDirectionType	Direction;

		///Ͷ���ױ���־
		TTORATstpSPHedgeFlagType	HedgeFlag;

	};

	/// ����ɾ��SecurityBlackList
	struct CTORATstpSPReqDelSecurityBlackListField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�ɶ��˻�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///����ƽ����
		TTORATstpSPOffsetFlagType	OffsetFlag;

		///�������
		TTORATstpSPDirectionType	Direction;

		///Ͷ���ױ���־
		TTORATstpSPHedgeFlagType	HedgeFlag;

	};

	/// �������ShareholderTradingRight
	struct CTORATstpSPReqInsShareholderTradingRightField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�ɶ��˻�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

		///֤ȯƷ�ִ���
		TTORATstpSPProductIDType	ProductID;

		///֤ȯ������
		TTORATstpSPSecurityTypeType	SecurityType;

		///����ƽ����
		TTORATstpSPOffsetFlagType	OffsetFlag;

		///�������
		TTORATstpSPDirectionType	Direction;

		///Ͷ���ױ���־
		TTORATstpSPHedgeFlagType	HedgeFlag;

		///�Ƿ��ֹ
		TTORATstpSPBoolType	bForbidden;

		///����Ȩ��ģʽ
		TTORATstpSPRangeModeType	RangeMode;

	};

	/// �������ShareholderTradingRight
	struct CTORATstpSPReqUpdShareholderTradingRightField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�ɶ��˻�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

		///֤ȯƷ�ִ���
		TTORATstpSPProductIDType	ProductID;

		///֤ȯ������
		TTORATstpSPSecurityTypeType	SecurityType;

		///����ƽ����
		TTORATstpSPOffsetFlagType	OffsetFlag;

		///�������
		TTORATstpSPDirectionType	Direction;

		///Ͷ���ױ���־
		TTORATstpSPHedgeFlagType	HedgeFlag;

		///�Ƿ��ֹ
		TTORATstpSPBoolType	bForbidden;

		///����Ȩ��ģʽ
		TTORATstpSPRangeModeType	RangeMode;

	};

	/// ����ɾ��ShareholderTradingRight
	struct CTORATstpSPReqDelShareholderTradingRightField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�г�����
		TTORATstpSPMarketIDType	MarketID;

		///�ɶ��˻�����
		TTORATstpSPShareholderIDType	ShareholderID;

		///֤ȯƷ�ִ���
		TTORATstpSPProductIDType	ProductID;

		///֤ȯ������
		TTORATstpSPSecurityTypeType	SecurityType;

		///����ƽ����
		TTORATstpSPOffsetFlagType	OffsetFlag;

		///�������
		TTORATstpSPDirectionType	Direction;

		///Ͷ���ױ���־
		TTORATstpSPHedgeFlagType	HedgeFlag;

	};

	/// �������ExchangeSyncStatus
	struct CTORATstpSPReqInsExchangeSyncStatusField
	{
		 
		///���׷���������
		TTORATstpSPDateType	TradingDay;

		///һ���������ı��
		TTORATstpSPExchangeIDType	ExchangeID;

		///����ͬ��״̬
		TTORATstpSPDataSyncStatusType	DataSyncStatus;

		///ͬ��˳��
		TTORATstpSPSequenceNoType	SyncNo;

	};

	/// �������ExchangeSyncStatus
	struct CTORATstpSPReqUpdExchangeSyncStatusField
	{
		 
		///���׷���������
		TTORATstpSPDateType	TradingDay;

		///һ���������ı��
		TTORATstpSPExchangeIDType	ExchangeID;

		///����ͬ��״̬
		TTORATstpSPDataSyncStatusType	DataSyncStatus;

		///ͬ��˳��
		TTORATstpSPSequenceNoType	SyncNo;

	};

	/// ����ɾ��ExchangeSyncStatus
	struct CTORATstpSPReqDelExchangeSyncStatusField
	{
		 
		///һ���������ı��
		TTORATstpSPExchangeIDType	ExchangeID;

	};

	/// �������MaxSystemSerial
	struct CTORATstpSPReqInsMaxSystemSerialField
	{
		 
		///������
		TTORATstpSPDateType	OperateDate;

		///����ʽ�ת����ˮ��
		TTORATstpSPIntSerialType	MaxFundSerial;

		///����λת����ˮ��
		TTORATstpSPIntSerialType	MaxPositionSerial;

		///����ֻ���λת����ˮ��
		TTORATstpSPIntSerialType	MaxStockPositionSerial;

		///�����֪ͨ��ˮ��
		TTORATstpSPIntSerialType	MaxNoticeSerial;

	};

	/// �������MaxSystemSerial
	struct CTORATstpSPReqUpdMaxSystemSerialField
	{
		 
		///������
		TTORATstpSPDateType	OperateDate;

		///����ʽ�ת����ˮ��
		TTORATstpSPIntSerialType	MaxFundSerial;

		///����λת����ˮ��
		TTORATstpSPIntSerialType	MaxPositionSerial;

		///����ֻ���λת����ˮ��
		TTORATstpSPIntSerialType	MaxStockPositionSerial;

		///�����֪ͨ��ˮ��
		TTORATstpSPIntSerialType	MaxNoticeSerial;

	};

	/// ����ɾ��MaxSystemSerial
	struct CTORATstpSPReqDelMaxSystemSerialField
	{
		 
		///������
		TTORATstpSPDateType	OperateDate;

	};

	/// �������OrderLocalSeqPrefix
	struct CTORATstpSPReqInsOrderLocalSeqPrefixField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///��������
		TTORATstpSPBranchIDType	BranchID;

		///���׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///���ر������ǰ׺
		TTORATstpSPPrefixType	Prefix;

		///������ʼ������ű���
		TTORATstpSPOrderNoType	StartOrderNo;

		///��������������ű���
		TTORATstpSPOrderNoType	EndOrderNo;

		///��ǰ�������
		TTORATstpSPOrderNoType	CurrentOrderNo;

		///������ų���
		TTORATstpSPOrderIDLenType	OrderIDLen;

	};

	/// �������OrderLocalSeqPrefix
	struct CTORATstpSPReqUpdOrderLocalSeqPrefixField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///��������
		TTORATstpSPBranchIDType	BranchID;

		///���׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///���ر������ǰ׺
		TTORATstpSPPrefixType	Prefix;

		///������ʼ������ű���
		TTORATstpSPOrderNoType	StartOrderNo;

		///��������������ű���
		TTORATstpSPOrderNoType	EndOrderNo;

		///��ǰ�������
		TTORATstpSPOrderNoType	CurrentOrderNo;

		///������ų���
		TTORATstpSPOrderIDLenType	OrderIDLen;

	};

	/// ����ɾ��OrderLocalSeqPrefix
	struct CTORATstpSPReqDelOrderLocalSeqPrefixField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///��������
		TTORATstpSPBranchIDType	BranchID;

		///���׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

	};

	/// �������BrokerLimitPosition
	struct CTORATstpSPReqInsBrokerLimitPositionField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///���֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///�޲ֵ�λ��2.�ݡ�3.�ţ�
		TTORATstpSPOrderUnitType	LimitPositionUnit;

		///�ֲܳ��޶�
		TTORATstpSPBigVolumeType	TotalPositionLimit;

		///����ҵ��ֲ��޶�
		TTORATstpSPBigVolumeType	BrokeragePositionLimit;

		///��Ӫҵ��ֲ��޶�
		TTORATstpSPBigVolumeType	SelfOperatedPositionLimit;

		///��ͷ�ֲ��޶�
		TTORATstpSPBigVolumeType	LongPositionLimit;

		///�������뿪���޶�
		TTORATstpSPBigVolumeType	TodayBuyOpenLimit;

		///�������������޶�
		TTORATstpSPBigVolumeType	TodaySellOpenLimit;

		///���ձ��ҿ����޶�
		TTORATstpSPBigVolumeType	TodayCoveredOpenLimit;

		///���տ����޶�
		TTORATstpSPBigVolumeType	TodayOpenLimit;

		///�Ϲ���ͷ�ֲ��޶�
		TTORATstpSPBigVolumeType	LongCallPositionLimit;

		///�Ϲ���ͷ�ֲ��޶�
		TTORATstpSPBigVolumeType	LongPutPositionLimit;

		///��Ķ�ͷ�ֲ��޶�
		TTORATstpSPBigVolumeType	LongUnderlyingPositionLimit;

		///��Ŀ�ͷ�ֲ��޶�
		TTORATstpSPBigVolumeType	ShortUnderlyingPositionLimit;

		///�ֲֶܳ�����
		TTORATstpSPBigVolumeType	TotalPositionFrozen;

		///����ҵ��ֲֶ�����
		TTORATstpSPBigVolumeType	BrokeragePositionFrozen;

		///��Ӫҵ��ֲֶ�����
		TTORATstpSPBigVolumeType	SelfOperatedPositionFrozen;

		///��ͷ�ֲֶ�����
		TTORATstpSPBigVolumeType	LongPositionFrozen;

		///�������뿪�ֶ�����
		TTORATstpSPBigVolumeType	TodayBuyOpenFrozen;

		///�����������ֶ�����
		TTORATstpSPBigVolumeType	TodaySellOpenFrozen;

		///���ձ��ҿ��ֶ�����
		TTORATstpSPBigVolumeType	TodayCoveredOpenFrozen;

		///���տ��ֶ�����
		TTORATstpSPBigVolumeType	TodayOpenFrozen;

		///�Ϲ���ͷ�ֲֶ�����
		TTORATstpSPBigVolumeType	LongCallPositionFrozen;

		///�Ϲ���ͷ�ֲֶ�����
		TTORATstpSPBigVolumeType	LongPutPositionFrozen;

		///��Ķ�ͷ�ֲֶ�����
		TTORATstpSPBigVolumeType	LongUnderlyingPositionFrozen;

		///��Ŀ�ͷ�ֲֶ�����
		TTORATstpSPBigVolumeType	ShortUnderlyingPositionFrozen;

	};

	/// �������BrokerLimitPosition
	struct CTORATstpSPReqUpdBrokerLimitPositionField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///���֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///�޲ֵ�λ��2.�ݡ�3.�ţ�
		TTORATstpSPOrderUnitType	LimitPositionUnit;

		///�ֲܳ��޶�
		TTORATstpSPBigVolumeType	TotalPositionLimit;

		///����ҵ��ֲ��޶�
		TTORATstpSPBigVolumeType	BrokeragePositionLimit;

		///��Ӫҵ��ֲ��޶�
		TTORATstpSPBigVolumeType	SelfOperatedPositionLimit;

		///��ͷ�ֲ��޶�
		TTORATstpSPBigVolumeType	LongPositionLimit;

		///�������뿪���޶�
		TTORATstpSPBigVolumeType	TodayBuyOpenLimit;

		///�������������޶�
		TTORATstpSPBigVolumeType	TodaySellOpenLimit;

		///���ձ��ҿ����޶�
		TTORATstpSPBigVolumeType	TodayCoveredOpenLimit;

		///���տ����޶�
		TTORATstpSPBigVolumeType	TodayOpenLimit;

		///�Ϲ���ͷ�ֲ��޶�
		TTORATstpSPBigVolumeType	LongCallPositionLimit;

		///�Ϲ���ͷ�ֲ��޶�
		TTORATstpSPBigVolumeType	LongPutPositionLimit;

		///��Ķ�ͷ�ֲ��޶�
		TTORATstpSPBigVolumeType	LongUnderlyingPositionLimit;

		///��Ŀ�ͷ�ֲ��޶�
		TTORATstpSPBigVolumeType	ShortUnderlyingPositionLimit;

		///�ֲֶܳ�����
		TTORATstpSPBigVolumeType	TotalPositionFrozen;

		///����ҵ��ֲֶ�����
		TTORATstpSPBigVolumeType	BrokeragePositionFrozen;

		///��Ӫҵ��ֲֶ�����
		TTORATstpSPBigVolumeType	SelfOperatedPositionFrozen;

		///��ͷ�ֲֶ�����
		TTORATstpSPBigVolumeType	LongPositionFrozen;

		///�������뿪�ֶ�����
		TTORATstpSPBigVolumeType	TodayBuyOpenFrozen;

		///�����������ֶ�����
		TTORATstpSPBigVolumeType	TodaySellOpenFrozen;

		///���ձ��ҿ��ֶ�����
		TTORATstpSPBigVolumeType	TodayCoveredOpenFrozen;

		///���տ��ֶ�����
		TTORATstpSPBigVolumeType	TodayOpenFrozen;

		///�Ϲ���ͷ�ֲֶ�����
		TTORATstpSPBigVolumeType	LongCallPositionFrozen;

		///�Ϲ���ͷ�ֲֶ�����
		TTORATstpSPBigVolumeType	LongPutPositionFrozen;

		///��Ķ�ͷ�ֲֶ�����
		TTORATstpSPBigVolumeType	LongUnderlyingPositionFrozen;

		///��Ŀ�ͷ�ֲֶ�����
		TTORATstpSPBigVolumeType	ShortUnderlyingPositionFrozen;

	};

	/// ����ɾ��BrokerLimitPosition
	struct CTORATstpSPReqDelBrokerLimitPositionField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///���֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// �������BrokerLimitPositionParam
	struct CTORATstpSPReqInsBrokerLimitPositionParamField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///֤ȯ�г��еľ���Ʒ�֣����Ϻ���Ʊ
		TTORATstpSPProductIDType	ProductID;

		///���֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///�ֲܳ��޶�
		TTORATstpSPBigVolumeType	TotalPositionLimit;

		///����ҵ��ֲ��޶�
		TTORATstpSPBigVolumeType	BrokeragePositionLimit;

		///��Ӫҵ��ֲ��޶�
		TTORATstpSPBigVolumeType	SelfOperatedPositionLimit;

		///��ͷ�ֲ��޶�
		TTORATstpSPBigVolumeType	LongPositionLimit;

		///�������뿪���޶�
		TTORATstpSPBigVolumeType	TodayBuyOpenLimit;

		///�������������޶�
		TTORATstpSPBigVolumeType	TodaySellOpenLimit;

		///���ձ��ҿ����޶�
		TTORATstpSPBigVolumeType	TodayCoveredOpenLimit;

		///���տ����޶�
		TTORATstpSPBigVolumeType	TodayOpenLimit;

		///�Ϲ���ͷ�ֲ��޶�
		TTORATstpSPBigVolumeType	LongCallPositionLimit;

		///�Ϲ���ͷ�ֲ��޶�
		TTORATstpSPBigVolumeType	LongPutPositionLimit;

		///��Ķ�ͷ�ֲ��޶�
		TTORATstpSPBigVolumeType	LongUnderlyingPositionLimit;

		///��Ŀ�ͷ�ֲ��޶�
		TTORATstpSPBigVolumeType	ShortUnderlyingPositionLimit;

	};

	/// �������BrokerLimitPositionParam
	struct CTORATstpSPReqUpdBrokerLimitPositionParamField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///֤ȯ�г��еľ���Ʒ�֣����Ϻ���Ʊ
		TTORATstpSPProductIDType	ProductID;

		///���֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///�ֲܳ��޶�
		TTORATstpSPBigVolumeType	TotalPositionLimit;

		///����ҵ��ֲ��޶�
		TTORATstpSPBigVolumeType	BrokeragePositionLimit;

		///��Ӫҵ��ֲ��޶�
		TTORATstpSPBigVolumeType	SelfOperatedPositionLimit;

		///��ͷ�ֲ��޶�
		TTORATstpSPBigVolumeType	LongPositionLimit;

		///�������뿪���޶�
		TTORATstpSPBigVolumeType	TodayBuyOpenLimit;

		///�������������޶�
		TTORATstpSPBigVolumeType	TodaySellOpenLimit;

		///���ձ��ҿ����޶�
		TTORATstpSPBigVolumeType	TodayCoveredOpenLimit;

		///���տ����޶�
		TTORATstpSPBigVolumeType	TodayOpenLimit;

		///�Ϲ���ͷ�ֲ��޶�
		TTORATstpSPBigVolumeType	LongCallPositionLimit;

		///�Ϲ���ͷ�ֲ��޶�
		TTORATstpSPBigVolumeType	LongPutPositionLimit;

		///��Ķ�ͷ�ֲ��޶�
		TTORATstpSPBigVolumeType	LongUnderlyingPositionLimit;

		///��Ŀ�ͷ�ֲ��޶�
		TTORATstpSPBigVolumeType	ShortUnderlyingPositionLimit;

	};

	/// ����ɾ��BrokerLimitPositionParam
	struct CTORATstpSPReqDelBrokerLimitPositionParamField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///֤ȯ�г��еľ���Ʒ�֣����Ϻ���Ʊ
		TTORATstpSPProductIDType	ProductID;

		///���֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// �������TradingRightTemplate
	struct CTORATstpSPReqInsTradingRightTemplateField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///Ȩ��ģ�����
		TTORATstpSPTradingRightTemplateIDType	TradingRightTemplateID;

		///֤ȯƷ�ִ���
		TTORATstpSPProductIDType	ProductID;

		///֤ȯ������
		TTORATstpSPSecurityTypeType	SecurityType;

		///����ƽ����
		TTORATstpSPOffsetFlagType	OffsetFlag;

		///�������
		TTORATstpSPDirectionType	Direction;

		///Ͷ���ױ���־
		TTORATstpSPHedgeFlagType	HedgeFlag;

		///�Ƿ��ֹ
		TTORATstpSPBoolType	bForbidden;

	};

	/// �������TradingRightTemplate
	struct CTORATstpSPReqUpdTradingRightTemplateField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///Ȩ��ģ�����
		TTORATstpSPTradingRightTemplateIDType	TradingRightTemplateID;

		///֤ȯƷ�ִ���
		TTORATstpSPProductIDType	ProductID;

		///֤ȯ������
		TTORATstpSPSecurityTypeType	SecurityType;

		///����ƽ����
		TTORATstpSPOffsetFlagType	OffsetFlag;

		///�������
		TTORATstpSPDirectionType	Direction;

		///Ͷ���ױ���־
		TTORATstpSPHedgeFlagType	HedgeFlag;

		///�Ƿ��ֹ
		TTORATstpSPBoolType	bForbidden;

	};

	/// ����ɾ��TradingRightTemplate
	struct CTORATstpSPReqDelTradingRightTemplateField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///Ȩ��ģ�����
		TTORATstpSPTradingRightTemplateIDType	TradingRightTemplateID;

		///֤ȯƷ�ִ���
		TTORATstpSPProductIDType	ProductID;

		///֤ȯ������
		TTORATstpSPSecurityTypeType	SecurityType;

		///����ƽ����
		TTORATstpSPOffsetFlagType	OffsetFlag;

		///�������
		TTORATstpSPDirectionType	Direction;

		///Ͷ���ױ���־
		TTORATstpSPHedgeFlagType	HedgeFlag;

	};

	/// �������Security
	struct CTORATstpSPReqInsSecurityField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///��������Լ����
		TTORATstpSPExchSecurityIDType	ExchSecurityID;

		///֤ȯ����
		TTORATstpSPSecurityNameType	SecurityName;

		///����֤ȯ����
		TTORATstpSPSecurityIDType	UnderlyingSecurityID;

		///����֤ȯ����
		TTORATstpSPSecurityNameType	UnderlyingSecurityName;

		///��Լ��λ��Ʒ�ֵ�ÿ�ֽ��׵Ĺ涨��������Ի�������Ʒ
		TTORATstpSPVolumeMultipleType	UnderlyingMultiple;

		///��Ȩִ�з�ʽ��0��ŷʽ�� 1����ʽ
		TTORATstpSPStrikeModeType	StrikeMode;

		///���ǡ�����
		TTORATstpSPOptionsTypeType	OptionsType;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///֤ȯ�г��еľ���Ʒ�֣����Ϻ���Ʊ
		TTORATstpSPProductIDType	ProductID;

		///֤ȯƷ���еľ���������Ϻ�A��
		TTORATstpSPSecurityTypeType	SecurityType;

		///����
		TTORATstpSPCurrencyIDType	CurrencyID;

		///��¼�걨ʱʹ�õĵ�λ���֡��ɡ��ݡ��ŵ�
		TTORATstpSPOrderUnitType	OrderUnit;

		///ÿ�ο����������С���׵�λ�����걨��λ�ƣ���ÿ��������������뽻�׵�λ��������
		TTORATstpSPTradingUnitType	BuyTradingUnit;

		///ÿ�ο�����������С���׵�λ�����걨��λ�ƣ���ÿ�������������������׵�λ��������
		TTORATstpSPTradingUnitType	SellTradingUnit;

		///���ʿ��������������������걨��λ�ƣ�
		TTORATstpSPVolumeType	MaxMarketOrderBuyVolume;

		///���ʿ����������С���������걨��λ�ƣ�
		TTORATstpSPVolumeType	MinMarketOrderBuyVolume;

		///���ʿ��������������������걨��λ�ƣ�
		TTORATstpSPVolumeType	MaxLimitOrderBuyVolume;

		///���ʿ����������С���������걨��λ�ƣ�
		TTORATstpSPVolumeType	MinLimitOrderBuyVolume;

		///���ʿ��������������������걨��λ�ƣ�
		TTORATstpSPVolumeType	MaxMarketOrderSellVolume;

		///���ʿ����������С���������걨��λ�ƣ�
		TTORATstpSPVolumeType	MinMarketOrderSellVolume;

		///���ʿ��������������������걨��λ�ƣ�
		TTORATstpSPVolumeType	MaxLimitOrderSellVolume;

		///���ʿ����������С���������걨��λ�ƣ�
		TTORATstpSPVolumeType	MinLimitOrderSellVolume;

		///�걨��λ�뱨�۽�λ�ı�ֵ
		TTORATstpSPVolumeMultipleType	VolumeMultiple;

		///֤ȯ�ĵ�λ�۸��ǵ��仯����Сֵ
		TTORATstpSPPriceTickType	PriceTick;

		///���ֲ֡��ۺϳֲ�
		TTORATstpSPPositionTypeType	PositionType;

		///֤ȯ״̬,������0������״̬�ĵ��ӣ�������bitλ��ʾ��ÿһλ����һ��״̬��0x00000001ͣ��,0x00000002����ͣ�ƣ�0x00000040�۶�,0x00000080�������뿪��,0x00000100������������,0x00000200���Ʊ��ҿ���,0x00000400�������ж�,0x00000800��ʱͣ��,0x00001000����ͣ��,0x00002000������Ȩ,0x00004000���������̱���
		TTORATstpSPSecurityStatusType	SecurityStatus;

		///��Ȩר��
		TTORATstpSPPriceType	StrikePrice;

		///�׽�����
		TTORATstpSPDateType	FirstDate;

		///�������
		TTORATstpSPDateType	LastDate;

		///��Ȩ��
		TTORATstpSPDateType	StrikeDate;

		///��Լ����ʱ��
		TTORATstpSPDateType	ExpireDate;

		///�˽ᵽ��δƽ�ֺ�Լ�Ŀ�ʼ����
		TTORATstpSPDateType	DelivDate;

		///�Ƿ����ǵ�������
		TTORATstpSPBoolType	IsUpDownLimit;

		///��Ȩר��
		TTORATstpSPPriceType	MarginUnit;

		///��Լǰ�����
		TTORATstpSPPriceType	PreSettlementPrice;

		///��Լǰ���̼�
		TTORATstpSPPriceType	PreClosePrice;

		///��ĺ�Լǰ���̼�
		TTORATstpSPPriceType	UnderlyingPreClosePrice;

	};

	/// �������Security
	struct CTORATstpSPReqUpdSecurityField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///��������Լ����
		TTORATstpSPExchSecurityIDType	ExchSecurityID;

		///֤ȯ����
		TTORATstpSPSecurityNameType	SecurityName;

		///����֤ȯ����
		TTORATstpSPSecurityIDType	UnderlyingSecurityID;

		///����֤ȯ����
		TTORATstpSPSecurityNameType	UnderlyingSecurityName;

		///��Լ��λ��Ʒ�ֵ�ÿ�ֽ��׵Ĺ涨��������Ի�������Ʒ
		TTORATstpSPVolumeMultipleType	UnderlyingMultiple;

		///��Ȩִ�з�ʽ��0��ŷʽ�� 1����ʽ
		TTORATstpSPStrikeModeType	StrikeMode;

		///���ǡ�����
		TTORATstpSPOptionsTypeType	OptionsType;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///֤ȯ�г��еľ���Ʒ�֣����Ϻ���Ʊ
		TTORATstpSPProductIDType	ProductID;

		///֤ȯƷ���еľ���������Ϻ�A��
		TTORATstpSPSecurityTypeType	SecurityType;

		///����
		TTORATstpSPCurrencyIDType	CurrencyID;

		///��¼�걨ʱʹ�õĵ�λ���֡��ɡ��ݡ��ŵ�
		TTORATstpSPOrderUnitType	OrderUnit;

		///ÿ�ο����������С���׵�λ�����걨��λ�ƣ���ÿ��������������뽻�׵�λ��������
		TTORATstpSPTradingUnitType	BuyTradingUnit;

		///ÿ�ο�����������С���׵�λ�����걨��λ�ƣ���ÿ�������������������׵�λ��������
		TTORATstpSPTradingUnitType	SellTradingUnit;

		///���ʿ��������������������걨��λ�ƣ�
		TTORATstpSPVolumeType	MaxMarketOrderBuyVolume;

		///���ʿ����������С���������걨��λ�ƣ�
		TTORATstpSPVolumeType	MinMarketOrderBuyVolume;

		///���ʿ��������������������걨��λ�ƣ�
		TTORATstpSPVolumeType	MaxLimitOrderBuyVolume;

		///���ʿ����������С���������걨��λ�ƣ�
		TTORATstpSPVolumeType	MinLimitOrderBuyVolume;

		///���ʿ��������������������걨��λ�ƣ�
		TTORATstpSPVolumeType	MaxMarketOrderSellVolume;

		///���ʿ����������С���������걨��λ�ƣ�
		TTORATstpSPVolumeType	MinMarketOrderSellVolume;

		///���ʿ��������������������걨��λ�ƣ�
		TTORATstpSPVolumeType	MaxLimitOrderSellVolume;

		///���ʿ����������С���������걨��λ�ƣ�
		TTORATstpSPVolumeType	MinLimitOrderSellVolume;

		///�걨��λ�뱨�۽�λ�ı�ֵ
		TTORATstpSPVolumeMultipleType	VolumeMultiple;

		///֤ȯ�ĵ�λ�۸��ǵ��仯����Сֵ
		TTORATstpSPPriceTickType	PriceTick;

		///���ֲ֡��ۺϳֲ�
		TTORATstpSPPositionTypeType	PositionType;

		///֤ȯ״̬,������0������״̬�ĵ��ӣ�������bitλ��ʾ��ÿһλ����һ��״̬��0x00000001ͣ��,0x00000002����ͣ�ƣ�0x00000040�۶�,0x00000080�������뿪��,0x00000100������������,0x00000200���Ʊ��ҿ���,0x00000400�������ж�,0x00000800��ʱͣ��,0x00001000����ͣ��,0x00002000������Ȩ,0x00004000���������̱���
		TTORATstpSPSecurityStatusType	SecurityStatus;

		///��Ȩר��
		TTORATstpSPPriceType	StrikePrice;

		///�׽�����
		TTORATstpSPDateType	FirstDate;

		///�������
		TTORATstpSPDateType	LastDate;

		///��Ȩ��
		TTORATstpSPDateType	StrikeDate;

		///��Լ����ʱ��
		TTORATstpSPDateType	ExpireDate;

		///�˽ᵽ��δƽ�ֺ�Լ�Ŀ�ʼ����
		TTORATstpSPDateType	DelivDate;

		///�Ƿ����ǵ�������
		TTORATstpSPBoolType	IsUpDownLimit;

		///��Ȩר��
		TTORATstpSPPriceType	MarginUnit;

		///��Լǰ�����
		TTORATstpSPPriceType	PreSettlementPrice;

		///��Լǰ���̼�
		TTORATstpSPPriceType	PreClosePrice;

		///��ĺ�Լǰ���̼�
		TTORATstpSPPriceType	UnderlyingPreClosePrice;

	};

	/// ����ɾ��Security
	struct CTORATstpSPReqDelSecurityField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// �������SecurityStrategy
	struct CTORATstpSPReqInsSecurityStrategyField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///��ϲ���
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

		///�Զ������
		TTORATstpSPDateType	AutoSplitDay;

		///�Ƿ��ֹ
		TTORATstpSPBoolType	bForbidden;

	};

	/// �������SecurityStrategy
	struct CTORATstpSPReqUpdSecurityStrategyField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///��ϲ���
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

		///�Զ������
		TTORATstpSPDateType	AutoSplitDay;

		///�Ƿ��ֹ
		TTORATstpSPBoolType	bForbidden;

	};

	/// ����ɾ��SecurityStrategy
	struct CTORATstpSPReqDelSecurityStrategyField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///��ϲ���
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

	};

	/// �������StockSecurity
	struct CTORATstpSPReqInsStockSecurityField
	{
		 
		///֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///֤ȯ����
		TTORATstpSPSecurityNameType	SecurityName;

		///����֤ȯ����
		TTORATstpSPSecurityIDType	UnderlyingSecurityID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///֤ȯ�г��еľ���Ʒ�֣����Ϻ���Ʊ
		TTORATstpSPProductIDType	ProductID;

		///֤ȯƷ���еľ���������Ϻ�A��
		TTORATstpSPSecurityTypeType	SecurityType;

		///����
		TTORATstpSPCurrencyIDType	CurrencyID;

		///��¼�걨ʱʹ�õĵ�λ���֡��ɡ��ݡ��ŵ�
		TTORATstpSPOrderUnitType	OrderUnit;

		///ÿ�ο����������С���׵�λ�����걨��λ�ƣ���ÿ��������������뽻�׵�λ��������
		TTORATstpSPTradingUnitType	BuyTradingUnit;

		///ÿ�ο�����������С���׵�λ�����걨��λ�ƣ���ÿ�������������������׵�λ��������
		TTORATstpSPTradingUnitType	SellTradingUnit;

		///���ʿ��������������������걨��λ�ƣ�
		TTORATstpSPVolumeType	MaxMarketOrderBuyVolume;

		///���ʿ����������С���������걨��λ�ƣ�
		TTORATstpSPVolumeType	MinMarketOrderBuyVolume;

		///���ʿ��������������������걨��λ�ƣ�
		TTORATstpSPVolumeType	MaxLimitOrderBuyVolume;

		///���ʿ����������С���������걨��λ�ƣ�
		TTORATstpSPVolumeType	MinLimitOrderBuyVolume;

		///���ʿ��������������������걨��λ�ƣ�
		TTORATstpSPVolumeType	MaxMarketOrderSellVolume;

		///���ʿ����������С���������걨��λ�ƣ�
		TTORATstpSPVolumeType	MinMarketOrderSellVolume;

		///���ʿ��������������������걨��λ�ƣ�
		TTORATstpSPVolumeType	MaxLimitOrderSellVolume;

		///���ʿ����������С���������걨��λ�ƣ�
		TTORATstpSPVolumeType	MinLimitOrderSellVolume;

		///�걨��λ�뱨�۽�λ�ı�ֵ
		TTORATstpSPVolumeMultipleType	VolumeMultiple;

		///֤ȯ�ĵ�λ�۸��ǵ��仯����Сֵ
		TTORATstpSPPriceTickType	PriceTick;

		///������
		TTORATstpSPDateType	OpenDate;

		///ծȯ��������
		TTORATstpSPDateType	CloseDate;

		///֤ȯ����ֵ
		TTORATstpSPParValueType	ParValue;

		///ծȯӦ����Ϣ
		TTORATstpSPInterestType	BondInterest;

		///������
		TTORATstpSPRatioType	ConversionRate;

		///�ܹɱ�
		TTORATstpSPLargeVolumeType	TotalEquity;

		///��ͨ�ɱ�
		TTORATstpSPLargeVolumeType	CirculationEquity;

	};

	/// �������StockSecurity
	struct CTORATstpSPReqUpdStockSecurityField
	{
		 
		///֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///֤ȯ����
		TTORATstpSPSecurityNameType	SecurityName;

		///����֤ȯ����
		TTORATstpSPSecurityIDType	UnderlyingSecurityID;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///֤ȯ�г��еľ���Ʒ�֣����Ϻ���Ʊ
		TTORATstpSPProductIDType	ProductID;

		///֤ȯƷ���еľ���������Ϻ�A��
		TTORATstpSPSecurityTypeType	SecurityType;

		///����
		TTORATstpSPCurrencyIDType	CurrencyID;

		///��¼�걨ʱʹ�õĵ�λ���֡��ɡ��ݡ��ŵ�
		TTORATstpSPOrderUnitType	OrderUnit;

		///ÿ�ο����������С���׵�λ�����걨��λ�ƣ���ÿ��������������뽻�׵�λ��������
		TTORATstpSPTradingUnitType	BuyTradingUnit;

		///ÿ�ο�����������С���׵�λ�����걨��λ�ƣ���ÿ�������������������׵�λ��������
		TTORATstpSPTradingUnitType	SellTradingUnit;

		///���ʿ��������������������걨��λ�ƣ�
		TTORATstpSPVolumeType	MaxMarketOrderBuyVolume;

		///���ʿ����������С���������걨��λ�ƣ�
		TTORATstpSPVolumeType	MinMarketOrderBuyVolume;

		///���ʿ��������������������걨��λ�ƣ�
		TTORATstpSPVolumeType	MaxLimitOrderBuyVolume;

		///���ʿ����������С���������걨��λ�ƣ�
		TTORATstpSPVolumeType	MinLimitOrderBuyVolume;

		///���ʿ��������������������걨��λ�ƣ�
		TTORATstpSPVolumeType	MaxMarketOrderSellVolume;

		///���ʿ����������С���������걨��λ�ƣ�
		TTORATstpSPVolumeType	MinMarketOrderSellVolume;

		///���ʿ��������������������걨��λ�ƣ�
		TTORATstpSPVolumeType	MaxLimitOrderSellVolume;

		///���ʿ����������С���������걨��λ�ƣ�
		TTORATstpSPVolumeType	MinLimitOrderSellVolume;

		///�걨��λ�뱨�۽�λ�ı�ֵ
		TTORATstpSPVolumeMultipleType	VolumeMultiple;

		///֤ȯ�ĵ�λ�۸��ǵ��仯����Сֵ
		TTORATstpSPPriceTickType	PriceTick;

		///������
		TTORATstpSPDateType	OpenDate;

		///ծȯ��������
		TTORATstpSPDateType	CloseDate;

		///֤ȯ����ֵ
		TTORATstpSPParValueType	ParValue;

		///ծȯӦ����Ϣ
		TTORATstpSPInterestType	BondInterest;

		///������
		TTORATstpSPRatioType	ConversionRate;

		///�ܹɱ�
		TTORATstpSPLargeVolumeType	TotalEquity;

		///��ͨ�ɱ�
		TTORATstpSPLargeVolumeType	CirculationEquity;

	};

	/// ����ɾ��StockSecurity
	struct CTORATstpSPReqDelStockSecurityField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// �������MarketData
	struct CTORATstpSPReqInsMarketDataField
	{
		 
		///֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///������
		TTORATstpSPDateType	TradingDay;

		///֤ȯ����
		TTORATstpSPSecurityNameType	SecurityName;

		///��һ�����̼�
		TTORATstpSPPriceType	PreClosePrice;

		///���տ��̼�
		TTORATstpSPPriceType	OpenPrice;

		///��ͣ�۸�
		TTORATstpSPPriceType	UpperLimitPrice;

		///��ͣ�۸�
		TTORATstpSPPriceType	LowerLimitPrice;

		///��֤ȯ�ڵ��յĳɽ�����
		TTORATstpSPLongVolumeType	Volume;

		///��֤ȯ�ڵ��յĳɽ����
		TTORATstpSPMoneyType	Turnover;

		///��֤ȯ�ڵ��յĳɽ�����
		TTORATstpSPLongVolumeType	TradingCount;

		///���ո�֤ȯ�����ڼ�����³ɽ��۸�
		TTORATstpSPPriceType	LastPrice;

		///���̼۸�
		TTORATstpSPPriceType	ClosePrice;

		///һ��ʱ���ڸ�֤ȯ�ɽ����е���߳ɽ��۸�
		TTORATstpSPPriceType	HighestPrice;

		///һ��ʱ���ڸ�֤ȯ�ɽ����е���ͳɽ��۸�
		TTORATstpSPPriceType	LowestPrice;

		///ָ��֤ȯ��ǰ����ӯ��
		TTORATstpSPRatioType	PERatio1;

		///ָ��֤ȯ��ǰ����ӯ��
		TTORATstpSPRatioType	PERatio2;

		///���¼�-ǰ���̼۸�
		TTORATstpSPPriceType	PriceUpDown1;

		///���¼�-�ϱʳɽ��۸�
		TTORATstpSPPriceType	PriceUpDown2;

		///�ֲ���
		TTORATstpSPLargeVolumeType	OpenInterest;

		///��֤ȯ��ǰ��������۸�
		TTORATstpSPPriceType	BidPrice1;

		///��֤ȯ��ǰ���������۸�
		TTORATstpSPPriceType	AskPrice1;

		///��֤ȯ��ǰ���ż�λ�������������
		TTORATstpSPLongVolumeType	BidVolume1;

		///��֤ȯ��ǰ���ż�λ��������������
		TTORATstpSPLongVolumeType	AskVolume1;

		///��֤ȯ��ǰ�ڶ�������۸�
		TTORATstpSPPriceType	BidPrice2;

		///��֤ȯ��ǰ�ڶ��ż�λ�������������
		TTORATstpSPLongVolumeType	BidVolume2;

		///��֤ȯ��ǰ�ڶ��������۸�
		TTORATstpSPPriceType	AskPrice2;

		///��֤ȯ��ǰ�ڶ��ż�λ��������������
		TTORATstpSPLongVolumeType	AskVolume2;

		///��֤ȯ��ǰ����������۸�
		TTORATstpSPPriceType	BidPrice3;

		///��֤ȯ��ǰ�����ż�λ�������������
		TTORATstpSPLongVolumeType	BidVolume3;

		///��֤ȯ��ǰ�����������۸�
		TTORATstpSPPriceType	AskPrice3;

		///��֤ȯ��ǰ�����ż�λ��������������
		TTORATstpSPLongVolumeType	AskVolume3;

		///��֤ȯ��ǰ����������۸�
		TTORATstpSPPriceType	BidPrice4;

		///��֤ȯ��ǰ�����ż�λ�������������
		TTORATstpSPLongVolumeType	BidVolume4;

		///��֤ȯ��ǰ�����������۸�
		TTORATstpSPPriceType	AskPrice4;

		///��֤ȯ��ǰ�����ż�λ��������������
		TTORATstpSPLongVolumeType	AskVolume4;

		///��֤ȯ��ǰ����������۸�
		TTORATstpSPPriceType	BidPrice5;

		///��֤ȯ��ǰ�����ż�λ�������������
		TTORATstpSPLongVolumeType	BidVolume5;

		///��֤ȯ��ǰ�����������۸�
		TTORATstpSPPriceType	AskPrice5;

		///��֤ȯ��ǰ�����ż�λ��������������
		TTORATstpSPLongVolumeType	AskVolume5;

		///����޸�ʱ��
		TTORATstpSPTimeType	UpdateTime;

		///����޸ĺ���
		TTORATstpSPMillisecType	UpdateMillisec;

		///�����Ʒʵʱ״̬
		TTORATstpSPMDSecurityStatType	MDSecurityStat;

		///��Լ�����
		TTORATstpSPPriceType	SettlementPrice;

	};

	/// �������MarketData
	struct CTORATstpSPReqUpdMarketDataField
	{
		 
		///֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///������
		TTORATstpSPDateType	TradingDay;

		///֤ȯ����
		TTORATstpSPSecurityNameType	SecurityName;

		///��һ�����̼�
		TTORATstpSPPriceType	PreClosePrice;

		///���տ��̼�
		TTORATstpSPPriceType	OpenPrice;

		///��ͣ�۸�
		TTORATstpSPPriceType	UpperLimitPrice;

		///��ͣ�۸�
		TTORATstpSPPriceType	LowerLimitPrice;

		///��֤ȯ�ڵ��յĳɽ�����
		TTORATstpSPLongVolumeType	Volume;

		///��֤ȯ�ڵ��յĳɽ����
		TTORATstpSPMoneyType	Turnover;

		///��֤ȯ�ڵ��յĳɽ�����
		TTORATstpSPLongVolumeType	TradingCount;

		///���ո�֤ȯ�����ڼ�����³ɽ��۸�
		TTORATstpSPPriceType	LastPrice;

		///���̼۸�
		TTORATstpSPPriceType	ClosePrice;

		///һ��ʱ���ڸ�֤ȯ�ɽ����е���߳ɽ��۸�
		TTORATstpSPPriceType	HighestPrice;

		///һ��ʱ���ڸ�֤ȯ�ɽ����е���ͳɽ��۸�
		TTORATstpSPPriceType	LowestPrice;

		///ָ��֤ȯ��ǰ����ӯ��
		TTORATstpSPRatioType	PERatio1;

		///ָ��֤ȯ��ǰ����ӯ��
		TTORATstpSPRatioType	PERatio2;

		///���¼�-ǰ���̼۸�
		TTORATstpSPPriceType	PriceUpDown1;

		///���¼�-�ϱʳɽ��۸�
		TTORATstpSPPriceType	PriceUpDown2;

		///�ֲ���
		TTORATstpSPLargeVolumeType	OpenInterest;

		///��֤ȯ��ǰ��������۸�
		TTORATstpSPPriceType	BidPrice1;

		///��֤ȯ��ǰ���������۸�
		TTORATstpSPPriceType	AskPrice1;

		///��֤ȯ��ǰ���ż�λ�������������
		TTORATstpSPLongVolumeType	BidVolume1;

		///��֤ȯ��ǰ���ż�λ��������������
		TTORATstpSPLongVolumeType	AskVolume1;

		///��֤ȯ��ǰ�ڶ�������۸�
		TTORATstpSPPriceType	BidPrice2;

		///��֤ȯ��ǰ�ڶ��ż�λ�������������
		TTORATstpSPLongVolumeType	BidVolume2;

		///��֤ȯ��ǰ�ڶ��������۸�
		TTORATstpSPPriceType	AskPrice2;

		///��֤ȯ��ǰ�ڶ��ż�λ��������������
		TTORATstpSPLongVolumeType	AskVolume2;

		///��֤ȯ��ǰ����������۸�
		TTORATstpSPPriceType	BidPrice3;

		///��֤ȯ��ǰ�����ż�λ�������������
		TTORATstpSPLongVolumeType	BidVolume3;

		///��֤ȯ��ǰ�����������۸�
		TTORATstpSPPriceType	AskPrice3;

		///��֤ȯ��ǰ�����ż�λ��������������
		TTORATstpSPLongVolumeType	AskVolume3;

		///��֤ȯ��ǰ����������۸�
		TTORATstpSPPriceType	BidPrice4;

		///��֤ȯ��ǰ�����ż�λ�������������
		TTORATstpSPLongVolumeType	BidVolume4;

		///��֤ȯ��ǰ�����������۸�
		TTORATstpSPPriceType	AskPrice4;

		///��֤ȯ��ǰ�����ż�λ��������������
		TTORATstpSPLongVolumeType	AskVolume4;

		///��֤ȯ��ǰ����������۸�
		TTORATstpSPPriceType	BidPrice5;

		///��֤ȯ��ǰ�����ż�λ�������������
		TTORATstpSPLongVolumeType	BidVolume5;

		///��֤ȯ��ǰ�����������۸�
		TTORATstpSPPriceType	AskPrice5;

		///��֤ȯ��ǰ�����ż�λ��������������
		TTORATstpSPLongVolumeType	AskVolume5;

		///����޸�ʱ��
		TTORATstpSPTimeType	UpdateTime;

		///����޸ĺ���
		TTORATstpSPMillisecType	UpdateMillisec;

		///�����Ʒʵʱ״̬
		TTORATstpSPMDSecurityStatType	MDSecurityStat;

		///��Լ�����
		TTORATstpSPPriceType	SettlementPrice;

	};

	/// ����ɾ��MarketData
	struct CTORATstpSPReqDelMarketDataField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// �������MarketStatus
	struct CTORATstpSPReqInsMarketStatusField
	{
		 
		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///�г�״̬
		TTORATstpSPMarketStatusType	MarketStatus;

	};

	/// �������MarketStatus
	struct CTORATstpSPReqUpdMarketStatusField
	{
		 
		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///�г�״̬
		TTORATstpSPMarketStatusType	MarketStatus;

	};

	/// ����ɾ��MarketStatus
	struct CTORATstpSPReqDelMarketStatusField
	{
		 
		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

	};

	/// �������PlatformStatus
	struct CTORATstpSPReqInsPlatformStatusField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///ƽ̨����
		TTORATstpSPPlatformTypeType	PlatformType;

		///ƽ̨״̬
		TTORATstpSPPlatformStatusType	PlatformStatus;

		///���ױ��̱��
		TTORATstpSPTraderOfferIDType	TraderOfferID;

	};

	/// �������PlatformStatus
	struct CTORATstpSPReqUpdPlatformStatusField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///ƽ̨����
		TTORATstpSPPlatformTypeType	PlatformType;

		///ƽ̨״̬
		TTORATstpSPPlatformStatusType	PlatformStatus;

		///���ױ��̱��
		TTORATstpSPTraderOfferIDType	TraderOfferID;

	};

	/// ����ɾ��PlatformStatus
	struct CTORATstpSPReqDelPlatformStatusField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///���ױ��̱��
		TTORATstpSPTraderOfferIDType	TraderOfferID;

		///ƽ̨����
		TTORATstpSPPlatformTypeType	PlatformType;

	};

	/// �������MdOffer
	struct CTORATstpSPReqInsMdOfferField
	{
		 
		///������������
		TTORATstpSPMdServerIDType	MdOfferID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��������
		TTORATstpSPConnectTypeType	ConnectType;

		///�����ַ���
		TTORATstpSPConnectStringType	ConnectString;

		///�û���
		TTORATstpSPUserNameType	UserName;

		///����
		TTORATstpSPPasswordType	UserPassword;

		///ͨ���ֶ�1
		TTORATstpSPCommStringType	CommString1;

		///ͨ���ֶ�2
		TTORATstpSPCommStringType	CommString2;

		///ͨ���ֶ�3
		TTORATstpSPCommStringType	CommString3;

		///Ӧ������
		TTORATstpSPAppNameType	AppName;

		///˵���ý���Ա�ı��̳���ı��
		TTORATstpSPRunIDType	RunID;

		///ǰ��ID
		TTORATstpSPFrontIDType	FrontID;

		///�ỰID
		TTORATstpSPSessionIDType	SessionID;

		///����������Ա����״̬
		TTORATstpSPConnectStatusType	ConnectStatus;

		///�����������������
		TTORATstpSPDateType	ConnectRequestDate;

		///�������������ʱ��
		TTORATstpSPTimeType	ConnectRequestTime;

		///�����������
		TTORATstpSPDateType	ConnectDate;

		///�������ʱ��
		TTORATstpSPTimeType	ConnectTime;

	};

	/// �������MdOffer
	struct CTORATstpSPReqUpdMdOfferField
	{
		 
		///������������
		TTORATstpSPMdServerIDType	MdOfferID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��������
		TTORATstpSPConnectTypeType	ConnectType;

		///�����ַ���
		TTORATstpSPConnectStringType	ConnectString;

		///�û���
		TTORATstpSPUserNameType	UserName;

		///����
		TTORATstpSPPasswordType	UserPassword;

		///ͨ���ֶ�1
		TTORATstpSPCommStringType	CommString1;

		///ͨ���ֶ�2
		TTORATstpSPCommStringType	CommString2;

		///ͨ���ֶ�3
		TTORATstpSPCommStringType	CommString3;

		///Ӧ������
		TTORATstpSPAppNameType	AppName;

		///˵���ý���Ա�ı��̳���ı��
		TTORATstpSPRunIDType	RunID;

		///ǰ��ID
		TTORATstpSPFrontIDType	FrontID;

		///�ỰID
		TTORATstpSPSessionIDType	SessionID;

		///����������Ա����״̬
		TTORATstpSPConnectStatusType	ConnectStatus;

		///�����������������
		TTORATstpSPDateType	ConnectRequestDate;

		///�������������ʱ��
		TTORATstpSPTimeType	ConnectRequestTime;

		///�����������
		TTORATstpSPDateType	ConnectDate;

		///�������ʱ��
		TTORATstpSPTimeType	ConnectTime;

	};

	/// ����ɾ��MdOffer
	struct CTORATstpSPReqDelMdOfferField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///������������
		TTORATstpSPMdServerIDType	MdOfferID;

	};

	/// �������PBU
	struct CTORATstpSPReqInsPBUField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///���׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///���׵�Ԫ����
		TTORATstpSPNameType	PbuName;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///�־��͹�˾���б�ţ���1��ʼ�������������ʱ��ʹ�ø���Ϣ����001
		TTORATstpSPPbuInstallIDType	PbuInstallID;

	};

	/// �������PBU
	struct CTORATstpSPReqUpdPBUField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///���׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///���׵�Ԫ����
		TTORATstpSPNameType	PbuName;

		///�������µĽ����г����绦A����B�г�
		TTORATstpSPMarketIDType	MarketID;

		///�־��͹�˾���б�ţ���1��ʼ�������������ʱ��ʹ�ø���Ϣ����001
		TTORATstpSPPbuInstallIDType	PbuInstallID;

	};

	/// ����ɾ��PBU
	struct CTORATstpSPReqDelPBUField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///���׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

	};

	/// �������Trader
	struct CTORATstpSPReqInsTraderField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///���׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///ƽ̨����
		TTORATstpSPPlatformTypeType	PlatformType;

		///���ױ��̱��
		TTORATstpSPTraderOfferIDType	TraderOfferID;

	};

	/// �������Trader
	struct CTORATstpSPReqUpdTraderField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///���׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///ƽ̨����
		TTORATstpSPPlatformTypeType	PlatformType;

		///���ױ��̱��
		TTORATstpSPTraderOfferIDType	TraderOfferID;

	};

	/// ����ɾ��Trader
	struct CTORATstpSPReqDelTraderField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///���׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///ƽ̨����
		TTORATstpSPPlatformTypeType	PlatformType;

	};

	/// �������TraderOffer
	struct CTORATstpSPReqInsTraderOfferField
	{
		 
		///���ױ��̱��
		TTORATstpSPTraderOfferIDType	TraderOfferID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��������
		TTORATstpSPConnectTypeType	ConnectType;

		///�����ַ���
		TTORATstpSPConnectStringType	ConnectString;

		///�û���
		TTORATstpSPUserNameType	UserName;

		///����
		TTORATstpSPPasswordType	UserPassword;

		///ͨ���ֶ�1
		TTORATstpSPCommStringType	CommString1;

		///ͨ���ֶ�2
		TTORATstpSPCommStringType	CommString2;

		///ͨ���ֶ�3
		TTORATstpSPCommStringType	CommString3;

		///Ӧ������
		TTORATstpSPAppNameType	AppName;

		///˵���ý���Ա�ı��̳���ı��
		TTORATstpSPRunIDType	RunID;

		///ǰ��ID
		TTORATstpSPFrontIDType	FrontID;

		///�ỰID
		TTORATstpSPSessionIDType	SessionID;

		///����������Ա����״̬
		TTORATstpSPConnectStatusType	ConnectStatus;

		///�����������������
		TTORATstpSPDateType	ConnectRequestDate;

		///�������������ʱ��
		TTORATstpSPTimeType	ConnectRequestTime;

		///�����������
		TTORATstpSPDateType	ConnectDate;

		///�������ʱ��
		TTORATstpSPTimeType	ConnectTime;

	};

	/// �������TraderOffer
	struct CTORATstpSPReqUpdTraderOfferField
	{
		 
		///���ױ��̱��
		TTORATstpSPTraderOfferIDType	TraderOfferID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��������
		TTORATstpSPConnectTypeType	ConnectType;

		///�����ַ���
		TTORATstpSPConnectStringType	ConnectString;

		///�û���
		TTORATstpSPUserNameType	UserName;

		///����
		TTORATstpSPPasswordType	UserPassword;

		///ͨ���ֶ�1
		TTORATstpSPCommStringType	CommString1;

		///ͨ���ֶ�2
		TTORATstpSPCommStringType	CommString2;

		///ͨ���ֶ�3
		TTORATstpSPCommStringType	CommString3;

		///Ӧ������
		TTORATstpSPAppNameType	AppName;

		///˵���ý���Ա�ı��̳���ı��
		TTORATstpSPRunIDType	RunID;

		///ǰ��ID
		TTORATstpSPFrontIDType	FrontID;

		///�ỰID
		TTORATstpSPSessionIDType	SessionID;

		///����������Ա����״̬
		TTORATstpSPConnectStatusType	ConnectStatus;

		///�����������������
		TTORATstpSPDateType	ConnectRequestDate;

		///�������������ʱ��
		TTORATstpSPTimeType	ConnectRequestTime;

		///�����������
		TTORATstpSPDateType	ConnectDate;

		///�������ʱ��
		TTORATstpSPTimeType	ConnectTime;

	};

	/// ����ɾ��TraderOffer
	struct CTORATstpSPReqDelTraderOfferField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///���ױ��̱��
		TTORATstpSPTraderOfferIDType	TraderOfferID;

	};

	/// �������ExchRtnSeq
	struct CTORATstpSPReqInsExchRtnSeqField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///���ױ��̱��
		TTORATstpSPTraderOfferIDType	TraderOfferID;

		///ƽ̨������(��֤�����ر�������Ϊ1���ɽ��ر�������Ϊ2)
		TTORATstpSPPlatformPartitionNoType	PartitionNo;

		///�ر����
		TTORATstpSPSequenceNoType	SequenceNo;

		///��֤���ί�м�¼��
		TTORATstpSPSequenceNoType	MaxRecNum;

	};

	/// �������ExchRtnSeq
	struct CTORATstpSPReqUpdExchRtnSeqField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///���ױ��̱��
		TTORATstpSPTraderOfferIDType	TraderOfferID;

		///ƽ̨������(��֤�����ر�������Ϊ1���ɽ��ر�������Ϊ2)
		TTORATstpSPPlatformPartitionNoType	PartitionNo;

		///�ر����
		TTORATstpSPSequenceNoType	SequenceNo;

		///��֤���ί�м�¼��
		TTORATstpSPSequenceNoType	MaxRecNum;

	};

	/// ����ɾ��ExchRtnSeq
	struct CTORATstpSPReqDelExchRtnSeqField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///���ױ��̱��
		TTORATstpSPTraderOfferIDType	TraderOfferID;

		///ƽ̨������(��֤�����ر�������Ϊ1���ɽ��ر�������Ϊ2)
		TTORATstpSPPlatformPartitionNoType	PartitionNo;

	};

	/// �������DepartmentInfo
	struct CTORATstpSPReqInsDepartmentInfoField
	{
		 
		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///���͹�˾��������
		TTORATstpSPNameType	DepartmentName;

		///�ϼ����͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	ParentDepartmentID;

	};

	/// �������DepartmentInfo
	struct CTORATstpSPReqUpdDepartmentInfoField
	{
		 
		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///���͹�˾��������
		TTORATstpSPNameType	DepartmentName;

		///�ϼ����͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	ParentDepartmentID;

	};

	/// ����ɾ��DepartmentInfo
	struct CTORATstpSPReqDelDepartmentInfoField
	{
		 
		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

	};

	/// �������IPLocateLimit
	struct CTORATstpSPReqInsIPLocateLimitField
	{
		 
		///����Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///��������IP��ַ
		TTORATstpSPIPAddressType	InnerIPAddress;

		///��������IP��ַ
		TTORATstpSPIPAddressType	OuterIPAddress;

		///�Ƿ��ֹ
		TTORATstpSPBoolType	bForbidden;

	};

	/// �������IPLocateLimit
	struct CTORATstpSPReqUpdIPLocateLimitField
	{
		 
		///����Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

		///��������IP��ַ
		TTORATstpSPIPAddressType	InnerIPAddress;

		///��������IP��ַ
		TTORATstpSPIPAddressType	OuterIPAddress;

		///�Ƿ��ֹ
		TTORATstpSPBoolType	bForbidden;

	};

	/// ����ɾ��IPLocateLimit
	struct CTORATstpSPReqDelIPLocateLimitField
	{
		 
		///����Mac��ַ
		TTORATstpSPMacAddressType	MacAddress;

	};

	/// �������ExerciseAppointment
	struct CTORATstpSPReqInsExerciseAppointmentField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Ȩ����
		TTORATstpSPDateType	ExerciseDay;

		///���׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///�ͻ���ϵͳ�еı�ţ����Ψһ����ѭ�������ƶ��ı������
		TTORATstpSPShareholderIDType	ShareholderID;

		///�ʽ��˻�
		TTORATstpSPAccountIDType	AccountID;

		///����
		TTORATstpSPCurrencyIDType	CurrencyID;

		///��Լ��ϵͳ�еı��
		TTORATstpSPSecurityIDType	SecurityID;

		///���ǡ�����
		TTORATstpSPOptionsTypeType	OptionsType;

		///һ�ź�Լ��Ӧ�ı������
		TTORATstpSPVolumeType	OptionUnit;

		///����֤ȯ����
		TTORATstpSPSecurityIDType	UnderlyingSecurityID;

		///��Ȩ����
		TTORATstpSPVolumeType	ExerciseVolume;

		///��Ȩ��
		TTORATstpSPMoneyType	ExercisePrice;

		///��Ȩ����
		TTORATstpSPExerciseDirectionType	ExerciseDirection;

		///���ұ�־
		TTORATstpSPCoverFlagType	CoverFlag;

	};

	/// �������ExerciseAppointment
	struct CTORATstpSPReqUpdExerciseAppointmentField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Ȩ����
		TTORATstpSPDateType	ExerciseDay;

		///���׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///�ͻ���ϵͳ�еı�ţ����Ψһ����ѭ�������ƶ��ı������
		TTORATstpSPShareholderIDType	ShareholderID;

		///�ʽ��˻�
		TTORATstpSPAccountIDType	AccountID;

		///����
		TTORATstpSPCurrencyIDType	CurrencyID;

		///��Լ��ϵͳ�еı��
		TTORATstpSPSecurityIDType	SecurityID;

		///���ǡ�����
		TTORATstpSPOptionsTypeType	OptionsType;

		///һ�ź�Լ��Ӧ�ı������
		TTORATstpSPVolumeType	OptionUnit;

		///����֤ȯ����
		TTORATstpSPSecurityIDType	UnderlyingSecurityID;

		///��Ȩ����
		TTORATstpSPVolumeType	ExerciseVolume;

		///��Ȩ��
		TTORATstpSPMoneyType	ExercisePrice;

		///��Ȩ����
		TTORATstpSPExerciseDirectionType	ExerciseDirection;

		///���ұ�־
		TTORATstpSPCoverFlagType	CoverFlag;

	};

	/// ����ɾ��ExerciseAppointment
	struct CTORATstpSPReqDelExerciseAppointmentField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///Ͷ�ʵ�Ԫ����
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///��Ȩ����
		TTORATstpSPDateType	ExerciseDay;

		///���׵�Ԫ����
		TTORATstpSPPbuIDType	PbuID;

		///��Լ��ϵͳ�еı��
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// �������RiskParam
	struct CTORATstpSPReqInsRiskParamField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///��ز�������
		TTORATstpSPRiskParamTypeType	RiskParamType;

		///��ز���ֵ
		TTORATstpSPParameterCharValType	RiskParamVal;

		///����˵��
		TTORATstpSPRemarkType	ParamRemark;

		///��ز���ģʽ
		TTORATstpSPRangeModeType	RangeMode;

	};

	/// �������RiskParam
	struct CTORATstpSPReqUpdRiskParamField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///��ز�������
		TTORATstpSPRiskParamTypeType	RiskParamType;

		///��ز���ֵ
		TTORATstpSPParameterCharValType	RiskParamVal;

		///����˵��
		TTORATstpSPRemarkType	ParamRemark;

		///��ز���ģʽ
		TTORATstpSPRangeModeType	RangeMode;

	};

	/// ����ɾ��RiskParam
	struct CTORATstpSPReqDelRiskParamField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///��ز�������
		TTORATstpSPRiskParamTypeType	RiskParamType;

	};

	/// �������RiskParamTemplate
	struct CTORATstpSPReqInsRiskParamTemplateField
	{
		 
		///��ز���ģ�����
		TTORATstpSPRiskParamTemplateIDType	RiskParamTemplateID;

		///��ز�������
		TTORATstpSPRiskParamTypeType	RiskParamType;

		///��ز���ֵ
		TTORATstpSPParameterCharValType	RiskParamVal;

		///����˵��
		TTORATstpSPRemarkType	ParamRemark;

	};

	/// �������RiskParamTemplate
	struct CTORATstpSPReqUpdRiskParamTemplateField
	{
		 
		///��ز���ģ�����
		TTORATstpSPRiskParamTemplateIDType	RiskParamTemplateID;

		///��ز�������
		TTORATstpSPRiskParamTypeType	RiskParamType;

		///��ز���ֵ
		TTORATstpSPParameterCharValType	RiskParamVal;

		///����˵��
		TTORATstpSPRemarkType	ParamRemark;

	};

	/// ����ɾ��RiskParamTemplate
	struct CTORATstpSPReqDelRiskParamTemplateField
	{
		 
		///��ز���ģ�����
		TTORATstpSPRiskParamTemplateIDType	RiskParamTemplateID;

		///��ز�������
		TTORATstpSPRiskParamTypeType	RiskParamType;

	};

	/// �������InvestorLimitAmount
	struct CTORATstpSPReqInsInvestorLimitAmountField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///��ͷ����޶�
		TTORATstpSPMoneyType	LongAmountLimit;

		///��ͷ����
		TTORATstpSPMoneyType	LongAmountFrozen;

	};

	/// �������InvestorLimitAmount
	struct CTORATstpSPReqUpdInvestorLimitAmountField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///��ͷ����޶�
		TTORATstpSPMoneyType	LongAmountLimit;

		///��ͷ����
		TTORATstpSPMoneyType	LongAmountFrozen;

	};

	/// ����ɾ��InvestorLimitAmount
	struct CTORATstpSPReqDelInvestorLimitAmountField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

	};

	/// �������InvestorLimitPosition
	struct CTORATstpSPReqInsInvestorLimitPositionField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///���֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///�ֲܳ��޶�
		TTORATstpSPVolumeType	TotalPositionLimit;

		///��ͷ�ֲ��޶�
		TTORATstpSPVolumeType	LongPositionLimit;

		///�������뿪���޶�
		TTORATstpSPVolumeType	TodayBuyOpenLimit;

		///�������������޶�
		TTORATstpSPVolumeType	TodaySellOpenLimit;

		///���ձ��ҿ����޶�
		TTORATstpSPVolumeType	TodayCoveredOpenLimit;

		///���տ����޶�
		TTORATstpSPVolumeType	TodayOpenLimit;

		///�Ϲ���ͷ�ֲ��޶�
		TTORATstpSPVolumeType	LongCallPositionLimit;

		///�Ϲ���ͷ�ֲ��޶�
		TTORATstpSPVolumeType	LongPutPositionLimit;

		///��Ķ�ͷ�ֲ��޶�
		TTORATstpSPVolumeType	LongUnderlyingPositionLimit;

		///��Ŀ�ͷ�ֲ��޶�
		TTORATstpSPVolumeType	ShortUnderlyingPositionLimit;

		///�ֲֶܳ�����
		TTORATstpSPVolumeType	TotalPositionFrozen;

		///��ͷ�ֲֶ�����
		TTORATstpSPVolumeType	LongPositionFrozen;

		///�������뿪�ֶ�����
		TTORATstpSPVolumeType	TodayBuyOpenFrozen;

		///�����������ֶ�����
		TTORATstpSPVolumeType	TodaySellOpenFrozen;

		///���ձ��ҿ��ֶ�����
		TTORATstpSPVolumeType	TodayCoveredOpenFrozen;

		///���տ��ֶ�����
		TTORATstpSPVolumeType	TodayOpenFrozen;

		///�Ϲ���ͷ�ֲֶ�����
		TTORATstpSPVolumeType	LongCallPositionFrozen;

		///�Ϲ���ͷ�ֲֶ�����
		TTORATstpSPVolumeType	LongPutPositionFrozen;

		///��Ķ�ͷ�ֲֶ�����
		TTORATstpSPVolumeType	LongUnderlyingPositionFrozen;

		///��Ŀ�ͷ�ֲֶ�����
		TTORATstpSPVolumeType	ShortUnderlyingPositionFrozen;

	};

	/// �������InvestorLimitPosition
	struct CTORATstpSPReqUpdInvestorLimitPositionField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///���֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///�ֲܳ��޶�
		TTORATstpSPVolumeType	TotalPositionLimit;

		///��ͷ�ֲ��޶�
		TTORATstpSPVolumeType	LongPositionLimit;

		///�������뿪���޶�
		TTORATstpSPVolumeType	TodayBuyOpenLimit;

		///�������������޶�
		TTORATstpSPVolumeType	TodaySellOpenLimit;

		///���ձ��ҿ����޶�
		TTORATstpSPVolumeType	TodayCoveredOpenLimit;

		///���տ����޶�
		TTORATstpSPVolumeType	TodayOpenLimit;

		///�Ϲ���ͷ�ֲ��޶�
		TTORATstpSPVolumeType	LongCallPositionLimit;

		///�Ϲ���ͷ�ֲ��޶�
		TTORATstpSPVolumeType	LongPutPositionLimit;

		///��Ķ�ͷ�ֲ��޶�
		TTORATstpSPVolumeType	LongUnderlyingPositionLimit;

		///��Ŀ�ͷ�ֲ��޶�
		TTORATstpSPVolumeType	ShortUnderlyingPositionLimit;

		///�ֲֶܳ�����
		TTORATstpSPVolumeType	TotalPositionFrozen;

		///��ͷ�ֲֶ�����
		TTORATstpSPVolumeType	LongPositionFrozen;

		///�������뿪�ֶ�����
		TTORATstpSPVolumeType	TodayBuyOpenFrozen;

		///�����������ֶ�����
		TTORATstpSPVolumeType	TodaySellOpenFrozen;

		///���ձ��ҿ��ֶ�����
		TTORATstpSPVolumeType	TodayCoveredOpenFrozen;

		///���տ��ֶ�����
		TTORATstpSPVolumeType	TodayOpenFrozen;

		///�Ϲ���ͷ�ֲֶ�����
		TTORATstpSPVolumeType	LongCallPositionFrozen;

		///�Ϲ���ͷ�ֲֶ�����
		TTORATstpSPVolumeType	LongPutPositionFrozen;

		///��Ķ�ͷ�ֲֶ�����
		TTORATstpSPVolumeType	LongUnderlyingPositionFrozen;

		///��Ŀ�ͷ�ֲֶ�����
		TTORATstpSPVolumeType	ShortUnderlyingPositionFrozen;

	};

	/// ����ɾ��InvestorLimitPosition
	struct CTORATstpSPReqDelInvestorLimitPositionField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///���֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// �������InvestorLimitPositionParam
	struct CTORATstpSPReqInsInvestorLimitPositionParamField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///֤ȯ�г��еľ���Ʒ�֣����Ϻ���Ʊ
		TTORATstpSPProductIDType	ProductID;

		///���֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///�ֲܳ��޶�
		TTORATstpSPVolumeType	TotalPositionLimit;

		///��ͷ�ֲ��޶�
		TTORATstpSPVolumeType	LongPositionLimit;

		///�������뿪���޶�
		TTORATstpSPVolumeType	TodayBuyOpenLimit;

		///�������������޶�
		TTORATstpSPVolumeType	TodaySellOpenLimit;

		///���ձ��ҿ����޶�
		TTORATstpSPVolumeType	TodayCoveredOpenLimit;

		///���տ����޶�
		TTORATstpSPVolumeType	TodayOpenLimit;

		///�Ϲ���ͷ�ֲ��޶�
		TTORATstpSPVolumeType	LongCallPositionLimit;

		///�Ϲ���ͷ�ֲ��޶�
		TTORATstpSPVolumeType	LongPutPositionLimit;

		///��Ķ�ͷ�ֲ��޶�
		TTORATstpSPVolumeType	LongUnderlyingPositionLimit;

		///��Ŀ�ͷ�ֲ��޶�
		TTORATstpSPVolumeType	ShortUnderlyingPositionLimit;

	};

	/// �������InvestorLimitPositionParam
	struct CTORATstpSPReqUpdInvestorLimitPositionParamField
	{
		 
		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///֤ȯ�г��еľ���Ʒ�֣����Ϻ���Ʊ
		TTORATstpSPProductIDType	ProductID;

		///���֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///�ֲܳ��޶�
		TTORATstpSPVolumeType	TotalPositionLimit;

		///��ͷ�ֲ��޶�
		TTORATstpSPVolumeType	LongPositionLimit;

		///�������뿪���޶�
		TTORATstpSPVolumeType	TodayBuyOpenLimit;

		///�������������޶�
		TTORATstpSPVolumeType	TodaySellOpenLimit;

		///���ձ��ҿ����޶�
		TTORATstpSPVolumeType	TodayCoveredOpenLimit;

		///���տ����޶�
		TTORATstpSPVolumeType	TodayOpenLimit;

		///�Ϲ���ͷ�ֲ��޶�
		TTORATstpSPVolumeType	LongCallPositionLimit;

		///�Ϲ���ͷ�ֲ��޶�
		TTORATstpSPVolumeType	LongPutPositionLimit;

		///��Ķ�ͷ�ֲ��޶�
		TTORATstpSPVolumeType	LongUnderlyingPositionLimit;

		///��Ŀ�ͷ�ֲ��޶�
		TTORATstpSPVolumeType	ShortUnderlyingPositionLimit;

	};

	/// ����ɾ��InvestorLimitPositionParam
	struct CTORATstpSPReqDelInvestorLimitPositionParamField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///֤ȯ�г��еľ���Ʒ�֣����Ϻ���Ʊ
		TTORATstpSPProductIDType	ProductID;

		///���֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// �������InvestorMarginFee
	struct CTORATstpSPReqInsInvestorMarginFeeField
	{
		 
		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Ʒ����
		TTORATstpSPProductIDType	ProductID;

		///֤ȯ������
		TTORATstpSPSecurityTypeType	SecurityType;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///ҵ�����
		TTORATstpSPBusinessClassType	BusinessClass;

		///��֤��������ȡ���
		TTORATstpSPMoneyType	FeeByVolume;

		///��Լ��ļ۸����ϵ��
		TTORATstpSPRatioType	PriceAdjustRatio;

		///��ֵ��Ȩ�Żݱ���
		TTORATstpSPRatioType	OTMPreferRatio;

		///��Լ��ļ۸��������ϵ��
		TTORATstpSPRatioType	PriceAdjustGuardRatio;

		///�ϸ�����
		TTORATstpSPRatioType	UpperRatio;

		///��֤��ģʽ
		TTORATstpSPRangeModeType	RangeMode;

	};

	/// �������InvestorMarginFee
	struct CTORATstpSPReqUpdInvestorMarginFeeField
	{
		 
		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Ʒ����
		TTORATstpSPProductIDType	ProductID;

		///֤ȯ������
		TTORATstpSPSecurityTypeType	SecurityType;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///ҵ�����
		TTORATstpSPBusinessClassType	BusinessClass;

		///��֤��������ȡ���
		TTORATstpSPMoneyType	FeeByVolume;

		///��Լ��ļ۸����ϵ��
		TTORATstpSPRatioType	PriceAdjustRatio;

		///��ֵ��Ȩ�Żݱ���
		TTORATstpSPRatioType	OTMPreferRatio;

		///��Լ��ļ۸��������ϵ��
		TTORATstpSPRatioType	PriceAdjustGuardRatio;

		///�ϸ�����
		TTORATstpSPRatioType	UpperRatio;

		///��֤��ģʽ
		TTORATstpSPRangeModeType	RangeMode;

	};

	/// ����ɾ��InvestorMarginFee
	struct CTORATstpSPReqDelInvestorMarginFeeField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///��Ʒ����
		TTORATstpSPProductIDType	ProductID;

		///֤ȯ������
		TTORATstpSPSecurityTypeType	SecurityType;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///ҵ�����
		TTORATstpSPBusinessClassType	BusinessClass;

	};

	/// �������InvestorTradingFee
	struct CTORATstpSPReqInsInvestorTradingFeeField
	{
		 
		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Ʒ����
		TTORATstpSPProductIDType	ProductID;

		///֤ȯ������
		TTORATstpSPSecurityTypeType	SecurityType;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///ҵ�����
		TTORATstpSPBusinessClassType	BusinessClass;

		///Ӷ������
		TTORATstpSPBrokerageTypeType	BrokerageType;

		///Ӷ�𰴽����ȡ����
		TTORATstpSPRatioType	RatioByAmt;

		///Ӷ����ֵ��ȡ����
		TTORATstpSPRatioType	RatioByPar;

		///Ӷ�𰴱���ȡ���
		TTORATstpSPMoneyType	FeePerOrder;

		///Ӷ�������ȡ���
		TTORATstpSPMoneyType	FeeMin;

		///Ӷ�������ȡ���
		TTORATstpSPMoneyType	FeeMax;

		///Ӷ��������ȡ���
		TTORATstpSPMoneyType	FeeByVolume;

		///Ӷ��ģʽ
		TTORATstpSPRangeModeType	RangeMode;

	};

	/// �������InvestorTradingFee
	struct CTORATstpSPReqUpdInvestorTradingFeeField
	{
		 
		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��Ʒ����
		TTORATstpSPProductIDType	ProductID;

		///֤ȯ������
		TTORATstpSPSecurityTypeType	SecurityType;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///ҵ�����
		TTORATstpSPBusinessClassType	BusinessClass;

		///Ӷ������
		TTORATstpSPBrokerageTypeType	BrokerageType;

		///Ӷ�𰴽����ȡ����
		TTORATstpSPRatioType	RatioByAmt;

		///Ӷ����ֵ��ȡ����
		TTORATstpSPRatioType	RatioByPar;

		///Ӷ�𰴱���ȡ���
		TTORATstpSPMoneyType	FeePerOrder;

		///Ӷ�������ȡ���
		TTORATstpSPMoneyType	FeeMin;

		///Ӷ�������ȡ���
		TTORATstpSPMoneyType	FeeMax;

		///Ӷ��������ȡ���
		TTORATstpSPMoneyType	FeeByVolume;

		///Ӷ��ģʽ
		TTORATstpSPRangeModeType	RangeMode;

	};

	/// ����ɾ��InvestorTradingFee
	struct CTORATstpSPReqDelInvestorTradingFeeField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///���͹�˾���Ŵ���
		TTORATstpSPDepartmentIDType	DepartmentID;

		///Ͷ���ߴ���
		TTORATstpSPInvestorIDType	InvestorID;

		///��Ʒ����
		TTORATstpSPProductIDType	ProductID;

		///֤ȯ������
		TTORATstpSPSecurityTypeType	SecurityType;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///ҵ�����
		TTORATstpSPBusinessClassType	BusinessClass;

	};

	/// �������TradingFee
	struct CTORATstpSPReqInsTradingFeeField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///֤ȯƷ�ִ���
		TTORATstpSPProductIDType	ProductID;

		///֤ȯ������
		TTORATstpSPSecurityTypeType	SecurityType;

		///֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///ҵ�����
		TTORATstpSPBusinessClassType	BusinessClass;

		///ϵͳ��ʶ
		TTORATstpSPSystemFlagType	SystemFlag;

		///ӡ��˰�������ȡ����
		TTORATstpSPRatioType	StampTaxRatioByAmt;

		///ӡ��˰����ֵ��ȡ����
		TTORATstpSPRatioType	StampTaxRatioByPar;

		///ӡ��˰������ȡ���
		TTORATstpSPMoneyType	StampTaxFeePerOrder;

		///ӡ��˰��������ȡ���
		TTORATstpSPMoneyType	StampTaxFeeByVolume;

		///ӡ��˰�����ȡ���
		TTORATstpSPMoneyType	StampTaxFeeMin;

		///ӡ��˰�����ȡ���
		TTORATstpSPMoneyType	StampTaxFeeMax;

		///�����Ѱ������ȡ����
		TTORATstpSPRatioType	TransferRatioByAmt;

		///�����Ѱ���ֵ��ȡ����
		TTORATstpSPRatioType	TransferRatioByPar;

		///�����Ѱ�����ȡ���
		TTORATstpSPMoneyType	TransferFeePerOrder;

		///�����Ѱ�������ȡ���
		TTORATstpSPMoneyType	TransferFeeByVolume;

		///�����������ȡ���
		TTORATstpSPMoneyType	TransferFeeMin;

		///�����������ȡ���
		TTORATstpSPMoneyType	TransferFeeMax;

		///���ַѰ������ȡ����
		TTORATstpSPRatioType	HandlingRatioByAmt;

		///���ַѰ���ֵ��ȡ����
		TTORATstpSPRatioType	HandlingRatioByPar;

		///���ַѰ�����ȡ���
		TTORATstpSPMoneyType	HandlingFeePerOrder;

		///���ַѰ�������ȡ���
		TTORATstpSPMoneyType	HandlingFeeByVolume;

		///���ַ������ȡ���
		TTORATstpSPMoneyType	HandlingFeeMin;

		///���ַ������ȡ���
		TTORATstpSPMoneyType	HandlingFeeMax;

		///֤�ܷѰ������ȡ����
		TTORATstpSPRatioType	RegulateRatioByAmt;

		///֤�ܷѰ���ֵ��ȡ����
		TTORATstpSPRatioType	RegulateRatioByPar;

		///֤�ܷѰ�����ȡ���
		TTORATstpSPMoneyType	RegulateFeePerOrder;

		///֤�ܷѰ�������ȡ���
		TTORATstpSPMoneyType	RegulateFeeByVolume;

		///֤�ܷ������ȡ���
		TTORATstpSPMoneyType	RegulateFeeMin;

		///֤�ܷ������ȡ���
		TTORATstpSPMoneyType	RegulateFeeMax;

		///����Ѱ������ȡ����
		TTORATstpSPRatioType	SettlementRatioByAmt;

		///����Ѱ���ֵ��ȡ����
		TTORATstpSPRatioType	SettlementRatioByPar;

		///����Ѱ�����ȡ���
		TTORATstpSPMoneyType	SettlementFeePerOrder;

		///����Ѱ�������ȡ���
		TTORATstpSPMoneyType	SettlementFeeByVolume;

		///����������ȡ���
		TTORATstpSPMoneyType	SettlementFeeMin;

		///����������ȡ���
		TTORATstpSPMoneyType	SettlementFeeMax;

	};

	/// �������TradingFee
	struct CTORATstpSPReqUpdTradingFeeField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///֤ȯƷ�ִ���
		TTORATstpSPProductIDType	ProductID;

		///֤ȯ������
		TTORATstpSPSecurityTypeType	SecurityType;

		///֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///ҵ�����
		TTORATstpSPBusinessClassType	BusinessClass;

		///ϵͳ��ʶ
		TTORATstpSPSystemFlagType	SystemFlag;

		///ӡ��˰�������ȡ����
		TTORATstpSPRatioType	StampTaxRatioByAmt;

		///ӡ��˰����ֵ��ȡ����
		TTORATstpSPRatioType	StampTaxRatioByPar;

		///ӡ��˰������ȡ���
		TTORATstpSPMoneyType	StampTaxFeePerOrder;

		///ӡ��˰��������ȡ���
		TTORATstpSPMoneyType	StampTaxFeeByVolume;

		///ӡ��˰�����ȡ���
		TTORATstpSPMoneyType	StampTaxFeeMin;

		///ӡ��˰�����ȡ���
		TTORATstpSPMoneyType	StampTaxFeeMax;

		///�����Ѱ������ȡ����
		TTORATstpSPRatioType	TransferRatioByAmt;

		///�����Ѱ���ֵ��ȡ����
		TTORATstpSPRatioType	TransferRatioByPar;

		///�����Ѱ�����ȡ���
		TTORATstpSPMoneyType	TransferFeePerOrder;

		///�����Ѱ�������ȡ���
		TTORATstpSPMoneyType	TransferFeeByVolume;

		///�����������ȡ���
		TTORATstpSPMoneyType	TransferFeeMin;

		///�����������ȡ���
		TTORATstpSPMoneyType	TransferFeeMax;

		///���ַѰ������ȡ����
		TTORATstpSPRatioType	HandlingRatioByAmt;

		///���ַѰ���ֵ��ȡ����
		TTORATstpSPRatioType	HandlingRatioByPar;

		///���ַѰ�����ȡ���
		TTORATstpSPMoneyType	HandlingFeePerOrder;

		///���ַѰ�������ȡ���
		TTORATstpSPMoneyType	HandlingFeeByVolume;

		///���ַ������ȡ���
		TTORATstpSPMoneyType	HandlingFeeMin;

		///���ַ������ȡ���
		TTORATstpSPMoneyType	HandlingFeeMax;

		///֤�ܷѰ������ȡ����
		TTORATstpSPRatioType	RegulateRatioByAmt;

		///֤�ܷѰ���ֵ��ȡ����
		TTORATstpSPRatioType	RegulateRatioByPar;

		///֤�ܷѰ�����ȡ���
		TTORATstpSPMoneyType	RegulateFeePerOrder;

		///֤�ܷѰ�������ȡ���
		TTORATstpSPMoneyType	RegulateFeeByVolume;

		///֤�ܷ������ȡ���
		TTORATstpSPMoneyType	RegulateFeeMin;

		///֤�ܷ������ȡ���
		TTORATstpSPMoneyType	RegulateFeeMax;

		///����Ѱ������ȡ����
		TTORATstpSPRatioType	SettlementRatioByAmt;

		///����Ѱ���ֵ��ȡ����
		TTORATstpSPRatioType	SettlementRatioByPar;

		///����Ѱ�����ȡ���
		TTORATstpSPMoneyType	SettlementFeePerOrder;

		///����Ѱ�������ȡ���
		TTORATstpSPMoneyType	SettlementFeeByVolume;

		///����������ȡ���
		TTORATstpSPMoneyType	SettlementFeeMin;

		///����������ȡ���
		TTORATstpSPMoneyType	SettlementFeeMax;

	};

	/// ����ɾ��TradingFee
	struct CTORATstpSPReqDelTradingFeeField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///֤ȯƷ�ִ���
		TTORATstpSPProductIDType	ProductID;

		///֤ȯ������
		TTORATstpSPSecurityTypeType	SecurityType;

		///֤ȯ����
		TTORATstpSPSecurityIDType	SecurityID;

		///ҵ�����
		TTORATstpSPBusinessClassType	BusinessClass;

	};

	/// �������MarginFeeTemplate
	struct CTORATstpSPReqInsMarginFeeTemplateField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��֤���ģ�����
		TTORATstpSPMarginFeeTemplateIDType	MarginFeeTemplateID;

		///��Ʒ����
		TTORATstpSPProductIDType	ProductID;

		///֤ȯ������
		TTORATstpSPSecurityTypeType	SecurityType;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///ҵ�����
		TTORATstpSPBusinessClassType	BusinessClass;

		///��֤��������ȡ���
		TTORATstpSPMoneyType	FeeByVolume;

		///��Լ��ļ۸����ϵ��
		TTORATstpSPRatioType	PriceAdjustRatio;

		///��ֵ��Ȩ�Żݱ���
		TTORATstpSPRatioType	OTMPreferRatio;

		///��Լ��ļ۸��������ϵ��
		TTORATstpSPRatioType	PriceAdjustGuardRatio;

		///�ϸ�����
		TTORATstpSPRatioType	UpperRatio;

	};

	/// �������MarginFeeTemplate
	struct CTORATstpSPReqUpdMarginFeeTemplateField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��֤���ģ�����
		TTORATstpSPMarginFeeTemplateIDType	MarginFeeTemplateID;

		///��Ʒ����
		TTORATstpSPProductIDType	ProductID;

		///֤ȯ������
		TTORATstpSPSecurityTypeType	SecurityType;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///ҵ�����
		TTORATstpSPBusinessClassType	BusinessClass;

		///��֤��������ȡ���
		TTORATstpSPMoneyType	FeeByVolume;

		///��Լ��ļ۸����ϵ��
		TTORATstpSPRatioType	PriceAdjustRatio;

		///��ֵ��Ȩ�Żݱ���
		TTORATstpSPRatioType	OTMPreferRatio;

		///��Լ��ļ۸��������ϵ��
		TTORATstpSPRatioType	PriceAdjustGuardRatio;

		///�ϸ�����
		TTORATstpSPRatioType	UpperRatio;

	};

	/// ����ɾ��MarginFeeTemplate
	struct CTORATstpSPReqDelMarginFeeTemplateField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///��֤���ģ�����
		TTORATstpSPMarginFeeTemplateIDType	MarginFeeTemplateID;

		///��Ʒ����
		TTORATstpSPProductIDType	ProductID;

		///֤ȯ������
		TTORATstpSPSecurityTypeType	SecurityType;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///ҵ�����
		TTORATstpSPBusinessClassType	BusinessClass;

	};

	/// �������TradingFeeTemplate
	struct CTORATstpSPReqInsTradingFeeTemplateField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///Ӷ��ģ�����
		TTORATstpSPTradingFeeTemplateIDType	TradingFeeTemplateID;

		///��Ʒ����
		TTORATstpSPProductIDType	ProductID;

		///֤ȯ������
		TTORATstpSPSecurityTypeType	SecurityType;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///ҵ�����
		TTORATstpSPBusinessClassType	BusinessClass;

		///Ӷ������
		TTORATstpSPBrokerageTypeType	BrokerageType;

		///Ӷ�𰴽����ȡ����
		TTORATstpSPRatioType	RatioByAmt;

		///Ӷ����ֵ��ȡ����
		TTORATstpSPRatioType	RatioByPar;

		///Ӷ�𰴱���ȡ���
		TTORATstpSPMoneyType	FeePerOrder;

		///Ӷ�������ȡ���
		TTORATstpSPMoneyType	FeeMin;

		///Ӷ�������ȡ���
		TTORATstpSPMoneyType	FeeMax;

		///Ӷ��������ȡ���
		TTORATstpSPMoneyType	FeeByVolume;

	};

	/// �������TradingFeeTemplate
	struct CTORATstpSPReqUpdTradingFeeTemplateField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///Ӷ��ģ�����
		TTORATstpSPTradingFeeTemplateIDType	TradingFeeTemplateID;

		///��Ʒ����
		TTORATstpSPProductIDType	ProductID;

		///֤ȯ������
		TTORATstpSPSecurityTypeType	SecurityType;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///ҵ�����
		TTORATstpSPBusinessClassType	BusinessClass;

		///Ӷ������
		TTORATstpSPBrokerageTypeType	BrokerageType;

		///Ӷ�𰴽����ȡ����
		TTORATstpSPRatioType	RatioByAmt;

		///Ӷ����ֵ��ȡ����
		TTORATstpSPRatioType	RatioByPar;

		///Ӷ�𰴱���ȡ���
		TTORATstpSPMoneyType	FeePerOrder;

		///Ӷ�������ȡ���
		TTORATstpSPMoneyType	FeeMin;

		///Ӷ�������ȡ���
		TTORATstpSPMoneyType	FeeMax;

		///Ӷ��������ȡ���
		TTORATstpSPMoneyType	FeeByVolume;

	};

	/// ����ɾ��TradingFeeTemplate
	struct CTORATstpSPReqDelTradingFeeTemplateField
	{
		 
		///����������
		TTORATstpSPExchangeIDType	ExchangeID;

		///Ӷ��ģ�����
		TTORATstpSPTradingFeeTemplateIDType	TradingFeeTemplateID;

		///��Ʒ����
		TTORATstpSPProductIDType	ProductID;

		///֤ȯ������
		TTORATstpSPSecurityTypeType	SecurityType;

		///��Լ����
		TTORATstpSPSecurityIDType	SecurityID;

		///ҵ�����
		TTORATstpSPBusinessClassType	BusinessClass;

	};

}
#endif