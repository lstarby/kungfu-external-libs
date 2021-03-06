/////////////////////////////////////////////////////////////////////////
///@company 上海泰琰信息科技有限公司
///@file TORATstpSPUserApiStruct.h
///@brief 定义了客户端接口使用的业务数据结构
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

	/// fens用户信息
	struct CTORATstpSPFensUserInfoField
	{
		 
		///登录账户
		TTORATstpSPLogInAccountType	LogInAccount;

		///登录账户类型
		TTORATstpSPLogInAccountTypeType	LogInAccountType;

	};

	/// 登录请求
	struct CTORATstpSPReqUserLoginField
	{
		 
		///登录账户
		TTORATstpSPLogInAccountType	LogInAccount;

		///登录账户类型
		TTORATstpSPLogInAccountTypeType	LogInAccountType;

		///密码
		TTORATstpSPPasswordType	Password;

		///用户端产品信息
		TTORATstpSPProductInfoType	UserProductInfo;

		///协议信息
		TTORATstpSPProtocolInfoType	ProtocolInfo;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///动态密码
		TTORATstpSPPasswordType	OneTimePassword;

		///终端IP地址
		TTORATstpSPIPAddressType	ClientIPAddress;

		///接口语言
		TTORATstpSPLangType	Lang;

		///终端信息
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///网关Mac地址
		TTORATstpSPMacAddressType	GWMacAddress;

		///网关内网IP地址
		TTORATstpSPIPAddressType	GWInnerIPAddress;

		///网关外网IP地址
		TTORATstpSPIPAddressType	GWOuterIPAddress;

		///经纪公司部门代码（以资金账号方式登录时必填）
		TTORATstpSPDepartmentIDType	DepartmentID;

		///硬盘序列号（用户填入）
		TTORATstpSPHDSerialType	HDSerial;

		///认证方式(指纹认证时必填)
		TTORATstpSPAuthModeType	AuthMode;

		///设备标识(指纹认证时必填)
		TTORATstpSPDeviceIDType	DeviceID;

		///设备序列号(指纹认证时必填)
		TTORATstpSPDeviceSerialType	DeviceSerial;

		///移动设备手机号
		TTORATstpSPMobileType	Mobile;

	};

	/// 登录应答
	struct CTORATstpSPRspUserLoginField
	{
		 
		///登录成功时间
		TTORATstpSPTimeType	LoginTime;

		///登录账户
		TTORATstpSPLogInAccountType	LogInAccount;

		///登录账户类型
		TTORATstpSPLogInAccountTypeType	LogInAccountType;

		///交易系统名称
		TTORATstpSPSystemNameType	SystemName;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///会话编号
		TTORATstpSPSessionIDType	SessionID;

		///最大报单引用
		TTORATstpSPOrderRefType	MaxOrderRef;

		///私有流长度
		TTORATstpSPVolumeType	PrivateFlowCount;

		///公有流长度
		TTORATstpSPVolumeType	PublicFlowCount;

		///用户请求编号
		TTORATstpSPRequestIDType	RequestID;

		///交易发生的日期
		TTORATstpSPDateType	TradingDay;

		///用户代码
		TTORATstpSPUserIDType	UserID;

		///用户名称
		TTORATstpSPUserNameType	UserName;

		///用户类型
		TTORATstpSPUserTypeType	UserType;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///终端IP地址
		TTORATstpSPIPAddressType	ClientIPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

		///报单流控
		TTORATstpSPCommFluxType	OrderInsertCommFlux;

		///撤单流控
		TTORATstpSPCommFluxType	OrderActionCommFlux;

		///移动设备手机号
		TTORATstpSPMobileType	Mobile;

		///密码修改周期(天),置为0表永久有效
		TTORATstpSPCountType	PasswordUpdatePeriod;

		///密码有效剩余天数
		TTORATstpSPCountType	PasswordRemainDays;

		///是否需要改密
		TTORATstpSPBoolType	NeedUpdatePassword;

	};

	/// 响应信息
	struct CTORATstpSPRspInfoField
	{
		 
		///错误代码
		TTORATstpSPErrorIDType	ErrorID;

		///错误信息
		TTORATstpSPErrorMsgType	ErrorMsg;

	};

	/// 用户登出
	struct CTORATstpSPUserLogoutField
	{
		 
		///用户代码
		TTORATstpSPUserIDType	UserID;

	};

	/// 强制交易员退出
	struct CTORATstpSPForceUserLogoutField
	{
		 
		///用户代码
		TTORATstpSPUserIDType	UserID;

	};

	/// 重置用户密码
	struct CTORATstpSPUserPasswordUpdateField
	{
		 
		///用户代码
		TTORATstpSPUserIDType	UserID;

		///旧密码
		TTORATstpSPPasswordType	OldPassword;

		///新密码
		TTORATstpSPPasswordType	NewPassword;

	};

	/// 激活用户
	struct CTORATstpSPActivateUserField
	{
		 
		///用户代码
		TTORATstpSPUserIDType	UserID;

	};

	/// 校验用户密码
	struct CTORATstpSPVerifyUserPasswordField
	{
		 
		///用户代码
		TTORATstpSPUserIDType	UserID;

		///密码
		TTORATstpSPPasswordType	Password;

	};

	/// 请求录入设备序列
	struct CTORATstpSPReqInputDeviceSerialField
	{
		 
		///用户代码
		TTORATstpSPUserIDType	UserID;

		///设备标识
		TTORATstpSPDeviceIDType	DeviceID;

		///设备序列号
		TTORATstpSPDeviceSerialType	DeviceSerial;

	};

	/// 请求录入设备序列应答
	struct CTORATstpSPRspInputDeviceSerialField
	{
		 
		///用户请求编号
		TTORATstpSPRequestIDType	RequestID;

		///用户代码
		TTORATstpSPUserIDType	UserID;

	};

	/// 输入报单
	struct CTORATstpSPInputOrderField
	{
		 
		///合约在系统中的编号
		TTORATstpSPSecurityIDType	SecurityID;

		///投资者说明的对报单的唯一引用
		TTORATstpSPOrderRefType	OrderRef;

		///限价单或市价单
		TTORATstpSPOrderPriceTypeType	OrderPriceType;

		///买、卖
		TTORATstpSPDirectionType	Direction;

		///按字节表示各单个合约的开平方向
		TTORATstpSPCombOffsetFlagType	CombOffsetFlag;

		///按字节表示各单个合约的组合套保标志
		TTORATstpSPCombHedgeFlagType	CombHedgeFlag;

		///限价单价格
		TTORATstpSPPriceType	LimitPrice;

		///报单数量
		TTORATstpSPVolumeType	VolumeTotalOriginal;

		///IOC、GFS、GFD、GTD、GTC、GFA
		TTORATstpSPTimeConditionType	TimeCondition;

		///AV、MV、CV
		TTORATstpSPVolumeConditionType	VolumeCondition;

		///当成交量类型为MV时有效
		TTORATstpSPVolumeType	MinVolume;

		///强平原因
		TTORATstpSPForceCloseReasonType	ForceCloseReason;

		///用户强评标志
		TTORATstpSPBoolType	UserForceClose;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///一个交易所的编号
		TTORATstpSPExchangeIDType	ExchangeID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///资金账户
		TTORATstpSPAccountIDType	AccountID;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///报单编号
		TTORATstpSPOrderSysIDType	OrderSysID;

		///终端信息
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

		///条件检查
		TTORATstpSPCondCheckType	CondCheck;

	};

	/// 报单
	struct CTORATstpSPOrderField
	{
		 
		///交易日
		TTORATstpSPDateType	TradingDay;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///合约在系统中的编号
		TTORATstpSPSecurityIDType	SecurityID;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///每一位交易员或其它登录者登录系统获得的会话编号，当前时刻唯一
		TTORATstpSPSessionIDType	SessionID;

		///投资者说明的对报单的唯一引用
		TTORATstpSPOrderRefType	OrderRef;

		///报单编号
		TTORATstpSPOrderSysIDType	OrderSysID;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///本地报单顺序号
		TTORATstpSPOrderLocalIDType	OrderLocalID;

		///限价单或市价单
		TTORATstpSPOrderPriceTypeType	OrderPriceType;

		///买、卖
		TTORATstpSPDirectionType	Direction;

		///按字节表示各单个合约的开平方向
		TTORATstpSPCombOffsetFlagType	CombOffsetFlag;

		///按字节表示各单个合约的组合套保标志
		TTORATstpSPCombHedgeFlagType	CombHedgeFlag;

		///限价单价格
		TTORATstpSPPriceType	Price;

		///报单数量
		TTORATstpSPVolumeType	VolumeTotalOriginal;

		///IOC、GFS、GFD、GTD、GTC、GFA
		TTORATstpSPTimeConditionType	TimeCondition;

		///AV、MV、CV
		TTORATstpSPVolumeConditionType	VolumeCondition;

		///当成交量类型为MV时有效
		TTORATstpSPVolumeType	MinVolume;

		///请求编号
		TTORATstpSPRequestIDType	RequestID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///客户在系统中的编号，编号唯一且遵循交易所制定的编码规则
		TTORATstpSPShareholderIDType	ShareholderID;

		///报单操作状态
		TTORATstpSPOrderOperateStatusType	OrderOperateStatus;

		///核心已处理、交易所已接收、部分成交、全部成交、部撤、全撤、废单等
		TTORATstpSPOrderStatusType	OrderStatus;

		///报单完成数量
		TTORATstpSPVolumeType	VolumeTraded;

		///报单日期
		TTORATstpSPDateType	InsertDate;

		///委托时间
		TTORATstpSPTimeType	InsertTime;

		///交易所接收时间
		TTORATstpSPTimeType	AcceptTime;

		///撤销时间
		TTORATstpSPTimeType	CancelTime;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///状态信息
		TTORATstpSPStatusMsgType	StatusMsg;

		///用户强评标志
		TTORATstpSPBoolType	UserForceClose;

		///申报操作员
		TTORATstpSPUserIDType	InsertUserID;

		///申报撤销操作员
		TTORATstpSPUserIDType	CancelUserID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///资金账户
		TTORATstpSPAccountIDType	AccountID;

		///币种
		TTORATstpSPCurrencyIDType	CurrencyID;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///强平原因
		TTORATstpSPForceCloseReasonType	ForceCloseReason;

		///终端信息
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

		///交易所返回的撤单数量
		TTORATstpSPVolumeType	VolumeCanceled;

	};

	/// 用户标识
	struct CTORATstpSPUserRefField
	{
		 
		///用户代码
		TTORATstpSPUserIDType	UserID;

	};

	/// 输入撤单操作
	struct CTORATstpSPInputOrderActionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资者说明的对报单操作的唯一引用
		TTORATstpSPOrderRefType	OrderActionRef;

		///投资者说明的对报单的唯一引用
		TTORATstpSPOrderRefType	OrderRef;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///每一位交易员或其它登录者登录系统获得的会话编号，当前时刻唯一
		TTORATstpSPSessionIDType	SessionID;

		///一个交易所的编号
		TTORATstpSPExchangeIDType	ExchangeID;

		///报单编号
		TTORATstpSPOrderSysIDType	OrderSysID;

		///委托操作标志
		TTORATstpSPOrderActionFlagType	OrderActionFlag;

		///合约在系统中的编号
		TTORATstpSPSecurityIDType	SecurityID;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///全系统的唯一报单编号。
		TTORATstpSPOrderLocalIDType	CancelOrderLocalID;

		///终端信息
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

	};

	/// 成交
	struct CTORATstpSPTradeField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///合约在系统中的编号
		TTORATstpSPSecurityIDType	SecurityID;

		///用户代码
		TTORATstpSPUserIDType	InsertUserID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///成交编号
		TTORATstpSPTradeIDType	TradeID;

		///买、卖
		TTORATstpSPDirectionType	Direction;

		///报单编号
		TTORATstpSPOrderSysIDType	OrderSysID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///客户在系统中的编号，编号唯一且遵循交易所制定的编码规则
		TTORATstpSPShareholderIDType	ShareholderID;

		///开仓、平仓等
		TTORATstpSPOffsetFlagType	OffsetFlag;

		///投机、套利等
		TTORATstpSPHedgeFlagType	HedgeFlag;

		///成交价格
		TTORATstpSPPriceType	Price;

		///成交数量
		TTORATstpSPVolumeType	Volume;

		///成交日期
		TTORATstpSPDateType	TradeDate;

		///成交时间
		TTORATstpSPTimeType	TradeTime;

		///交易所交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///本地报单顺序号
		TTORATstpSPOrderLocalIDType	OrderLocalID;

		///交易发生的日期
		TTORATstpSPDateType	TradingDay;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///资金账户
		TTORATstpSPAccountIDType	AccountID;

		///币种
		TTORATstpSPCurrencyIDType	CurrencyID;

		///报单引用
		TTORATstpSPOrderRefType	OrderRef;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

	};

	/// 行权输入
	struct CTORATstpSPInputExerciseField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///合约在系统中的编号
		TTORATstpSPSecurityIDType	SecurityID;

		///投资者说明的对行权的唯一引用
		TTORATstpSPOrderRefType	ExerciseRef;

		///行权数量
		TTORATstpSPVolumeType	Volume;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///执行类型
		TTORATstpSPExerciseTypeType	ExerciseType;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///资金账户
		TTORATstpSPAccountIDType	AccountID;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///系统行权编号
		TTORATstpSPOrderSysIDType	ExerciseSysID;

		///终端信息
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

	};

	/// 行权回报
	struct CTORATstpSPExerciseField
	{
		 
		///交易日
		TTORATstpSPDateType	TradingDay;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///合约在系统中的编号
		TTORATstpSPSecurityIDType	SecurityID;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///会话编号
		TTORATstpSPSessionIDType	SessionID;

		///投资者说明的对报单的唯一引用
		TTORATstpSPOrderRefType	ExerciseRef;

		///全系统的唯一报单编号
		TTORATstpSPOrderSysIDType	ExerciseSysID;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///本地报单编号
		TTORATstpSPOrderLocalIDType	ExerciseLocalID;

		///执行类型
		TTORATstpSPExerciseTypeType	ExerciseType;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///行权数量
		TTORATstpSPVolumeType	Volume;

		///交易所返回的撤单数量
		TTORATstpSPVolumeType	VolumeCanceled;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///a：普通，b：信用，c：衍生品
		TTORATstpSPShareholderIDTypeType	ShareholderIDType;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///资金账户
		TTORATstpSPAccountIDType	AccountID;

		///币种
		TTORATstpSPCurrencyIDType	CurrencyID;

		///行权状态
		TTORATstpSPExerciseStatusType	ExerciseStatus;

		///行权操作状态
		TTORATstpSPOrderOperateStatusType	ExerciseOperateStatus;

		///状态信息
		TTORATstpSPStatusMsgType	StatusMsg;

		///系统错误代码
		TTORATstpSPErrorIDType	ErrorID;

		///交易所为营业部分配的代码
		TTORATstpSPBranchIDType	BranchID;

		///报单申报用户
		TTORATstpSPUserIDType	InsertUserID;

		///申报日期
		TTORATstpSPDateType	InsertDate;

		///申报时间
		TTORATstpSPTimeType	InsertTime;

		///申报时间(毫秒)
		TTORATstpSPMillisecType	InsertMillisec;

		///交易所接收时间
		TTORATstpSPTimeType	AcceptTime;

		///撤销时间
		TTORATstpSPTimeType	CancelTime;

		///撤销申报用户
		TTORATstpSPUserIDType	CancelUserID;

		///现货仓位行权冻结流水号
		TTORATstpSPIntSerialType	StockPositionExerciseSerial;

		///现货系统仓位调拨流水号
		TTORATstpSPIntSerialType	StockPositionSerial;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///请求编号
		TTORATstpSPRequestIDType	RequestID;

		///终端信息
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///记录序号(仅上证报盘使用)
		TTORATstpSPSequenceNoType	RecordNumber;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

		///移动设备手机号
		TTORATstpSPMobileType	Mobile;

	};

	/// 行权操作输入
	struct CTORATstpSPInputExerciseActionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///报单操作引用
		TTORATstpSPOrderRefType	ExerciseActionRef;

		///报单引用
		TTORATstpSPOrderRefType	ExerciseRef;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///会话编号
		TTORATstpSPSessionIDType	SessionID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///全系统的唯一报单编号。
		TTORATstpSPOrderSysIDType	ExerciseSysID;

		///操作标志
		TTORATstpSPOrderActionFlagType	ExerciseActionFlag;

		///合约在系统中的编号
		TTORATstpSPSecurityIDType	SecurityID;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///全系统的唯一报单编号。
		TTORATstpSPOrderLocalIDType	CancelExerciseLocalID;

		///终端信息
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

	};

	/// 输入锁定
	struct CTORATstpSPInputLockField
	{
		 
		///合约在系统中的编号
		TTORATstpSPSecurityIDType	SecurityID;

		///投资者说明的对锁定的唯一引用
		TTORATstpSPOrderRefType	LockRef;

		///锁定类别
		TTORATstpSPLockTypeType	LockType;

		///报单数量
		TTORATstpSPVolumeType	Volume;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///一个交易所的编号
		TTORATstpSPExchangeIDType	ExchangeID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///终端信息
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///锁定编号
		TTORATstpSPOrderSysIDType	LockSysID;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

	};

	/// 锁定委托
	struct CTORATstpSPLockField
	{
		 
		///交易日
		TTORATstpSPDateType	TradingDay;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///合约在系统中的编号
		TTORATstpSPSecurityIDType	SecurityID;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///每一位交易员或其它登录者登录系统获得的会话编号，当前时刻唯一
		TTORATstpSPSessionIDType	SessionID;

		///投资者说明的对锁定的唯一引用
		TTORATstpSPOrderRefType	LockRef;

		///报单编号
		TTORATstpSPOrderSysIDType	LockSysID;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///本地报单顺序号
		TTORATstpSPOrderLocalIDType	LockLocalID;

		///锁定类别
		TTORATstpSPLockTypeType	LockType;

		///报单数量
		TTORATstpSPVolumeType	Volume;

		///交易所返回的撤单数量
		TTORATstpSPVolumeType	VolumeCanceled;

		///请求编号
		TTORATstpSPRequestIDType	RequestID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///客户在系统中的编号，编号唯一且遵循交易所制定的编码规则
		TTORATstpSPShareholderIDType	ShareholderID;

		///普通、信用、衍生品
		TTORATstpSPShareholderIDTypeType	ShareholderIDType;

		///锁定状态
		TTORATstpSPLockStatusType	LockStatus;

		///报单日期
		TTORATstpSPDateType	InsertDate;

		///申报时间
		TTORATstpSPTimeType	InsertTime;

		///交易所接收时间
		TTORATstpSPTimeType	AcceptTime;

		///撤单时间
		TTORATstpSPTimeType	CancelTime;

		///交易所营业部编码
		TTORATstpSPBranchIDType	BranchID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///报盘错误代码
		TTORATstpSPErrorIDType	ErrorID;

		///状态信息
		TTORATstpSPStatusMsgType	StatusMsg;

		///申报操作员
		TTORATstpSPUserIDType	InsertUserID;

		///撤销申报用户
		TTORATstpSPUserIDType	CancelUserID;

		///现货仓位锁定流水号
		TTORATstpSPIntSerialType	StockPositionLockSerial;

		///现货系统仓位调拨流水号
		TTORATstpSPIntSerialType	StockPositionSerial;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///终端信息
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///记录序号(仅上证报盘使用)
		TTORATstpSPSequenceNoType	RecordNumber;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

		///移动设备手机号
		TTORATstpSPMobileType	Mobile;

	};

	/// 行权操作输入
	struct CTORATstpSPInputLockActionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///锁定操作引用
		TTORATstpSPOrderRefType	LockActionRef;

		///锁定引用
		TTORATstpSPOrderRefType	LockRef;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///会话编号
		TTORATstpSPSessionIDType	SessionID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///全系统的唯一报单编号。
		TTORATstpSPOrderSysIDType	LockSysID;

		///操作标志
		TTORATstpSPOrderActionFlagType	LockActionFlag;

		///合约在系统中的编号
		TTORATstpSPSecurityIDType	SecurityID;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///全系统的唯一报单编号。
		TTORATstpSPOrderLocalIDType	CancelLockLocalID;

		///终端信息
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

	};

	/// 证券处置输入
	struct CTORATstpSPInputStockDisposalField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///个股期权标的合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///投资者说明的对证券处置的唯一引用
		TTORATstpSPOrderRefType	StockDisposalRef;

		///证券处置数量（个股单位为股，ETF单位为份）
		TTORATstpSPVolumeType	Volume;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///证券处置类别
		TTORATstpSPStockDisposalTypeType	StockDisposalType;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///系统证券处置编号
		TTORATstpSPOrderSysIDType	StockDisposalSysID;

		///终端信息
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

	};

	/// 证券处置表
	struct CTORATstpSPStockDisposalField
	{
		 
		///交易日
		TTORATstpSPDateType	TradingDay;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///个股期权标的合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///会话编号
		TTORATstpSPSessionIDType	SessionID;

		///投资者说明的对证券处置的唯一引用
		TTORATstpSPOrderRefType	StockDisposalRef;

		///系统证券处置编号
		TTORATstpSPOrderSysIDType	StockDisposalSysID;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///本地证券处置编号
		TTORATstpSPOrderLocalIDType	StockDisposalLocalID;

		///证券处置类别
		TTORATstpSPStockDisposalTypeType	StockDisposalType;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///证券处置数量
		TTORATstpSPVolumeType	Volume;

		///证券处置撤销数量
		TTORATstpSPVolumeType	VolumeCanceled;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///普通、信用、衍生品
		TTORATstpSPShareholderIDTypeType	ShareholderIDType;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///证券处置状态
		TTORATstpSPStockDisposalStatusType	StockDisposalStatus;

		///证券处置操作状态
		TTORATstpSPOrderOperateStatusType	StockDisposalOperateStatus;

		///状态信息
		TTORATstpSPStatusMsgType	StatusMsg;

		///系统错误代码
		TTORATstpSPErrorIDType	ErrorID;

		///交易所为营业部分配的代码
		TTORATstpSPBranchIDType	BranchID;

		///报单申报用户
		TTORATstpSPUserIDType	InsertUserID;

		///申报日期
		TTORATstpSPDateType	InsertDate;

		///申报时间
		TTORATstpSPTimeType	InsertTime;

		///申报时间(毫秒)
		TTORATstpSPMillisecType	InsertMillisec;

		///交易所接收时间
		TTORATstpSPTimeType	AcceptTime;

		///撤销时间
		TTORATstpSPTimeType	CancelTime;

		///撤销申报用户
		TTORATstpSPUserIDType	CancelUserID;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///请求编号
		TTORATstpSPRequestIDType	RequestID;

		///终端信息
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///记录序号(仅上证报盘使用)
		TTORATstpSPSequenceNoType	RecordNumber;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

		///移动设备手机号
		TTORATstpSPMobileType	Mobile;

	};

	/// 证券处置操作输入
	struct CTORATstpSPInputStockDisposalActionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///证券处置操作引用
		TTORATstpSPOrderRefType	StockDisposalActionRef;

		///证券处置引用
		TTORATstpSPOrderRefType	StockDisposalRef;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///会话编号
		TTORATstpSPSessionIDType	SessionID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///证券处置系统编号
		TTORATstpSPOrderSysIDType	StockDisposalSysID;

		///操作标志
		TTORATstpSPOrderActionFlagType	StockDisposalActionFlag;

		///合约在系统中的编号
		TTORATstpSPSecurityIDType	SecurityID;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///全系统的唯一报单编号。
		TTORATstpSPOrderLocalIDType	CancelStockDisposalLocalID;

		///终端信息
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

	};

	/// 组合委托输入
	struct CTORATstpSPInputCombOrderField
	{
		 
		///组合合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///投资者说明的对组合的唯一引用
		TTORATstpSPOrderRefType	CombOrderRef;

		///组合策略
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

		///组合报单类别
		TTORATstpSPCombDirectionType	CombDirection;

		///交易所组合编码(拆分时必填)
		TTORATstpSPExchangeCombIDType	ExchangeCombID;

		///报单数量
		TTORATstpSPVolumeType	Volume;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///一个交易所的编号
		TTORATstpSPExchangeIDType	ExchangeID;

		///目前该字段存放的是上证所和深圳的股东代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///资金账户
		TTORATstpSPAccountIDType	AccountID;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///终端信息
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///组合系统编号
		TTORATstpSPOrderSysIDType	CombOrderSysID;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

	};

	/// 证券组合委托
	struct CTORATstpSPCombOrderField
	{
		 
		///交易日
		TTORATstpSPDateType	TradingDay;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///组合合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///组合策略
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

		///组合报单类别
		TTORATstpSPCombDirectionType	CombDirection;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///每一位交易员或其它登录者登录系统获得的会话编号，当前时刻唯一
		TTORATstpSPSessionIDType	SessionID;

		///投资者说明的对组合的唯一引用
		TTORATstpSPOrderRefType	CombOrderRef;

		///组合系统编号
		TTORATstpSPOrderSysIDType	CombOrderSysID;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///本地组合报单编号
		TTORATstpSPOrderLocalIDType	CombOrderLocalID;

		///报单数量
		TTORATstpSPVolumeType	Volume;

		///交易所返回的撤单数量
		TTORATstpSPVolumeType	VolumeCanceled;

		///请求编号
		TTORATstpSPRequestIDType	RequestID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///客户在系统中的编号，编号唯一且遵循交易所制定的编码规则
		TTORATstpSPShareholderIDType	ShareholderID;

		///普通、信用、衍生品
		TTORATstpSPShareholderIDTypeType	ShareholderIDType;

		///组合委托状态
		TTORATstpSPOrderStatusType	CombOrderStatus;

		///组合委托操作状态
		TTORATstpSPOrderOperateStatusType	CombOrderOperateStatus;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///资金账户
		TTORATstpSPAccountIDType	AccountID;

		///币种
		TTORATstpSPCurrencyIDType	CurrencyID;

		///交易所组合编码
		TTORATstpSPExchangeCombIDType	ExchangeCombID;

		///报单日期
		TTORATstpSPDateType	InsertDate;

		///申报时间
		TTORATstpSPTimeType	InsertTime;

		///申报时间(毫秒)
		TTORATstpSPMillisecType	InsertMillisec;

		///交易所接收时间
		TTORATstpSPTimeType	AcceptTime;

		///撤单时间
		TTORATstpSPTimeType	CancelTime;

		///交易所营业部编码
		TTORATstpSPBranchIDType	BranchID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///报盘错误代码
		TTORATstpSPErrorIDType	ErrorID;

		///状态信息
		TTORATstpSPStatusMsgType	StatusMsg;

		///申报操作员
		TTORATstpSPUserIDType	InsertUserID;

		///撤销申报用户
		TTORATstpSPUserIDType	CancelUserID;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///终端信息
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///记录序号(仅上证报盘使用)
		TTORATstpSPSequenceNoType	RecordNumber;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

		///移动设备手机号
		TTORATstpSPMobileType	Mobile;

	};

	/// 组合委托操作输入
	struct CTORATstpSPInputCombOrderActionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///组合报单操作引用
		TTORATstpSPOrderRefType	CombOrderActionRef;

		///组合报单引用
		TTORATstpSPOrderRefType	CombOrderRef;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///会话编号
		TTORATstpSPSessionIDType	SessionID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///全系统的唯一组合报单编号。
		TTORATstpSPOrderSysIDType	CombOrderSysID;

		///组合报单操作标志
		TTORATstpSPOrderActionFlagType	CombOrderActionFlag;

		///组合合约在系统中的编号
		TTORATstpSPSecurityIDType	SecurityID;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///全系统的唯一的组合报单撤单编号
		TTORATstpSPOrderLocalIDType	CancelCombOrderLocalID;

		///终端信息
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

	};

	/// 条件单录入域
	struct CTORATstpSPInputCondOrderField
	{
		 
		///合约在系统中的编号
		TTORATstpSPSecurityIDType	SecurityID;

		///投资者说明的对条件单的唯一引用
		TTORATstpSPOrderRefType	CondOrderRef;

		///限价单或市价单
		TTORATstpSPOrderPriceTypeType	OrderPriceType;

		///买、卖
		TTORATstpSPDirectionType	Direction;

		///按字节表示各单个合约的开平方向
		TTORATstpSPCombOffsetFlagType	CombOffsetFlag;

		///按字节表示各单个合约的组合套保标志
		TTORATstpSPCombHedgeFlagType	CombHedgeFlag;

		///限价单价格
		TTORATstpSPPriceType	LimitPrice;

		///报单数量
		TTORATstpSPVolumeType	VolumeTotalOriginal;

		///IOC、GFS、GFD、GTD、GTC、GFA
		TTORATstpSPTimeConditionType	TimeCondition;

		///AV、MV、CV
		TTORATstpSPVolumeConditionType	VolumeCondition;

		///当成交量类型为MV时有效
		TTORATstpSPVolumeType	MinVolume;

		///强平原因
		TTORATstpSPForceCloseReasonType	ForceCloseReason;

		///用户强评标志
		TTORATstpSPBoolType	UserForceClose;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///一个交易所的编号
		TTORATstpSPExchangeIDType	ExchangeID;

		///目前该字段存放的是上证所和深圳的股东代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///资金账户
		TTORATstpSPAccountIDType	AccountID;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///报单编号
		TTORATstpSPCondOrderIDType	CondOrderID;

		///终端信息
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///报单数量类型
		TTORATstpSPOrderVolumeTypeType	OrderVolumeType;

		///条件单触发条件
		TTORATstpSPContingentConditionType	ContingentCondition;

		///条件价
		TTORATstpSPPriceType	ConditionPrice;

		///价格浮动tick数,>0向上浮动,<0向下浮动,=0不浮动
		TTORATstpSPVolumeType	PriceTicks;

		///数量浮动倍数,必须>=0
		TTORATstpSPVolumeMultipleType	VolumeMultiple;

		///相关前置编号
		TTORATstpSPFrontIDType	RelativeFrontID;

		///相关会话编号
		TTORATstpSPSessionIDType	RelativeSessionID;

		///相关条件参数,可能为OrderRef、OrderSysID、Time和SecurityID
		TTORATstpSPRelativeCondParamType	RelativeParam;

		///附加触发条件
		TTORATstpSPContingentConditionType	AppendContingentCondition;

		///附加条件价
		TTORATstpSPPriceType	AppendConditionPrice;

		///附加相关前置编号
		TTORATstpSPFrontIDType	AppendRelativeFrontID;

		///附加相关会话编号
		TTORATstpSPSessionIDType	AppendRelativeSessionID;

		///附加相关条件参数,可能为OrderRef、OrderSysID、Time和SecurityID
		TTORATstpSPRelativeCondParamType	AppendRelativeParam;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

	};

	/// 条件单域
	struct CTORATstpSPConditionOrderField
	{
		 
		///交易日
		TTORATstpSPDateType	TradingDay;

		///合约在系统中的编号
		TTORATstpSPSecurityIDType	SecurityID;

		///投资者说明的对条件单的唯一引用
		TTORATstpSPOrderRefType	CondOrderRef;

		///限价单或市价单
		TTORATstpSPOrderPriceTypeType	OrderPriceType;

		///买、卖
		TTORATstpSPDirectionType	Direction;

		///按字节表示各单个合约的开平方向
		TTORATstpSPCombOffsetFlagType	CombOffsetFlag;

		///按字节表示各单个合约的组合套保标志
		TTORATstpSPCombHedgeFlagType	CombHedgeFlag;

		///限价单价格
		TTORATstpSPPriceType	LimitPrice;

		///报单数量
		TTORATstpSPVolumeType	VolumeTotalOriginal;

		///IOC、GFS、GFD、GTD、GTC、GFA
		TTORATstpSPTimeConditionType	TimeCondition;

		///AV、MV、CV
		TTORATstpSPVolumeConditionType	VolumeCondition;

		///当成交量类型为MV时有效
		TTORATstpSPVolumeType	MinVolume;

		///强平原因
		TTORATstpSPForceCloseReasonType	ForceCloseReason;

		///请求编号
		TTORATstpSPRequestIDType	RequestID;

		///用户强评标志
		TTORATstpSPBoolType	UserForceClose;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///一个交易所的编号
		TTORATstpSPExchangeIDType	ExchangeID;

		///目前该字段存放的是上证所和深圳的股东代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///资金账户
		TTORATstpSPAccountIDType	AccountID;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///报单编号
		TTORATstpSPCondOrderIDType	CondOrderID;

		///终端信息
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///报单数量类型
		TTORATstpSPOrderVolumeTypeType	OrderVolumeType;

		///条件单触发条件
		TTORATstpSPContingentConditionType	ContingentCondition;

		///条件价
		TTORATstpSPPriceType	ConditionPrice;

		///价格浮动tick数,>0向上浮动,<0向下浮动,=0不浮动
		TTORATstpSPVolumeType	PriceTicks;

		///数量浮动倍数,必须>=0
		TTORATstpSPVolumeMultipleType	VolumeMultiple;

		///相关前置编号
		TTORATstpSPFrontIDType	RelativeFrontID;

		///相关会话编号
		TTORATstpSPSessionIDType	RelativeSessionID;

		///相关条件参数,可能为OrderRef、OrderSysID、Time和SecurityID
		TTORATstpSPRelativeCondParamType	RelativeParam;

		///附加触发条件
		TTORATstpSPContingentConditionType	AppendContingentCondition;

		///附加条件价
		TTORATstpSPPriceType	AppendConditionPrice;

		///附加相关前置编号
		TTORATstpSPFrontIDType	AppendRelativeFrontID;

		///附加相关会话编号
		TTORATstpSPSessionIDType	AppendRelativeSessionID;

		///附加相关条件参数,可能为OrderRef、OrderSysID、Time和SecurityID
		TTORATstpSPRelativeCondParamType	AppendRelativeParam;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///会话编号
		TTORATstpSPSessionIDType	SessionID;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///条件单状态
		TTORATstpSPCondOrderStatusType	CondOrderStatus;

		///状态信息
		TTORATstpSPErrorMsgType	StatusMsg;

		///报单申报用户
		TTORATstpSPUserIDType	InsertUserID;

		///报单日期
		TTORATstpSPDateType	InsertDate;

		///委托时间
		TTORATstpSPTimeType	InsertTime;

		///申报时间(毫秒)
		TTORATstpSPMillisecType	InsertMillisec;

		///撤销时间
		TTORATstpSPTimeType	CancelTime;

		///撤销用户
		TTORATstpSPUserIDType	CancelUserID;

		///触发时间
		TTORATstpSPTimeType	ActiveTime;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

	};

	/// 条件单操作录入
	struct CTORATstpSPInputCondOrderActionField
	{
		 
		///一个交易所的编号
		TTORATstpSPExchangeIDType	ExchangeID;

		///条件单操作引用
		TTORATstpSPOrderRefType	CondOrderActionRef;

		///条件单引用
		TTORATstpSPOrderRefType	CondOrderRef;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///会话编号
		TTORATstpSPSessionIDType	SessionID;

		///报单编号
		TTORATstpSPCondOrderIDType	CondOrderID;

		///委托操作标志
		TTORATstpSPOrderActionFlagType	OrderActionFlag;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///合约在系统中的编号
		TTORATstpSPSecurityIDType	SecurityID;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///条件单撤单编号
		TTORATstpSPCondOrderIDType	CancelCondOrderID;

		///终端信息
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

	};

	/// 组合行权输入
	struct CTORATstpSPInputCombExerciseField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///认购合约代码
		TTORATstpSPSecurityIDType	CallSecurityID;

		///认沽合约代码
		TTORATstpSPSecurityIDType	PutSecurityID;

		///投资者说明的对行权的唯一引用
		TTORATstpSPOrderRefType	CombExerciseRef;

		///行权数量
		TTORATstpSPVolumeType	Volume;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///股东代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///资金账户
		TTORATstpSPAccountIDType	AccountID;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///系统组合行权编号
		TTORATstpSPOrderSysIDType	CombExerciseSysID;

		///终端信息
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

	};

	/// 组合行权回报
	struct CTORATstpSPCombExerciseField
	{
		 
		///交易日
		TTORATstpSPDateType	TradingDay;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///认购合约代码
		TTORATstpSPSecurityIDType	CallSecurityID;

		///认沽合约代码
		TTORATstpSPSecurityIDType	PutSecurityID;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///会话编号
		TTORATstpSPSessionIDType	SessionID;

		///合并行权引用
		TTORATstpSPOrderRefType	CombExerciseRef;

		///系统合并行权编号
		TTORATstpSPOrderSysIDType	CombExerciseSysID;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///本地合并行权编号
		TTORATstpSPOrderLocalIDType	CombExerciseLocalID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///行权数量
		TTORATstpSPVolumeType	Volume;

		///交易所返回的撤单数量
		TTORATstpSPVolumeType	VolumeCanceled;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///a：普通，b：信用，c：衍生品
		TTORATstpSPShareholderIDTypeType	ShareholderIDType;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///资金账户
		TTORATstpSPAccountIDType	AccountID;

		///币种
		TTORATstpSPCurrencyIDType	CurrencyID;

		///行权状态
		TTORATstpSPExerciseStatusType	ExerciseStatus;

		///行权操作状态
		TTORATstpSPOrderOperateStatusType	ExerciseOperateStatus;

		///状态信息
		TTORATstpSPStatusMsgType	StatusMsg;

		///系统错误代码
		TTORATstpSPErrorIDType	ErrorID;

		///交易所为营业部分配的代码
		TTORATstpSPBranchIDType	BranchID;

		///报单申报用户
		TTORATstpSPUserIDType	InsertUserID;

		///申报日期
		TTORATstpSPDateType	InsertDate;

		///申报时间
		TTORATstpSPTimeType	InsertTime;

		///申报时间(毫秒)
		TTORATstpSPMillisecType	InsertMillisec;

		///交易所接收时间
		TTORATstpSPTimeType	AcceptTime;

		///撤销时间
		TTORATstpSPTimeType	CancelTime;

		///撤销申报用户
		TTORATstpSPUserIDType	CancelUserID;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///请求编号
		TTORATstpSPRequestIDType	RequestID;

		///终端信息
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///记录序号(仅上证报盘使用)
		TTORATstpSPSequenceNoType	RecordNumber;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

		///移动设备手机号
		TTORATstpSPMobileType	Mobile;

	};

	/// 组合行权操作输入
	struct CTORATstpSPInputCombExerciseActionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///组合行权操作引用
		TTORATstpSPOrderRefType	CombExerciseActionRef;

		///组合行权引用
		TTORATstpSPOrderRefType	CombExerciseRef;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///会话编号
		TTORATstpSPSessionIDType	SessionID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///系统组合行权编号
		TTORATstpSPOrderSysIDType	CombExerciseSysID;

		///操作标志
		TTORATstpSPOrderActionFlagType	ExerciseActionFlag;

		///认购合约代码
		TTORATstpSPSecurityIDType	CallSecurityID;

		///认沽合约代码
		TTORATstpSPSecurityIDType	PutSecurityID;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///本地组合行权撤单编号
		TTORATstpSPOrderLocalIDType	CancelCombExerciseLocalID;

		///终端信息
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

	};

	/// 查询拆分组合合约后保证金差额变动请求
	struct CTORATstpSPReqInquirySplitCombMarginDifferenceField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///组合合约代码
		TTORATstpSPSecurityIDType	CombSecurityID;

		///交易所组合编码
		TTORATstpSPExchangeCombIDType	ExchangeCombID;

		///目前该字段存放的是上证所和深圳的股东代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///组合策略
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

		///报单数量
		TTORATstpSPVolumeType	Volume;

	};

	/// 查询拆分组合合约后保证金差额变动请求响应
	struct CTORATstpSPRspInquirySplitCombMarginDifferenceField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///组合合约代码
		TTORATstpSPSecurityIDType	CombSecurityID;

		///交易所组合编码
		TTORATstpSPExchangeCombIDType	ExchangeCombID;

		///目前该字段存放的是上证所和深圳的股东代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///组合策略
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

		///报单数量
		TTORATstpSPVolumeType	Volume;

		///用户请求编号
		TTORATstpSPRequestIDType	RequestID;

		///左腿合约占用保证金
		TTORATstpSPPriceType	LeftLegPosMargin;

		///左腿合约占用实时保证金
		TTORATstpSPPriceType	LeftLegPosLiveMargin;

		///右腿合约占用保证金额
		TTORATstpSPPriceType	RightLegPosMargin;

		///右腿合约占用实时保证金额
		TTORATstpSPPriceType	RightLegPosLiveMargin;

		///组合仓位占用的保证金
		TTORATstpSPPriceType	CombPosMargin;

		///组合仓位占用的实时保证金
		TTORATstpSPPriceType	CombPosLiveMargin;

		///保证金差额（组合合约拆分后与拆分前保证金的差额）
		TTORATstpSPPriceType	MarginDifference;

		///实时保证金差额（组合合约拆分后与拆分前保证金的差额）
		TTORATstpSPPriceType	LiveMarginDifference;

	};

	/// 资金转移
	struct CTORATstpSPInputTransferFundField
	{
		 
		///申请流水号
		TTORATstpSPIntSerialType	ApplySerial;

		///资金账户
		TTORATstpSPAccountIDType	AccountID;

		///币种
		TTORATstpSPCurrencyIDType	CurrencyID;

		///转移方向
		TTORATstpSPTransferDirectionType	TransferDirection;

		///转账金额
		TTORATstpSPMoneyType	Amount;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///资金密码
		TTORATstpSPPasswordType	TradingAccountPassword;

		///银行代码
		TTORATstpSPBankIDType	BankID;

		///银行账户密码
		TTORATstpSPPasswordType	BankAccountPassword;

	};

	/// 资金转移回报
	struct CTORATstpSPTransferFundField
	{
		 
		///转账流水号(后台编号)
		TTORATstpSPIntSerialType	FundSerial;

		///申请流水号
		TTORATstpSPIntSerialType	ApplySerial;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///会话编号
		TTORATstpSPSessionIDType	SessionID;

		///资金账户代码
		TTORATstpSPAccountIDType	AccountID;

		///币种代码
		TTORATstpSPCurrencyIDType	CurrencyID;

		///转移方向
		TTORATstpSPTransferDirectionType	TransferDirection;

		///资金账户当日出入金金额
		TTORATstpSPMoneyType	Amount;

		///转移状态
		TTORATstpSPTransferStatusType	TransferStatus;

		///操作人员
		TTORATstpSPUserIDType	OperatorID;

		///操作日期
		TTORATstpSPDateType	OperateDate;

		///操作时间
		TTORATstpSPTimeType	OperateTime;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///签约银行账户
		TTORATstpSPBankAccountIDType	BankAccountID;

		///银行代码
		TTORATstpSPBankIDType	BankID;

	};

	/// 仓位转移
	struct CTORATstpSPInputTransferPositionField
	{
		 
		///申请流水号
		TTORATstpSPIntSerialType	ApplySerial;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///转移方向
		TTORATstpSPTransferDirectionType	TransferDirection;

		///数量
		TTORATstpSPVolumeType	Volume;

		///转移持仓类型
		TTORATstpSPTransferPositionTypeType	TransferPositionType;

		///多、空
		TTORATstpSPPosiDirectionType	PosiDirection;

		///投机套保标志
		TTORATstpSPHedgeFlagType	HedgeFlag;

	};

	/// 仓位转移回报
	struct CTORATstpSPTransferPositionField
	{
		 
		///仓位转移流水号
		TTORATstpSPIntSerialType	PositionSerial;

		///申请流水号
		TTORATstpSPIntSerialType	ApplySerial;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///会话编号
		TTORATstpSPSessionIDType	SessionID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///多、空
		TTORATstpSPPosiDirectionType	PosiDirection;

		///投机套保标志
		TTORATstpSPHedgeFlagType	HedgeFlag;

		///证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///交易日
		TTORATstpSPDateType	TradingDay;

		///转移方向
		TTORATstpSPTransferDirectionType	TransferDirection;

		///转移持仓类型
		TTORATstpSPTransferPositionTypeType	TransferPositionType;

		///昨日仓位转入转出数量。
		TTORATstpSPVolumeType	HistoryVolume;

		///今日仓位转入转出数量。
		TTORATstpSPVolumeType	TodayVolume;

		///转移状态：0：正常，1：已冲正
		TTORATstpSPTransferStatusType	TransferStatus;

		///操作人员
		TTORATstpSPUserIDType	OperatorID;

		///操作日期
		TTORATstpSPDateType	OperateDate;

		///操作时间
		TTORATstpSPTimeType	OperateTime;

	};

	/// 证券仓位转移请求
	struct CTORATstpSPInputTransferStockPositionField
	{
		 
		///申请流水号
		TTORATstpSPIntSerialType	ApplySerial;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///个股期权标的现货转移原因
		TTORATstpSPSPStockTransferReasonType	SPStockTransferReason;

		///数量
		TTORATstpSPVolumeType	Volume;

		///转移持仓类型
		TTORATstpSPTransferPositionTypeType	TransferPositionType;

	};

	/// 证券仓位转移回报
	struct CTORATstpSPTransferStockPositionField
	{
		 
		///仓位转移流水号
		TTORATstpSPIntSerialType	PositionSerial;

		///申请流水号
		TTORATstpSPIntSerialType	ApplySerial;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///会话编号
		TTORATstpSPSessionIDType	SessionID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///交易日
		TTORATstpSPDateType	TradingDay;

		///个股期权标的现货转移原因
		TTORATstpSPSPStockTransferReasonType	SPStockTransferReason;

		///转移持仓类型
		TTORATstpSPTransferPositionTypeType	TransferPositionType;

		///昨日仓位转入转出数量
		TTORATstpSPVolumeType	HistoryVolume;

		///今日买卖仓位转入转出数量
		TTORATstpSPVolumeType	TodayBSVolume;

		///今日申赎仓位转入转出数量
		TTORATstpSPVolumeType	TodayPRVolume;

		///正在处理、失败等
		TTORATstpSPTransferStatusType	TransferStatus;

		///操作人员
		TTORATstpSPUserIDType	OperatorID;

		///操作日期
		TTORATstpSPDateType	OperateDate;

		///操作时间
		TTORATstpSPTimeType	OperateTime;

	};

	/// 查询集中交易系统资金请求
	struct CTORATstpSPReqInquiryJZFundField
	{
		 
		///资金账户
		TTORATstpSPAccountIDType	AccountID;

		///币种
		TTORATstpSPCurrencyIDType	CurrencyID;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

	};

	/// 查询集中交易系统资金响应
	struct CTORATstpSPRspInquiryJZFundField
	{
		 
		///资金账户
		TTORATstpSPAccountIDType	AccountID;

		///币种
		TTORATstpSPCurrencyIDType	CurrencyID;

		///可用金额
		TTORATstpSPMoneyType	UsefulMoney;

		///可取额度
		TTORATstpSPMoneyType	FetchLimit;

		///用户请求编号
		TTORATstpSPRequestIDType	RequestID;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

	};

	/// 回传交易数据
	struct CTORATstpSPUploadTradeDataField
	{
		 
		///交易所代码，目前支持 SSE(上海证券交易所)和SZSE(深圳证券交易所)
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易日
		TTORATstpSPDateType	TradingDay;

		///是否强制回传。0=否;1=是
		TTORATstpSPBoolType	bForce;

		///回传类型
		TTORATstpSPUploadTypeType	UploadType;

	};

	/// 查询银行账户余额请求
	struct CTORATstpSPReqInquiryBankAccountFundField
	{
		 
		///资金账户
		TTORATstpSPAccountIDType	AccountID;

		///币种
		TTORATstpSPCurrencyIDType	CurrencyID;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///银行账户密码
		TTORATstpSPPasswordType	BankAccountPassword;

	};

	/// 查询银行账户余额响应
	struct CTORATstpSPRspInquiryBankAccountFundField
	{
		 
		///资金账户
		TTORATstpSPAccountIDType	AccountID;

		///币种
		TTORATstpSPCurrencyIDType	CurrencyID;

		///账户余额
		TTORATstpSPMoneyType	Balance;

		///用户请求编号
		TTORATstpSPRequestIDType	RequestID;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///银行代码
		TTORATstpSPBankIDType	BankID;

		///签约银行账户
		TTORATstpSPBankAccountIDType	BankAccountID;

	};

	/// API请求同步备兑股份不足仓位信息
	struct CTORATstpSPSyncInsufficientCoveredStockPosField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///交易账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///资金账户
		TTORATstpSPAccountIDType	AccountID;

		///币种
		TTORATstpSPCurrencyIDType	CurrencyID;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///证券代码
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// 查询现货系统仓位请求
	struct CTORATstpSPReqInquiryStockPositionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///交易所下的交易市场
		TTORATstpSPMarketIDType	MarketID;

		///交易账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///交易日期
		TTORATstpSPDateType	TradingDay;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///现货证券代码
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// 查询现货系统仓位响应
	struct CTORATstpSPRspInquiryStockPositionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///交易账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///交易日期
		TTORATstpSPDateType	TradingDay;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///昨日持仓（包含昨日持仓冻结数量）
		TTORATstpSPVolumeType	HistoryPos;

		///昨日持仓冻结
		TTORATstpSPVolumeType	HistoryPosFrozen;

		///今日买卖持仓（包含今日买卖持仓冻结数量）
		TTORATstpSPVolumeType	TodayBSPos;

		///今日买卖持仓冻结
		TTORATstpSPVolumeType	TodayBSPosFrozen;

		///今日申赎持仓（包含今日申赎持仓冻结数量）
		TTORATstpSPVolumeType	TodayPRPos;

		///今日申赎持仓冻结
		TTORATstpSPVolumeType	TodayPRPosFrozen;

		///今日拆分合并持仓（包含今日拆分合并持仓冻结数量）
		TTORATstpSPVolumeType	TodaySMPos;

		///今日拆分合并持仓冻结
		TTORATstpSPVolumeType	TodaySMPosFrozen;

		///昨日持仓成本价
		TTORATstpSPMoneyType	HistoryPosCost;

		///总持仓成本
		TTORATstpSPMoneyType	TotalPosCost;

		///融资仓位
		TTORATstpSPVolumeType	MarginBuyPos;

		///融券仓位（包含今日融券仓位）
		TTORATstpSPVolumeType	ShortSellPos;

		///今日融券仓位
		TTORATstpSPVolumeType	TodayShortSellPos;

		///上次余额(盘中不变)
		TTORATstpSPVolumeType	PrePosition;

		///股份可用
		TTORATstpSPVolumeType	AvailablePosition;

		///股份余额
		TTORATstpSPVolumeType	CurrentPosition;

		///用户请求编号
		TTORATstpSPRequestIDType	RequestID;

	};

	/// 订阅行情
	struct CTORATstpSPSpecificSecurityField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// 深度行情通知
	struct CTORATstpSPMarketDataField
	{
		 
		///证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易日
		TTORATstpSPDateType	TradingDay;

		///证券名称
		TTORATstpSPSecurityNameType	SecurityName;

		///上一日收盘价
		TTORATstpSPPriceType	PreClosePrice;

		///今日开盘价
		TTORATstpSPPriceType	OpenPrice;

		///涨停价格
		TTORATstpSPPriceType	UpperLimitPrice;

		///跌停价格
		TTORATstpSPPriceType	LowerLimitPrice;

		///该证券在当日的成交数量
		TTORATstpSPLongVolumeType	Volume;

		///该证券在当日的成交金额
		TTORATstpSPMoneyType	Turnover;

		///该证券在当日的成交笔数
		TTORATstpSPLongVolumeType	TradingCount;

		///当日该证券交易期间的最新成交价格
		TTORATstpSPPriceType	LastPrice;

		///收盘价格
		TTORATstpSPPriceType	ClosePrice;

		///一定时间内该证券成交价中的最高成交价格
		TTORATstpSPPriceType	HighestPrice;

		///一定时间内该证券成交价中的最低成交价格
		TTORATstpSPPriceType	LowestPrice;

		///指该证券当前的市盈率
		TTORATstpSPRatioType	PERatio1;

		///指该证券当前的市盈率
		TTORATstpSPRatioType	PERatio2;

		///最新价-前收盘价格
		TTORATstpSPPriceType	PriceUpDown1;

		///最新价-上笔成交价格
		TTORATstpSPPriceType	PriceUpDown2;

		///持仓量
		TTORATstpSPLargeVolumeType	OpenInterest;

		///该证券当前最优申买价格
		TTORATstpSPPriceType	BidPrice1;

		///该证券当前最优申卖价格
		TTORATstpSPPriceType	AskPrice1;

		///该证券当前最优价位申请买入的数量
		TTORATstpSPLongVolumeType	BidVolume1;

		///该证券当前最优价位申请卖出的数量
		TTORATstpSPLongVolumeType	AskVolume1;

		///该证券当前第二优申买价格
		TTORATstpSPPriceType	BidPrice2;

		///该证券当前第二优价位申请买入的数量
		TTORATstpSPLongVolumeType	BidVolume2;

		///该证券当前第二优申卖价格
		TTORATstpSPPriceType	AskPrice2;

		///该证券当前第二优价位申请卖出的数量
		TTORATstpSPLongVolumeType	AskVolume2;

		///该证券当前第三优申买价格
		TTORATstpSPPriceType	BidPrice3;

		///该证券当前第三优价位申请买入的数量
		TTORATstpSPLongVolumeType	BidVolume3;

		///该证券当前第三优申卖价格
		TTORATstpSPPriceType	AskPrice3;

		///该证券当前第三优价位申请卖出的数量
		TTORATstpSPLongVolumeType	AskVolume3;

		///该证券当前第四优申买价格
		TTORATstpSPPriceType	BidPrice4;

		///该证券当前第四优价位申请买入的数量
		TTORATstpSPLongVolumeType	BidVolume4;

		///该证券当前第四优申卖价格
		TTORATstpSPPriceType	AskPrice4;

		///该证券当前第四优价位申请卖出的数量
		TTORATstpSPLongVolumeType	AskVolume4;

		///该证券当前第五优申买价格
		TTORATstpSPPriceType	BidPrice5;

		///该证券当前第五优价位申请买入的数量
		TTORATstpSPLongVolumeType	BidVolume5;

		///该证券当前第五优申卖价格
		TTORATstpSPPriceType	AskPrice5;

		///该证券当前第五优价位申请卖出的数量
		TTORATstpSPLongVolumeType	AskVolume5;

		///最后修改时间
		TTORATstpSPTimeType	UpdateTime;

		///最后修改毫秒
		TTORATstpSPMillisecType	UpdateMillisec;

		///行情产品实时状态
		TTORATstpSPMDSecurityStatType	MDSecurityStat;

		///合约结算价
		TTORATstpSPPriceType	SettlementPrice;

	};

	/// 市场状态
	struct CTORATstpSPMarketStatusField
	{
		 
		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///市场状态
		TTORATstpSPMarketStatusType	MarketStatus;

	};

	/// 交易通知
	struct CTORATstpSPTradingNoticeField
	{
		 
		///通知流水号
		TTORATstpSPSerialType	NoticeSerial;

		///通知日期
		TTORATstpSPDateType	InsertDate;

		///通知时间
		TTORATstpSPTimeType	InsertTime;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///通知消息内容
		TTORATstpSPMessageType	Content;

		///操作员
		TTORATstpSPUserIDType	OperatorID;

	};

	/// 查询交易所
	struct CTORATstpSPQryExchangeField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

	};

	/// 交易所
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

	/// 查询实时行情
	struct CTORATstpSPQryMarketDataField
	{
		 
		///证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

	};

	/// 查询合约信息
	struct CTORATstpSPQrySecurityField
	{
		 
		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

	};

	/// 合约信息
	struct CTORATstpSPSecurityField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///交易所合约代码
		TTORATstpSPExchSecurityIDType	ExchSecurityID;

		///合约名称
		TTORATstpSPSecurityNameType	SecurityName;

		///基础证券代码
		TTORATstpSPSecurityIDType	UnderlyingSecurityID;

		///基础证券名称
		TTORATstpSPSecurityNameType	UnderlyingSecurityName;

		///合约基础商品乘数
		TTORATstpSPVolumeMultipleType	UnderlyingMultiple;

		///执行方式
		TTORATstpSPStrikeModeType	StrikeMode;

		///期权类型
		TTORATstpSPOptionsTypeType	OptionsType;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///产品代码
		TTORATstpSPProductIDType	ProductID;

		///证券类别代码
		TTORATstpSPSecurityTypeType	SecurityType;

		///申报单位
		TTORATstpSPOrderUnitType	OrderUnit;

		///买入交易单位
		TTORATstpSPTradingUnitType	BuyTradingUnit;

		///卖出交易单位
		TTORATstpSPTradingUnitType	SellTradingUnit;

		///市价单买最大下单量
		TTORATstpSPVolumeType	MaxMarketOrderBuyVolume;

		///市价单买最小下单量
		TTORATstpSPVolumeType	MinMarketOrderBuyVolume;

		///限价单买最大下单量
		TTORATstpSPVolumeType	MaxLimitOrderBuyVolume;

		///限价单买最小下单量
		TTORATstpSPVolumeType	MinLimitOrderBuyVolume;

		///市价单卖最大下单量
		TTORATstpSPVolumeType	MaxMarketOrderSellVolume;

		///市价单卖最小下单量
		TTORATstpSPVolumeType	MinMarketOrderSellVolume;

		///限价单卖最大下单量
		TTORATstpSPVolumeType	MaxLimitOrderSellVolume;

		///限价单卖最小下单量
		TTORATstpSPVolumeType	MinLimitOrderSellVolume;

		///数量乘数
		TTORATstpSPVolumeMultipleType	VolumeMultiple;

		///最小变动价位
		TTORATstpSPPriceTickType	PriceTick;

		///持仓类型
		TTORATstpSPPositionTypeType	PositionType;

		///证券状态
		TTORATstpSPSecurityStatusType	SecurityStatus;

		///执行价
		TTORATstpSPPriceType	StrikePrice;

		///首交易日
		TTORATstpSPDateType	FirstDate;

		///最后交易日
		TTORATstpSPDateType	LastDate;

		///行权日
		TTORATstpSPDateType	StrikeDate;

		///到期日
		TTORATstpSPDateType	ExpireDate;

		///交割日
		TTORATstpSPDateType	DelivDate;

		///是否有涨跌幅限制
		TTORATstpSPBoolType	IsUpDownLimit;

		///期权单位保证金
		TTORATstpSPPriceType	MarginUnit;

		///合约前结算价
		TTORATstpSPPriceType	PreSettlementPrice;

		///合约前收盘价
		TTORATstpSPPriceType	PreClosePrice;

		///标的合约前收盘价
		TTORATstpSPPriceType	UnderlyingPreClosePrice;

	};

	/// 查询经纪公司用户与投资者关系
	struct CTORATstpSPQryBUProxyField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///交易用户代码
		TTORATstpSPUserIDType	UserID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

	};

	/// 经纪公司用户与投资者关系
	struct CTORATstpSPBUProxyField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///用户代码
		TTORATstpSPUserIDType	UserID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

	};

	/// 查询User
	struct CTORATstpSPQryUserField
	{
		 
		///用户代码
		TTORATstpSPUserIDType	UserID;

		///用户类型
		TTORATstpSPUserTypeType	UserType;

	};

	/// User
	struct CTORATstpSPUserField
	{
		 
		///用户代码
		TTORATstpSPUserIDType	UserID;

		///用户名称
		TTORATstpSPUserNameType	UserName;

		///用户类型
		TTORATstpSPUserTypeType	UserType;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///登录限制
		TTORATstpSPLoginLimitType	LoginLimit;

		///密码连续输入错误限制
		TTORATstpSPLoginLimitType	PasswordFailLimit;

		///状态
		TTORATstpSPActiveStatusType	Status;

		///联系人
		TTORATstpSPContacterType	Contacter;

		///传真
		TTORATstpSPFaxType	Fax;

		///联系电话
		TTORATstpSPTelephoneType	Telephone;

		///电子邮件
		TTORATstpSPEmailType	Email;

		///通讯地址
		TTORATstpSPAddressType	Address;

		///邮政编码
		TTORATstpSPZipCodeType	ZipCode;

		///开户日期
		TTORATstpSPDateType	OpenDate;

		///销户日期
		TTORATstpSPDateType	CloseDate;

		///通讯流量
		TTORATstpSPCommFluxType	OrderInsertCommFlux;

		///撤单流控
		TTORATstpSPCommFluxType	OrderActionCommFlux;

	};

	/// 查询投资者
	struct CTORATstpSPQryInvestorField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

	};

	/// 投资者
	struct CTORATstpSPInvestorField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///投资者类型
		TTORATstpSPInvestorTypeType	InvestorType;

		///投资者名称
		TTORATstpSPInvestorNameType	InvestorName;

		///证件类型
		TTORATstpSPIdCardTypeType	IdCardType;

		///证件号码
		TTORATstpSPIdCardNoType	IdCardNo;

		///合同编号
		TTORATstpSPContractNoType	ContractNo;

		///开户日期
		TTORATstpSPDateType	OpenDate;

		///销户日期
		TTORATstpSPDateType	CloseDate;

		///状态
		TTORATstpSPActiveStatusType	TradeStatus;

		///预留字段1
		TTORATstpSPBranchIDType	Reserve1;

		///投资者分级类别
		TTORATstpSPInvestorLevelType	InvestorLevel;

		///手机
		TTORATstpSPMobileType	Mobile;

		///联系电话
		TTORATstpSPTelephoneType	Telephone;

		///电子邮件
		TTORATstpSPEmailType	Email;

		///传真
		TTORATstpSPFaxType	Fax;

		///通讯地址
		TTORATstpSPAddressType	Address;

		///邮政编码
		TTORATstpSPZipCodeType	ZipCode;

		///预留字段2
		TTORATstpSPRemarkType	Reserve2;

		///委托方式
		TTORATstpSPOperwaysType	Operways;

		///是否活跃
		TTORATstpSPActiveStatusType	LoginStatus;

		///登录限制
		TTORATstpSPLoginLimitType	LoginLimit;

	};

	/// 查询BrokerUserFunction
	struct CTORATstpSPQryBrokerUserFunctionField
	{
		 
		///交易用户代码
		TTORATstpSPUserIDType	UserID;

	};

	/// BrokerUserFunction
	struct CTORATstpSPBrokerUserFunctionField
	{
		 
		///用户代码
		TTORATstpSPUserIDType	UserID;

		///功能代码
		TTORATstpSPFunctionIDType	FunctionID;

	};

	/// 查询股东账户
	struct CTORATstpSPQryShareholderAccountField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///普通，信用，衍生品等
		TTORATstpSPShareholderIDTypeType	ShareholderIDType;

	};

	/// 股东账户
	struct CTORATstpSPShareholderAccountField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///客户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///交易编码类型
		TTORATstpSPShareholderIDTypeType	ShareholderIDType;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

	};

	/// 查询资金账户
	struct CTORATstpSPQryTradingAccountField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///币种
		TTORATstpSPCurrencyIDType	CurrencyID;

		///资金账户
		TTORATstpSPAccountIDType	AccountID;

		///普通、信用、衍生品等
		TTORATstpSPAccountTypeType	AccountType;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

	};

	/// 资金账户
	struct CTORATstpSPTradingAccountField
	{
		 
		///部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///资金账户代码
		TTORATstpSPAccountIDType	AccountID;

		///币种代码
		TTORATstpSPCurrencyIDType	CurrencyID;

		///资金账户类型
		TTORATstpSPAccountTypeType	AccountType;

		///上日结存
		TTORATstpSPMoneyType	PreDeposit;

		///昨行权待交收冻结资金
		TTORATstpSPMoneyType	PreFrozenCash;

		///可用资金
		TTORATstpSPMoneyType	UsefulMoney;

		///可取资金
		TTORATstpSPMoneyType	FetchLimit;

		///入金金额
		TTORATstpSPMoneyType	Deposit;

		///出金金额
		TTORATstpSPMoneyType	Withdraw;

		///冻结的保证金
		TTORATstpSPMoneyType	FrozenMargin;

		///冻结的资金
		TTORATstpSPMoneyType	FrozenCash;

		///冻结的手续费
		TTORATstpSPMoneyType	FrozenCommission;

		///当前保证金总额
		TTORATstpSPMoneyType	CurrMargin;

		///手续费
		TTORATstpSPMoneyType	Commission;

		///权利金收入
		TTORATstpSPMoneyType	RoyaltyIn;

		///权利金支出
		TTORATstpSPMoneyType	RoyaltyOut;

		///资金账户所属投资者代码
		TTORATstpSPInvestorIDType	AccountOwner;

		///签约银行账户
		TTORATstpSPBankAccountIDType	BankAccountID;

		///银行代码
		TTORATstpSPBankIDType	BankID;

		///当日行权待交收冻结资金
		TTORATstpSPMoneyType	ExcerciseFrozen;

	};

	/// 查询报单
	struct CTORATstpSPQryOrderField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///合约在系统中的编号
		TTORATstpSPSecurityIDType	SecurityID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///客户在系统中的编号，编号唯一且遵循交易所制定的编码规则
		TTORATstpSPShareholderIDType	ShareholderID;

		///报单编号
		TTORATstpSPOrderSysIDType	OrderSysID;

		///Time
		TTORATstpSPTimeType	InsertTimeStart;

		///Time
		TTORATstpSPTimeType	InsertTimeEnd;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

	};

	/// 查询成交
	struct CTORATstpSPQryTradeField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///合约在系统中的编号
		TTORATstpSPSecurityIDType	SecurityID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///客户在系统中的编号，编号唯一且遵循交易所制定的编码规则
		TTORATstpSPShareholderIDType	ShareholderID;

		///成交编号
		TTORATstpSPTradeIDType	TradeID;

		///Time
		TTORATstpSPTimeType	TradeTimeStart;

		///Time
		TTORATstpSPTimeType	TradeTimeEnd;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

	};

	/// 查询投资者持仓
	struct CTORATstpSPQryPositionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///交易账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///多、空
		TTORATstpSPPosiDirectionType	PosiDirection;

		///投机套保标志
		TTORATstpSPHedgeFlagType	HedgeFlag;

	};

	/// 投资者持仓
	struct CTORATstpSPPositionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///客户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///交易日
		TTORATstpSPDateType	TradingDay;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///持仓方向
		TTORATstpSPPosiDirectionType	PosiDirection;

		///持仓方向
		TTORATstpSPHedgeFlagType	HedgeFlag;

		///昨日持仓
		TTORATstpSPVolumeType	HistoryPos;

		///昨日持仓冻结
		TTORATstpSPVolumeType	HistoryPosFrozen;

		///今日买卖持仓
		TTORATstpSPVolumeType	TodayPos;

		///今日买卖持仓冻结
		TTORATstpSPVolumeType	TodayPosFrozen;

		///持仓成本
		TTORATstpSPMoneyType	TotalPosCost;

		///多头冻结（买入开仓+买入平仓）的持仓数量
		TTORATstpSPVolumeType	LongFrozen;

		///空头冻结（卖出开仓+卖出平仓）的持仓数量
		TTORATstpSPVolumeType	ShortFrozen;

		///多头报单冻结的金额（不包含手续费、保证金）
		TTORATstpSPMoneyType	LongFrozenAmount;

		///空头报单冻结的金额（不包含手续费、保证金
		TTORATstpSPMoneyType	ShortFrozenAmount;

		///开仓量
		TTORATstpSPVolumeType	OpenVolume;

		///平仓量
		TTORATstpSPVolumeType	CloseVolume;

		///开仓金额
		TTORATstpSPMoneyType	OpenAmount;

		///平仓金额
		TTORATstpSPMoneyType	CloseAmount;

		///占用的保证金
		TTORATstpSPMoneyType	Margin;

		///冻结的保证金
		TTORATstpSPMoneyType	FrozenMargin;

		///冻结的资金
		TTORATstpSPMoneyType	FrozenCash;

		///冻结的手续费
		TTORATstpSPMoneyType	FrozenCommission;

		///资金差额
		TTORATstpSPMoneyType	CashIn;

		///手续费
		TTORATstpSPMoneyType	Commission;

		///执行冻结
		TTORATstpSPVolumeType	StrikeFrozen;

		///执行冻结金额
		TTORATstpSPMoneyType	StrikeFrozenAmount;

		///上次余额(盘中不变)
		TTORATstpSPVolumeType	PrePosition;

		///最新价
		TTORATstpSPPriceType	LastPrice;

		///昨日持仓组合仓位
		TTORATstpSPVolumeType	HistoryCombPos;

		///今日持仓组合仓位
		TTORATstpSPVolumeType	TodayCombPos;

		///昨日组合持仓拆分冻结
		TTORATstpSPVolumeType	HistoryCombPosSplitFrozen;

		///今日组合持仓拆分冻结
		TTORATstpSPVolumeType	TodayCombPosSplitFrozen;

		///昨日持仓组合冻结
		TTORATstpSPVolumeType	HistoryPosCombFrozen;

		///今日持仓组合冻结
		TTORATstpSPVolumeType	TodayPosCombFrozen;

		///保留字段
		TTORATstpSPMoneyType	OpenPosCost;

		///保留字段
		TTORATstpSPMoneyType	TodayProfit;

	};

	/// 查询基础交易费率
	struct CTORATstpSPQryTradingFeeField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

	};

	/// 基础交易费率
	struct CTORATstpSPTradingFeeField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///产品代码
		TTORATstpSPProductIDType	ProductID;

		///证券类别代码
		TTORATstpSPSecurityTypeType	SecurityType;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///业务类别
		TTORATstpSPBusinessClassType	BusinessClass;

		///系统标识
		TTORATstpSPSystemFlagType	SystemFlag;

		///印花税按金额收取比例
		TTORATstpSPRatioType	StampTaxRatioByAmt;

		///印花税按面值收取比例
		TTORATstpSPRatioType	StampTaxRatioByPar;

		///印花税按数量收取金额
		TTORATstpSPMoneyType	StampTaxFeeByVolume;

		///印花税按笔收取金额
		TTORATstpSPMoneyType	StampTaxFeePerOrder;

		///印花税最低收取金额
		TTORATstpSPMoneyType	StampTaxFeeMin;

		///印花税最高收取金额
		TTORATstpSPMoneyType	StampTaxFeeMax;

		///过户费按金额收取比例
		TTORATstpSPRatioType	TransferRatioByAmt;

		///过户费按面值收取比例
		TTORATstpSPRatioType	TransferRatioByPar;

		///过户费按笔收取金额
		TTORATstpSPMoneyType	TransferFeePerOrder;

		///过户费按数量收取金额
		TTORATstpSPMoneyType	TransferFeeByVolume;

		///过户费最低收取金额
		TTORATstpSPMoneyType	TransferFeeMin;

		///过户费最高收取金额
		TTORATstpSPMoneyType	TransferFeeMax;

		///经手费按金额收取比例
		TTORATstpSPRatioType	HandlingRatioByAmt;

		///经手费按面值收取比例
		TTORATstpSPRatioType	HandlingRatioByPar;

		///经手费按笔收取金额
		TTORATstpSPMoneyType	HandlingFeePerOrder;

		///经手费按数量收取金额
		TTORATstpSPMoneyType	HandlingFeeByVolume;

		///经手费最低收取金额
		TTORATstpSPMoneyType	HandlingFeeMin;

		///经手费最高收取金额
		TTORATstpSPMoneyType	HandlingFeeMax;

		///证管费按金额收取比例
		TTORATstpSPRatioType	RegulateRatioByAmt;

		///证管费按面值收取比例
		TTORATstpSPRatioType	RegulateRatioByPar;

		///证管费按数量收取金额
		TTORATstpSPMoneyType	RegulateFeeByVolume;

		///证管费按笔收取金额
		TTORATstpSPMoneyType	RegulateFeePerOrder;

		///证管费最低收取金额
		TTORATstpSPMoneyType	RegulateFeeMin;

		///证管费最高收取金额
		TTORATstpSPMoneyType	RegulateFeeMax;

		///结算费按金额收取比例
		TTORATstpSPRatioType	SettlementRatioByAmt;

		///结算费按面值收取比例
		TTORATstpSPRatioType	SettlementRatioByPar;

		///结算费按笔收取金额
		TTORATstpSPMoneyType	SettlementFeePerOrder;

		///结算费按数量收取金额
		TTORATstpSPMoneyType	SettlementFeeByVolume;

		///结算费最低收取金额
		TTORATstpSPMoneyType	SettlementFeeMin;

		///结算费最高收取金额
		TTORATstpSPMoneyType	SettlementFeeMax;

	};

	/// 查询佣金费率
	struct CTORATstpSPQryInvestorTradingFeeField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

	};

	/// 佣金费率
	struct CTORATstpSPInvestorTradingFeeField
	{
		 
		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///产品代码
		TTORATstpSPProductIDType	ProductID;

		///证券类别代码
		TTORATstpSPSecurityTypeType	SecurityType;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///业务类别
		TTORATstpSPBusinessClassType	BusinessClass;

		///佣金类型
		TTORATstpSPBrokerageTypeType	BrokerageType;

		///佣金按金额收取比例
		TTORATstpSPRatioType	RatioByAmt;

		///佣金按面值收取比例
		TTORATstpSPRatioType	RatioByPar;

		///佣金按笔收取金额
		TTORATstpSPMoneyType	FeePerOrder;

		///佣金最低收取金额
		TTORATstpSPMoneyType	FeeMin;

		///佣金最高收取金额
		TTORATstpSPMoneyType	FeeMax;

		///佣金按数量收取金额
		TTORATstpSPMoneyType	FeeByVolume;

	};

	/// 查询保证金费率
	struct CTORATstpSPQryInvestorMarginFeeField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///产品代码
		TTORATstpSPProductIDType	ProductID;

		///证券类别代码
		TTORATstpSPSecurityTypeType	SecurityType;

		///业务类别
		TTORATstpSPBusinessClassType	BusinessClass;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// 保证金费率
	struct CTORATstpSPInvestorMarginFeeField
	{
		 
		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///产品代码
		TTORATstpSPProductIDType	ProductID;

		///证券类别代码
		TTORATstpSPSecurityTypeType	SecurityType;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///业务类别
		TTORATstpSPBusinessClassType	BusinessClass;

		///佣金按数量收取金额
		TTORATstpSPMoneyType	FeeByVolume;

		///上浮比率
		TTORATstpSPRatioType	UpperRatio;

	};

	/// 查询报单明细资金
	struct CTORATstpSPQryOrderFundDetailField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///系统报单编号
		TTORATstpSPOrderSysIDType	OrderSysID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

	};

	/// 报单明细资金
	struct CTORATstpSPOrderFundDetailField
	{
		 
		///交易日期
		TTORATstpSPDateType	TradingDay;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///系统报单编号
		TTORATstpSPOrderSysIDType	OrderSysID;

		///交易所交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///交易所交易单元代码
		TTORATstpSPOrderLocalIDType	OrderLocalID;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///资金账户代码
		TTORATstpSPAccountIDType	AccountID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///成交金额
		TTORATstpSPMoneyType	TradeAmount;

		///印花税
		TTORATstpSPMoneyType	StampTaxFee;

		///过户费
		TTORATstpSPMoneyType	TransferFee;

		///经手费
		TTORATstpSPMoneyType	HandlingFee;

		///证管费
		TTORATstpSPMoneyType	RegulateFee;

		///佣金
		TTORATstpSPMoneyType	BrokerageFee;

		///结算费
		TTORATstpSPMoneyType	SettlementFee;

		///保证金
		TTORATstpSPMoneyType	Margin;

		///报单初始冻结金额
		TTORATstpSPMoneyType	OrderCashFrozen;

		///初始冻结费用合计
		TTORATstpSPMoneyType	TotalFeeFrozen;

		///申报金额
		TTORATstpSPMoneyType	OrderAmount;

	};

	/// 查询资金转移流水
	struct CTORATstpSPQryFundTransferDetailField
	{
		 
		///资金账户代码
		TTORATstpSPAccountIDType	AccountID;

		///币种
		TTORATstpSPCurrencyIDType	CurrencyID;

		///转移方向
		TTORATstpSPTransferDirectionType	TransferDirection;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

	};

	/// 资金转移流水
	struct CTORATstpSPFundTransferDetailField
	{
		 
		///转账流水号
		TTORATstpSPIntSerialType	FundSerial;

		///申请流水号
		TTORATstpSPIntSerialType	ApplySerial;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///会话编号
		TTORATstpSPSessionIDType	SessionID;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///资金账户代码
		TTORATstpSPAccountIDType	AccountID;

		///币种
		TTORATstpSPCurrencyIDType	CurrencyID;

		///转移方向
		TTORATstpSPTransferDirectionType	TransferDirection;

		///出入金金额
		TTORATstpSPMoneyType	Amount;

		///转移状态
		TTORATstpSPTransferStatusType	TransferStatus;

		///操作来源
		TTORATstpSPOperateSourceType	OperateSource;

		///操作人员
		TTORATstpSPUserIDType	OperatorID;

		///操作日期
		TTORATstpSPDateType	OperateDate;

		///操作时间
		TTORATstpSPTimeType	OperateTime;

		///状态信息
		TTORATstpSPErrorMsgType	StatusMsg;

		///签约银行账户
		TTORATstpSPBankAccountIDType	BankAccountID;

		///银行代码
		TTORATstpSPBankIDType	BankID;

	};

	/// 查询持仓转移流水
	struct CTORATstpSPQryPositionTransferDetailField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///转移方向
		TTORATstpSPTransferDirectionType	TransferDirection;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///多、空
		TTORATstpSPPosiDirectionType	PosiDirection;

		///投机套保标志
		TTORATstpSPHedgeFlagType	HedgeFlag;

	};

	/// 持仓转移流水
	struct CTORATstpSPPositionTransferDetailField
	{
		 
		///流水号
		TTORATstpSPIntSerialType	PositionSerial;

		///申请流水号
		TTORATstpSPIntSerialType	ApplySerial;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///会话编号
		TTORATstpSPSessionIDType	SessionID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///持仓方向
		TTORATstpSPPosiDirectionType	PosiDirection;

		///投机套保标志
		TTORATstpSPHedgeFlagType	HedgeFlag;

		///证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///交易日期
		TTORATstpSPDateType	TradingDay;

		///转移方向
		TTORATstpSPTransferDirectionType	TransferDirection;

		///转移持仓类型
		TTORATstpSPTransferPositionTypeType	TransferPositionType;

		///昨日仓位数量
		TTORATstpSPVolumeType	HistoryVolume;

		///今日买卖仓位数量
		TTORATstpSPVolumeType	TodayVolume;

		///转移状态
		TTORATstpSPTransferStatusType	TransferStatus;

		///操作人员
		TTORATstpSPUserIDType	OperatorID;

		///操作日期
		TTORATstpSPDateType	OperateDate;

		///操作时间
		TTORATstpSPTimeType	OperateTime;

		///状态信息
		TTORATstpSPErrorMsgType	StatusMsg;

	};

	/// 查询撤单
	struct CTORATstpSPQryOrderActionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///全系统的唯一报单编号。
		TTORATstpSPOrderLocalIDType	CancelOrderLocalID;

		///本地报单编号
		TTORATstpSPOrderLocalIDType	OrderLocalID;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

	};

	/// 撤单
	struct CTORATstpSPOrderActionField
	{
		 
		///交易日
		TTORATstpSPDateType	TradingDay;

		///操作本地编号
		TTORATstpSPOrderLocalIDType	CancelOrderLocalID;

		///撤单前置编号
		TTORATstpSPFrontIDType	ActionFrontID;

		///撤单会话编号
		TTORATstpSPSessionIDType	ActionSessionID;

		///撤单引用
		TTORATstpSPOrderRefType	OrderActionRef;

		///本地被撤报单编号
		TTORATstpSPOrderLocalIDType	OrderLocalID;

		///报单编号
		TTORATstpSPOrderSysIDType	OrderSysID;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///会话编号
		TTORATstpSPSessionIDType	SessionID;

		///报单引用
		TTORATstpSPOrderRefType	OrderRef;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///股东账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///操作标志
		TTORATstpSPOrderActionFlagType	OrderActionFlag;

		///撤单状态
		TTORATstpSPCancelOrderStatusType	CancelOrderStatus;

		///撤单数量
		TTORATstpSPVolumeType	VolumeCanceled;

		///状态信息
		TTORATstpSPStatusMsgType	StatusMsg;

		///系统错误代码
		TTORATstpSPErrorIDType	ErrorID;

		///交易所营业部编码
		TTORATstpSPBranchIDType	BranchID;

		///交易所交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///报单申报用户
		TTORATstpSPUserIDType	InsertUserID;

		///操作日期
		TTORATstpSPDateType	InsertDate;

		///操作时间
		TTORATstpSPTimeType	InsertTime;

		///申报时间(毫秒)
		TTORATstpSPMillisecType	InsertMillisec;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///请求编号
		TTORATstpSPRequestIDType	RequestID;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

		///移动设备手机号
		TTORATstpSPMobileType	Mobile;

	};

	/// 查询投资者现货持仓
	struct CTORATstpSPQryStockPositionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///交易账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

	};

	/// 投资者现货持仓
	struct CTORATstpSPStockPositionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///客户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///交易日
		TTORATstpSPDateType	TradingDay;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///昨日持仓
		TTORATstpSPVolumeType	HistoryPos;

		///昨日持仓冻结
		TTORATstpSPVolumeType	HistoryPosFrozen;

		///今日买卖持仓
		TTORATstpSPVolumeType	TodayBSPos;

		///今日买卖持仓冻结
		TTORATstpSPVolumeType	TodayBSPosFrozen;

		///今日申赎持仓
		TTORATstpSPVolumeType	TodayPRPos;

		///今日申赎持仓冻结
		TTORATstpSPVolumeType	TodayPRPosFrozen;

	};

	/// 查询锁定委托
	struct CTORATstpSPQryLockField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///合约在系统中的编号
		TTORATstpSPSecurityIDType	SecurityID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///客户在系统中的编号，编号唯一且遵循交易所制定的编码规则
		TTORATstpSPShareholderIDType	ShareholderID;

		///报单编号
		TTORATstpSPOrderSysIDType	LockSysID;

		///Time
		TTORATstpSPTimeType	InsertTimeStart;

		///Time
		TTORATstpSPTimeType	InsertTimeEnd;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///锁定类别
		TTORATstpSPLockTypeType	LockType;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

	};

	/// 查询行权委托
	struct CTORATstpSPQryExerciseField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///合约在系统中的编号
		TTORATstpSPSecurityIDType	SecurityID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///全系统的唯一报单编号
		TTORATstpSPOrderSysIDType	ExerciseSysID;

		///Time
		TTORATstpSPTimeType	InsertTimeStart;

		///Time
		TTORATstpSPTimeType	InsertTimeEnd;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

	};

	/// 查询投资者锁定持仓
	struct CTORATstpSPQryLockPositionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///交易账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

	};

	/// 投资者锁定持仓
	struct CTORATstpSPLockPositionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///客户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///交易日
		TTORATstpSPDateType	TradingDay;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///锁定持仓总数量
		TTORATstpSPVolumeType	Volume;

		///锁定持仓冻结数量
		TTORATstpSPVolumeType	FrozenVolume;

		///昨日持仓
		TTORATstpSPVolumeType	HistoryPos;

		///今日买卖持仓
		TTORATstpSPVolumeType	TodayBSPos;

		///今日申赎持仓
		TTORATstpSPVolumeType	TodayPRPos;

	};

	/// 查询行权撤单
	struct CTORATstpSPQryExerciseActionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///全系统的唯一报单编号。
		TTORATstpSPOrderLocalIDType	CancelExerciseLocalID;

		///本地报单编号
		TTORATstpSPOrderLocalIDType	ExerciseLocalID;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

	};

	/// 行权撤单
	struct CTORATstpSPExerciseActionField
	{
		 
		///交易日
		TTORATstpSPDateType	TradingDay;

		///交易所营业部编码
		TTORATstpSPBranchIDType	BranchID;

		///交易所交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///本地行权撤单编号
		TTORATstpSPOrderLocalIDType	CancelExerciseLocalID;

		///撤单前置编号
		TTORATstpSPFrontIDType	ActionFrontID;

		///撤单会话编号
		TTORATstpSPSessionIDType	ActionSessionID;

		///行权撤单引用
		TTORATstpSPOrderRefType	ExerciseActionRef;

		///被撤本地行权报单编号
		TTORATstpSPOrderLocalIDType	ExerciseLocalID;

		///被撤系统行权报单编号
		TTORATstpSPOrderSysIDType	ExerciseSysID;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///会话编号
		TTORATstpSPSessionIDType	SessionID;

		///行权引用
		TTORATstpSPOrderRefType	ExerciseRef;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///股东账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///委托操作标志
		TTORATstpSPOrderActionFlagType	ExerciseActionFlag;

		///撤单状态
		TTORATstpSPCancelOrderStatusType	CancelOrderStatus;

		///撤单数量
		TTORATstpSPVolumeType	VolumeCanceled;

		///状态信息
		TTORATstpSPStatusMsgType	StatusMsg;

		///系统错误代码
		TTORATstpSPErrorIDType	ErrorID;

		///报单申报用户
		TTORATstpSPUserIDType	InsertUserID;

		///操作日期
		TTORATstpSPDateType	InsertDate;

		///操作时间
		TTORATstpSPTimeType	InsertTime;

		///申报时间(毫秒)
		TTORATstpSPMillisecType	InsertMillisec;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///请求编号
		TTORATstpSPRequestIDType	RequestID;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

		///移动设备手机号
		TTORATstpSPMobileType	Mobile;

	};

	/// 查询锁定撤单
	struct CTORATstpSPQryLockActionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///全系统的唯一报单编号。
		TTORATstpSPOrderLocalIDType	CancelLockLocalID;

		///本地报单顺序号
		TTORATstpSPOrderLocalIDType	LockLocalID;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

	};

	/// 锁定撤单
	struct CTORATstpSPLockActionField
	{
		 
		///交易日
		TTORATstpSPDateType	TradingDay;

		///交易所营业部编码
		TTORATstpSPBranchIDType	BranchID;

		///交易所交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///本地锁定撤单编号
		TTORATstpSPOrderLocalIDType	CancelLockLocalID;

		///撤单前置编号
		TTORATstpSPFrontIDType	ActionFrontID;

		///撤单会话编号
		TTORATstpSPSessionIDType	ActionSessionID;

		///锁定撤单引用
		TTORATstpSPOrderRefType	LockActionRef;

		///被撤本地锁定报单编号
		TTORATstpSPOrderLocalIDType	LockLocalID;

		///被撤系统锁定报单编号
		TTORATstpSPOrderSysIDType	LockSysID;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///会话编号
		TTORATstpSPSessionIDType	SessionID;

		///锁定引用
		TTORATstpSPOrderRefType	LockRef;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///股东账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///锁定操作标志
		TTORATstpSPOrderActionFlagType	LockActionFlag;

		///撤单状态
		TTORATstpSPCancelOrderStatusType	CancelOrderStatus;

		///撤单数量
		TTORATstpSPVolumeType	VolumeCanceled;

		///状态信息
		TTORATstpSPStatusMsgType	StatusMsg;

		///系统错误代码
		TTORATstpSPErrorIDType	ErrorID;

		///报单申报用户
		TTORATstpSPUserIDType	InsertUserID;

		///操作日期
		TTORATstpSPDateType	InsertDate;

		///操作时间
		TTORATstpSPTimeType	InsertTime;

		///申报时间(毫秒)
		TTORATstpSPMillisecType	InsertMillisec;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///请求编号
		TTORATstpSPRequestIDType	RequestID;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

		///移动设备手机号
		TTORATstpSPMobileType	Mobile;

	};

	/// 查询持仓转移流水
	struct CTORATstpSPQryStockPositionTransferDetailField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///个股期权标的现货转移原因
		TTORATstpSPSPStockTransferReasonType	SPStockTransferReason;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///转移持仓类型
		TTORATstpSPTransferPositionTypeType	TransferPositionType;

	};

	/// 持仓转移流水
	struct CTORATstpSPStockPositionTransferDetailField
	{
		 
		///流水号
		TTORATstpSPIntSerialType	PositionSerial;

		///申请流水号
		TTORATstpSPIntSerialType	ApplySerial;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///交易账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///现货系统投资者代码
		TTORATstpSPInvestorIDType	OuterInvestorID;

		///现货系统投资单元代码
		TTORATstpSPBusinessUnitIDType	OuterBusinessUnitID;

		///现货系统交易账户代码
		TTORATstpSPShareholderIDType	OuterShareholderID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///交易日期
		TTORATstpSPDateType	TradingDay;

		///个股期权标的现货转移原因
		TTORATstpSPSPStockTransferReasonType	SPStockTransferReason;

		///转移持仓类型
		TTORATstpSPTransferPositionTypeType	TransferPositionType;

		///昨日仓位数量
		TTORATstpSPVolumeType	HistoryVolume;

		///今日买卖仓位数量
		TTORATstpSPVolumeType	TodayBSVolume;

		///今日申赎持仓数量
		TTORATstpSPVolumeType	TodayPRVolume;

		///转移状态
		TTORATstpSPTransferStatusType	TransferStatus;

		///操作人员
		TTORATstpSPUserIDType	OperatorID;

		///操作日期
		TTORATstpSPDateType	OperateDate;

		///操作时间
		TTORATstpSPTimeType	OperateTime;

		///状态信息
		TTORATstpSPErrorMsgType	StatusMsg;

		///仓位转移现货系统流水号
		TTORATstpSPIntSerialType	StockPositionSerial;

		///是否冲正
		TTORATstpSPBoolType	bRepeal;

		///原始仓位转移流水号
		TTORATstpSPIntSerialType	OriginPositionSerial;

		///操作来源
		TTORATstpSPOperateSourceType	OperateSource;

	};

	/// 查询交易通知
	struct CTORATstpSPQryTradingNoticeField
	{
		 
		///投资者代码
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

	/// 查询证券处置
	struct CTORATstpSPQryStockDisposalField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///个股期权标的合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///系统证券处置编号
		TTORATstpSPOrderSysIDType	StockDisposalSysID;

		///Time
		TTORATstpSPTimeType	InsertTimeStart;

		///Time
		TTORATstpSPTimeType	InsertTimeEnd;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

	};

	/// 查询证券处置撤单
	struct CTORATstpSPQryStockDisposalActionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///全系统的唯一报单编号。
		TTORATstpSPOrderLocalIDType	CancelStockDisposalLocalID;

		///本地证券处置编号
		TTORATstpSPOrderLocalIDType	StockDisposalLocalID;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

	};

	/// 证券处置撤单
	struct CTORATstpSPStockDisposalActionField
	{
		 
		///交易日
		TTORATstpSPDateType	TradingDay;

		///交易所营业部编码
		TTORATstpSPBranchIDType	BranchID;

		///交易所交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///本地证券处置撤单编号
		TTORATstpSPOrderLocalIDType	CancelStockDisposalLocalID;

		///撤单前置编号
		TTORATstpSPFrontIDType	ActionFrontID;

		///撤单会话编号
		TTORATstpSPSessionIDType	ActionSessionID;

		///证券处置撤单引用
		TTORATstpSPOrderRefType	StockDisposalActionRef;

		///被撤本地证券处置报单编号
		TTORATstpSPOrderLocalIDType	StockDisposalLocalID;

		///被撤证券处置系统报单编号
		TTORATstpSPOrderSysIDType	StockDisposalSysID;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///会话编号
		TTORATstpSPSessionIDType	SessionID;

		///被撤证券处置引用
		TTORATstpSPOrderRefType	StockDisposalRef;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///股东账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///证券处置操作标志
		TTORATstpSPOrderActionFlagType	StockDisposalActionFlag;

		///撤单状态
		TTORATstpSPCancelOrderStatusType	CancelStockDisposalStatus;

		///撤单数量
		TTORATstpSPVolumeType	VolumeCanceled;

		///状态信息
		TTORATstpSPStatusMsgType	StatusMsg;

		///系统错误代码
		TTORATstpSPErrorIDType	ErrorID;

		///报单申报用户
		TTORATstpSPUserIDType	InsertUserID;

		///操作日期
		TTORATstpSPDateType	InsertDate;

		///操作时间
		TTORATstpSPTimeType	InsertTime;

		///申报时间(毫秒)
		TTORATstpSPMillisecType	InsertMillisec;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///请求编号
		TTORATstpSPRequestIDType	RequestID;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

		///电话
		TTORATstpSPMobileType	Mobile;

	};

	/// 查询条件单
	struct CTORATstpSPQryCondOrderField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///报单编号
		TTORATstpSPCondOrderIDType	CondOrderID;

		///Time
		TTORATstpSPTimeType	InsertTimeStart;

		///Time
		TTORATstpSPTimeType	InsertTimeEnd;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

	};

	/// 条件单
	struct CTORATstpSPCondOrderField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///股东账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///买卖方向
		TTORATstpSPDirectionType	Direction;

		///条件单价格类型
		TTORATstpSPOrderPriceTypeType	OrderPriceType;

		///条件单数量类型
		TTORATstpSPOrderVolumeTypeType	OrderVolumeType;

		///有效期类型
		TTORATstpSPTimeConditionType	TimeCondition;

		///成交量类型
		TTORATstpSPVolumeConditionType	VolumeCondition;

		///最小成交量
		TTORATstpSPVolumeType	MinVolume;

		///强平原因
		TTORATstpSPForceCloseReasonType	ForceCloseReason;

		///报单价格
		TTORATstpSPPriceType	LimitPrice;

		///报单数量
		TTORATstpSPVolumeType	VolumeTotalOriginal;

		///组合开平标志
		TTORATstpSPCombOffsetFlagType	CombOffsetFlag;

		///组合投机套保标志
		TTORATstpSPCombHedgeFlagType	CombHedgeFlag;

		///条件报单引用
		TTORATstpSPOrderRefType	CondOrderRef;

		///资金账户代码
		TTORATstpSPAccountIDType	AccountID;

		///请求编号
		TTORATstpSPRequestIDType	RequestID;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///条件报单编号
		TTORATstpSPCondOrderIDType	CondOrderID;

		///终端信息
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///触发条件
		TTORATstpSPContingentConditionType	ContingentCondition;

		///条件价
		TTORATstpSPPriceType	ConditionPrice;

		///价格浮动tick数
		TTORATstpSPVolumeType	PriceTicks;

		///数量浮动倍数
		TTORATstpSPVolumeMultipleType	VolumeMultiple;

		///相关前置编号
		TTORATstpSPFrontIDType	RelativeFrontID;

		///相关会话编号
		TTORATstpSPSessionIDType	RelativeSessionID;

		///相关条件参数
		TTORATstpSPRelativeCondParamType	RelativeParam;

		///附加触发条件
		TTORATstpSPContingentConditionType	AppendContingentCondition;

		///附加条件价
		TTORATstpSPPriceType	AppendConditionPrice;

		///附加相关前置编号
		TTORATstpSPFrontIDType	AppendRelativeFrontID;

		///附加相关会话编号
		TTORATstpSPSessionIDType	AppendRelativeSessionID;

		///附加相关条件参数
		TTORATstpSPRelativeCondParamType	AppendRelativeParam;

		///交易日
		TTORATstpSPDateType	TradingDay;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///会话编号
		TTORATstpSPSessionIDType	SessionID;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///条件单状态
		TTORATstpSPCondOrderStatusType	CondOrderStatus;

		///状态信息
		TTORATstpSPStatusMsgType	StatusMsg;

		///报单申报用户
		TTORATstpSPUserIDType	InsertUserID;

		///报单日期
		TTORATstpSPDateType	InsertDate;

		///委托时间
		TTORATstpSPTimeType	InsertTime;

		///委托毫秒
		TTORATstpSPMillisecType	InsertMillisec;

		///撤销时间
		TTORATstpSPTimeType	CancelTime;

		///撤销用户
		TTORATstpSPUserIDType	CancelUserID;

		///触发时间
		TTORATstpSPTimeType	ActiveTime;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

		///移动设备手机号
		TTORATstpSPMobileType	Mobile;

	};

	/// 查询条件单撤单
	struct CTORATstpSPQryCondOrderActionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///一个交易所的编号
		TTORATstpSPExchangeIDType	ExchangeID;

		///股东账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

	};

	/// 条件单撤单
	struct CTORATstpSPCondOrderActionField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///请求编号
		TTORATstpSPRequestIDType	RequestID;

		///条件单操作引用
		TTORATstpSPOrderRefType	CondOrderActionRef;

		///条件单引用
		TTORATstpSPOrderRefType	CondOrderRef;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///会话编号
		TTORATstpSPSessionIDType	SessionID;

		///条件单编号
		TTORATstpSPCondOrderIDType	CondOrderID;

		///操作标志
		TTORATstpSPOrderActionFlagType	OrderActionFlag;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///条件单撤单编号
		TTORATstpSPCondOrderIDType	CancelCondOrderID;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///MAC地址
		TTORATstpSPMacAddressType	MacAddress;

		///终端信息
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///股东账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///申报用户
		TTORATstpSPUserIDType	InsertUserID;

		///申报日期
		TTORATstpSPDateType	InsertDate;

		///申报时间
		TTORATstpSPTimeType	InsertTime;

		///申报毫秒
		TTORATstpSPMillisecType	InsertMillisec;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

		///移动设备手机号
		TTORATstpSPMobileType	Mobile;

	};

	/// 查询投资者限仓额度
	struct CTORATstpSPQryInvestorLimitPositionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///标的证券代码
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// 投资者限仓额度
	struct CTORATstpSPInvestorLimitPositionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///标的证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///总持仓限额
		TTORATstpSPVolumeType	TotalPositionLimit;

		///多头持仓限额
		TTORATstpSPVolumeType	LongPositionLimit;

		///单日买入开仓限额
		TTORATstpSPVolumeType	TodayBuyOpenLimit;

		///单日卖出开仓限额
		TTORATstpSPVolumeType	TodaySellOpenLimit;

		///单日备兑开仓限额
		TTORATstpSPVolumeType	TodayCoveredOpenLimit;

		///单日开仓限额
		TTORATstpSPVolumeType	TodayOpenLimit;

		///认购多头持仓限额
		TTORATstpSPVolumeType	LongCallPositionLimit;

		///认沽多头持仓限额
		TTORATstpSPVolumeType	LongPutPositionLimit;

		///标的多头持仓限额
		TTORATstpSPVolumeType	LongUnderlyingPositionLimit;

		///标的空头持仓限额
		TTORATstpSPVolumeType	ShortUnderlyingPositionLimit;

		///总持仓冻结额度
		TTORATstpSPVolumeType	TotalPositionFrozen;

		///多头持仓冻结额度
		TTORATstpSPVolumeType	LongPositionFrozen;

		///单日买入开仓冻结额度
		TTORATstpSPVolumeType	TodayBuyOpenFrozen;

		///单日卖出开仓冻结额度
		TTORATstpSPVolumeType	TodaySellOpenFrozen;

		///单日备兑开仓冻结额度
		TTORATstpSPVolumeType	TodayCoveredOpenFrozen;

		///单日开仓冻结额度
		TTORATstpSPVolumeType	TodayOpenFrozen;

		///认购多头持仓冻结额度
		TTORATstpSPVolumeType	LongCallPositionFrozen;

		///认沽多头持仓冻结额度
		TTORATstpSPVolumeType	LongPutPositionFrozen;

		///标的多头持仓冻结额度
		TTORATstpSPVolumeType	LongUnderlyingPositionFrozen;

		///标的空头持仓冻结额度
		TTORATstpSPVolumeType	ShortUnderlyingPositionFrozen;

	};

	/// 查询投资者限额
	struct CTORATstpSPQryInvestorLimitAmountField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

	};

	/// 投资者限额
	struct CTORATstpSPInvestorLimitAmountField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///多头金额限额
		TTORATstpSPMoneyType	LongAmountLimit;

		///多头金额冻结
		TTORATstpSPMoneyType	LongAmountFrozen;

	};

	/// 查询组合撤单
	struct CTORATstpSPQryCombOrderActionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///全系统的唯一的组合报单撤单编号
		TTORATstpSPOrderLocalIDType	CancelCombOrderLocalID;

		///本地组合报单编号
		TTORATstpSPOrderLocalIDType	CombOrderLocalID;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

	};

	/// 组合撤单
	struct CTORATstpSPCombOrderActionField
	{
		 
		///交易日
		TTORATstpSPDateType	TradingDay;

		///交易所营业部编码
		TTORATstpSPBranchIDType	BranchID;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///本地组合委托撤单编号
		TTORATstpSPOrderLocalIDType	CancelCombOrderLocalID;

		///组合撤单前置编号
		TTORATstpSPFrontIDType	ActionFrontID;

		///组合撤单会话编号
		TTORATstpSPSessionIDType	ActionSessionID;

		///组合撤单引用
		TTORATstpSPOrderRefType	CombOrderActionRef;

		///被撤本地组合委托报单编号
		TTORATstpSPOrderLocalIDType	CombOrderLocalID;

		///被撤系统组合报单编号
		TTORATstpSPOrderSysIDType	CombOrderSysID;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///会话编号
		TTORATstpSPSessionIDType	SessionID;

		///组合报单引用
		TTORATstpSPOrderRefType	OrderRef;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///股东账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///组合代码
		TTORATstpSPSecurityIDType	SecurityID;

		///组合委托操作标志
		TTORATstpSPOrderActionFlagType	CombOrderActionFlag;

		///撤单状态
		TTORATstpSPCancelOrderStatusType	CancelOrderStatus;

		///撤单数量
		TTORATstpSPVolumeType	VolumeCanceled;

		///状态信息
		TTORATstpSPStatusMsgType	StatusMsg;

		///系统错误代码
		TTORATstpSPErrorIDType	ErrorID;

		///报单申报用户
		TTORATstpSPUserIDType	InsertUserID;

		///操作日期
		TTORATstpSPDateType	InsertDate;

		///操作时间
		TTORATstpSPTimeType	InsertTime;

		///申报时间(毫秒)
		TTORATstpSPMillisecType	InsertMillisec;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///请求编号
		TTORATstpSPRequestIDType	RequestID;

		///终端信息
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

		///移动设备手机号
		TTORATstpSPMobileType	Mobile;

	};

	/// 查询组合委托
	struct CTORATstpSPQryCombOrderField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///组合合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///客户在系统中的编号，编号唯一且遵循交易所制定的编码规则
		TTORATstpSPShareholderIDType	ShareholderID;

		///组合系统编号
		TTORATstpSPOrderSysIDType	CombOrderSysID;

		///Time
		TTORATstpSPTimeType	InsertTimeStart;

		///Time
		TTORATstpSPTimeType	InsertTimeEnd;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///组合策略
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

		///组合报单类别
		TTORATstpSPCombDirectionType	CombDirection;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

	};

	/// 查询投资者组合持仓
	struct CTORATstpSPQryCombPositionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///组合证券代码(A&B)
		TTORATstpSPSecurityIDType	SecurityID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///交易账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///组合策略(CNSJC/CXSJC/PXSJC/PNSJC/KS/KKS/ZBD)
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

	};

	/// 投资者组合持仓
	struct CTORATstpSPCombPositionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///客户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///交易日
		TTORATstpSPDateType	TradingDay;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///组合证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///组合策略
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

		///昨日持仓
		TTORATstpSPVolumeType	HistoryPos;

		///昨日持仓冻结
		TTORATstpSPVolumeType	HistoryPosFrozen;

		///今日买卖持仓
		TTORATstpSPVolumeType	TodayPos;

		///今日买卖持仓冻结
		TTORATstpSPVolumeType	TodayPosFrozen;

		///占用的保证金
		TTORATstpSPMoneyType	Margin;

		///冻结的保证金
		TTORATstpSPMoneyType	FrozenMargin;

		///冻结的手续费
		TTORATstpSPMoneyType	FrozenCommission;

		///手续费
		TTORATstpSPMoneyType	Commission;

		///上次余额(盘中不变)
		TTORATstpSPVolumeType	PrePosition;

	};

	/// 查询投资者组合持仓明细
	struct CTORATstpSPQryCombPosDetailField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///组合合约代码
		TTORATstpSPSecurityIDType	CombSecurityID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///交易账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///组合策略
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

		///交易所组合编码
		TTORATstpSPExchangeCombIDType	ExchangeCombID;

		///组合状态
		TTORATstpSPCombinationStatusType	CombinationStatus;

	};

	/// 投资者组合持仓明细
	struct CTORATstpSPCombPosDetailField
	{
		 
		///交易日
		TTORATstpSPDateType	TradingDay;

		///交易所组合编码
		TTORATstpSPExchangeCombIDType	ExchangeCombID;

		///组合策略
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

		///组合证券代码
		TTORATstpSPSecurityIDType	CombSecurityID;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///客户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///昨日持仓
		TTORATstpSPVolumeType	HistoryPos;

		///今日买卖持仓
		TTORATstpSPVolumeType	TodayPos;

		///组合时期
		TTORATstpSPDateType	TradeDate;

		///组合时间
		TTORATstpSPTimeType	TradeTime;

		///组合状态
		TTORATstpSPCombinationStatusType	CombinationStatus;

		///成份合约个数，最多四条腿
		TTORATstpSPRecordCntType	NoLegs;

		///第一腿合约代码
		TTORATstpSPSecurityIDType	Leg1SecurityID;

		///第一腿昨日组合数量
		TTORATstpSPVolumeType	Leg1HistoryPos;

		///第一腿今日组合数量
		TTORATstpSPVolumeType	Leg1TodayPos;

		///第一腿持仓方向
		TTORATstpSPPosiDirectionType	Leg1PosiDirection;

		///第一腿期权类型
		TTORATstpSPOptionsTypeType	Leg1OptionsType;

		///第二腿合约代码
		TTORATstpSPSecurityIDType	Leg2SecurityID;

		///第二腿昨日组合数量
		TTORATstpSPVolumeType	Leg2HistoryPos;

		///第二腿今日组合数量
		TTORATstpSPVolumeType	Leg2TodayPos;

		///第二腿持仓方向
		TTORATstpSPPosiDirectionType	Leg2PosiDirection;

		///第二腿期权类型
		TTORATstpSPOptionsTypeType	Leg2OptionsType;

		///拆分冻结的昨日组合数量
		TTORATstpSPVolumeType	HistoryPosSplitFrozen;

		///拆分冻结的今日组合数量
		TTORATstpSPVolumeType	TodayPosSplitFrozen;

		///拆分冻结的第一腿昨日组合数量
		TTORATstpSPVolumeType	Leg1HistoryPosSplitFrozen;

		///拆分冻结的第一腿今日组合数量
		TTORATstpSPVolumeType	Leg1TodayPosSplitFrozen;

		///拆分冻结的第二腿昨日组合数量
		TTORATstpSPVolumeType	Leg2HistoryPosSplitFrozen;

		///拆分冻结的第二腿今日组合数量
		TTORATstpSPVolumeType	Leg2TodayPosSplitFrozen;

	};

	/// 查询行权指派明细
	struct CTORATstpSPQryExerciseAppointmentField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///行权日期
		TTORATstpSPDateType	ExerciseDay;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///客户在系统中的编号，编号唯一且遵循交易所制定的编码规则
		TTORATstpSPShareholderIDType	ShareholderID;

		///资金账户
		TTORATstpSPAccountIDType	AccountID;

		///合约在系统中的编号
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// 行权指派明细
	struct CTORATstpSPExerciseAppointmentField
	{
		 
		///投资者行权指派明细
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///行权日期
		TTORATstpSPDateType	ExerciseDay;

		///交易所交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///股东账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///资金账户代码
		TTORATstpSPAccountIDType	AccountID;

		///币种
		TTORATstpSPCurrencyIDType	CurrencyID;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///期权类型
		TTORATstpSPOptionsTypeType	OptionsType;

		///合约单位
		TTORATstpSPVolumeType	OptionUnit;

		///标的证券代码
		TTORATstpSPSecurityIDType	UnderlyingSecurityID;

		///行权数量
		TTORATstpSPVolumeType	ExerciseVolume;

		///行权价
		TTORATstpSPMoneyType	ExercisePrice;

		///行权方向
		TTORATstpSPExerciseDirectionType	ExerciseDirection;

		///备兑标志
		TTORATstpSPCoverFlagType	CoverFlag;

	};

	/// 查询经纪公司限仓标的额度
	struct CTORATstpSPQryBrokerLimitPositionField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///标的证券代码
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// 经纪公司限仓标的额度
	struct CTORATstpSPBrokerLimitPositionField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///标的证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///总持仓限额
		TTORATstpSPBigVolumeType	TotalPositionLimit;

		///经纪业务持仓限额
		TTORATstpSPBigVolumeType	BrokeragePositionLimit;

		///自营业务持仓限额
		TTORATstpSPBigVolumeType	SelfOperatedPositionLimit;

		///多头持仓限额
		TTORATstpSPBigVolumeType	LongPositionLimit;

		///单日买入开仓限额
		TTORATstpSPBigVolumeType	TodayBuyOpenLimit;

		///单日卖出开仓限额
		TTORATstpSPBigVolumeType	TodaySellOpenLimit;

		///单日备兑开仓限额
		TTORATstpSPBigVolumeType	TodayCoveredOpenLimit;

		///单日开仓限额
		TTORATstpSPBigVolumeType	TodayOpenLimit;

		///认购多头持仓限额
		TTORATstpSPBigVolumeType	LongCallPositionLimit;

		///认沽多头持仓限额
		TTORATstpSPBigVolumeType	LongPutPositionLimit;

		///标的多头持仓限额
		TTORATstpSPBigVolumeType	LongUnderlyingPositionLimit;

		///标的空头持仓限额
		TTORATstpSPBigVolumeType	ShortUnderlyingPositionLimit;

		///总持仓冻结额度
		TTORATstpSPBigVolumeType	TotalPositionFrozen;

		///经纪业务持仓冻结额度
		TTORATstpSPBigVolumeType	BrokeragePositionFrozen;

		///自营业务持仓冻结额度
		TTORATstpSPBigVolumeType	SelfOperatedPositionFrozen;

		///多头持仓冻结额度
		TTORATstpSPBigVolumeType	LongPositionFrozen;

		///单日买入开仓冻结额度
		TTORATstpSPBigVolumeType	TodayBuyOpenFrozen;

		///单日卖出开仓冻结额度
		TTORATstpSPBigVolumeType	TodaySellOpenFrozen;

		///单日备兑开仓冻结额度
		TTORATstpSPBigVolumeType	TodayCoveredOpenFrozen;

		///单日开仓冻结额度
		TTORATstpSPBigVolumeType	TodayOpenFrozen;

		///认购多头持仓冻结额度
		TTORATstpSPBigVolumeType	LongCallPositionFrozen;

		///认沽多头持仓冻结额度
		TTORATstpSPBigVolumeType	LongPutPositionFrozen;

		///标的多头持仓冻结额度
		TTORATstpSPBigVolumeType	LongUnderlyingPositionFrozen;

		///标的空头持仓冻结额度
		TTORATstpSPBigVolumeType	ShortUnderlyingPositionFrozen;

	};

	/// 查询备兑股份不足仓位
	struct CTORATstpSPQryInsufficientCoveredStockPositionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///标的证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

	};

	/// 备兑股份不足仓位
	struct CTORATstpSPInsufficientCoveredStockPositionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///客户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///交易日
		TTORATstpSPDateType	TradingDay;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///初始备兑股份不足数量
		TTORATstpSPVolumeType	TotalInsufficientVolume;

		///初始备兑股份预冻结数量
		TTORATstpSPVolumeType	PreFrozenVolume;

		///备兑平仓已偿还的备兑股份数量
		TTORATstpSPVolumeType	RepaidVolume;

	};

	/// 查询组合合约信息
	struct CTORATstpSPQryCombSecurityField
	{
		 
		///组合合约代码
		TTORATstpSPSecurityIDType	CombSecurityID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///组合策略
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

	};

	/// 组合合约信息
	struct CTORATstpSPCombSecurityField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///组合合约代码
		TTORATstpSPSecurityIDType	CombSecurityID;

		///组合策略
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

		///成分一合约代码
		TTORATstpSPSecurityIDType	Leg1SecurityID;

		///成分一合约名称
		TTORATstpSPSecurityNameType	Leg1SecurityName;

		///策略要求的成分一合约多空方向
		TTORATstpSPPosiDirectionType	RequiredLeg1PosiDirection;

		///成分二合约代码
		TTORATstpSPSecurityIDType	Leg2SecurityID;

		///成分二合约名称
		TTORATstpSPSecurityNameType	Leg2SecurityName;

		///策略要求的成分二合约多空方向
		TTORATstpSPPosiDirectionType	RequiredLeg2PosiDirection;

	};

	/// 查询经纪公司部门信息
	struct CTORATstpSPQryDepartmentInfoField
	{
		 
		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

	};

	/// 经纪公司部门信息
	struct CTORATstpSPDepartmentInfoField
	{
		 
		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///经纪公司部门名称
		TTORATstpSPNameType	DepartmentName;

		///经纪公司部门名称
		TTORATstpSPDepartmentIDType	ParentDepartmentID;

	};

	/// 查询组合行权委托
	struct CTORATstpSPQryCombExerciseField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///认购合约代码
		TTORATstpSPSecurityIDType	CallSecurityID;

		///认沽合约代码
		TTORATstpSPSecurityIDType	PutSecurityID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///系统合并行权编号
		TTORATstpSPOrderSysIDType	CombExerciseSysID;

		///Time
		TTORATstpSPTimeType	InsertTimeStart;

		///Time
		TTORATstpSPTimeType	InsertTimeEnd;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

	};

	/// 查询合并行权撤单
	struct CTORATstpSPQryCombExerciseActionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///本地组合行权撤单编号
		TTORATstpSPOrderLocalIDType	CancelCombExerciseLocalID;

		///本地合并行权编号
		TTORATstpSPOrderLocalIDType	CombExerciseLocalID;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

	};

	/// 合并行权撤单
	struct CTORATstpSPCombExerciseActionField
	{
		 
		///交易日
		TTORATstpSPDateType	TradingDay;

		///交易所营业部编码
		TTORATstpSPBranchIDType	BranchID;

		///交易所交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///本地合并行权撤单编号
		TTORATstpSPOrderLocalIDType	CancelCombExerciseLocalID;

		///撤单前置编号
		TTORATstpSPFrontIDType	ActionFrontID;

		///撤单会话编号
		TTORATstpSPSessionIDType	ActionSessionID;

		///合并行权撤单引用
		TTORATstpSPOrderRefType	CombExerciseActionRef;

		///被撤本地合并行权报单编号
		TTORATstpSPOrderLocalIDType	CombExerciseLocalID;

		///被撤系统合并行权报单编号
		TTORATstpSPOrderSysIDType	CombExerciseSysID;

		///前置编号
		TTORATstpSPFrontIDType	FrontID;

		///会话编号
		TTORATstpSPSessionIDType	SessionID;

		///合并行权引用
		TTORATstpSPOrderRefType	CombExerciseRef;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///股东账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///认购合约代码
		TTORATstpSPSecurityIDType	CallSecurityID;

		///认沽合约代码
		TTORATstpSPSecurityIDType	PutSecurityID;

		///操作标志
		TTORATstpSPOrderActionFlagType	ExerciseActionFlag;

		///撤单状态
		TTORATstpSPCancelOrderStatusType	CancelOrderStatus;

		///撤单数量
		TTORATstpSPVolumeType	VolumeCanceled;

		///状态信息
		TTORATstpSPStatusMsgType	StatusMsg;

		///系统错误代码
		TTORATstpSPErrorIDType	ErrorID;

		///报单申报用户
		TTORATstpSPUserIDType	InsertUserID;

		///操作日期
		TTORATstpSPDateType	InsertDate;

		///操作时间
		TTORATstpSPTimeType	InsertTime;

		///申报时间(毫秒)
		TTORATstpSPMillisecType	InsertMillisec;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///请求编号
		TTORATstpSPRequestIDType	RequestID;

		///终端信息
		TTORATstpSPTerminalInfoType	TerminalInfo;

		///长字符串附加信息
		TTORATstpSPBigsInfoType	BInfo;

		///短字符串附加信息
		TTORATstpSPShortsInfoType	SInfo;

		///整形附加信息
		TTORATstpSPIntInfoType	IInfo;

		///委托方式
		TTORATstpSPOperwayType	Operway;

		///硬盘序列号
		TTORATstpSPHDSerialType	HDSerial;

		///移动设备手机号
		TTORATstpSPMobileType	Mobile;

	};

	/// 请求插入SystemParam
	struct CTORATstpSPReqInsSystemParamField
	{
		 
		///参数类别
		TTORATstpSPSystemParamTypeType	PrmType;

		///参数值
		TTORATstpSPParameterCharValType	PrmCharVal;

		///参数说明
		TTORATstpSPParameterRemarkType	PrmRmk;

	};

	/// 请求更新SystemParam
	struct CTORATstpSPReqUpdSystemParamField
	{
		 
		///参数类别
		TTORATstpSPSystemParamTypeType	PrmType;

		///参数值
		TTORATstpSPParameterCharValType	PrmCharVal;

		///参数说明
		TTORATstpSPParameterRemarkType	PrmRmk;

	};

	/// 请求删除SystemParam
	struct CTORATstpSPReqDelSystemParamField
	{
		 
		///参数类别
		TTORATstpSPSystemParamTypeType	PrmType;

	};

	/// 请求插入AppInfo
	struct CTORATstpSPReqInsAppInfoField
	{
		 
		///应用程序名称
		TTORATstpSPAppNameType	AppName;

		///交易所编码
		TTORATstpSPExchangeIDType	ExchangeID;

		///应用类型
		TTORATstpSPAppTypeType	AppType;

	};

	/// 请求更新AppInfo
	struct CTORATstpSPReqUpdAppInfoField
	{
		 
		///应用程序名称
		TTORATstpSPAppNameType	AppName;

		///交易所编码
		TTORATstpSPExchangeIDType	ExchangeID;

		///应用类型
		TTORATstpSPAppTypeType	AppType;

	};

	/// 请求删除AppInfo
	struct CTORATstpSPReqDelAppInfoField
	{
		 
		///应用程序名称
		TTORATstpSPAppNameType	AppName;

	};

	/// 请求插入AppRunningInfo
	struct CTORATstpSPReqInsAppRunningInfoField
	{
		 
		///应用名称
		TTORATstpSPAppNameType	AppName;

		///说明该交易员的报盘程序的编号
		TTORATstpSPRunIDType	RunID;

		///一个交易所的编号
		TTORATstpSPExchangeIDType	ExchangeID;

		///应用类型
		TTORATstpSPAppTypeType	AppType;

		///连接状态
		TTORATstpSPAppConnectStatusType	AppConnectStatus;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///前置ID
		TTORATstpSPFrontIDType	FrontID;

		///会话ID
		TTORATstpSPSessionIDType	SessionID;

		///发出连接请求的日期
		TTORATstpSPDateType	ConnectRequestDate;

		///发出连接请求的时间
		TTORATstpSPTimeType	ConnectRequestTime;

	};

	/// 请求更新AppRunningInfo
	struct CTORATstpSPReqUpdAppRunningInfoField
	{
		 
		///应用名称
		TTORATstpSPAppNameType	AppName;

		///说明该交易员的报盘程序的编号
		TTORATstpSPRunIDType	RunID;

		///一个交易所的编号
		TTORATstpSPExchangeIDType	ExchangeID;

		///应用类型
		TTORATstpSPAppTypeType	AppType;

		///连接状态
		TTORATstpSPAppConnectStatusType	AppConnectStatus;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///前置ID
		TTORATstpSPFrontIDType	FrontID;

		///会话ID
		TTORATstpSPSessionIDType	SessionID;

		///发出连接请求的日期
		TTORATstpSPDateType	ConnectRequestDate;

		///发出连接请求的时间
		TTORATstpSPTimeType	ConnectRequestTime;

	};

	/// 请求删除AppRunningInfo
	struct CTORATstpSPReqDelAppRunningInfoField
	{
		 
		///应用名称
		TTORATstpSPAppNameType	AppName;

		///说明该交易员的报盘程序的编号
		TTORATstpSPRunIDType	RunID;

	};

	/// 请求插入AppUser
	struct CTORATstpSPReqInsAppUserField
	{
		 
		///应用程序名称
		TTORATstpSPAppNameType	AppName;

		///应用程序运行ID
		TTORATstpSPRunIDType	RunID;

		///密码
		TTORATstpSPPasswordType	AppPassword;

		///初始、启用、禁用、激活等
		TTORATstpSPActiveStatusType	Status;

	};

	/// 请求更新AppUser
	struct CTORATstpSPReqUpdAppUserField
	{
		 
		///应用程序名称
		TTORATstpSPAppNameType	AppName;

		///应用程序运行ID
		TTORATstpSPRunIDType	RunID;

		///密码
		TTORATstpSPPasswordType	AppPassword;

		///初始、启用、禁用、激活等
		TTORATstpSPActiveStatusType	Status;

	};

	/// 请求删除AppUser
	struct CTORATstpSPReqDelAppUserField
	{
		 
		///应用程序名称
		TTORATstpSPAppNameType	AppName;

		///应用程序运行ID
		TTORATstpSPRunIDType	RunID;

	};

	/// 请求插入BrokerUserRole
	struct CTORATstpSPReqInsBrokerUserRoleField
	{
		 
		///角色编号
		TTORATstpSPRoleIDType	RoleID;

		///角色描述
		TTORATstpSPRoleDescriptionType	RoleDescription;

		///功能权限集合
		TTORATstpSPFunctionsType	Functions;

	};

	/// 请求更新BrokerUserRole
	struct CTORATstpSPReqUpdBrokerUserRoleField
	{
		 
		///角色编号
		TTORATstpSPRoleIDType	RoleID;

		///角色描述
		TTORATstpSPRoleDescriptionType	RoleDescription;

		///功能权限集合
		TTORATstpSPFunctionsType	Functions;

	};

	/// 请求删除BrokerUserRole
	struct CTORATstpSPReqDelBrokerUserRoleField
	{
		 
		///角色编号
		TTORATstpSPRoleIDType	RoleID;

	};

	/// 请求插入User
	struct CTORATstpSPReqInsUserField
	{
		 
		///用户代码
		TTORATstpSPUserIDType	UserID;

		///用户名称
		TTORATstpSPUserNameType	UserName;

		///用户类型
		TTORATstpSPUserTypeType	UserType;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///密码
		TTORATstpSPUserPasswordType	UserPassword;

		///限制用户同时可在几个会话中登录，投资者用户默认为1, <=0表示不限制
		TTORATstpSPLoginLimitType	LoginLimit;

		///限制用户最多能输错几次密码, <=0表示不限制
		TTORATstpSPLoginLimitType	PasswordFailLimit;

		///初始、启用、禁用、激活等
		TTORATstpSPActiveStatusType	Status;

		///联系人
		TTORATstpSPContacterType	Contacter;

		///传真
		TTORATstpSPFaxType	Fax;

		///手机
		TTORATstpSPMobileType	Mobile;

		///联系电话
		TTORATstpSPTelephoneType	Telephone;

		///电子邮件
		TTORATstpSPEmailType	Email;

		///通讯地址
		TTORATstpSPAddressType	Address;

		///邮政编码
		TTORATstpSPZipCodeType	ZipCode;

		///开户日期
		TTORATstpSPDateType	OpenDate;

		///销户日期
		TTORATstpSPDateType	CloseDate;

		///通讯流量, <=0表示不限制
		TTORATstpSPCommFluxType	OrderInsertCommFlux;

		///撤单流控, <=0表示不限制
		TTORATstpSPCommFluxType	OrderActionCommFlux;

		///加密方式
		TTORATstpSPEncodeModeType	PasswordEncodeMode;

		///密码修改周期(天)
		TTORATstpSPCountType	PasswordUpdatePeriod;

		///密码有效剩余天数
		TTORATstpSPCountType	PasswordRemainDays;

		///是否需要改密
		TTORATstpSPBoolType	NeedUpdatePassword;

	};

	/// 请求更新User
	struct CTORATstpSPReqUpdUserField
	{
		 
		///用户代码
		TTORATstpSPUserIDType	UserID;

		///用户名称
		TTORATstpSPUserNameType	UserName;

		///用户类型
		TTORATstpSPUserTypeType	UserType;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///密码
		TTORATstpSPUserPasswordType	UserPassword;

		///限制用户同时可在几个会话中登录，投资者用户默认为1, <=0表示不限制
		TTORATstpSPLoginLimitType	LoginLimit;

		///限制用户最多能输错几次密码, <=0表示不限制
		TTORATstpSPLoginLimitType	PasswordFailLimit;

		///初始、启用、禁用、激活等
		TTORATstpSPActiveStatusType	Status;

		///联系人
		TTORATstpSPContacterType	Contacter;

		///传真
		TTORATstpSPFaxType	Fax;

		///手机
		TTORATstpSPMobileType	Mobile;

		///联系电话
		TTORATstpSPTelephoneType	Telephone;

		///电子邮件
		TTORATstpSPEmailType	Email;

		///通讯地址
		TTORATstpSPAddressType	Address;

		///邮政编码
		TTORATstpSPZipCodeType	ZipCode;

		///开户日期
		TTORATstpSPDateType	OpenDate;

		///销户日期
		TTORATstpSPDateType	CloseDate;

		///通讯流量, <=0表示不限制
		TTORATstpSPCommFluxType	OrderInsertCommFlux;

		///撤单流控, <=0表示不限制
		TTORATstpSPCommFluxType	OrderActionCommFlux;

		///加密方式
		TTORATstpSPEncodeModeType	PasswordEncodeMode;

		///密码修改周期(天)
		TTORATstpSPCountType	PasswordUpdatePeriod;

		///密码有效剩余天数
		TTORATstpSPCountType	PasswordRemainDays;

		///是否需要改密
		TTORATstpSPBoolType	NeedUpdatePassword;

	};

	/// 请求删除User
	struct CTORATstpSPReqDelUserField
	{
		 
		///用户代码
		TTORATstpSPUserIDType	UserID;

	};

	/// 请求插入UserIPLimit
	struct CTORATstpSPReqInsUserIPLimitField
	{
		 
		///交易用户代码
		TTORATstpSPUserIDType	UserID;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///IP地址掩码
		TTORATstpSPIPAddressType	IPMask;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

	};

	/// 请求更新UserIPLimit
	struct CTORATstpSPReqUpdUserIPLimitField
	{
		 
		///交易用户代码
		TTORATstpSPUserIDType	UserID;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///IP地址掩码
		TTORATstpSPIPAddressType	IPMask;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

	};

	/// 请求删除UserIPLimit
	struct CTORATstpSPReqDelUserIPLimitField
	{
		 
		///交易用户代码
		TTORATstpSPUserIDType	UserID;

		///IP地址
		TTORATstpSPIPAddressType	IPAddress;

		///IP地址掩码
		TTORATstpSPIPAddressType	IPMask;

		///Mac地址
		TTORATstpSPMacAddressType	MacAddress;

	};

	/// 请求插入BrokerUserFunction
	struct CTORATstpSPReqInsBrokerUserFunctionField
	{
		 
		///交易用户代码
		TTORATstpSPUserIDType	UserID;

		///功能代码
		TTORATstpSPFunctionIDType	FunctionID;

	};

	/// 请求更新BrokerUserFunction
	struct CTORATstpSPReqUpdBrokerUserFunctionField
	{
		 
		///交易用户代码
		TTORATstpSPUserIDType	UserID;

		///功能代码
		TTORATstpSPFunctionIDType	FunctionID;

	};

	/// 请求删除BrokerUserFunction
	struct CTORATstpSPReqDelBrokerUserFunctionField
	{
		 
		///交易用户代码
		TTORATstpSPUserIDType	UserID;

		///功能代码
		TTORATstpSPFunctionIDType	FunctionID;

	};

	/// 请求插入BrokerUserRoleAssignment
	struct CTORATstpSPReqInsBrokerUserRoleAssignmentField
	{
		 
		///交易用户代码
		TTORATstpSPUserIDType	UserID;

		///角色编号
		TTORATstpSPRoleIDType	RoleID;

	};

	/// 请求更新BrokerUserRoleAssignment
	struct CTORATstpSPReqUpdBrokerUserRoleAssignmentField
	{
		 
		///交易用户代码
		TTORATstpSPUserIDType	UserID;

		///角色编号
		TTORATstpSPRoleIDType	RoleID;

	};

	/// 请求删除BrokerUserRoleAssignment
	struct CTORATstpSPReqDelBrokerUserRoleAssignmentField
	{
		 
		///交易用户代码
		TTORATstpSPUserIDType	UserID;

		///角色编号
		TTORATstpSPRoleIDType	RoleID;

	};

	/// 请求插入BUProxy
	struct CTORATstpSPReqInsBUProxyField
	{
		 
		///交易用户代码
		TTORATstpSPUserIDType	UserID;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

	};

	/// 请求删除BUProxy
	struct CTORATstpSPReqDelBUProxyField
	{
		 
		///交易用户代码
		TTORATstpSPUserIDType	UserID;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

	};

	/// 请求插入BrokerUserProxy
	struct CTORATstpSPReqInsBrokerUserProxyField
	{
		 
		///管理柜员用户代码
		TTORATstpSPUserIDType	ManageUserID;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///柜员用户代码
		TTORATstpSPUserIDType	UserID;

	};

	/// 请求删除BrokerUserProxy
	struct CTORATstpSPReqDelBrokerUserProxyField
	{
		 
		///管理柜员用户代码
		TTORATstpSPUserIDType	ManageUserID;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///柜员用户代码
		TTORATstpSPUserIDType	UserID;

	};

	/// 请求插入Investor
	struct CTORATstpSPReqInsInvestorField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///自然人、法人、特殊法人、资管、基金等
		TTORATstpSPInvestorTypeType	InvestorType;

		///投资者名称
		TTORATstpSPInvestorNameType	InvestorName;

		///证件类型
		TTORATstpSPIdCardTypeType	IdCardType;

		///证件号码
		TTORATstpSPIdCardNoType	IdCardNo;

		///合同编号
		TTORATstpSPContractNoType	ContractNo;

		///初始、启用、禁用、激活等
		TTORATstpSPActiveStatusType	Status;

		///预留字段1
		TTORATstpSPBranchIDType	Reserve1;

		///投资者分级类别
		TTORATstpSPInvestorLevelType	InvestorLevel;

		///预留字段2
		TTORATstpSPRemarkType	Reserve2;

		///佣金模板代码
		TTORATstpSPTradingFeeTemplateIDType	TradingFeeTemplateID;

		///保证金模板代码
		TTORATstpSPMarginFeeTemplateIDType	MarginFeeTemplateID;

		///风控参数模板代码
		TTORATstpSPRiskParamTemplateIDType	RiskParamTemplateID;

		///委托方式
		TTORATstpSPOperwaysType	Operways;

		///专业投资者类别
		TTORATstpSPProfInvestorTypeType	ProfInvestorType;

	};

	/// 请求更新Investor
	struct CTORATstpSPReqUpdInvestorField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///自然人、法人、特殊法人、资管、基金等
		TTORATstpSPInvestorTypeType	InvestorType;

		///投资者名称
		TTORATstpSPInvestorNameType	InvestorName;

		///证件类型
		TTORATstpSPIdCardTypeType	IdCardType;

		///证件号码
		TTORATstpSPIdCardNoType	IdCardNo;

		///合同编号
		TTORATstpSPContractNoType	ContractNo;

		///初始、启用、禁用、激活等
		TTORATstpSPActiveStatusType	Status;

		///预留字段1
		TTORATstpSPBranchIDType	Reserve1;

		///投资者分级类别
		TTORATstpSPInvestorLevelType	InvestorLevel;

		///预留字段2
		TTORATstpSPRemarkType	Reserve2;

		///佣金模板代码
		TTORATstpSPTradingFeeTemplateIDType	TradingFeeTemplateID;

		///保证金模板代码
		TTORATstpSPMarginFeeTemplateIDType	MarginFeeTemplateID;

		///风控参数模板代码
		TTORATstpSPRiskParamTemplateIDType	RiskParamTemplateID;

		///委托方式
		TTORATstpSPOperwaysType	Operways;

		///专业投资者类别
		TTORATstpSPProfInvestorTypeType	ProfInvestorType;

	};

	/// 请求删除Investor
	struct CTORATstpSPReqDelInvestorField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

	};

	/// 请求插入BusinessUnit
	struct CTORATstpSPReqInsBusinessUnitField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///投资单元名称
		TTORATstpSPBusinessUnitNameType	BusinessUnitName;

	};

	/// 请求更新BusinessUnit
	struct CTORATstpSPReqUpdBusinessUnitField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///投资单元名称
		TTORATstpSPBusinessUnitNameType	BusinessUnitName;

	};

	/// 请求删除BusinessUnit
	struct CTORATstpSPReqDelBusinessUnitField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

	};

	/// 请求插入BusinessUnitAccount
	struct CTORATstpSPReqInsBusinessUnitAccountField
	{
		 
		///登录用户
		TTORATstpSPUserIDType	UserID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///普通、信用、衍生品等
		TTORATstpSPShareholderIDTypeType	ShareholderIDType;

		///证券市场中的具体品种，如上海股票
		TTORATstpSPProductIDType	ProductID;

		///资金账户
		TTORATstpSPAccountIDType	AccountID;

		///币种
		TTORATstpSPCurrencyIDType	CurrencyID;

	};

	/// 请求更新BusinessUnitAccount
	struct CTORATstpSPReqUpdBusinessUnitAccountField
	{
		 
		///登录用户
		TTORATstpSPUserIDType	UserID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///普通、信用、衍生品等
		TTORATstpSPShareholderIDTypeType	ShareholderIDType;

		///证券市场中的具体品种，如上海股票
		TTORATstpSPProductIDType	ProductID;

		///资金账户
		TTORATstpSPAccountIDType	AccountID;

		///币种
		TTORATstpSPCurrencyIDType	CurrencyID;

	};

	/// 请求删除BusinessUnitAccount
	struct CTORATstpSPReqDelBusinessUnitAccountField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///登录用户
		TTORATstpSPUserIDType	UserID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///证券市场中的具体品种，如上海股票
		TTORATstpSPProductIDType	ProductID;

		///币种
		TTORATstpSPCurrencyIDType	CurrencyID;

	};

	/// 请求插入ShareholderAccount
	struct CTORATstpSPReqInsShareholderAccountField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///普通，信用，衍生品等
		TTORATstpSPShareholderIDTypeType	ShareholderIDType;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///交易所营业部编码
		TTORATstpSPBranchIDType	BranchID;

		///交易权限模板
		TTORATstpSPTradingRightTemplateIDType	TradingRightTemplateID;

	};

	/// 请求更新ShareholderAccount
	struct CTORATstpSPReqUpdShareholderAccountField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///普通，信用，衍生品等
		TTORATstpSPShareholderIDTypeType	ShareholderIDType;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///交易所营业部编码
		TTORATstpSPBranchIDType	BranchID;

		///交易权限模板
		TTORATstpSPTradingRightTemplateIDType	TradingRightTemplateID;

	};

	/// 请求删除ShareholderAccount
	struct CTORATstpSPReqDelShareholderAccountField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///目前该字段存放的是上证所和深圳的股东代码。
		TTORATstpSPShareholderIDType	ShareholderID;

	};

	/// 请求插入ShareholderSystemRelation
	struct CTORATstpSPReqInsShareholderSystemRelationField
	{
		 
		///个股市场的编号
		TTORATstpSPMarketIDType	MarketID;

		///个股股东代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///个股投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///个股投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///现货市场编号
		TTORATstpSPMarketIDType	OuterMarketID;

		///现货股东代码
		TTORATstpSPShareholderIDType	OuterShareholderID;

		///现货投资者代码
		TTORATstpSPInvestorIDType	OuterInvestorID;

		///现货投资单元代码
		TTORATstpSPBusinessUnitIDType	OuterBusinessUnitID;

		///一个交易所的编号
		TTORATstpSPExchangeIDType	ExchangeID;

	};

	/// 请求更新ShareholderSystemRelation
	struct CTORATstpSPReqUpdShareholderSystemRelationField
	{
		 
		///个股市场的编号
		TTORATstpSPMarketIDType	MarketID;

		///个股股东代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///个股投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///个股投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///现货市场编号
		TTORATstpSPMarketIDType	OuterMarketID;

		///现货股东代码
		TTORATstpSPShareholderIDType	OuterShareholderID;

		///现货投资者代码
		TTORATstpSPInvestorIDType	OuterInvestorID;

		///现货投资单元代码
		TTORATstpSPBusinessUnitIDType	OuterBusinessUnitID;

		///一个交易所的编号
		TTORATstpSPExchangeIDType	ExchangeID;

	};

	/// 请求删除ShareholderSystemRelation
	struct CTORATstpSPReqDelShareholderSystemRelationField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///个股市场的编号
		TTORATstpSPMarketIDType	MarketID;

		///个股股东代码
		TTORATstpSPShareholderIDType	ShareholderID;

	};

	/// 请求插入InvestorCondOrderLimitParam
	struct CTORATstpSPReqInsInvestorCondOrderLimitParamField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///最大条件单数
		TTORATstpSPVolumeType	MaxCondOrderLimitCnt;

		///当前条件单数
		TTORATstpSPVolumeType	CurrCondOrderCnt;

	};

	/// 请求更新InvestorCondOrderLimitParam
	struct CTORATstpSPReqUpdInvestorCondOrderLimitParamField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///最大条件单数
		TTORATstpSPVolumeType	MaxCondOrderLimitCnt;

		///当前条件单数
		TTORATstpSPVolumeType	CurrCondOrderCnt;

	};

	/// 请求删除InvestorCondOrderLimitParam
	struct CTORATstpSPReqDelInvestorCondOrderLimitParamField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

	};

	/// 请求插入SecurityBlackList
	struct CTORATstpSPReqInsSecurityBlackListField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///股东账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///按开平方向
		TTORATstpSPOffsetFlagType	OffsetFlag;

		///报单类别
		TTORATstpSPDirectionType	Direction;

		///投机套保标志
		TTORATstpSPHedgeFlagType	HedgeFlag;

	};

	/// 请求更新SecurityBlackList
	struct CTORATstpSPReqUpdSecurityBlackListField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///股东账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///按开平方向
		TTORATstpSPOffsetFlagType	OffsetFlag;

		///报单类别
		TTORATstpSPDirectionType	Direction;

		///投机套保标志
		TTORATstpSPHedgeFlagType	HedgeFlag;

	};

	/// 请求删除SecurityBlackList
	struct CTORATstpSPReqDelSecurityBlackListField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///股东账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///按开平方向
		TTORATstpSPOffsetFlagType	OffsetFlag;

		///报单类别
		TTORATstpSPDirectionType	Direction;

		///投机套保标志
		TTORATstpSPHedgeFlagType	HedgeFlag;

	};

	/// 请求插入ShareholderTradingRight
	struct CTORATstpSPReqInsShareholderTradingRightField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///股东账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///证券品种代码
		TTORATstpSPProductIDType	ProductID;

		///证券类别代码
		TTORATstpSPSecurityTypeType	SecurityType;

		///按开平方向
		TTORATstpSPOffsetFlagType	OffsetFlag;

		///报单类别
		TTORATstpSPDirectionType	Direction;

		///投机套保标志
		TTORATstpSPHedgeFlagType	HedgeFlag;

		///是否禁止
		TTORATstpSPBoolType	bForbidden;

		///交易权限模式
		TTORATstpSPRangeModeType	RangeMode;

	};

	/// 请求更新ShareholderTradingRight
	struct CTORATstpSPReqUpdShareholderTradingRightField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///股东账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///证券品种代码
		TTORATstpSPProductIDType	ProductID;

		///证券类别代码
		TTORATstpSPSecurityTypeType	SecurityType;

		///按开平方向
		TTORATstpSPOffsetFlagType	OffsetFlag;

		///报单类别
		TTORATstpSPDirectionType	Direction;

		///投机套保标志
		TTORATstpSPHedgeFlagType	HedgeFlag;

		///是否禁止
		TTORATstpSPBoolType	bForbidden;

		///交易权限模式
		TTORATstpSPRangeModeType	RangeMode;

	};

	/// 请求删除ShareholderTradingRight
	struct CTORATstpSPReqDelShareholderTradingRightField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///股东账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///证券品种代码
		TTORATstpSPProductIDType	ProductID;

		///证券类别代码
		TTORATstpSPSecurityTypeType	SecurityType;

		///按开平方向
		TTORATstpSPOffsetFlagType	OffsetFlag;

		///报单类别
		TTORATstpSPDirectionType	Direction;

		///投机套保标志
		TTORATstpSPHedgeFlagType	HedgeFlag;

	};

	/// 请求插入ExchangeSyncStatus
	struct CTORATstpSPReqInsExchangeSyncStatusField
	{
		 
		///交易发生的日期
		TTORATstpSPDateType	TradingDay;

		///一个交易所的编号
		TTORATstpSPExchangeIDType	ExchangeID;

		///数据同步状态
		TTORATstpSPDataSyncStatusType	DataSyncStatus;

		///同步顺序
		TTORATstpSPSequenceNoType	SyncNo;

	};

	/// 请求更新ExchangeSyncStatus
	struct CTORATstpSPReqUpdExchangeSyncStatusField
	{
		 
		///交易发生的日期
		TTORATstpSPDateType	TradingDay;

		///一个交易所的编号
		TTORATstpSPExchangeIDType	ExchangeID;

		///数据同步状态
		TTORATstpSPDataSyncStatusType	DataSyncStatus;

		///同步顺序
		TTORATstpSPSequenceNoType	SyncNo;

	};

	/// 请求删除ExchangeSyncStatus
	struct CTORATstpSPReqDelExchangeSyncStatusField
	{
		 
		///一个交易所的编号
		TTORATstpSPExchangeIDType	ExchangeID;

	};

	/// 请求插入MaxSystemSerial
	struct CTORATstpSPReqInsMaxSystemSerialField
	{
		 
		///操作日
		TTORATstpSPDateType	OperateDate;

		///最大资金转移流水号
		TTORATstpSPIntSerialType	MaxFundSerial;

		///最大仓位转移流水号
		TTORATstpSPIntSerialType	MaxPositionSerial;

		///最大现货仓位转移流水号
		TTORATstpSPIntSerialType	MaxStockPositionSerial;

		///最大交易通知流水号
		TTORATstpSPIntSerialType	MaxNoticeSerial;

	};

	/// 请求更新MaxSystemSerial
	struct CTORATstpSPReqUpdMaxSystemSerialField
	{
		 
		///操作日
		TTORATstpSPDateType	OperateDate;

		///最大资金转移流水号
		TTORATstpSPIntSerialType	MaxFundSerial;

		///最大仓位转移流水号
		TTORATstpSPIntSerialType	MaxPositionSerial;

		///最大现货仓位转移流水号
		TTORATstpSPIntSerialType	MaxStockPositionSerial;

		///最大交易通知流水号
		TTORATstpSPIntSerialType	MaxNoticeSerial;

	};

	/// 请求删除MaxSystemSerial
	struct CTORATstpSPReqDelMaxSystemSerialField
	{
		 
		///操作日
		TTORATstpSPDateType	OperateDate;

	};

	/// 请求插入OrderLocalSeqPrefix
	struct CTORATstpSPReqInsOrderLocalSeqPrefixField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///机构编码
		TTORATstpSPBranchIDType	BranchID;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///本地报单编号前缀
		TTORATstpSPPrefixType	Prefix;

		///包含开始报单编号本身
		TTORATstpSPOrderNoType	StartOrderNo;

		///包含结束报单编号本身
		TTORATstpSPOrderNoType	EndOrderNo;

		///当前报单编号
		TTORATstpSPOrderNoType	CurrentOrderNo;

		///报单编号长度
		TTORATstpSPOrderIDLenType	OrderIDLen;

	};

	/// 请求更新OrderLocalSeqPrefix
	struct CTORATstpSPReqUpdOrderLocalSeqPrefixField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///机构编码
		TTORATstpSPBranchIDType	BranchID;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///本地报单编号前缀
		TTORATstpSPPrefixType	Prefix;

		///包含开始报单编号本身
		TTORATstpSPOrderNoType	StartOrderNo;

		///包含结束报单编号本身
		TTORATstpSPOrderNoType	EndOrderNo;

		///当前报单编号
		TTORATstpSPOrderNoType	CurrentOrderNo;

		///报单编号长度
		TTORATstpSPOrderIDLenType	OrderIDLen;

	};

	/// 请求删除OrderLocalSeqPrefix
	struct CTORATstpSPReqDelOrderLocalSeqPrefixField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///机构编码
		TTORATstpSPBranchIDType	BranchID;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

	};

	/// 请求插入BrokerLimitPosition
	struct CTORATstpSPReqInsBrokerLimitPositionField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///标的证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///限仓单位（2.份、3.张）
		TTORATstpSPOrderUnitType	LimitPositionUnit;

		///总持仓限额
		TTORATstpSPBigVolumeType	TotalPositionLimit;

		///经纪业务持仓限额
		TTORATstpSPBigVolumeType	BrokeragePositionLimit;

		///自营业务持仓限额
		TTORATstpSPBigVolumeType	SelfOperatedPositionLimit;

		///多头持仓限额
		TTORATstpSPBigVolumeType	LongPositionLimit;

		///单日买入开仓限额
		TTORATstpSPBigVolumeType	TodayBuyOpenLimit;

		///单日卖出开仓限额
		TTORATstpSPBigVolumeType	TodaySellOpenLimit;

		///单日备兑开仓限额
		TTORATstpSPBigVolumeType	TodayCoveredOpenLimit;

		///单日开仓限额
		TTORATstpSPBigVolumeType	TodayOpenLimit;

		///认购多头持仓限额
		TTORATstpSPBigVolumeType	LongCallPositionLimit;

		///认沽多头持仓限额
		TTORATstpSPBigVolumeType	LongPutPositionLimit;

		///标的多头持仓限额
		TTORATstpSPBigVolumeType	LongUnderlyingPositionLimit;

		///标的空头持仓限额
		TTORATstpSPBigVolumeType	ShortUnderlyingPositionLimit;

		///总持仓冻结额度
		TTORATstpSPBigVolumeType	TotalPositionFrozen;

		///经纪业务持仓冻结额度
		TTORATstpSPBigVolumeType	BrokeragePositionFrozen;

		///自营业务持仓冻结额度
		TTORATstpSPBigVolumeType	SelfOperatedPositionFrozen;

		///多头持仓冻结额度
		TTORATstpSPBigVolumeType	LongPositionFrozen;

		///单日买入开仓冻结额度
		TTORATstpSPBigVolumeType	TodayBuyOpenFrozen;

		///单日卖出开仓冻结额度
		TTORATstpSPBigVolumeType	TodaySellOpenFrozen;

		///单日备兑开仓冻结额度
		TTORATstpSPBigVolumeType	TodayCoveredOpenFrozen;

		///单日开仓冻结额度
		TTORATstpSPBigVolumeType	TodayOpenFrozen;

		///认购多头持仓冻结额度
		TTORATstpSPBigVolumeType	LongCallPositionFrozen;

		///认沽多头持仓冻结额度
		TTORATstpSPBigVolumeType	LongPutPositionFrozen;

		///标的多头持仓冻结额度
		TTORATstpSPBigVolumeType	LongUnderlyingPositionFrozen;

		///标的空头持仓冻结额度
		TTORATstpSPBigVolumeType	ShortUnderlyingPositionFrozen;

	};

	/// 请求更新BrokerLimitPosition
	struct CTORATstpSPReqUpdBrokerLimitPositionField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///标的证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///限仓单位（2.份、3.张）
		TTORATstpSPOrderUnitType	LimitPositionUnit;

		///总持仓限额
		TTORATstpSPBigVolumeType	TotalPositionLimit;

		///经纪业务持仓限额
		TTORATstpSPBigVolumeType	BrokeragePositionLimit;

		///自营业务持仓限额
		TTORATstpSPBigVolumeType	SelfOperatedPositionLimit;

		///多头持仓限额
		TTORATstpSPBigVolumeType	LongPositionLimit;

		///单日买入开仓限额
		TTORATstpSPBigVolumeType	TodayBuyOpenLimit;

		///单日卖出开仓限额
		TTORATstpSPBigVolumeType	TodaySellOpenLimit;

		///单日备兑开仓限额
		TTORATstpSPBigVolumeType	TodayCoveredOpenLimit;

		///单日开仓限额
		TTORATstpSPBigVolumeType	TodayOpenLimit;

		///认购多头持仓限额
		TTORATstpSPBigVolumeType	LongCallPositionLimit;

		///认沽多头持仓限额
		TTORATstpSPBigVolumeType	LongPutPositionLimit;

		///标的多头持仓限额
		TTORATstpSPBigVolumeType	LongUnderlyingPositionLimit;

		///标的空头持仓限额
		TTORATstpSPBigVolumeType	ShortUnderlyingPositionLimit;

		///总持仓冻结额度
		TTORATstpSPBigVolumeType	TotalPositionFrozen;

		///经纪业务持仓冻结额度
		TTORATstpSPBigVolumeType	BrokeragePositionFrozen;

		///自营业务持仓冻结额度
		TTORATstpSPBigVolumeType	SelfOperatedPositionFrozen;

		///多头持仓冻结额度
		TTORATstpSPBigVolumeType	LongPositionFrozen;

		///单日买入开仓冻结额度
		TTORATstpSPBigVolumeType	TodayBuyOpenFrozen;

		///单日卖出开仓冻结额度
		TTORATstpSPBigVolumeType	TodaySellOpenFrozen;

		///单日备兑开仓冻结额度
		TTORATstpSPBigVolumeType	TodayCoveredOpenFrozen;

		///单日开仓冻结额度
		TTORATstpSPBigVolumeType	TodayOpenFrozen;

		///认购多头持仓冻结额度
		TTORATstpSPBigVolumeType	LongCallPositionFrozen;

		///认沽多头持仓冻结额度
		TTORATstpSPBigVolumeType	LongPutPositionFrozen;

		///标的多头持仓冻结额度
		TTORATstpSPBigVolumeType	LongUnderlyingPositionFrozen;

		///标的空头持仓冻结额度
		TTORATstpSPBigVolumeType	ShortUnderlyingPositionFrozen;

	};

	/// 请求删除BrokerLimitPosition
	struct CTORATstpSPReqDelBrokerLimitPositionField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///标的证券代码
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// 请求插入BrokerLimitPositionParam
	struct CTORATstpSPReqInsBrokerLimitPositionParamField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///证券市场中的具体品种，如上海股票
		TTORATstpSPProductIDType	ProductID;

		///标的证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///总持仓限额
		TTORATstpSPBigVolumeType	TotalPositionLimit;

		///经纪业务持仓限额
		TTORATstpSPBigVolumeType	BrokeragePositionLimit;

		///自营业务持仓限额
		TTORATstpSPBigVolumeType	SelfOperatedPositionLimit;

		///多头持仓限额
		TTORATstpSPBigVolumeType	LongPositionLimit;

		///单日买入开仓限额
		TTORATstpSPBigVolumeType	TodayBuyOpenLimit;

		///单日卖出开仓限额
		TTORATstpSPBigVolumeType	TodaySellOpenLimit;

		///单日备兑开仓限额
		TTORATstpSPBigVolumeType	TodayCoveredOpenLimit;

		///单日开仓限额
		TTORATstpSPBigVolumeType	TodayOpenLimit;

		///认购多头持仓限额
		TTORATstpSPBigVolumeType	LongCallPositionLimit;

		///认沽多头持仓限额
		TTORATstpSPBigVolumeType	LongPutPositionLimit;

		///标的多头持仓限额
		TTORATstpSPBigVolumeType	LongUnderlyingPositionLimit;

		///标的空头持仓限额
		TTORATstpSPBigVolumeType	ShortUnderlyingPositionLimit;

	};

	/// 请求更新BrokerLimitPositionParam
	struct CTORATstpSPReqUpdBrokerLimitPositionParamField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///证券市场中的具体品种，如上海股票
		TTORATstpSPProductIDType	ProductID;

		///标的证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///总持仓限额
		TTORATstpSPBigVolumeType	TotalPositionLimit;

		///经纪业务持仓限额
		TTORATstpSPBigVolumeType	BrokeragePositionLimit;

		///自营业务持仓限额
		TTORATstpSPBigVolumeType	SelfOperatedPositionLimit;

		///多头持仓限额
		TTORATstpSPBigVolumeType	LongPositionLimit;

		///单日买入开仓限额
		TTORATstpSPBigVolumeType	TodayBuyOpenLimit;

		///单日卖出开仓限额
		TTORATstpSPBigVolumeType	TodaySellOpenLimit;

		///单日备兑开仓限额
		TTORATstpSPBigVolumeType	TodayCoveredOpenLimit;

		///单日开仓限额
		TTORATstpSPBigVolumeType	TodayOpenLimit;

		///认购多头持仓限额
		TTORATstpSPBigVolumeType	LongCallPositionLimit;

		///认沽多头持仓限额
		TTORATstpSPBigVolumeType	LongPutPositionLimit;

		///标的多头持仓限额
		TTORATstpSPBigVolumeType	LongUnderlyingPositionLimit;

		///标的空头持仓限额
		TTORATstpSPBigVolumeType	ShortUnderlyingPositionLimit;

	};

	/// 请求删除BrokerLimitPositionParam
	struct CTORATstpSPReqDelBrokerLimitPositionParamField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///证券市场中的具体品种，如上海股票
		TTORATstpSPProductIDType	ProductID;

		///标的证券代码
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// 请求插入TradingRightTemplate
	struct CTORATstpSPReqInsTradingRightTemplateField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///权限模板代码
		TTORATstpSPTradingRightTemplateIDType	TradingRightTemplateID;

		///证券品种代码
		TTORATstpSPProductIDType	ProductID;

		///证券类别代码
		TTORATstpSPSecurityTypeType	SecurityType;

		///按开平方向
		TTORATstpSPOffsetFlagType	OffsetFlag;

		///报单类别
		TTORATstpSPDirectionType	Direction;

		///投机套保标志
		TTORATstpSPHedgeFlagType	HedgeFlag;

		///是否禁止
		TTORATstpSPBoolType	bForbidden;

	};

	/// 请求更新TradingRightTemplate
	struct CTORATstpSPReqUpdTradingRightTemplateField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///权限模板代码
		TTORATstpSPTradingRightTemplateIDType	TradingRightTemplateID;

		///证券品种代码
		TTORATstpSPProductIDType	ProductID;

		///证券类别代码
		TTORATstpSPSecurityTypeType	SecurityType;

		///按开平方向
		TTORATstpSPOffsetFlagType	OffsetFlag;

		///报单类别
		TTORATstpSPDirectionType	Direction;

		///投机套保标志
		TTORATstpSPHedgeFlagType	HedgeFlag;

		///是否禁止
		TTORATstpSPBoolType	bForbidden;

	};

	/// 请求删除TradingRightTemplate
	struct CTORATstpSPReqDelTradingRightTemplateField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///权限模板代码
		TTORATstpSPTradingRightTemplateIDType	TradingRightTemplateID;

		///证券品种代码
		TTORATstpSPProductIDType	ProductID;

		///证券类别代码
		TTORATstpSPSecurityTypeType	SecurityType;

		///按开平方向
		TTORATstpSPOffsetFlagType	OffsetFlag;

		///报单类别
		TTORATstpSPDirectionType	Direction;

		///投机套保标志
		TTORATstpSPHedgeFlagType	HedgeFlag;

	};

	/// 请求插入Security
	struct CTORATstpSPReqInsSecurityField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///交易所合约代码
		TTORATstpSPExchSecurityIDType	ExchSecurityID;

		///证券名称
		TTORATstpSPSecurityNameType	SecurityName;

		///基础证券代码
		TTORATstpSPSecurityIDType	UnderlyingSecurityID;

		///基础证券名称
		TTORATstpSPSecurityNameType	UnderlyingSecurityName;

		///合约单位，品种的每手交易的规定数量，针对基础的商品
		TTORATstpSPVolumeMultipleType	UnderlyingMultiple;

		///期权执行方式，0：欧式， 1：美式
		TTORATstpSPStrikeModeType	StrikeMode;

		///看涨、看跌
		TTORATstpSPOptionsTypeType	OptionsType;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///证券市场中的具体品种，如上海股票
		TTORATstpSPProductIDType	ProductID;

		///证券品种中的具体类别，如上海A股
		TTORATstpSPSecurityTypeType	SecurityType;

		///币种
		TTORATstpSPCurrencyIDType	CurrencyID;

		///记录申报时使用的单位。手、股、份、张等
		TTORATstpSPOrderUnitType	OrderUnit;

		///每次可以买入的最小交易单位（以申报单位计），每次买入必须是买入交易单位的整数倍
		TTORATstpSPTradingUnitType	BuyTradingUnit;

		///每次可以卖出的最小交易单位（以申报单位计），每次卖出必须是卖出交易单位的整数倍
		TTORATstpSPTradingUnitType	SellTradingUnit;

		///单笔可以买入的最大数量（以申报单位计）
		TTORATstpSPVolumeType	MaxMarketOrderBuyVolume;

		///单笔可以买入的最小数量（以申报单位计）
		TTORATstpSPVolumeType	MinMarketOrderBuyVolume;

		///单笔可以买入的最大数量（以申报单位计）
		TTORATstpSPVolumeType	MaxLimitOrderBuyVolume;

		///单笔可以买入的最小数量（以申报单位计）
		TTORATstpSPVolumeType	MinLimitOrderBuyVolume;

		///单笔可以卖入的最大数量（以申报单位计）
		TTORATstpSPVolumeType	MaxMarketOrderSellVolume;

		///单笔可以卖入的最小数量（以申报单位计）
		TTORATstpSPVolumeType	MinMarketOrderSellVolume;

		///单笔可以卖入的最大数量（以申报单位计）
		TTORATstpSPVolumeType	MaxLimitOrderSellVolume;

		///单笔可以卖入的最小数量（以申报单位计）
		TTORATstpSPVolumeType	MinLimitOrderSellVolume;

		///申报单位与报价金额单位的比值
		TTORATstpSPVolumeMultipleType	VolumeMultiple;

		///证券的单位价格涨跌变化的最小值
		TTORATstpSPPriceTickType	PriceTick;

		///净持仓、综合持仓
		TTORATstpSPPositionTypeType	PositionType;

		///证券状态,可能是0个或多个状态的叠加，用整型bit位表示，每一位代表一种状态，0x00000001停牌,0x00000002长期停牌，0x00000040熔断,0x00000080限制买入开仓,0x00000100限制卖出开仓,0x00000200限制备兑开仓,0x00000400波动性中断,0x00000800临时停牌,0x00001000连续停牌,0x00002000限制行权,0x00004000限制做市商报价
		TTORATstpSPSecurityStatusType	SecurityStatus;

		///期权专用
		TTORATstpSPPriceType	StrikePrice;

		///首交易日
		TTORATstpSPDateType	FirstDate;

		///最后交易日
		TTORATstpSPDateType	LastDate;

		///行权日
		TTORATstpSPDateType	StrikeDate;

		///合约到期时间
		TTORATstpSPDateType	ExpireDate;

		///了结到期未平仓合约的开始日期
		TTORATstpSPDateType	DelivDate;

		///是否有涨跌幅限制
		TTORATstpSPBoolType	IsUpDownLimit;

		///期权专用
		TTORATstpSPPriceType	MarginUnit;

		///合约前结算价
		TTORATstpSPPriceType	PreSettlementPrice;

		///合约前收盘价
		TTORATstpSPPriceType	PreClosePrice;

		///标的合约前收盘价
		TTORATstpSPPriceType	UnderlyingPreClosePrice;

	};

	/// 请求更新Security
	struct CTORATstpSPReqUpdSecurityField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///交易所合约代码
		TTORATstpSPExchSecurityIDType	ExchSecurityID;

		///证券名称
		TTORATstpSPSecurityNameType	SecurityName;

		///基础证券代码
		TTORATstpSPSecurityIDType	UnderlyingSecurityID;

		///基础证券名称
		TTORATstpSPSecurityNameType	UnderlyingSecurityName;

		///合约单位，品种的每手交易的规定数量，针对基础的商品
		TTORATstpSPVolumeMultipleType	UnderlyingMultiple;

		///期权执行方式，0：欧式， 1：美式
		TTORATstpSPStrikeModeType	StrikeMode;

		///看涨、看跌
		TTORATstpSPOptionsTypeType	OptionsType;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///证券市场中的具体品种，如上海股票
		TTORATstpSPProductIDType	ProductID;

		///证券品种中的具体类别，如上海A股
		TTORATstpSPSecurityTypeType	SecurityType;

		///币种
		TTORATstpSPCurrencyIDType	CurrencyID;

		///记录申报时使用的单位。手、股、份、张等
		TTORATstpSPOrderUnitType	OrderUnit;

		///每次可以买入的最小交易单位（以申报单位计），每次买入必须是买入交易单位的整数倍
		TTORATstpSPTradingUnitType	BuyTradingUnit;

		///每次可以卖出的最小交易单位（以申报单位计），每次卖出必须是卖出交易单位的整数倍
		TTORATstpSPTradingUnitType	SellTradingUnit;

		///单笔可以买入的最大数量（以申报单位计）
		TTORATstpSPVolumeType	MaxMarketOrderBuyVolume;

		///单笔可以买入的最小数量（以申报单位计）
		TTORATstpSPVolumeType	MinMarketOrderBuyVolume;

		///单笔可以买入的最大数量（以申报单位计）
		TTORATstpSPVolumeType	MaxLimitOrderBuyVolume;

		///单笔可以买入的最小数量（以申报单位计）
		TTORATstpSPVolumeType	MinLimitOrderBuyVolume;

		///单笔可以卖入的最大数量（以申报单位计）
		TTORATstpSPVolumeType	MaxMarketOrderSellVolume;

		///单笔可以卖入的最小数量（以申报单位计）
		TTORATstpSPVolumeType	MinMarketOrderSellVolume;

		///单笔可以卖入的最大数量（以申报单位计）
		TTORATstpSPVolumeType	MaxLimitOrderSellVolume;

		///单笔可以卖入的最小数量（以申报单位计）
		TTORATstpSPVolumeType	MinLimitOrderSellVolume;

		///申报单位与报价金额单位的比值
		TTORATstpSPVolumeMultipleType	VolumeMultiple;

		///证券的单位价格涨跌变化的最小值
		TTORATstpSPPriceTickType	PriceTick;

		///净持仓、综合持仓
		TTORATstpSPPositionTypeType	PositionType;

		///证券状态,可能是0个或多个状态的叠加，用整型bit位表示，每一位代表一种状态，0x00000001停牌,0x00000002长期停牌，0x00000040熔断,0x00000080限制买入开仓,0x00000100限制卖出开仓,0x00000200限制备兑开仓,0x00000400波动性中断,0x00000800临时停牌,0x00001000连续停牌,0x00002000限制行权,0x00004000限制做市商报价
		TTORATstpSPSecurityStatusType	SecurityStatus;

		///期权专用
		TTORATstpSPPriceType	StrikePrice;

		///首交易日
		TTORATstpSPDateType	FirstDate;

		///最后交易日
		TTORATstpSPDateType	LastDate;

		///行权日
		TTORATstpSPDateType	StrikeDate;

		///合约到期时间
		TTORATstpSPDateType	ExpireDate;

		///了结到期未平仓合约的开始日期
		TTORATstpSPDateType	DelivDate;

		///是否有涨跌幅限制
		TTORATstpSPBoolType	IsUpDownLimit;

		///期权专用
		TTORATstpSPPriceType	MarginUnit;

		///合约前结算价
		TTORATstpSPPriceType	PreSettlementPrice;

		///合约前收盘价
		TTORATstpSPPriceType	PreClosePrice;

		///标的合约前收盘价
		TTORATstpSPPriceType	UnderlyingPreClosePrice;

	};

	/// 请求删除Security
	struct CTORATstpSPReqDelSecurityField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// 请求插入SecurityStrategy
	struct CTORATstpSPReqInsSecurityStrategyField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///组合策略
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

		///自动解除日
		TTORATstpSPDateType	AutoSplitDay;

		///是否禁止
		TTORATstpSPBoolType	bForbidden;

	};

	/// 请求更新SecurityStrategy
	struct CTORATstpSPReqUpdSecurityStrategyField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///组合策略
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

		///自动解除日
		TTORATstpSPDateType	AutoSplitDay;

		///是否禁止
		TTORATstpSPBoolType	bForbidden;

	};

	/// 请求删除SecurityStrategy
	struct CTORATstpSPReqDelSecurityStrategyField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///组合策略
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

	};

	/// 请求插入StockSecurity
	struct CTORATstpSPReqInsStockSecurityField
	{
		 
		///证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///证券名称
		TTORATstpSPSecurityNameType	SecurityName;

		///基础证券代码
		TTORATstpSPSecurityIDType	UnderlyingSecurityID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///证券市场中的具体品种，如上海股票
		TTORATstpSPProductIDType	ProductID;

		///证券品种中的具体类别，如上海A股
		TTORATstpSPSecurityTypeType	SecurityType;

		///币种
		TTORATstpSPCurrencyIDType	CurrencyID;

		///记录申报时使用的单位。手、股、份、张等
		TTORATstpSPOrderUnitType	OrderUnit;

		///每次可以买入的最小交易单位（以申报单位计），每次买入必须是买入交易单位的整数倍
		TTORATstpSPTradingUnitType	BuyTradingUnit;

		///每次可以卖出的最小交易单位（以申报单位计），每次卖出必须是卖出交易单位的整数倍
		TTORATstpSPTradingUnitType	SellTradingUnit;

		///单笔可以买入的最大数量（以申报单位计）
		TTORATstpSPVolumeType	MaxMarketOrderBuyVolume;

		///单笔可以买入的最小数量（以申报单位计）
		TTORATstpSPVolumeType	MinMarketOrderBuyVolume;

		///单笔可以买入的最大数量（以申报单位计）
		TTORATstpSPVolumeType	MaxLimitOrderBuyVolume;

		///单笔可以买入的最小数量（以申报单位计）
		TTORATstpSPVolumeType	MinLimitOrderBuyVolume;

		///单笔可以卖入的最大数量（以申报单位计）
		TTORATstpSPVolumeType	MaxMarketOrderSellVolume;

		///单笔可以卖入的最小数量（以申报单位计）
		TTORATstpSPVolumeType	MinMarketOrderSellVolume;

		///单笔可以卖入的最大数量（以申报单位计）
		TTORATstpSPVolumeType	MaxLimitOrderSellVolume;

		///单笔可以卖入的最小数量（以申报单位计）
		TTORATstpSPVolumeType	MinLimitOrderSellVolume;

		///申报单位与报价金额单位的比值
		TTORATstpSPVolumeMultipleType	VolumeMultiple;

		///证券的单位价格涨跌变化的最小值
		TTORATstpSPPriceTickType	PriceTick;

		///上市日
		TTORATstpSPDateType	OpenDate;

		///债券，到期日
		TTORATstpSPDateType	CloseDate;

		///证券的面值
		TTORATstpSPParValueType	ParValue;

		///债券应计利息
		TTORATstpSPInterestType	BondInterest;

		///折算率
		TTORATstpSPRatioType	ConversionRate;

		///总股本
		TTORATstpSPLargeVolumeType	TotalEquity;

		///流通股本
		TTORATstpSPLargeVolumeType	CirculationEquity;

	};

	/// 请求更新StockSecurity
	struct CTORATstpSPReqUpdStockSecurityField
	{
		 
		///证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///证券名称
		TTORATstpSPSecurityNameType	SecurityName;

		///基础证券代码
		TTORATstpSPSecurityIDType	UnderlyingSecurityID;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///证券市场中的具体品种，如上海股票
		TTORATstpSPProductIDType	ProductID;

		///证券品种中的具体类别，如上海A股
		TTORATstpSPSecurityTypeType	SecurityType;

		///币种
		TTORATstpSPCurrencyIDType	CurrencyID;

		///记录申报时使用的单位。手、股、份、张等
		TTORATstpSPOrderUnitType	OrderUnit;

		///每次可以买入的最小交易单位（以申报单位计），每次买入必须是买入交易单位的整数倍
		TTORATstpSPTradingUnitType	BuyTradingUnit;

		///每次可以卖出的最小交易单位（以申报单位计），每次卖出必须是卖出交易单位的整数倍
		TTORATstpSPTradingUnitType	SellTradingUnit;

		///单笔可以买入的最大数量（以申报单位计）
		TTORATstpSPVolumeType	MaxMarketOrderBuyVolume;

		///单笔可以买入的最小数量（以申报单位计）
		TTORATstpSPVolumeType	MinMarketOrderBuyVolume;

		///单笔可以买入的最大数量（以申报单位计）
		TTORATstpSPVolumeType	MaxLimitOrderBuyVolume;

		///单笔可以买入的最小数量（以申报单位计）
		TTORATstpSPVolumeType	MinLimitOrderBuyVolume;

		///单笔可以卖入的最大数量（以申报单位计）
		TTORATstpSPVolumeType	MaxMarketOrderSellVolume;

		///单笔可以卖入的最小数量（以申报单位计）
		TTORATstpSPVolumeType	MinMarketOrderSellVolume;

		///单笔可以卖入的最大数量（以申报单位计）
		TTORATstpSPVolumeType	MaxLimitOrderSellVolume;

		///单笔可以卖入的最小数量（以申报单位计）
		TTORATstpSPVolumeType	MinLimitOrderSellVolume;

		///申报单位与报价金额单位的比值
		TTORATstpSPVolumeMultipleType	VolumeMultiple;

		///证券的单位价格涨跌变化的最小值
		TTORATstpSPPriceTickType	PriceTick;

		///上市日
		TTORATstpSPDateType	OpenDate;

		///债券，到期日
		TTORATstpSPDateType	CloseDate;

		///证券的面值
		TTORATstpSPParValueType	ParValue;

		///债券应计利息
		TTORATstpSPInterestType	BondInterest;

		///折算率
		TTORATstpSPRatioType	ConversionRate;

		///总股本
		TTORATstpSPLargeVolumeType	TotalEquity;

		///流通股本
		TTORATstpSPLargeVolumeType	CirculationEquity;

	};

	/// 请求删除StockSecurity
	struct CTORATstpSPReqDelStockSecurityField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///证券代码
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// 请求插入MarketData
	struct CTORATstpSPReqInsMarketDataField
	{
		 
		///证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易日
		TTORATstpSPDateType	TradingDay;

		///证券名称
		TTORATstpSPSecurityNameType	SecurityName;

		///上一日收盘价
		TTORATstpSPPriceType	PreClosePrice;

		///今日开盘价
		TTORATstpSPPriceType	OpenPrice;

		///涨停价格
		TTORATstpSPPriceType	UpperLimitPrice;

		///跌停价格
		TTORATstpSPPriceType	LowerLimitPrice;

		///该证券在当日的成交数量
		TTORATstpSPLongVolumeType	Volume;

		///该证券在当日的成交金额
		TTORATstpSPMoneyType	Turnover;

		///该证券在当日的成交笔数
		TTORATstpSPLongVolumeType	TradingCount;

		///当日该证券交易期间的最新成交价格
		TTORATstpSPPriceType	LastPrice;

		///收盘价格
		TTORATstpSPPriceType	ClosePrice;

		///一定时间内该证券成交价中的最高成交价格
		TTORATstpSPPriceType	HighestPrice;

		///一定时间内该证券成交价中的最低成交价格
		TTORATstpSPPriceType	LowestPrice;

		///指该证券当前的市盈率
		TTORATstpSPRatioType	PERatio1;

		///指该证券当前的市盈率
		TTORATstpSPRatioType	PERatio2;

		///最新价-前收盘价格
		TTORATstpSPPriceType	PriceUpDown1;

		///最新价-上笔成交价格
		TTORATstpSPPriceType	PriceUpDown2;

		///持仓量
		TTORATstpSPLargeVolumeType	OpenInterest;

		///该证券当前最优申买价格
		TTORATstpSPPriceType	BidPrice1;

		///该证券当前最优申卖价格
		TTORATstpSPPriceType	AskPrice1;

		///该证券当前最优价位申请买入的数量
		TTORATstpSPLongVolumeType	BidVolume1;

		///该证券当前最优价位申请卖出的数量
		TTORATstpSPLongVolumeType	AskVolume1;

		///该证券当前第二优申买价格
		TTORATstpSPPriceType	BidPrice2;

		///该证券当前第二优价位申请买入的数量
		TTORATstpSPLongVolumeType	BidVolume2;

		///该证券当前第二优申卖价格
		TTORATstpSPPriceType	AskPrice2;

		///该证券当前第二优价位申请卖出的数量
		TTORATstpSPLongVolumeType	AskVolume2;

		///该证券当前第三优申买价格
		TTORATstpSPPriceType	BidPrice3;

		///该证券当前第三优价位申请买入的数量
		TTORATstpSPLongVolumeType	BidVolume3;

		///该证券当前第三优申卖价格
		TTORATstpSPPriceType	AskPrice3;

		///该证券当前第三优价位申请卖出的数量
		TTORATstpSPLongVolumeType	AskVolume3;

		///该证券当前第四优申买价格
		TTORATstpSPPriceType	BidPrice4;

		///该证券当前第四优价位申请买入的数量
		TTORATstpSPLongVolumeType	BidVolume4;

		///该证券当前第四优申卖价格
		TTORATstpSPPriceType	AskPrice4;

		///该证券当前第四优价位申请卖出的数量
		TTORATstpSPLongVolumeType	AskVolume4;

		///该证券当前第五优申买价格
		TTORATstpSPPriceType	BidPrice5;

		///该证券当前第五优价位申请买入的数量
		TTORATstpSPLongVolumeType	BidVolume5;

		///该证券当前第五优申卖价格
		TTORATstpSPPriceType	AskPrice5;

		///该证券当前第五优价位申请卖出的数量
		TTORATstpSPLongVolumeType	AskVolume5;

		///最后修改时间
		TTORATstpSPTimeType	UpdateTime;

		///最后修改毫秒
		TTORATstpSPMillisecType	UpdateMillisec;

		///行情产品实时状态
		TTORATstpSPMDSecurityStatType	MDSecurityStat;

		///合约结算价
		TTORATstpSPPriceType	SettlementPrice;

	};

	/// 请求更新MarketData
	struct CTORATstpSPReqUpdMarketDataField
	{
		 
		///证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易日
		TTORATstpSPDateType	TradingDay;

		///证券名称
		TTORATstpSPSecurityNameType	SecurityName;

		///上一日收盘价
		TTORATstpSPPriceType	PreClosePrice;

		///今日开盘价
		TTORATstpSPPriceType	OpenPrice;

		///涨停价格
		TTORATstpSPPriceType	UpperLimitPrice;

		///跌停价格
		TTORATstpSPPriceType	LowerLimitPrice;

		///该证券在当日的成交数量
		TTORATstpSPLongVolumeType	Volume;

		///该证券在当日的成交金额
		TTORATstpSPMoneyType	Turnover;

		///该证券在当日的成交笔数
		TTORATstpSPLongVolumeType	TradingCount;

		///当日该证券交易期间的最新成交价格
		TTORATstpSPPriceType	LastPrice;

		///收盘价格
		TTORATstpSPPriceType	ClosePrice;

		///一定时间内该证券成交价中的最高成交价格
		TTORATstpSPPriceType	HighestPrice;

		///一定时间内该证券成交价中的最低成交价格
		TTORATstpSPPriceType	LowestPrice;

		///指该证券当前的市盈率
		TTORATstpSPRatioType	PERatio1;

		///指该证券当前的市盈率
		TTORATstpSPRatioType	PERatio2;

		///最新价-前收盘价格
		TTORATstpSPPriceType	PriceUpDown1;

		///最新价-上笔成交价格
		TTORATstpSPPriceType	PriceUpDown2;

		///持仓量
		TTORATstpSPLargeVolumeType	OpenInterest;

		///该证券当前最优申买价格
		TTORATstpSPPriceType	BidPrice1;

		///该证券当前最优申卖价格
		TTORATstpSPPriceType	AskPrice1;

		///该证券当前最优价位申请买入的数量
		TTORATstpSPLongVolumeType	BidVolume1;

		///该证券当前最优价位申请卖出的数量
		TTORATstpSPLongVolumeType	AskVolume1;

		///该证券当前第二优申买价格
		TTORATstpSPPriceType	BidPrice2;

		///该证券当前第二优价位申请买入的数量
		TTORATstpSPLongVolumeType	BidVolume2;

		///该证券当前第二优申卖价格
		TTORATstpSPPriceType	AskPrice2;

		///该证券当前第二优价位申请卖出的数量
		TTORATstpSPLongVolumeType	AskVolume2;

		///该证券当前第三优申买价格
		TTORATstpSPPriceType	BidPrice3;

		///该证券当前第三优价位申请买入的数量
		TTORATstpSPLongVolumeType	BidVolume3;

		///该证券当前第三优申卖价格
		TTORATstpSPPriceType	AskPrice3;

		///该证券当前第三优价位申请卖出的数量
		TTORATstpSPLongVolumeType	AskVolume3;

		///该证券当前第四优申买价格
		TTORATstpSPPriceType	BidPrice4;

		///该证券当前第四优价位申请买入的数量
		TTORATstpSPLongVolumeType	BidVolume4;

		///该证券当前第四优申卖价格
		TTORATstpSPPriceType	AskPrice4;

		///该证券当前第四优价位申请卖出的数量
		TTORATstpSPLongVolumeType	AskVolume4;

		///该证券当前第五优申买价格
		TTORATstpSPPriceType	BidPrice5;

		///该证券当前第五优价位申请买入的数量
		TTORATstpSPLongVolumeType	BidVolume5;

		///该证券当前第五优申卖价格
		TTORATstpSPPriceType	AskPrice5;

		///该证券当前第五优价位申请卖出的数量
		TTORATstpSPLongVolumeType	AskVolume5;

		///最后修改时间
		TTORATstpSPTimeType	UpdateTime;

		///最后修改毫秒
		TTORATstpSPMillisecType	UpdateMillisec;

		///行情产品实时状态
		TTORATstpSPMDSecurityStatType	MDSecurityStat;

		///合约结算价
		TTORATstpSPPriceType	SettlementPrice;

	};

	/// 请求删除MarketData
	struct CTORATstpSPReqDelMarketDataField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///证券代码
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// 请求插入MarketStatus
	struct CTORATstpSPReqInsMarketStatusField
	{
		 
		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///市场状态
		TTORATstpSPMarketStatusType	MarketStatus;

	};

	/// 请求更新MarketStatus
	struct CTORATstpSPReqUpdMarketStatusField
	{
		 
		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///市场状态
		TTORATstpSPMarketStatusType	MarketStatus;

	};

	/// 请求删除MarketStatus
	struct CTORATstpSPReqDelMarketStatusField
	{
		 
		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

	};

	/// 请求插入PlatformStatus
	struct CTORATstpSPReqInsPlatformStatusField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///平台类型
		TTORATstpSPPlatformTypeType	PlatformType;

		///平台状态
		TTORATstpSPPlatformStatusType	PlatformStatus;

		///交易报盘编号
		TTORATstpSPTraderOfferIDType	TraderOfferID;

	};

	/// 请求更新PlatformStatus
	struct CTORATstpSPReqUpdPlatformStatusField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///平台类型
		TTORATstpSPPlatformTypeType	PlatformType;

		///平台状态
		TTORATstpSPPlatformStatusType	PlatformStatus;

		///交易报盘编号
		TTORATstpSPTraderOfferIDType	TraderOfferID;

	};

	/// 请求删除PlatformStatus
	struct CTORATstpSPReqDelPlatformStatusField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易报盘编号
		TTORATstpSPTraderOfferIDType	TraderOfferID;

		///平台类型
		TTORATstpSPPlatformTypeType	PlatformType;

	};

	/// 请求插入MdOffer
	struct CTORATstpSPReqInsMdOfferField
	{
		 
		///行情服务器编号
		TTORATstpSPMdServerIDType	MdOfferID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///连接类型
		TTORATstpSPConnectTypeType	ConnectType;

		///连接字符串
		TTORATstpSPConnectStringType	ConnectString;

		///用户名
		TTORATstpSPUserNameType	UserName;

		///密码
		TTORATstpSPPasswordType	UserPassword;

		///通用字段1
		TTORATstpSPCommStringType	CommString1;

		///通用字段2
		TTORATstpSPCommStringType	CommString2;

		///通用字段3
		TTORATstpSPCommStringType	CommString3;

		///应用名称
		TTORATstpSPAppNameType	AppName;

		///说明该交易员的报盘程序的编号
		TTORATstpSPRunIDType	RunID;

		///前置ID
		TTORATstpSPFrontIDType	FrontID;

		///会话ID
		TTORATstpSPSessionIDType	SessionID;

		///交易所交易员连接状态
		TTORATstpSPConnectStatusType	ConnectStatus;

		///发出连接请求的日期
		TTORATstpSPDateType	ConnectRequestDate;

		///发出连接请求的时间
		TTORATstpSPTimeType	ConnectRequestTime;

		///完成连接日期
		TTORATstpSPDateType	ConnectDate;

		///完成连接时间
		TTORATstpSPTimeType	ConnectTime;

	};

	/// 请求更新MdOffer
	struct CTORATstpSPReqUpdMdOfferField
	{
		 
		///行情服务器编号
		TTORATstpSPMdServerIDType	MdOfferID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///连接类型
		TTORATstpSPConnectTypeType	ConnectType;

		///连接字符串
		TTORATstpSPConnectStringType	ConnectString;

		///用户名
		TTORATstpSPUserNameType	UserName;

		///密码
		TTORATstpSPPasswordType	UserPassword;

		///通用字段1
		TTORATstpSPCommStringType	CommString1;

		///通用字段2
		TTORATstpSPCommStringType	CommString2;

		///通用字段3
		TTORATstpSPCommStringType	CommString3;

		///应用名称
		TTORATstpSPAppNameType	AppName;

		///说明该交易员的报盘程序的编号
		TTORATstpSPRunIDType	RunID;

		///前置ID
		TTORATstpSPFrontIDType	FrontID;

		///会话ID
		TTORATstpSPSessionIDType	SessionID;

		///交易所交易员连接状态
		TTORATstpSPConnectStatusType	ConnectStatus;

		///发出连接请求的日期
		TTORATstpSPDateType	ConnectRequestDate;

		///发出连接请求的时间
		TTORATstpSPTimeType	ConnectRequestTime;

		///完成连接日期
		TTORATstpSPDateType	ConnectDate;

		///完成连接时间
		TTORATstpSPTimeType	ConnectTime;

	};

	/// 请求删除MdOffer
	struct CTORATstpSPReqDelMdOfferField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///行情服务器编号
		TTORATstpSPMdServerIDType	MdOfferID;

	};

	/// 请求插入PBU
	struct CTORATstpSPReqInsPBUField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///交易单元名称
		TTORATstpSPNameType	PbuName;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///分经纪公司进行编号，从1开始递增，报单编号时会使用该信息，如001
		TTORATstpSPPbuInstallIDType	PbuInstallID;

	};

	/// 请求更新PBU
	struct CTORATstpSPReqUpdPBUField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///交易单元名称
		TTORATstpSPNameType	PbuName;

		///交易所下的交易市场，如沪A、沪B市场
		TTORATstpSPMarketIDType	MarketID;

		///分经纪公司进行编号，从1开始递增，报单编号时会使用该信息，如001
		TTORATstpSPPbuInstallIDType	PbuInstallID;

	};

	/// 请求删除PBU
	struct CTORATstpSPReqDelPBUField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

	};

	/// 请求插入Trader
	struct CTORATstpSPReqInsTraderField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///平台类型
		TTORATstpSPPlatformTypeType	PlatformType;

		///交易报盘编号
		TTORATstpSPTraderOfferIDType	TraderOfferID;

	};

	/// 请求更新Trader
	struct CTORATstpSPReqUpdTraderField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///平台类型
		TTORATstpSPPlatformTypeType	PlatformType;

		///交易报盘编号
		TTORATstpSPTraderOfferIDType	TraderOfferID;

	};

	/// 请求删除Trader
	struct CTORATstpSPReqDelTraderField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///平台类型
		TTORATstpSPPlatformTypeType	PlatformType;

	};

	/// 请求插入TraderOffer
	struct CTORATstpSPReqInsTraderOfferField
	{
		 
		///交易报盘编号
		TTORATstpSPTraderOfferIDType	TraderOfferID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///连接类型
		TTORATstpSPConnectTypeType	ConnectType;

		///连接字符串
		TTORATstpSPConnectStringType	ConnectString;

		///用户名
		TTORATstpSPUserNameType	UserName;

		///密码
		TTORATstpSPPasswordType	UserPassword;

		///通用字段1
		TTORATstpSPCommStringType	CommString1;

		///通用字段2
		TTORATstpSPCommStringType	CommString2;

		///通用字段3
		TTORATstpSPCommStringType	CommString3;

		///应用名称
		TTORATstpSPAppNameType	AppName;

		///说明该交易员的报盘程序的编号
		TTORATstpSPRunIDType	RunID;

		///前置ID
		TTORATstpSPFrontIDType	FrontID;

		///会话ID
		TTORATstpSPSessionIDType	SessionID;

		///交易所交易员连接状态
		TTORATstpSPConnectStatusType	ConnectStatus;

		///发出连接请求的日期
		TTORATstpSPDateType	ConnectRequestDate;

		///发出连接请求的时间
		TTORATstpSPTimeType	ConnectRequestTime;

		///完成连接日期
		TTORATstpSPDateType	ConnectDate;

		///完成连接时间
		TTORATstpSPTimeType	ConnectTime;

	};

	/// 请求更新TraderOffer
	struct CTORATstpSPReqUpdTraderOfferField
	{
		 
		///交易报盘编号
		TTORATstpSPTraderOfferIDType	TraderOfferID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///连接类型
		TTORATstpSPConnectTypeType	ConnectType;

		///连接字符串
		TTORATstpSPConnectStringType	ConnectString;

		///用户名
		TTORATstpSPUserNameType	UserName;

		///密码
		TTORATstpSPPasswordType	UserPassword;

		///通用字段1
		TTORATstpSPCommStringType	CommString1;

		///通用字段2
		TTORATstpSPCommStringType	CommString2;

		///通用字段3
		TTORATstpSPCommStringType	CommString3;

		///应用名称
		TTORATstpSPAppNameType	AppName;

		///说明该交易员的报盘程序的编号
		TTORATstpSPRunIDType	RunID;

		///前置ID
		TTORATstpSPFrontIDType	FrontID;

		///会话ID
		TTORATstpSPSessionIDType	SessionID;

		///交易所交易员连接状态
		TTORATstpSPConnectStatusType	ConnectStatus;

		///发出连接请求的日期
		TTORATstpSPDateType	ConnectRequestDate;

		///发出连接请求的时间
		TTORATstpSPTimeType	ConnectRequestTime;

		///完成连接日期
		TTORATstpSPDateType	ConnectDate;

		///完成连接时间
		TTORATstpSPTimeType	ConnectTime;

	};

	/// 请求删除TraderOffer
	struct CTORATstpSPReqDelTraderOfferField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易报盘编号
		TTORATstpSPTraderOfferIDType	TraderOfferID;

	};

	/// 请求插入ExchRtnSeq
	struct CTORATstpSPReqInsExchRtnSeqField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易报盘编号
		TTORATstpSPTraderOfferIDType	TraderOfferID;

		///平台分区号(上证报单回报分区号为1，成交回报分区号为2)
		TTORATstpSPPlatformPartitionNoType	PartitionNo;

		///回报序号
		TTORATstpSPSequenceNoType	SequenceNo;

		///上证最大委托记录号
		TTORATstpSPSequenceNoType	MaxRecNum;

	};

	/// 请求更新ExchRtnSeq
	struct CTORATstpSPReqUpdExchRtnSeqField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易报盘编号
		TTORATstpSPTraderOfferIDType	TraderOfferID;

		///平台分区号(上证报单回报分区号为1，成交回报分区号为2)
		TTORATstpSPPlatformPartitionNoType	PartitionNo;

		///回报序号
		TTORATstpSPSequenceNoType	SequenceNo;

		///上证最大委托记录号
		TTORATstpSPSequenceNoType	MaxRecNum;

	};

	/// 请求删除ExchRtnSeq
	struct CTORATstpSPReqDelExchRtnSeqField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易报盘编号
		TTORATstpSPTraderOfferIDType	TraderOfferID;

		///平台分区号(上证报单回报分区号为1，成交回报分区号为2)
		TTORATstpSPPlatformPartitionNoType	PartitionNo;

	};

	/// 请求插入DepartmentInfo
	struct CTORATstpSPReqInsDepartmentInfoField
	{
		 
		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///经纪公司部门名称
		TTORATstpSPNameType	DepartmentName;

		///上级经纪公司部门代码
		TTORATstpSPDepartmentIDType	ParentDepartmentID;

	};

	/// 请求更新DepartmentInfo
	struct CTORATstpSPReqUpdDepartmentInfoField
	{
		 
		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///经纪公司部门名称
		TTORATstpSPNameType	DepartmentName;

		///上级经纪公司部门代码
		TTORATstpSPDepartmentIDType	ParentDepartmentID;

	};

	/// 请求删除DepartmentInfo
	struct CTORATstpSPReqDelDepartmentInfoField
	{
		 
		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

	};

	/// 请求插入IPLocateLimit
	struct CTORATstpSPReqInsIPLocateLimitField
	{
		 
		///网关Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///网关内网IP地址
		TTORATstpSPIPAddressType	InnerIPAddress;

		///网关外网IP地址
		TTORATstpSPIPAddressType	OuterIPAddress;

		///是否禁止
		TTORATstpSPBoolType	bForbidden;

	};

	/// 请求更新IPLocateLimit
	struct CTORATstpSPReqUpdIPLocateLimitField
	{
		 
		///网关Mac地址
		TTORATstpSPMacAddressType	MacAddress;

		///网关内网IP地址
		TTORATstpSPIPAddressType	InnerIPAddress;

		///网关外网IP地址
		TTORATstpSPIPAddressType	OuterIPAddress;

		///是否禁止
		TTORATstpSPBoolType	bForbidden;

	};

	/// 请求删除IPLocateLimit
	struct CTORATstpSPReqDelIPLocateLimitField
	{
		 
		///网关Mac地址
		TTORATstpSPMacAddressType	MacAddress;

	};

	/// 请求插入ExerciseAppointment
	struct CTORATstpSPReqInsExerciseAppointmentField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///行权日期
		TTORATstpSPDateType	ExerciseDay;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///客户在系统中的编号，编号唯一且遵循交易所制定的编码规则
		TTORATstpSPShareholderIDType	ShareholderID;

		///资金账户
		TTORATstpSPAccountIDType	AccountID;

		///币种
		TTORATstpSPCurrencyIDType	CurrencyID;

		///合约在系统中的编号
		TTORATstpSPSecurityIDType	SecurityID;

		///看涨、看跌
		TTORATstpSPOptionsTypeType	OptionsType;

		///一张合约对应的标的数量
		TTORATstpSPVolumeType	OptionUnit;

		///基础证券代码
		TTORATstpSPSecurityIDType	UnderlyingSecurityID;

		///行权数量
		TTORATstpSPVolumeType	ExerciseVolume;

		///行权价
		TTORATstpSPMoneyType	ExercisePrice;

		///行权方向
		TTORATstpSPExerciseDirectionType	ExerciseDirection;

		///备兑标志
		TTORATstpSPCoverFlagType	CoverFlag;

	};

	/// 请求更新ExerciseAppointment
	struct CTORATstpSPReqUpdExerciseAppointmentField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///行权日期
		TTORATstpSPDateType	ExerciseDay;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///客户在系统中的编号，编号唯一且遵循交易所制定的编码规则
		TTORATstpSPShareholderIDType	ShareholderID;

		///资金账户
		TTORATstpSPAccountIDType	AccountID;

		///币种
		TTORATstpSPCurrencyIDType	CurrencyID;

		///合约在系统中的编号
		TTORATstpSPSecurityIDType	SecurityID;

		///看涨、看跌
		TTORATstpSPOptionsTypeType	OptionsType;

		///一张合约对应的标的数量
		TTORATstpSPVolumeType	OptionUnit;

		///基础证券代码
		TTORATstpSPSecurityIDType	UnderlyingSecurityID;

		///行权数量
		TTORATstpSPVolumeType	ExerciseVolume;

		///行权价
		TTORATstpSPMoneyType	ExercisePrice;

		///行权方向
		TTORATstpSPExerciseDirectionType	ExerciseDirection;

		///备兑标志
		TTORATstpSPCoverFlagType	CoverFlag;

	};

	/// 请求删除ExerciseAppointment
	struct CTORATstpSPReqDelExerciseAppointmentField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///行权日期
		TTORATstpSPDateType	ExerciseDay;

		///交易单元代码
		TTORATstpSPPbuIDType	PbuID;

		///合约在系统中的编号
		TTORATstpSPSecurityIDType	SecurityID;

		///备兑标志
		TTORATstpSPCoverFlagType	CoverFlag;

	};

	/// 请求插入RiskParam
	struct CTORATstpSPReqInsRiskParamField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///风控参数类型
		TTORATstpSPRiskParamTypeType	RiskParamType;

		///风控参数值
		TTORATstpSPParameterCharValType	RiskParamVal;

		///参数说明
		TTORATstpSPRemarkType	ParamRemark;

		///风控参数模式
		TTORATstpSPRangeModeType	RangeMode;

	};

	/// 请求更新RiskParam
	struct CTORATstpSPReqUpdRiskParamField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///风控参数类型
		TTORATstpSPRiskParamTypeType	RiskParamType;

		///风控参数值
		TTORATstpSPParameterCharValType	RiskParamVal;

		///参数说明
		TTORATstpSPRemarkType	ParamRemark;

		///风控参数模式
		TTORATstpSPRangeModeType	RangeMode;

	};

	/// 请求删除RiskParam
	struct CTORATstpSPReqDelRiskParamField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///风控参数类型
		TTORATstpSPRiskParamTypeType	RiskParamType;

	};

	/// 请求插入RiskParamTemplate
	struct CTORATstpSPReqInsRiskParamTemplateField
	{
		 
		///风控参数模板代码
		TTORATstpSPRiskParamTemplateIDType	RiskParamTemplateID;

		///风控参数类型
		TTORATstpSPRiskParamTypeType	RiskParamType;

		///风控参数值
		TTORATstpSPParameterCharValType	RiskParamVal;

		///参数说明
		TTORATstpSPRemarkType	ParamRemark;

	};

	/// 请求更新RiskParamTemplate
	struct CTORATstpSPReqUpdRiskParamTemplateField
	{
		 
		///风控参数模板代码
		TTORATstpSPRiskParamTemplateIDType	RiskParamTemplateID;

		///风控参数类型
		TTORATstpSPRiskParamTypeType	RiskParamType;

		///风控参数值
		TTORATstpSPParameterCharValType	RiskParamVal;

		///参数说明
		TTORATstpSPRemarkType	ParamRemark;

	};

	/// 请求删除RiskParamTemplate
	struct CTORATstpSPReqDelRiskParamTemplateField
	{
		 
		///风控参数模板代码
		TTORATstpSPRiskParamTemplateIDType	RiskParamTemplateID;

		///风控参数类型
		TTORATstpSPRiskParamTypeType	RiskParamType;

	};

	/// 请求插入InvestorLimitAmount
	struct CTORATstpSPReqInsInvestorLimitAmountField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///多头金额限额
		TTORATstpSPMoneyType	LongAmountLimit;

		///多头金额冻结
		TTORATstpSPMoneyType	LongAmountFrozen;

	};

	/// 请求更新InvestorLimitAmount
	struct CTORATstpSPReqUpdInvestorLimitAmountField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///多头金额限额
		TTORATstpSPMoneyType	LongAmountLimit;

		///多头金额冻结
		TTORATstpSPMoneyType	LongAmountFrozen;

	};

	/// 请求删除InvestorLimitAmount
	struct CTORATstpSPReqDelInvestorLimitAmountField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

	};

	/// 请求插入InvestorLimitPosition
	struct CTORATstpSPReqInsInvestorLimitPositionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///标的证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///总持仓限额
		TTORATstpSPVolumeType	TotalPositionLimit;

		///多头持仓限额
		TTORATstpSPVolumeType	LongPositionLimit;

		///单日买入开仓限额
		TTORATstpSPVolumeType	TodayBuyOpenLimit;

		///单日卖出开仓限额
		TTORATstpSPVolumeType	TodaySellOpenLimit;

		///单日备兑开仓限额
		TTORATstpSPVolumeType	TodayCoveredOpenLimit;

		///单日开仓限额
		TTORATstpSPVolumeType	TodayOpenLimit;

		///认购多头持仓限额
		TTORATstpSPVolumeType	LongCallPositionLimit;

		///认沽多头持仓限额
		TTORATstpSPVolumeType	LongPutPositionLimit;

		///标的多头持仓限额
		TTORATstpSPVolumeType	LongUnderlyingPositionLimit;

		///标的空头持仓限额
		TTORATstpSPVolumeType	ShortUnderlyingPositionLimit;

		///总持仓冻结额度
		TTORATstpSPVolumeType	TotalPositionFrozen;

		///多头持仓冻结额度
		TTORATstpSPVolumeType	LongPositionFrozen;

		///单日买入开仓冻结额度
		TTORATstpSPVolumeType	TodayBuyOpenFrozen;

		///单日卖出开仓冻结额度
		TTORATstpSPVolumeType	TodaySellOpenFrozen;

		///单日备兑开仓冻结额度
		TTORATstpSPVolumeType	TodayCoveredOpenFrozen;

		///单日开仓冻结额度
		TTORATstpSPVolumeType	TodayOpenFrozen;

		///认购多头持仓冻结额度
		TTORATstpSPVolumeType	LongCallPositionFrozen;

		///认沽多头持仓冻结额度
		TTORATstpSPVolumeType	LongPutPositionFrozen;

		///标的多头持仓冻结额度
		TTORATstpSPVolumeType	LongUnderlyingPositionFrozen;

		///标的空头持仓冻结额度
		TTORATstpSPVolumeType	ShortUnderlyingPositionFrozen;

	};

	/// 请求更新InvestorLimitPosition
	struct CTORATstpSPReqUpdInvestorLimitPositionField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///标的证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///总持仓限额
		TTORATstpSPVolumeType	TotalPositionLimit;

		///多头持仓限额
		TTORATstpSPVolumeType	LongPositionLimit;

		///单日买入开仓限额
		TTORATstpSPVolumeType	TodayBuyOpenLimit;

		///单日卖出开仓限额
		TTORATstpSPVolumeType	TodaySellOpenLimit;

		///单日备兑开仓限额
		TTORATstpSPVolumeType	TodayCoveredOpenLimit;

		///单日开仓限额
		TTORATstpSPVolumeType	TodayOpenLimit;

		///认购多头持仓限额
		TTORATstpSPVolumeType	LongCallPositionLimit;

		///认沽多头持仓限额
		TTORATstpSPVolumeType	LongPutPositionLimit;

		///标的多头持仓限额
		TTORATstpSPVolumeType	LongUnderlyingPositionLimit;

		///标的空头持仓限额
		TTORATstpSPVolumeType	ShortUnderlyingPositionLimit;

		///总持仓冻结额度
		TTORATstpSPVolumeType	TotalPositionFrozen;

		///多头持仓冻结额度
		TTORATstpSPVolumeType	LongPositionFrozen;

		///单日买入开仓冻结额度
		TTORATstpSPVolumeType	TodayBuyOpenFrozen;

		///单日卖出开仓冻结额度
		TTORATstpSPVolumeType	TodaySellOpenFrozen;

		///单日备兑开仓冻结额度
		TTORATstpSPVolumeType	TodayCoveredOpenFrozen;

		///单日开仓冻结额度
		TTORATstpSPVolumeType	TodayOpenFrozen;

		///认购多头持仓冻结额度
		TTORATstpSPVolumeType	LongCallPositionFrozen;

		///认沽多头持仓冻结额度
		TTORATstpSPVolumeType	LongPutPositionFrozen;

		///标的多头持仓冻结额度
		TTORATstpSPVolumeType	LongUnderlyingPositionFrozen;

		///标的空头持仓冻结额度
		TTORATstpSPVolumeType	ShortUnderlyingPositionFrozen;

	};

	/// 请求删除InvestorLimitPosition
	struct CTORATstpSPReqDelInvestorLimitPositionField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///标的证券代码
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// 请求插入InvestorLimitPositionParam
	struct CTORATstpSPReqInsInvestorLimitPositionParamField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///证券市场中的具体品种，如上海股票
		TTORATstpSPProductIDType	ProductID;

		///标的证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///总持仓限额
		TTORATstpSPVolumeType	TotalPositionLimit;

		///多头持仓限额
		TTORATstpSPVolumeType	LongPositionLimit;

		///单日买入开仓限额
		TTORATstpSPVolumeType	TodayBuyOpenLimit;

		///单日卖出开仓限额
		TTORATstpSPVolumeType	TodaySellOpenLimit;

		///单日备兑开仓限额
		TTORATstpSPVolumeType	TodayCoveredOpenLimit;

		///单日开仓限额
		TTORATstpSPVolumeType	TodayOpenLimit;

		///认购多头持仓限额
		TTORATstpSPVolumeType	LongCallPositionLimit;

		///认沽多头持仓限额
		TTORATstpSPVolumeType	LongPutPositionLimit;

		///标的多头持仓限额
		TTORATstpSPVolumeType	LongUnderlyingPositionLimit;

		///标的空头持仓限额
		TTORATstpSPVolumeType	ShortUnderlyingPositionLimit;

	};

	/// 请求更新InvestorLimitPositionParam
	struct CTORATstpSPReqUpdInvestorLimitPositionParamField
	{
		 
		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///证券市场中的具体品种，如上海股票
		TTORATstpSPProductIDType	ProductID;

		///标的证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///总持仓限额
		TTORATstpSPVolumeType	TotalPositionLimit;

		///多头持仓限额
		TTORATstpSPVolumeType	LongPositionLimit;

		///单日买入开仓限额
		TTORATstpSPVolumeType	TodayBuyOpenLimit;

		///单日卖出开仓限额
		TTORATstpSPVolumeType	TodaySellOpenLimit;

		///单日备兑开仓限额
		TTORATstpSPVolumeType	TodayCoveredOpenLimit;

		///单日开仓限额
		TTORATstpSPVolumeType	TodayOpenLimit;

		///认购多头持仓限额
		TTORATstpSPVolumeType	LongCallPositionLimit;

		///认沽多头持仓限额
		TTORATstpSPVolumeType	LongPutPositionLimit;

		///标的多头持仓限额
		TTORATstpSPVolumeType	LongUnderlyingPositionLimit;

		///标的空头持仓限额
		TTORATstpSPVolumeType	ShortUnderlyingPositionLimit;

	};

	/// 请求删除InvestorLimitPositionParam
	struct CTORATstpSPReqDelInvestorLimitPositionParamField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///证券市场中的具体品种，如上海股票
		TTORATstpSPProductIDType	ProductID;

		///标的证券代码
		TTORATstpSPSecurityIDType	SecurityID;

	};

	/// 请求插入InvestorMarginFee
	struct CTORATstpSPReqInsInvestorMarginFeeField
	{
		 
		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///产品代码
		TTORATstpSPProductIDType	ProductID;

		///证券类别代码
		TTORATstpSPSecurityTypeType	SecurityType;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///业务类别
		TTORATstpSPBusinessClassType	BusinessClass;

		///保证金按数量收取金额
		TTORATstpSPMoneyType	FeeByVolume;

		///合约标的价格调整系数
		TTORATstpSPRatioType	PriceAdjustRatio;

		///虚值期权优惠比率
		TTORATstpSPRatioType	OTMPreferRatio;

		///合约标的价格调整保障系数
		TTORATstpSPRatioType	PriceAdjustGuardRatio;

		///上浮比率
		TTORATstpSPRatioType	UpperRatio;

		///保证金模式
		TTORATstpSPRangeModeType	RangeMode;

	};

	/// 请求更新InvestorMarginFee
	struct CTORATstpSPReqUpdInvestorMarginFeeField
	{
		 
		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///产品代码
		TTORATstpSPProductIDType	ProductID;

		///证券类别代码
		TTORATstpSPSecurityTypeType	SecurityType;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///业务类别
		TTORATstpSPBusinessClassType	BusinessClass;

		///保证金按数量收取金额
		TTORATstpSPMoneyType	FeeByVolume;

		///合约标的价格调整系数
		TTORATstpSPRatioType	PriceAdjustRatio;

		///虚值期权优惠比率
		TTORATstpSPRatioType	OTMPreferRatio;

		///合约标的价格调整保障系数
		TTORATstpSPRatioType	PriceAdjustGuardRatio;

		///上浮比率
		TTORATstpSPRatioType	UpperRatio;

		///保证金模式
		TTORATstpSPRangeModeType	RangeMode;

	};

	/// 请求删除InvestorMarginFee
	struct CTORATstpSPReqDelInvestorMarginFeeField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///产品代码
		TTORATstpSPProductIDType	ProductID;

		///证券类别代码
		TTORATstpSPSecurityTypeType	SecurityType;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///业务类别
		TTORATstpSPBusinessClassType	BusinessClass;

	};

	/// 请求插入InvestorTradingFee
	struct CTORATstpSPReqInsInvestorTradingFeeField
	{
		 
		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///产品代码
		TTORATstpSPProductIDType	ProductID;

		///证券类别代码
		TTORATstpSPSecurityTypeType	SecurityType;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///业务类别
		TTORATstpSPBusinessClassType	BusinessClass;

		///佣金类型
		TTORATstpSPBrokerageTypeType	BrokerageType;

		///佣金按金额收取比例
		TTORATstpSPRatioType	RatioByAmt;

		///佣金按面值收取比例
		TTORATstpSPRatioType	RatioByPar;

		///佣金按笔收取金额
		TTORATstpSPMoneyType	FeePerOrder;

		///佣金最低收取金额
		TTORATstpSPMoneyType	FeeMin;

		///佣金最高收取金额
		TTORATstpSPMoneyType	FeeMax;

		///佣金按数量收取金额
		TTORATstpSPMoneyType	FeeByVolume;

		///佣金模式
		TTORATstpSPRangeModeType	RangeMode;

	};

	/// 请求更新InvestorTradingFee
	struct CTORATstpSPReqUpdInvestorTradingFeeField
	{
		 
		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///产品代码
		TTORATstpSPProductIDType	ProductID;

		///证券类别代码
		TTORATstpSPSecurityTypeType	SecurityType;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///业务类别
		TTORATstpSPBusinessClassType	BusinessClass;

		///佣金类型
		TTORATstpSPBrokerageTypeType	BrokerageType;

		///佣金按金额收取比例
		TTORATstpSPRatioType	RatioByAmt;

		///佣金按面值收取比例
		TTORATstpSPRatioType	RatioByPar;

		///佣金按笔收取金额
		TTORATstpSPMoneyType	FeePerOrder;

		///佣金最低收取金额
		TTORATstpSPMoneyType	FeeMin;

		///佣金最高收取金额
		TTORATstpSPMoneyType	FeeMax;

		///佣金按数量收取金额
		TTORATstpSPMoneyType	FeeByVolume;

		///佣金模式
		TTORATstpSPRangeModeType	RangeMode;

	};

	/// 请求删除InvestorTradingFee
	struct CTORATstpSPReqDelInvestorTradingFeeField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///产品代码
		TTORATstpSPProductIDType	ProductID;

		///证券类别代码
		TTORATstpSPSecurityTypeType	SecurityType;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///业务类别
		TTORATstpSPBusinessClassType	BusinessClass;

	};

	/// 请求插入TradingFee
	struct CTORATstpSPReqInsTradingFeeField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///证券品种代码
		TTORATstpSPProductIDType	ProductID;

		///证券类别代码
		TTORATstpSPSecurityTypeType	SecurityType;

		///证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///业务类别
		TTORATstpSPBusinessClassType	BusinessClass;

		///系统标识
		TTORATstpSPSystemFlagType	SystemFlag;

		///印花税按金额收取比例
		TTORATstpSPRatioType	StampTaxRatioByAmt;

		///印花税按面值收取比例
		TTORATstpSPRatioType	StampTaxRatioByPar;

		///印花税按笔收取金额
		TTORATstpSPMoneyType	StampTaxFeePerOrder;

		///印花税按数量收取金额
		TTORATstpSPMoneyType	StampTaxFeeByVolume;

		///印花税最低收取金额
		TTORATstpSPMoneyType	StampTaxFeeMin;

		///印花税最高收取金额
		TTORATstpSPMoneyType	StampTaxFeeMax;

		///过户费按金额收取比例
		TTORATstpSPRatioType	TransferRatioByAmt;

		///过户费按面值收取比例
		TTORATstpSPRatioType	TransferRatioByPar;

		///过户费按笔收取金额
		TTORATstpSPMoneyType	TransferFeePerOrder;

		///过户费按数量收取金额
		TTORATstpSPMoneyType	TransferFeeByVolume;

		///过户费最低收取金额
		TTORATstpSPMoneyType	TransferFeeMin;

		///过户费最高收取金额
		TTORATstpSPMoneyType	TransferFeeMax;

		///经手费按金额收取比例
		TTORATstpSPRatioType	HandlingRatioByAmt;

		///经手费按面值收取比例
		TTORATstpSPRatioType	HandlingRatioByPar;

		///经手费按笔收取金额
		TTORATstpSPMoneyType	HandlingFeePerOrder;

		///经手费按数量收取金额
		TTORATstpSPMoneyType	HandlingFeeByVolume;

		///经手费最低收取金额
		TTORATstpSPMoneyType	HandlingFeeMin;

		///经手费最高收取金额
		TTORATstpSPMoneyType	HandlingFeeMax;

		///证管费按金额收取比例
		TTORATstpSPRatioType	RegulateRatioByAmt;

		///证管费按面值收取比例
		TTORATstpSPRatioType	RegulateRatioByPar;

		///证管费按笔收取金额
		TTORATstpSPMoneyType	RegulateFeePerOrder;

		///证管费按数量收取金额
		TTORATstpSPMoneyType	RegulateFeeByVolume;

		///证管费最低收取金额
		TTORATstpSPMoneyType	RegulateFeeMin;

		///证管费最高收取金额
		TTORATstpSPMoneyType	RegulateFeeMax;

		///结算费按金额收取比例
		TTORATstpSPRatioType	SettlementRatioByAmt;

		///结算费按面值收取比例
		TTORATstpSPRatioType	SettlementRatioByPar;

		///结算费按笔收取金额
		TTORATstpSPMoneyType	SettlementFeePerOrder;

		///结算费按数量收取金额
		TTORATstpSPMoneyType	SettlementFeeByVolume;

		///结算费最低收取金额
		TTORATstpSPMoneyType	SettlementFeeMin;

		///结算费最高收取金额
		TTORATstpSPMoneyType	SettlementFeeMax;

	};

	/// 请求更新TradingFee
	struct CTORATstpSPReqUpdTradingFeeField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///证券品种代码
		TTORATstpSPProductIDType	ProductID;

		///证券类别代码
		TTORATstpSPSecurityTypeType	SecurityType;

		///证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///业务类别
		TTORATstpSPBusinessClassType	BusinessClass;

		///系统标识
		TTORATstpSPSystemFlagType	SystemFlag;

		///印花税按金额收取比例
		TTORATstpSPRatioType	StampTaxRatioByAmt;

		///印花税按面值收取比例
		TTORATstpSPRatioType	StampTaxRatioByPar;

		///印花税按笔收取金额
		TTORATstpSPMoneyType	StampTaxFeePerOrder;

		///印花税按数量收取金额
		TTORATstpSPMoneyType	StampTaxFeeByVolume;

		///印花税最低收取金额
		TTORATstpSPMoneyType	StampTaxFeeMin;

		///印花税最高收取金额
		TTORATstpSPMoneyType	StampTaxFeeMax;

		///过户费按金额收取比例
		TTORATstpSPRatioType	TransferRatioByAmt;

		///过户费按面值收取比例
		TTORATstpSPRatioType	TransferRatioByPar;

		///过户费按笔收取金额
		TTORATstpSPMoneyType	TransferFeePerOrder;

		///过户费按数量收取金额
		TTORATstpSPMoneyType	TransferFeeByVolume;

		///过户费最低收取金额
		TTORATstpSPMoneyType	TransferFeeMin;

		///过户费最高收取金额
		TTORATstpSPMoneyType	TransferFeeMax;

		///经手费按金额收取比例
		TTORATstpSPRatioType	HandlingRatioByAmt;

		///经手费按面值收取比例
		TTORATstpSPRatioType	HandlingRatioByPar;

		///经手费按笔收取金额
		TTORATstpSPMoneyType	HandlingFeePerOrder;

		///经手费按数量收取金额
		TTORATstpSPMoneyType	HandlingFeeByVolume;

		///经手费最低收取金额
		TTORATstpSPMoneyType	HandlingFeeMin;

		///经手费最高收取金额
		TTORATstpSPMoneyType	HandlingFeeMax;

		///证管费按金额收取比例
		TTORATstpSPRatioType	RegulateRatioByAmt;

		///证管费按面值收取比例
		TTORATstpSPRatioType	RegulateRatioByPar;

		///证管费按笔收取金额
		TTORATstpSPMoneyType	RegulateFeePerOrder;

		///证管费按数量收取金额
		TTORATstpSPMoneyType	RegulateFeeByVolume;

		///证管费最低收取金额
		TTORATstpSPMoneyType	RegulateFeeMin;

		///证管费最高收取金额
		TTORATstpSPMoneyType	RegulateFeeMax;

		///结算费按金额收取比例
		TTORATstpSPRatioType	SettlementRatioByAmt;

		///结算费按面值收取比例
		TTORATstpSPRatioType	SettlementRatioByPar;

		///结算费按笔收取金额
		TTORATstpSPMoneyType	SettlementFeePerOrder;

		///结算费按数量收取金额
		TTORATstpSPMoneyType	SettlementFeeByVolume;

		///结算费最低收取金额
		TTORATstpSPMoneyType	SettlementFeeMin;

		///结算费最高收取金额
		TTORATstpSPMoneyType	SettlementFeeMax;

	};

	/// 请求删除TradingFee
	struct CTORATstpSPReqDelTradingFeeField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///证券品种代码
		TTORATstpSPProductIDType	ProductID;

		///证券类别代码
		TTORATstpSPSecurityTypeType	SecurityType;

		///证券代码
		TTORATstpSPSecurityIDType	SecurityID;

		///业务类别
		TTORATstpSPBusinessClassType	BusinessClass;

	};

	/// 请求插入MarginFeeTemplate
	struct CTORATstpSPReqInsMarginFeeTemplateField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///保证金费模板代码
		TTORATstpSPMarginFeeTemplateIDType	MarginFeeTemplateID;

		///产品代码
		TTORATstpSPProductIDType	ProductID;

		///证券类别代码
		TTORATstpSPSecurityTypeType	SecurityType;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///业务类别
		TTORATstpSPBusinessClassType	BusinessClass;

		///保证金按数量收取金额
		TTORATstpSPMoneyType	FeeByVolume;

		///合约标的价格调整系数
		TTORATstpSPRatioType	PriceAdjustRatio;

		///虚值期权优惠比率
		TTORATstpSPRatioType	OTMPreferRatio;

		///合约标的价格调整保障系数
		TTORATstpSPRatioType	PriceAdjustGuardRatio;

		///上浮比率
		TTORATstpSPRatioType	UpperRatio;

	};

	/// 请求更新MarginFeeTemplate
	struct CTORATstpSPReqUpdMarginFeeTemplateField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///保证金费模板代码
		TTORATstpSPMarginFeeTemplateIDType	MarginFeeTemplateID;

		///产品代码
		TTORATstpSPProductIDType	ProductID;

		///证券类别代码
		TTORATstpSPSecurityTypeType	SecurityType;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///业务类别
		TTORATstpSPBusinessClassType	BusinessClass;

		///保证金按数量收取金额
		TTORATstpSPMoneyType	FeeByVolume;

		///合约标的价格调整系数
		TTORATstpSPRatioType	PriceAdjustRatio;

		///虚值期权优惠比率
		TTORATstpSPRatioType	OTMPreferRatio;

		///合约标的价格调整保障系数
		TTORATstpSPRatioType	PriceAdjustGuardRatio;

		///上浮比率
		TTORATstpSPRatioType	UpperRatio;

	};

	/// 请求删除MarginFeeTemplate
	struct CTORATstpSPReqDelMarginFeeTemplateField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///保证金费模板代码
		TTORATstpSPMarginFeeTemplateIDType	MarginFeeTemplateID;

		///产品代码
		TTORATstpSPProductIDType	ProductID;

		///证券类别代码
		TTORATstpSPSecurityTypeType	SecurityType;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///业务类别
		TTORATstpSPBusinessClassType	BusinessClass;

	};

	/// 请求插入TradingFeeTemplate
	struct CTORATstpSPReqInsTradingFeeTemplateField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///佣金模板代码
		TTORATstpSPTradingFeeTemplateIDType	TradingFeeTemplateID;

		///产品代码
		TTORATstpSPProductIDType	ProductID;

		///证券类别代码
		TTORATstpSPSecurityTypeType	SecurityType;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///业务类别
		TTORATstpSPBusinessClassType	BusinessClass;

		///佣金类型
		TTORATstpSPBrokerageTypeType	BrokerageType;

		///佣金按金额收取比例
		TTORATstpSPRatioType	RatioByAmt;

		///佣金按面值收取比例
		TTORATstpSPRatioType	RatioByPar;

		///佣金按笔收取金额
		TTORATstpSPMoneyType	FeePerOrder;

		///佣金最低收取金额
		TTORATstpSPMoneyType	FeeMin;

		///佣金最高收取金额
		TTORATstpSPMoneyType	FeeMax;

		///佣金按数量收取金额
		TTORATstpSPMoneyType	FeeByVolume;

	};

	/// 请求更新TradingFeeTemplate
	struct CTORATstpSPReqUpdTradingFeeTemplateField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///佣金模板代码
		TTORATstpSPTradingFeeTemplateIDType	TradingFeeTemplateID;

		///产品代码
		TTORATstpSPProductIDType	ProductID;

		///证券类别代码
		TTORATstpSPSecurityTypeType	SecurityType;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///业务类别
		TTORATstpSPBusinessClassType	BusinessClass;

		///佣金类型
		TTORATstpSPBrokerageTypeType	BrokerageType;

		///佣金按金额收取比例
		TTORATstpSPRatioType	RatioByAmt;

		///佣金按面值收取比例
		TTORATstpSPRatioType	RatioByPar;

		///佣金按笔收取金额
		TTORATstpSPMoneyType	FeePerOrder;

		///佣金最低收取金额
		TTORATstpSPMoneyType	FeeMin;

		///佣金最高收取金额
		TTORATstpSPMoneyType	FeeMax;

		///佣金按数量收取金额
		TTORATstpSPMoneyType	FeeByVolume;

	};

	/// 请求删除TradingFeeTemplate
	struct CTORATstpSPReqDelTradingFeeTemplateField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///佣金模板代码
		TTORATstpSPTradingFeeTemplateIDType	TradingFeeTemplateID;

		///产品代码
		TTORATstpSPProductIDType	ProductID;

		///证券类别代码
		TTORATstpSPSecurityTypeType	SecurityType;

		///合约代码
		TTORATstpSPSecurityIDType	SecurityID;

		///业务类别
		TTORATstpSPBusinessClassType	BusinessClass;

	};

	/// 请求插入CombPosDetail
	struct CTORATstpSPReqInsCombPosDetailField
	{
		 
		///交易日期
		TTORATstpSPDateType	TradingDay;

		///交易所组合编码
		TTORATstpSPExchangeCombIDType	ExchangeCombID;

		///组合策略
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

		///组合合约代码
		TTORATstpSPSecurityIDType	CombSecurityID;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///交易账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///昨日组合数量
		TTORATstpSPVolumeType	HistoryPos;

		///今日组合数量
		TTORATstpSPVolumeType	TodayPos;

		///组合时期
		TTORATstpSPDateType	TradeDate;

		///组合时间
		TTORATstpSPTimeType	TradeTime;

		///组合状态
		TTORATstpSPCombinationStatusType	CombinationStatus;

		///成份合约个数，最多四条腿
		TTORATstpSPRecordCntType	NoLegs;

		///第一腿合约代码
		TTORATstpSPSecurityIDType	Leg1SecurityID;

		///第一腿昨日组合数量
		TTORATstpSPVolumeType	Leg1HistoryPos;

		///第一腿今日组合数量
		TTORATstpSPVolumeType	Leg1TodayPos;

		///第一腿持仓方向
		TTORATstpSPPosiDirectionType	Leg1PosiDirection;

		///第一腿期权类型
		TTORATstpSPOptionsTypeType	Leg1OptionsType;

		///第二腿合约代码
		TTORATstpSPSecurityIDType	Leg2SecurityID;

		///第二腿昨日组合数量
		TTORATstpSPVolumeType	Leg2HistoryPos;

		///第二腿今日组合数量
		TTORATstpSPVolumeType	Leg2TodayPos;

		///第二腿持仓方向
		TTORATstpSPPosiDirectionType	Leg2PosiDirection;

		///第二腿期权类型
		TTORATstpSPOptionsTypeType	Leg2OptionsType;

		///第三腿合约代码
		TTORATstpSPSecurityIDType	Leg3SecurityID;

		///第三腿昨日组合数量
		TTORATstpSPVolumeType	Leg3HistoryPos;

		///第三腿今日组合数量
		TTORATstpSPVolumeType	Leg3TodayPos;

		///第三腿持仓方向
		TTORATstpSPPosiDirectionType	Leg3PosiDirection;

		///第三腿期权类型
		TTORATstpSPOptionsTypeType	Leg3OptionsType;

		///第四腿合约代码
		TTORATstpSPSecurityIDType	Leg4SecurityID;

		///第四腿昨日组合数量
		TTORATstpSPVolumeType	Leg4HistoryPos;

		///第四腿今日组合数量
		TTORATstpSPVolumeType	Leg4TodayPos;

		///第四腿持仓方向
		TTORATstpSPPosiDirectionType	Leg4PosiDirection;

		///第四腿期权类型
		TTORATstpSPOptionsTypeType	Leg4OptionsType;

		///拆分冻结的昨日组合数量
		TTORATstpSPVolumeType	HistoryPosSplitFrozen;

		///拆分冻结的今日组合数量
		TTORATstpSPVolumeType	TodayPosSplitFrozen;

		///拆分冻结的第一腿昨日组合数量
		TTORATstpSPVolumeType	Leg1HistoryPosSplitFrozen;

		///拆分冻结的第一腿今日组合数量
		TTORATstpSPVolumeType	Leg1TodayPosSplitFrozen;

		///拆分冻结的第二腿昨日组合数量
		TTORATstpSPVolumeType	Leg2HistoryPosSplitFrozen;

		///拆分冻结的第二腿今日组合数量
		TTORATstpSPVolumeType	Leg2TodayPosSplitFrozen;

	};

	/// 请求更新CombPosDetail
	struct CTORATstpSPReqUpdCombPosDetailField
	{
		 
		///交易日期
		TTORATstpSPDateType	TradingDay;

		///交易所组合编码
		TTORATstpSPExchangeCombIDType	ExchangeCombID;

		///组合策略
		TTORATstpSPCombinationStrategyType	CombinationStrategy;

		///组合合约代码
		TTORATstpSPSecurityIDType	CombSecurityID;

		///经纪公司部门代码
		TTORATstpSPDepartmentIDType	DepartmentID;

		///投资者代码
		TTORATstpSPInvestorIDType	InvestorID;

		///投资单元代码
		TTORATstpSPBusinessUnitIDType	BusinessUnitID;

		///市场代码
		TTORATstpSPMarketIDType	MarketID;

		///交易账户代码
		TTORATstpSPShareholderIDType	ShareholderID;

		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///昨日组合数量
		TTORATstpSPVolumeType	HistoryPos;

		///今日组合数量
		TTORATstpSPVolumeType	TodayPos;

		///组合时期
		TTORATstpSPDateType	TradeDate;

		///组合时间
		TTORATstpSPTimeType	TradeTime;

		///组合状态
		TTORATstpSPCombinationStatusType	CombinationStatus;

		///成份合约个数，最多四条腿
		TTORATstpSPRecordCntType	NoLegs;

		///第一腿合约代码
		TTORATstpSPSecurityIDType	Leg1SecurityID;

		///第一腿昨日组合数量
		TTORATstpSPVolumeType	Leg1HistoryPos;

		///第一腿今日组合数量
		TTORATstpSPVolumeType	Leg1TodayPos;

		///第一腿持仓方向
		TTORATstpSPPosiDirectionType	Leg1PosiDirection;

		///第一腿期权类型
		TTORATstpSPOptionsTypeType	Leg1OptionsType;

		///第二腿合约代码
		TTORATstpSPSecurityIDType	Leg2SecurityID;

		///第二腿昨日组合数量
		TTORATstpSPVolumeType	Leg2HistoryPos;

		///第二腿今日组合数量
		TTORATstpSPVolumeType	Leg2TodayPos;

		///第二腿持仓方向
		TTORATstpSPPosiDirectionType	Leg2PosiDirection;

		///第二腿期权类型
		TTORATstpSPOptionsTypeType	Leg2OptionsType;

		///第三腿合约代码
		TTORATstpSPSecurityIDType	Leg3SecurityID;

		///第三腿昨日组合数量
		TTORATstpSPVolumeType	Leg3HistoryPos;

		///第三腿今日组合数量
		TTORATstpSPVolumeType	Leg3TodayPos;

		///第三腿持仓方向
		TTORATstpSPPosiDirectionType	Leg3PosiDirection;

		///第三腿期权类型
		TTORATstpSPOptionsTypeType	Leg3OptionsType;

		///第四腿合约代码
		TTORATstpSPSecurityIDType	Leg4SecurityID;

		///第四腿昨日组合数量
		TTORATstpSPVolumeType	Leg4HistoryPos;

		///第四腿今日组合数量
		TTORATstpSPVolumeType	Leg4TodayPos;

		///第四腿持仓方向
		TTORATstpSPPosiDirectionType	Leg4PosiDirection;

		///第四腿期权类型
		TTORATstpSPOptionsTypeType	Leg4OptionsType;

		///拆分冻结的昨日组合数量
		TTORATstpSPVolumeType	HistoryPosSplitFrozen;

		///拆分冻结的今日组合数量
		TTORATstpSPVolumeType	TodayPosSplitFrozen;

		///拆分冻结的第一腿昨日组合数量
		TTORATstpSPVolumeType	Leg1HistoryPosSplitFrozen;

		///拆分冻结的第一腿今日组合数量
		TTORATstpSPVolumeType	Leg1TodayPosSplitFrozen;

		///拆分冻结的第二腿昨日组合数量
		TTORATstpSPVolumeType	Leg2HistoryPosSplitFrozen;

		///拆分冻结的第二腿今日组合数量
		TTORATstpSPVolumeType	Leg2TodayPosSplitFrozen;

	};

	/// 请求删除CombPosDetail
	struct CTORATstpSPReqDelCombPosDetailField
	{
		 
		///交易所代码
		TTORATstpSPExchangeIDType	ExchangeID;

		///交易日期
		TTORATstpSPDateType	TradingDay;

		///交易所组合编码
		TTORATstpSPExchangeCombIDType	ExchangeCombID;

	};

}
#endif