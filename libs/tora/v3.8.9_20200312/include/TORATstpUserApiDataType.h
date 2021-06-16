/////////////////////////////////////////////////////////////////////////
///@company 上海泰琰信息科技有限公司
///@file TORATstpUserApiStruct.h
///@brief 定义了客户端接口使用的业务数据结构
///@history 
/////////////////////////////////////////////////////////////////////////

#ifndef _TORA_TSTPDATATYPE_H
#define _TORA_TSTPDATATYPE_H

#include <limits.h>
#include <float.h>

#define INT_NULL_VAL INT_MAX

#define FLOAT_NULL_VAL DBL_MAX

#define CHAR_NULL_VAL 0

#define WORD_NULL_VAL SHRT_MAX

#ifdef WINDOWS
#define LONG_NULL_VAL _I64_MAX
#else
#define LONG_NULL_VAL  LLONG_MAX
#endif

#define POINT_NULL_VAL NULL

inline void set_null(int &v)
{
	v = INT_NULL_VAL;
}

inline bool is_null(int v)
{
	return v == INT_NULL_VAL;
}

inline void set_null(double &v)
{
	v = FLOAT_NULL_VAL;
}

inline bool is_null(double v)
{
	return v == FLOAT_NULL_VAL;
}

inline void set_null(char &v)
{
	v = CHAR_NULL_VAL;
}

inline bool is_null(char v)
{
	return v == CHAR_NULL_VAL;
}

inline void set_null(short &v)
{
	v = WORD_NULL_VAL;
}

inline bool is_null(short v)
{
	return v == WORD_NULL_VAL;
}

#ifdef WINDOWS
inline void set_null(__int64 &v)
#else
inline void set_null(long long &v)
#endif
{
	v = LONG_NULL_VAL;
}

#ifdef WINDOWS
inline bool is_null(__int64 v)
#else
inline bool is_null(long long v)
#endif
{
	return v == LONG_NULL_VAL;
}

inline void set_null(char *v)
{
	v[0] = '\0';
}

inline bool is_null(const char *v)
{
	const char *p=v;
	while (*p)
	{
		if (*p!=' ')
		{
			return false;
		}
		p++;
	}
	return true;
}

enum TORA_TE_RESUME_TYPE
{
	TORA_TERT_RESTART = 0,
	TORA_TERT_RESUME,
	TORA_TERT_QUICK
};


/////////////////////////////////////////////////////////////////////////
/// TTORATstpDateType是一个日期类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpDateType[9];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTimeType是一个时间类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpTimeType[9];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpMillisecType是一个时间（毫秒）类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpMillisecType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpPriceType是一个价格类型
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpPriceType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpRatioType是一个比率类型
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpRatioType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpMoneyType是一个资金类型
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpMoneyType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpVolumeType是一个数量类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpVolumeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpLargeVolumeType是一个大额数量类型
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpLargeVolumeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpBoolType是一个布尔型类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpBoolType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpSequenceNoType是一个流水号类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpSequenceNoType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpSerialType是一个流水号类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpSerialType[31];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCommFluxType是一个通讯流量类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpCommFluxType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpRoleIDType是一个角色编号类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpRoleIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpRoleDescriptionType是一个角色描述类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpRoleDescriptionType[161];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpFunctionsType是一个功能权限集合类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpFunctionsType[513];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpDeviceIDType是一个设备标识类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpDeviceIDType[129];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCertSerialType是一个认证序列类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpCertSerialType[129];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpExchangeIDType是一个交易所代码类型
/////////////////////////////////////////////////////////////////////////
///通用(内部使用)
#define TORA_TSTP_EXD_COMM '0'
///上海交易所
#define TORA_TSTP_EXD_SSE '1'
///深圳交易所
#define TORA_TSTP_EXD_SZSE '2'
///香港交易所
#define TORA_TSTP_EXD_HK '3'

typedef char TTORATstpExchangeIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpAuthModeType是一个认证方式类型
/////////////////////////////////////////////////////////////////////////
///密码
#define TORA_TSTP_AM_Password '0'
///指纹
#define TORA_TSTP_AM_FingerPrint '1'
///钥匙串
#define TORA_TSTP_AM_CertInfo '2'

typedef char TTORATstpAuthModeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpVolumeMultipleType是一个合约数量乘数类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpVolumeMultipleType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIdCardNoType是一个证件编号类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpIdCardNoType[51];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpUserIDType是一个交易用户代码类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpUserIDType[16];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTradeIDType是一个成交编号类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpTradeIDType[21];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpOrderSysIDType是一个系统报单编号类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpOrderSysIDType[21];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCondOrderIDType是一个条件报单编号类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpCondOrderIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpPasswordType是一个密码类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpPasswordType[41];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpFrontIDType是一个前置编号类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpFrontIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpSessionIDType是一个会话编号类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpSessionIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpProductInfoType是一个产品信息类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpProductInfoType[11];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpProtocolInfoType是一个协议信息类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpProtocolInfoType[11];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCountType是一个计数类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpCountType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpErrorIDType是一个错误代码类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpErrorIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpErrorMsgType是一个错误信息类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpErrorMsgType[81];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpPositionTypeType是一个持仓类型类型
/////////////////////////////////////////////////////////////////////////
///净持仓
#define TORA_TSTP_PT_Net '1'
///综合持仓
#define TORA_TSTP_PT_Gross '2'

typedef char TTORATstpPositionTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpParameterCharValType是一个参数文本值类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpParameterCharValType[101];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpNameType是一个名称类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpNameType[61];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpProductIDType是一个证券品种代码类型
/////////////////////////////////////////////////////////////////////////
///通用(内部使用)
#define TORA_TSTP_PID_COMMON '0'
///上海股票
#define TORA_TSTP_PID_SHStock '1'
///上海基金
#define TORA_TSTP_PID_SHFund '3'
///上海债券
#define TORA_TSTP_PID_SHBond '4'
///上海标准券
#define TORA_TSTP_PID_SHStandard '5'
///上海质押式回购
#define TORA_TSTP_PID_SHRepurchase '6'
///深圳股票
#define TORA_TSTP_PID_SZStock '7'
///深圳基金
#define TORA_TSTP_PID_SZFund '9'
///深圳债券
#define TORA_TSTP_PID_SZBond 'a'
///深圳标准券
#define TORA_TSTP_PID_SZStandard 'b'
///深圳质押式回购
#define TORA_TSTP_PID_SZRepurchase 'c'
///深港通港股主板
#define TORA_TSTP_PID_SZSEHKMain 'd'
///深港通港股创业板
#define TORA_TSTP_PID_SZSEHKGEM 'e'
///深港通港股扩充交易证券
#define TORA_TSTP_PID_SZSEHKETS 'f'
///深港通港股NasdaqAMX市场
#define TORA_TSTP_PID_SZSEHKNasdaqAMX 'g'
///上海沪伦通
#define TORA_TSTP_PID_SHCDR 'h'
///上海科创板
#define TORA_TSTP_PID_SHKC 'i'

typedef char TTORATstpProductIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpSecurityIDType是一个证券代码类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpSecurityIDType[31];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpParValueType是一个面值类型
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpParValueType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpPriceTickType是一个最小变动价位类型
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpPriceTickType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTradingUnitType是一个交易单位类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpTradingUnitType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpSecurityStatusType是一个证券状态类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpSecurityStatusType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpAccountIDType是一个投资者资金帐号类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpAccountIDType[21];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpInvestorIDType是一个投资者代码类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpInvestorIDType[13];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpAddressType是一个通讯地址类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpAddressType[101];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpDepartmentIDType是一个部门代码类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpDepartmentIDType[11];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpBranchIDType是一个营业部类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpBranchIDType[11];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpRemarkType是一个备注类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpRemarkType[513];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTerminalInfoType是一个终端信息类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpTerminalInfoType[256];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpShareholderIDType是一个股东账户代码类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpShareholderIDType[11];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpPbuIDType是一个交易单元代码类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpPbuIDType[11];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIPAddressType是一个IP地址类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpIPAddressType[16];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpMacAddressType是一个Mac地址类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpMacAddressType[21];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpLangType是一个语言类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpLangType[17];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpInterestType是一个利息类型
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpInterestType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpOrderLocalIDType是一个本地报单编号类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpOrderLocalIDType[13];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpPositionVolumeType是一个证券数量类型
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpPositionVolumeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpBusinessUnitIDType是一个投资单元代码类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpBusinessUnitIDType[17];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpBusinessUnitNameType是一个投资单元名称类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpBusinessUnitNameType[61];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTimeStampType是一个时间戳类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpTimeStampType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpBigTimeStampType是一个长时间戳类型
/////////////////////////////////////////////////////////////////////////
#ifdef WINDOWS
typedef __int64 TTORATstpBigTimeStampType;
#else
typedef long long int TTORATstpBigTimeStampType;
#endif

/////////////////////////////////////////////////////////////////////////
/// TTORATstpSecurityNameType是一个证券名称(长)类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpSecurityNameType[41];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpShortSecurityNameType是一个证券名称(短)类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpShortSecurityNameType[21];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpExternalSerialType是一个外部流水号类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpExternalSerialType[65];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpOrderRefType是一个报单引用类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpOrderRefType[13];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpRequestIDType是一个请求编号类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpRequestIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIntSerialType是一个整数流水号类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpIntSerialType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpInvestorNameType是一个投资者名称类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpInvestorNameType[81];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpUserNameType是一个用户名称类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpUserNameType[81];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpLoginLimitType是一个登录限制类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpLoginLimitType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCurrencyIDType是一个币种类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpCurrencyIDType[4];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpBankIDType是一个银行代码类型
/////////////////////////////////////////////////////////////////////////
///中国建设银行
#define TORA_TSTP_BKID_CCB '1'
///中国农业银行
#define TORA_TSTP_BKID_ABC '2'
///中国工商银行
#define TORA_TSTP_BKID_ICBC '3'
///中国银行
#define TORA_TSTP_BKID_BOC '4'
///中国招商银行
#define TORA_TSTP_BKID_CMB '5'
///中国交通银行
#define TORA_TSTP_BKID_BC '6'
///浦东发展银行
#define TORA_TSTP_BKID_SPDB '7'
///兴业银行
#define TORA_TSTP_BKID_CIB '8'
///中国光大银行
#define TORA_TSTP_BKID_CEB '9'
///广东发展银行
#define TORA_TSTP_BKID_GDB 'a'
///南京银行
#define TORA_TSTP_BKID_NJCB 'b'
///上海银行
#define TORA_TSTP_BKID_SHCB 'c'
///中信银行
#define TORA_TSTP_BKID_CITICB 'd'
///华夏银行
#define TORA_TSTP_BKID_HXB 'e'
///民生银行
#define TORA_TSTP_BKID_CMBC 'f'
///平安银行
#define TORA_TSTP_BKID_PACB 'g'
///宁波银行
#define TORA_TSTP_BKID_NBCB 'h'

typedef char TTORATstpBankIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpBankAccountIDType是一个签约银行账号类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpBankAccountIDType[31];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpRangeModeType是一个范围模式类型
/////////////////////////////////////////////////////////////////////////
///普通范围模式
#define TORA_TSTP_RM_Normal '0'
///模板范围模式
#define TORA_TSTP_RM_Template '1'
///折扣模式
#define TORA_TSTP_RM_Discount '2'
///非默认非通用
#define TORA_TSTP_RM_NDNC '3'
///非默认通用
#define TORA_TSTP_RM_NDYC '4'
///默认非通用
#define TORA_TSTP_RM_YDNC '5'
///默认通用
#define TORA_TSTP_RM_YDYC '6'

typedef char TTORATstpRangeModeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTransferReasonType是一个外围系统仓位调拨原因类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpTransferReasonType[21];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpActiveStatusType是一个用户状态类型
/////////////////////////////////////////////////////////////////////////
///启用
#define TORA_TSTP_USTS_Enabled '1'
///禁用
#define TORA_TSTP_USTS_Disabled '2'
///锁定
#define TORA_TSTP_USTS_Locked '4'

typedef char TTORATstpActiveStatusType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCombOffsetFlagType是一个组合开平标志类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpCombOffsetFlagType[5];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCombHedgeFlagType是一个组合投机套保标志类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpCombHedgeFlagType[5];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpExchangeInstIDType是一个交易所合约代码类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpExchangeInstIDType[31];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTelephoneType是一个联系电话类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpTelephoneType[41];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpMobileType是一个手机类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpMobileType[41];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTraderIDType是一个交易员代码类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpTraderIDType[21];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpLongVolumeType是一个LongVolume类型
/////////////////////////////////////////////////////////////////////////
#ifdef WINDOWS
typedef __int64 TTORATstpLongVolumeType;
#else
typedef long long int TTORATstpLongVolumeType;
#endif

/////////////////////////////////////////////////////////////////////////
/// TTORATstpLongSequenceType是一个序号类型
/////////////////////////////////////////////////////////////////////////
#ifdef WINDOWS
typedef __int64 TTORATstpLongSequenceType;
#else
typedef long long int TTORATstpLongSequenceType;
#endif

/////////////////////////////////////////////////////////////////////////
/// TTORATstpOrderUnitType是一个申报单位类型
/////////////////////////////////////////////////////////////////////////
///手
#define TORA_TSTP_OUT_Shou '0'
///股
#define TORA_TSTP_OUT_Gu '1'
///份
#define TORA_TSTP_OUT_Fen '2'
///张
#define TORA_TSTP_OUT_Zhang '3'

typedef char TTORATstpOrderUnitType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIdCardTypeType是一个证件类型类型
/////////////////////////////////////////////////////////////////////////
///组织机构代码
#define TORA_TSTP_ICT_EID '0'
///中国公民身份证
#define TORA_TSTP_ICT_IDCard '1'
///军官证
#define TORA_TSTP_ICT_OfficerIDCard '2'
///警官证
#define TORA_TSTP_ICT_PoliceIDCard '3'
///士兵证
#define TORA_TSTP_ICT_SoldierIDCard '4'
///户口簿
#define TORA_TSTP_ICT_HouseholdRegister  '5'
///护照
#define TORA_TSTP_ICT_Passport '6'
///台胞证
#define TORA_TSTP_ICT_TaiwanCompatriotIDCard  '7'
///回乡证
#define TORA_TSTP_ICT_HomeComingCard '8'
///营业执照号
#define TORA_TSTP_ICT_LicenseNo '9'
///税务登记号/当地纳税ID
#define TORA_TSTP_ICT_TaxNo 'A'
///港澳居民来往内地通行证
#define TORA_TSTP_ICT_HMMainlandTravelPermit 'B'
///台湾居民来往大陆通行证
#define TORA_TSTP_ICT_TwMainlandTravelPermit 'C'
///驾照
#define TORA_TSTP_ICT_DrivingLicense 'D'
///当地社保ID
#define TORA_TSTP_ICT_SocialID 'F'
///当地身份证
#define TORA_TSTP_ICT_LocalID 'G'
///商业登记证
#define TORA_TSTP_ICT_BusinessRegistration 'H'
///港澳永久性居民身份证
#define TORA_TSTP_ICT_HKMCIDCard 'I'
///人行开户许可证
#define TORA_TSTP_ICT_AccountsPermits 'J'
///其他证件
#define TORA_TSTP_ICT_OtherCard 'x'

typedef char TTORATstpIdCardTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpAccountTypeType是一个资金账户类型类型
/////////////////////////////////////////////////////////////////////////
///普通
#define TORA_TSTP_FAT_Normal '1'
///信用
#define TORA_TSTP_FAT_Credit '2'
///衍生品
#define TORA_TSTP_FAT_Derivatives '3'

typedef char TTORATstpAccountTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpDirectionType是一个报单类别类型
/////////////////////////////////////////////////////////////////////////
///买入
#define TORA_TSTP_D_Buy '0'
///卖出
#define TORA_TSTP_D_Sell '1'
///ETF场内申购
#define TORA_TSTP_D_ETFPur '2'
///ETF场内赎回
#define TORA_TSTP_D_ETFRed '3'
///新股申购
#define TORA_TSTP_D_IPO '4'
///正回购
#define TORA_TSTP_D_Repurchase '5'
///逆回购
#define TORA_TSTP_D_ReverseRepur '6'
///开放式基金申购
#define TORA_TSTP_D_OeFundPur '8'
///开放式基金赎回
#define TORA_TSTP_D_OeFundRed '9'
///担保品划入
#define TORA_TSTP_D_CollateralIn 'a'
///担保品划出
#define TORA_TSTP_D_CollateralOut 'b'
///质押入库
#define TORA_TSTP_D_PledgeIn 'd'
///质押出库
#define TORA_TSTP_D_PledgeOut 'e'
///配股配债
#define TORA_TSTP_D_Rationed 'f'
///开放式基金拆分
#define TORA_TSTP_D_Split 'g'
///开放式基金合并
#define TORA_TSTP_D_Merge 'h'
///融资买入
#define TORA_TSTP_D_MarginBuy 'i'
///融券卖出
#define TORA_TSTP_D_ShortSell 'j'
///卖券还款
#define TORA_TSTP_D_SellRepayment 'k'
///买券还券
#define TORA_TSTP_D_BuyRepayment 'l'
///还券划转
#define TORA_TSTP_D_SecurityRepay 'm'
///余券划转
#define TORA_TSTP_D_RemainTransfer 'n'
///债转股
#define TORA_TSTP_D_BondConvertStock 't'
///债券回售
#define TORA_TSTP_D_BondPutback 'u'
///ETF场外申购
#define TORA_TSTP_D_ETFOtPur 'v'
///ETF场外赎回
#define TORA_TSTP_D_ETFOtRed 'w'

typedef char TTORATstpDirectionType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpBrokerageTypeType是一个佣金类型类型
/////////////////////////////////////////////////////////////////////////
///毛佣金
#define TORA_TSTP_BT_Gross '0'
///净佣金
#define TORA_TSTP_BT_Net '1'

typedef char TTORATstpBrokerageTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpUserTypeType是一个用户类型类型
/////////////////////////////////////////////////////////////////////////
///经纪公司用户
#define TORA_TSTP_UTYPE_BrokerUser '0'
///超级用户
#define TORA_TSTP_UTYPE_SuperUser '1'
///投资者用户
#define TORA_TSTP_UTYPE_Investor '2'

typedef char TTORATstpUserTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpContingentConditionType是一个触发条件类型
/////////////////////////////////////////////////////////////////////////
///成交触发
#define TORA_TSTP_CC_TradeTouch '0'
///撤单触发
#define TORA_TSTP_CC_CancelTouch '1'
///时间触发
#define TORA_TSTP_CC_TimeTouch '2'
///交易时段触发
#define TORA_TSTP_CC_SegmentTouch '3'
///最新价大于等于条件价
#define TORA_TSTP_CC_LastPriceGreaterThanStopPrice '4'
///最新价小于等于条件价
#define TORA_TSTP_CC_LastPriceLesserThanStopPrice '5'
///卖一价大于等于条件价
#define TORA_TSTP_CC_AskPriceGreaterEqualStopPrice '6'
///卖一价小于等于条件价
#define TORA_TSTP_CC_AskPriceLesserEqualStopPrice '7'
///买一价大于等于条件价
#define TORA_TSTP_CC_BidPriceGreaterEqualStopPrice '8'
///买一价小于等于条件价
#define TORA_TSTP_CC_BidPriceLesserEqualStopPrice '9'

typedef char TTORATstpContingentConditionType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpETFCurrenceReplaceStatusType是一个ETF现金替代标志类型
/////////////////////////////////////////////////////////////////////////
///禁止现金替代
#define TORA_TSTP_ETFCTSTAT_Forbidden '0'
///可以现金替代
#define TORA_TSTP_ETFCTSTAT_Allow '1'
///必须现金替代
#define TORA_TSTP_ETFCTSTAT_Force '2'
///跨市退补现金替代
#define TORA_TSTP_ETFCTSTAT_CBAllow '3'
///跨市必须现金替代
#define TORA_TSTP_ETFCTSTAT_CBForce '4'

typedef char TTORATstpETFCurrenceReplaceStatusType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCreRedTypeType是一个申赎类型类型
/////////////////////////////////////////////////////////////////////////
///场内申赎
#define TORA_TSTP_CRT_IS '0'
///场外申赎
#define TORA_TSTP_CRT_OS '1'

typedef char TTORATstpCreRedTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpOperateSourceType是一个操作来源类型
/////////////////////////////////////////////////////////////////////////
///实时上场
#define TORA_TSTP_OPRTSRC_DBCommand '0'
///API调用
#define TORA_TSTP_OPRTSRC_SyncAPI '1'

typedef char TTORATstpOperateSourceType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpOperwayType是一个委托方式类型
/////////////////////////////////////////////////////////////////////////
///电话委托
#define TORA_TSTP_OPERW_Telephone '0'
///柜台委托
#define TORA_TSTP_OPERW_OTC '1'
///移动客户端委托
#define TORA_TSTP_OPERW_MobileClient '2'
///PC客户端委托
#define TORA_TSTP_OPERW_PCClient '3'
///TY委托
#define TORA_TSTP_OPERW_TY '4'

typedef char TTORATstpOperwayType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpOperwaysType是一个委托方式合集类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpOperwaysType[41];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpOrderPriceTypeType是一个报单价格条件类型
/////////////////////////////////////////////////////////////////////////
///任意价
#define TORA_TSTP_OPT_AnyPrice '1'
///限价
#define TORA_TSTP_OPT_LimitPrice '2'
///最优价
#define TORA_TSTP_OPT_BestPrice '3'
///盘后定价
#define TORA_TSTP_OPT_FixPrice '8'
///五档价
#define TORA_TSTP_OPT_FiveLevelPrice 'G'
///本方最优
#define TORA_TSTP_OPT_HomeBestPrice 'a'

typedef char TTORATstpOrderPriceTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTriggerOrderPriceTypeType是一个触发基准价格类型类型
/////////////////////////////////////////////////////////////////////////
///自定义价格
#define TORA_TSTP_TOPT_CustomPrice '2'
///最新价
#define TORA_TSTP_TOPT_LastPrice '4'
///卖一价
#define TORA_TSTP_TOPT_AskPrice1 '5'
///买一价
#define TORA_TSTP_TOPT_BidPrice1 '6'
///相关价
#define TORA_TSTP_TOPT_Relative '7'

typedef char TTORATstpTriggerOrderPriceTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTriggerOrderVolumeTypeType是一个触发基准数量类型类型
/////////////////////////////////////////////////////////////////////////
///自定义数量
#define TORA_TSTP_TOVT_CustomVol '1'
///相关数量
#define TORA_TSTP_TOVT_RelativeVol '2'

typedef char TTORATstpTriggerOrderVolumeTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTimeConditionType是一个有效期类型类型
/////////////////////////////////////////////////////////////////////////
///立即完成，否则撤销
#define TORA_TSTP_TC_IOC '1'
///本节有效
#define TORA_TSTP_TC_GFS '2'
///当日有效
#define TORA_TSTP_TC_GFD '3'
///指定日期前有效
#define TORA_TSTP_TC_GTD '4'
///撤销前有效
#define TORA_TSTP_TC_GTC '5'
///集合竞价有效
#define TORA_TSTP_TC_GFA '6'

typedef char TTORATstpTimeConditionType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpVolumeConditionType是一个成交量类型类型
/////////////////////////////////////////////////////////////////////////
///任何数量
#define TORA_TSTP_VC_AV '1'
///最小数量
#define TORA_TSTP_VC_MV '2'
///全部数量
#define TORA_TSTP_VC_CV '3'

typedef char TTORATstpVolumeConditionType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpForceCloseReasonType是一个强平原因类型
/////////////////////////////////////////////////////////////////////////
///非强平
#define TORA_TSTP_FCC_NotForceClose '0'
///资金不足
#define TORA_TSTP_FCC_LackDeposit '1'
///客户超仓
#define TORA_TSTP_FCC_ClientOverPositionLimit '2'
///会员超仓
#define TORA_TSTP_FCC_MemberOverPositionLimit '3'
///持仓非整数倍
#define TORA_TSTP_FCC_NotMultiple '4'
///违规
#define TORA_TSTP_FCC_Violation '5'
///其它
#define TORA_TSTP_FCC_Other '6'

typedef char TTORATstpForceCloseReasonType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpFileOrderTypeType是一个文件报单类别类型
/////////////////////////////////////////////////////////////////////////
///复核
#define TORA_TSTP_EOT_Review '0'
///撤单
#define TORA_TSTP_EOT_Cancel '1'
///限价单
#define TORA_TSTP_EOT_Limit '2'
///最优五档即时成交剩余撤销
#define TORA_TSTP_EOT_FRC '3'
///最优五档即时成交剩余转限价
#define TORA_TSTP_EOT_FRL '4'
///对手方最优
#define TORA_TSTP_EOT_BP '5'
///本方最优
#define TORA_TSTP_EOT_HP '6'
///立即成交剩余撤销
#define TORA_TSTP_EOT_FAK '7'
///全额成交或撤销
#define TORA_TSTP_EOT_FOK '8'

typedef char TTORATstpFileOrderTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTransferDirectionType是一个转移方向类型
/////////////////////////////////////////////////////////////////////////
///蓝补
#define TORA_TSTP_TRNSD_In '0'
///红冲
#define TORA_TSTP_TRNSD_Out '1'
///集中交易调入
#define TORA_TSTP_TRNSD_MoveIn '2'
///集中交易调出
#define TORA_TSTP_TRNSD_MoveOut '3'
///冻结
#define TORA_TSTP_TRNSD_Freeze '4'
///解冻
#define TORA_TSTP_TRNSD_UnFreeze '5'
///证券转银行
#define TORA_TSTP_TRNSD_StockToBank '6'
///银行转证券
#define TORA_TSTP_TRNSD_BankToStock '7'
///期权系统转出
#define TORA_TSTP_TRNSD_StockToOption '8'
///期权系统转入
#define TORA_TSTP_TRNSD_OptionToStock '9'
///两融系统转出
#define TORA_TSTP_TRNSD_StockToMargin 'a'
///两融系统转入
#define TORA_TSTP_TRNSD_MarginToStock 'b'
///外部节点转入
#define TORA_TSTP_TRNSD_NodeMoveIn 'c'
///外部节点转出
#define TORA_TSTP_TRNSD_NodeMoveOut 'd'

typedef char TTORATstpTransferDirectionType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCollateralDirectionType是一个担保品划入方向类型
/////////////////////////////////////////////////////////////////////////
///担保品划入
#define TORA_TSTP_CLTD_CollateralIn '6'
///担保品划出
#define TORA_TSTP_CLTD_CollateralOut '7'

typedef char TTORATstpCollateralDirectionType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTransferStatusType是一个转移状态类型
/////////////////////////////////////////////////////////////////////////
///Transfer正在处理
#define TORA_TSTP_TRANST_TranferHandling '0'
///Transfer成功
#define TORA_TSTP_TRANST_TransferSuccess '1'
///Transfer失败
#define TORA_TSTP_TRANST_TransferFail '2'
///Repeal正在处理
#define TORA_TSTP_TRANST_RepealHandling '3'
///Repeal成功
#define TORA_TSTP_TRANST_RepealSuccess '4'
///Repeal失败
#define TORA_TSTP_TRANST_RepealFail '5'
///外部系统已接收
#define TORA_TSTP_TRANST_ExternalAccepted '6'

typedef char TTORATstpTransferStatusType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTransferPositionTypeType是一个转移持仓类型类型
/////////////////////////////////////////////////////////////////////////
///任意仓
#define TORA_TSTP_TPT_ALL '0'
///昨仓
#define TORA_TSTP_TPT_History '1'
///今买卖仓
#define TORA_TSTP_TPT_TodayBS '2'
///今申赎仓
#define TORA_TSTP_TPT_TodayPR '3'

typedef char TTORATstpTransferPositionTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpSystemNameType是一个系统名称类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpSystemNameType[41];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpRelativeCondParamType是一个相关条件参数类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpRelativeCondParamType[31];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpOrderStatusType是一个报单状态类型
/////////////////////////////////////////////////////////////////////////
///全部成交
#define TORA_TSTP_OST_AllTraded '0'
///部分成交还在队列中
#define TORA_TSTP_OST_PartTradedQueueing '1'
///部分成交不在队列中
#define TORA_TSTP_OST_PartTradedNotQueueing '2'
///未成交还在队列中
#define TORA_TSTP_OST_NoTradeQueueing '3'
///未成交不在队列中
#define TORA_TSTP_OST_NoTradeNotQueueing '4'
///撤单
#define TORA_TSTP_OST_Canceled '5'
///未知
#define TORA_TSTP_OST_Unknown 'a'
///尚未触发
#define TORA_TSTP_OST_NotTouched 'b'
///已触发
#define TORA_TSTP_OST_Touched 'c'
///预埋
#define TORA_TSTP_OST_Cached 'd'

typedef char TTORATstpOrderStatusType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCondOrderStatusType是一个条件单状态类型
/////////////////////////////////////////////////////////////////////////
///初始
#define TORA_TSTP_COST_Initial '#'
///未触发
#define TORA_TSTP_COST_NotTouched '0'
///已触发
#define TORA_TSTP_COST_Touched '1'
///已结束
#define TORA_TSTP_COST_Finished '2'
///已撤销
#define TORA_TSTP_COST_Cancel '3'
///触发失败
#define TORA_TSTP_COST_Failed '4'

typedef char TTORATstpCondOrderStatusType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpOrderSubmitStatusType是一个报单提交状态类型
/////////////////////////////////////////////////////////////////////////
///未提交
#define TORA_TSTP_OSS_UnSubmit '#'
///撤单未提交
#define TORA_TSTP_OSS_CancelUnSubmitted '*'
///已经提交
#define TORA_TSTP_OSS_InsertSubmitted '0'
///撤单已经提交
#define TORA_TSTP_OSS_CancelSubmitted '1'
///修改已经提交
#define TORA_TSTP_OSS_ModifySubmitted '2'
///已经接受
#define TORA_TSTP_OSS_Accepted '3'
///报单已经被拒绝
#define TORA_TSTP_OSS_InsertRejected '4'
///撤单已经被拒绝
#define TORA_TSTP_OSS_CancelRejected '5'
///改单已经被拒绝
#define TORA_TSTP_OSS_ModifyRejected '6'

typedef char TTORATstpOrderSubmitStatusType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpOrderTypeType是一个报单类型类型
/////////////////////////////////////////////////////////////////////////
///正常
#define TORA_TSTP_ORDT_Normal '0'
///报价衍生
#define TORA_TSTP_ORDT_DeriveFromQuote '1'
///组合衍生
#define TORA_TSTP_ORDT_DeriveFromCombination '2'
///组合报单
#define TORA_TSTP_ORDT_Combination '3'
///条件单
#define TORA_TSTP_ORDT_ConditionalOrder '4'
///互换单
#define TORA_TSTP_ORDT_Swap '5'
///预埋单
#define TORA_TSTP_ORDT_Cache '6'
///夜市委托
#define TORA_TSTP_ORDT_Night '7'

typedef char TTORATstpOrderTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpOffsetFlagType是一个开平标志类型
/////////////////////////////////////////////////////////////////////////
///开仓
#define TORA_TSTP_OF_Open '0'
///平仓
#define TORA_TSTP_OF_Close '1'
///强平
#define TORA_TSTP_OF_ForceClose '2'
///平今
#define TORA_TSTP_OF_CloseToday '3'
///平昨
#define TORA_TSTP_OF_CloseYesterday '4'
///强减
#define TORA_TSTP_OF_ForceOff '5'
///本地强平
#define TORA_TSTP_OF_LocalForceClose '6'

typedef char TTORATstpOffsetFlagType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpHedgeFlagType是一个投机套保标志类型
/////////////////////////////////////////////////////////////////////////
///投机
#define TORA_TSTP_HF_Speculation '1'
///套利
#define TORA_TSTP_HF_Arbitrage '2'
///套保
#define TORA_TSTP_HF_Hedge '3'
///备兑
#define TORA_TSTP_HF_Covered '4'

typedef char TTORATstpHedgeFlagType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpActionFlagType是一个操作标志类型
/////////////////////////////////////////////////////////////////////////
///删除
#define TORA_TSTP_AF_Delete '0'
///修改
#define TORA_TSTP_AF_Modify '3'
///强制删除
#define TORA_TSTP_AF_ForceDelete '4'

typedef char TTORATstpActionFlagType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpOrderActionStatusType是一个报单操作状态类型
/////////////////////////////////////////////////////////////////////////
///已经提交
#define TORA_TSTP_OAS_Submitted 'a'
///已经接受
#define TORA_TSTP_OAS_Accepted 'b'
///已经被拒绝
#define TORA_TSTP_OAS_Rejected 'c'
///预埋未提交
#define TORA_TSTP_OAS_Cached 'e'

typedef char TTORATstpOrderActionStatusType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpClientIDTypeType是一个交易编码类型类型
/////////////////////////////////////////////////////////////////////////
///未知
#define TORA_TSTP_CIDT_Unknown '0'
///投机
#define TORA_TSTP_CIDT_Speculation '1'
///套利
#define TORA_TSTP_CIDT_Arbitrage '2'
///套保
#define TORA_TSTP_CIDT_Hedge '3'
///普通
#define TORA_TSTP_CIDT_Normal 'a'
///信用
#define TORA_TSTP_CIDT_Credit 'b'
///衍生品
#define TORA_TSTP_CIDT_Derivatives 'c'

typedef char TTORATstpClientIDTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpBizClassType是一个业务类别类型
/////////////////////////////////////////////////////////////////////////
///买入
#define TORA_TSTP_BC_Buy '0'
///卖出
#define TORA_TSTP_BC_Sell '1'
///ETF场内申购
#define TORA_TSTP_BC_ETFPur '2'
///ETF场内赎回
#define TORA_TSTP_BC_ETFRed '3'
///新股申购
#define TORA_TSTP_BC_SubscribingShares '4'
///正回购
#define TORA_TSTP_BC_Repurchase '5'
///逆回购
#define TORA_TSTP_BC_ReverseRepur '6'
///开放式基金申购
#define TORA_TSTP_BC_OeFundPur '8'
///开放式基金赎回
#define TORA_TSTP_BC_OeFundRed '9'
///质押入库
#define TORA_TSTP_BC_PledgeIn 'd'
///质押出库
#define TORA_TSTP_BC_PledgeOut 'e'
///配股配债
#define TORA_TSTP_BC_Rationed 'f'
///开放式基金拆分
#define TORA_TSTP_BC_Split 'g'
///开放式基金合并
#define TORA_TSTP_BC_Merge 'h'
///转托管
#define TORA_TSTP_BC_CustodyTransfer 'q'
///债转股
#define TORA_TSTP_BC_BondConvertStock 't'
///债券回售
#define TORA_TSTP_BC_BondPutback 'u'
///ETF场外申购
#define TORA_TSTP_BC_ETFOtPur 'v'
///ETF场外赎回
#define TORA_TSTP_BC_ETFOtRed 'w'

typedef char TTORATstpBizClassType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIssueModeType是一个发行方式类型
/////////////////////////////////////////////////////////////////////////
///市值配售方式
#define TORA_TSTP_IMO_ValueLimit '0'
///增发定价方式
#define TORA_TSTP_IMO_AddIssue '1'
///信用申购方式
#define TORA_TSTP_IMO_Credit '2'

typedef char TTORATstpIssueModeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpFunctionIDType是一个功能代码类型
/////////////////////////////////////////////////////////////////////////
///空
#define TORA_TSTP_FID_NAN "00"
///报单插入
#define TORA_TSTP_FID_OrderInsert "11"
///报单操作
#define TORA_TSTP_FID_OrderAction "12"
///向外部系统划拨担保券
#define TORA_TSTP_FID_CollateralInJZ "13"
///资金调拨
#define TORA_TSTP_FID_MoveFund "14"
///银证转账
#define TORA_TSTP_FID_TransferFund "15"
///冲正资金
#define TORA_TSTP_FID_RepealFund "16"
///冲正仓位
#define TORA_TSTP_FID_RepealPosition "17"
///持仓调拨
#define TORA_TSTP_FID_MovePosition "18"
///条件报单插入
#define TORA_TSTP_FID_CondOrderInsert "19"
///条件报单操作
#define TORA_TSTP_FID_CondOrderAction "1a"
///指定交易登记撤销
#define TORA_TSTP_FID_DesignationRegistration "1b"
///深证转托管撤销
#define TORA_TSTP_FID_CustodyTransfer "1c"
///强制删除报单
#define TORA_TSTP_FID_ForceDelete "1d"
///风控管理
#define TORA_TSTP_FID_RiskManage "1e"
///记录操作日志
#define TORA_TSTP_FID_RecordOperateLog "1f"
///回传数据
#define TORA_TSTP_FID_UploadTradeData "1g"
///复核资金调整
#define TORA_TSTP_FID_ReviewAdjustFund "20"
///复核仓位调整
#define TORA_TSTP_FID_ReviewAdjustPosition "21"
///复核柜员管理
#define TORA_TSTP_FID_ReviewBrokerUserManage "23"
///复核客户信息管理
#define TORA_TSTP_FID_ReviewCustomerInfoManage "24"
///复核角色管理
#define TORA_TSTP_FID_ReviewBrokerUserRoleManage "25"
///复核预埋通道调整
#define TORA_TSTP_FID_ReviewAdjustCacheChannel "26"
///证券信息调整
#define TORA_TSTP_FID_AdjustSecurity "30"
///调整系统参数
#define TORA_TSTP_FID_AdjustSystemParam "32"
///内部组件运行配置
#define TORA_TSTP_FID_AppRunManage "33"
///行情相关管理（市场状态/平台状态等）
#define TORA_TSTP_FID_MarketDataManage "34"
///终端信息管理
#define TORA_TSTP_FID_TerminalInfoManage "36"
///新股配号中签信息、新股额度管理
#define TORA_TSTP_FID_IPOManage "37"
///客户信息管理：禁用、启用、解锁、重置密码、登出、设置IP限制
#define TORA_TSTP_FID_CustomerManage "38"
///席位管理
#define TORA_TSTP_FID_TraderManage "39"
///机构信息管理
#define TORA_TSTP_FID_DepartmentInfoManage "3a"
///柜员管理（增、删、改、分配操作权限、分配访问权限、禁用、启用、解锁、登出、重置密码、设置IP限制）
#define TORA_TSTP_FID_BrokerUserManage "3b"
///角色管理（增、删、改角色）
#define TORA_TSTP_FID_BrokerUserRoleManage "3c"
///投资者交易参数管理（增、删、改费率、条件单参数、交易权限、系统权限、特殊交易权限）
#define TORA_TSTP_FID_CustomerTradingParamManage "3d"
///经纪公司交易参数管理（增、删、改费率模板、权限模板、持仓交易属性、基础交易费率、报单前缀、交易所回报序号）
#define TORA_TSTP_FID_BrokerTradingParamManage "3e"
///资金红冲蓝补
#define TORA_TSTP_FID_AdjustFund "3f"
///修改柜员密码
#define TORA_TSTP_FID_UpdateBrokerUserPassword "3g"
///柜员功能权限管理
#define TORA_TSTP_FID_AdjustBrokerUserFunction "3h"
///强制柜员登出
#define TORA_TSTP_FID_ForceBrokerUserLogout "3i"
///强制柜员退出
#define TORA_TSTP_FID_ForceBrokerUserExit "3j"
///激活柜员用户
#define TORA_TSTP_FID_ActiveBrokerUser "3k"
///仓位红冲蓝补
#define TORA_TSTP_FID_AdjustPosition "3A"
///预埋通道调整
#define TORA_TSTP_FID_AdjustCacheChannel "3B"
///节点信息管理
#define TORA_TSTP_FID_NodeInfoManage "3C"
///动态密码管理
#define TORA_TSTP_FID_DynamicPasswordManage "3D"
///查询席位相关：PBU、TradeOffer、MDServer
#define TORA_TSTP_FID_QryTrader "50"
///查询市场
#define TORA_TSTP_FID_QryMarketData "51"
///查询证券信息
#define TORA_TSTP_FID_QrySecurity "52"
///查询机构信息
#define TORA_TSTP_FID_QryDepartmentInfo "53"
///查询柜员信息、角色赋权、功能权限、数据权限
#define TORA_TSTP_FID_QryBrokerUserInfo "54"
///查询角色
#define TORA_TSTP_FID_QryBrokerUserRole "55"
///查询投资者信息:股东账户、Investor、User、关联账户
#define TORA_TSTP_FID_QryCustomerInfo "56"
///查询委托/撤单
#define TORA_TSTP_FID_QryOrder "58"
///查询成交
#define TORA_TSTP_FID_QryTrade "59"
///查询资金
#define TORA_TSTP_FID_QryTradingAccount "5a"
///查询质押/证券、标准券持仓
#define TORA_TSTP_FID_QryPositon "5b"
///查询投资者交易参数:费率、条件单参数、交易权限、系统权限、特殊交易权限
#define TORA_TSTP_FID_QryCustomerTradingParam "5c"
///查询新股相关信息：额度、配号、中签结果
#define TORA_TSTP_FID_QryIPORelateInfo "5d"
///查询报单明细资金
#define TORA_TSTP_FID_QryOrderFundDetail "5e"
///查询资金转移明细资金
#define TORA_TSTP_FID_QryFundTransferDetail "5f"
///查询持仓转移流水
#define TORA_TSTP_FID_QryPositionTransferDetail "5g"
///查询经纪公司交易参数:费率模板、权限模板、持仓交易属性、基础交易费率、报单前缀、交易所回报序号
#define TORA_TSTP_FID_QryBrokerTradingParam "5h"
///查询交易通知
#define TORA_TSTP_FID_QryTradingNotice "5i"
///查询用户事件
#define TORA_TSTP_FID_QryTradeEvent "5j"
///查询系统参数
#define TORA_TSTP_FID_QrySystemParam "5n"
///查询应用程序相关
#define TORA_TSTP_FID_QryAppInfo "5o"
///查询资金调整
#define TORA_TSTP_FID_QryAdjustFund "5p"
///查询仓位调整
#define TORA_TSTP_FID_QryAdjustPosition "5q"
///查询预埋通道调整
#define TORA_TSTP_FID_QryAdjustCacheChannel "5r"
///查询柜员调整
#define TORA_TSTP_FID_QryAdjustBrokerUser "5s"
///查询客户信息调整
#define TORA_TSTP_FID_QryAdjustCustomerInfo "5t"
///查询角色调整
#define TORA_TSTP_FID_QryAdjustBrokerUserRole "5u"
///查询节点信息
#define TORA_TSTP_FID_QryNodeInfo "5v"
///查询动态密码信息
#define TORA_TSTP_FID_QryDynamicPasswordInfo "5w"
///紧急上场
#define TORA_TSTP_FID_EmergencyDbmt "60"
///Dump席位相关：PBU、TradeOffer、MDServer
#define TORA_TSTP_FID_DumpTrader "70"
///Dump市场
#define TORA_TSTP_FID_DumpMarketData "71"
///Dump证券信息
#define TORA_TSTP_FID_DumpSecurity "72"
///Dump机构信息
#define TORA_TSTP_FID_DumpDepartmentInfo "73"
///Dump柜员信息、角色赋权、功能权限、数据权限
#define TORA_TSTP_FID_DumpBrokerUserInfo "74"
///Dump角色
#define TORA_TSTP_FID_DumpBrokerUserRole "75"
///Dump投资者信息:股东账户、Investor、User、关联账户
#define TORA_TSTP_FID_DumpCustomerInfo "76"
///Dump委托/撤单
#define TORA_TSTP_FID_DumpOrder "78"
///Dump成交
#define TORA_TSTP_FID_DumpTrade "79"
///Dump资金
#define TORA_TSTP_FID_DumpTradingAccount "7a"
///Dump质押/证券、标准券持仓
#define TORA_TSTP_FID_DumpPositon "7b"
///Dump投资者交易参数:费率、条件单参数、交易权限、系统权限、特殊交易权限
#define TORA_TSTP_FID_DumpCustomerTradingParam "7c"
///Dump新股相关信息：额度、配号、中签结果
#define TORA_TSTP_FID_DumpIPORelateInfo "7d"
///Dump报单明细资金
#define TORA_TSTP_FID_DumpOrderFundDetail "7e"
///Dump资金转移明细资金
#define TORA_TSTP_FID_DumpFundTransferDetail "7f"
///Dump持仓转移流水
#define TORA_TSTP_FID_DumpPositionTransferDetail "7g"
///Dump经纪公司交易参数:费率模板、权限模板、持仓交易属性、基础交易费率、报单前缀、交易所回报序号
#define TORA_TSTP_FID_DumpBrokerTradingParam "7h"
///Dump交易通知
#define TORA_TSTP_FID_DumpTradingNotice "7i"
///Dump用户事件
#define TORA_TSTP_FID_DumpTradeEvent "7j"
///Dump系统参数
#define TORA_TSTP_FID_DumpSystemParam "7n"
///Dump应用程序相关
#define TORA_TSTP_FID_DumpAppInfo "7o"
///Dump资金调整
#define TORA_TSTP_FID_DumpAdjustFund "7p"
///Dump仓位调整
#define TORA_TSTP_FID_DumpAdjustPosition "7q"
///Dump预埋通道调整
#define TORA_TSTP_FID_DumpAdjustCacheChannel "7r"
///Dump柜员调整
#define TORA_TSTP_FID_DumpAdjustBrokerUser "7s"
///Dump客户信息调整
#define TORA_TSTP_FID_DumpAdjustCustomerInfo "7t"
///Dump角色调整
#define TORA_TSTP_FID_DumpAdjustBrokerUserRole "7u"
///Dump节点信息
#define TORA_TSTP_FID_DumpNodeInfo "7v"
///Dump终端动态密码
#define TORA_TSTP_FID_DumpDynamicPassword "7w"
///Dump所有数据
#define TORA_TSTP_FID_DumpAll "7Z"
///授权报单插入
#define TORA_TSTP_FID_GrantOrderInsert "a1"
///授权报单操作
#define TORA_TSTP_FID_GrantOrderAction "a2"
///授权资金调拨
#define TORA_TSTP_FID_GrantMoveFund "a4"
///授权持仓调拨
#define TORA_TSTP_FID_GrantMovePosition "a8"
///授权条件单插入
#define TORA_TSTP_FID_GrantCondOrderInsert "a9"
///授权条件单操作
#define TORA_TSTP_FID_GrantCondOrderAction "aa"

typedef char TTORATstpFunctionIDType[3];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpSecurityTypeType是一个证券类别类型
/////////////////////////////////////////////////////////////////////////
///通用(内部使用)
#define TORA_TSTP_STP_COMMON '0'
///上海A股
#define TORA_TSTP_STP_SHAShares 'a'
///上海单市场股票ETF
#define TORA_TSTP_STP_SHSingleMarketStockETF 'b'
///上海单市场实物债券ETF
#define TORA_TSTP_STP_SHSingleMarketBondETF 'c'
///上海黄金ETF
#define TORA_TSTP_STP_SHGoldETF 'd'
///上海货币ETF
#define TORA_TSTP_STP_SHTradableMonetaryFund 'e'
///上海国债地方债
#define TORA_TSTP_STP_SHBondNation 'f'
///上海企业债
#define TORA_TSTP_STP_SHBondCorporation 'g'
///上海公司债
#define TORA_TSTP_STP_SHBondCompany 'h'
///上海可转债
#define TORA_TSTP_STP_SHBondConversion 'i'
///上海分离债
#define TORA_TSTP_STP_SHBondSeparation 'j'
///上海标准券
#define TORA_TSTP_STP_SHStandard 'o'
///上海质押式回购
#define TORA_TSTP_STP_SHRepo 'p'
///上海封闭式基金
#define TORA_TSTP_STP_SHCEFund 'q'
///上海开放式基金
#define TORA_TSTP_STP_SHOEFund 'r'
///上海跨市场ETF
#define TORA_TSTP_STP_SHCrossMarketStockETF 's'
///上海跨境ETF
#define TORA_TSTP_STP_SHCrossBorderETF 't'
///上海分级母基金
#define TORA_TSTP_STP_SHMontherStructFund 'u'
///上海分级子基金
#define TORA_TSTP_STP_SHSubStructFund 'v'
///上海实时申赎货币基金
#define TORA_TSTP_STP_SHRealTimeMonetaryFund 'w'
///上海可交换债
#define TORA_TSTP_STP_SHExchangeableBond 'x'
///上海标准LOF基金
#define TORA_TSTP_STP_SHLOF 'A'
///深圳主板A股
#define TORA_TSTP_STP_SZMainAShares 'B'
///深圳中小企业板
#define TORA_TSTP_STP_SZSME 'C'
///深圳国债、地方债
#define TORA_TSTP_STP_SZBondNation 'D'
///深圳企业债
#define TORA_TSTP_STP_SZBondCorporation 'E'
///深圳公司债
#define TORA_TSTP_STP_SZBondCompany 'F'
///深圳可转债
#define TORA_TSTP_STP_SZBondConversion 'G'
///深圳分离债
#define TORA_TSTP_STP_SZBondSeparation 'H'
///深圳跨境ETF
#define TORA_TSTP_STP_SZCrossBorderETF 'K'
///深圳黄金ETF
#define TORA_TSTP_STP_SZGoldETF 'L'
///深圳现金债券ETF
#define TORA_TSTP_STP_SZCashBondETF 'M'
///深圳单市场股票ETF
#define TORA_TSTP_STP_SZSingleMarketStockETF 'N'
///深圳单市场实物债券ETF
#define TORA_TSTP_STP_SZSingleMarketBondETF 'O'
///深圳货币ETF
#define TORA_TSTP_STP_SZMonetaryFundETF 'P'
///深圳创业板
#define TORA_TSTP_STP_SZGEM 'Q'
///深圳标准券
#define TORA_TSTP_STP_SZStandard 'T'
///深圳质押式回购
#define TORA_TSTP_STP_SZRepo 'U'
///深圳封闭式基金
#define TORA_TSTP_STP_SZCEFund 'V'
///深圳开放式基金
#define TORA_TSTP_STP_SZOEFund 'W'
///深圳跨境开放式基金
#define TORA_TSTP_STP_SZCrossBorderOEFund 'X'
///深圳跨市场股票ETF
#define TORA_TSTP_STP_SZCrossMarketStockETF 'Y'
///深圳标准LOF基金
#define TORA_TSTP_STP_SZLOF 'Z'
///深圳跨境LOF基金
#define TORA_TSTP_STP_SZCrossBorderLOF '1'
///深圳传统分级母基金
#define TORA_TSTP_STP_SZMontherStructFund '2'
///深圳传统分级子基金
#define TORA_TSTP_STP_SZSubStructFund '3'
///深圳跨境分级母基金
#define TORA_TSTP_STP_SZMontherCrossBorderStructFund '4'
///深圳跨境分级子基金
#define TORA_TSTP_STP_SZSubCrossBorderStructFund '5'
///深圳可交换债
#define TORA_TSTP_STP_SZExchangeableBond '6'
///深圳创业板可转债
#define TORA_TSTP_STP_SZGEMConversionBond '7'
///深港通港股债券
#define TORA_TSTP_STP_SZSEHKBond '8'
///深港通港股一篮子权证
#define TORA_TSTP_STP_SZSEHKBasketWarrant '9'
///深港通港股股本
#define TORA_TSTP_STP_SZSEHKEquity 'y'
///深港通港股信托
#define TORA_TSTP_STP_SZSEHKTrust 'z'
///深港通港股权证
#define TORA_TSTP_STP_SZSEHKWarrant '#'
///上海沪伦通
#define TORA_TSTP_STP_SHCDR '+'
///上海科创板股票
#define TORA_TSTP_STP_SHKC '*'
///上海科创板存托凭证
#define TORA_TSTP_STP_SHKCCDR '-'

typedef char TTORATstpSecurityTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpEndFlagType是一个结束标志类型
/////////////////////////////////////////////////////////////////////////
///待续
#define TORA_TSTP_EF_ToBeContinued '1'
///批结束
#define TORA_TSTP_EF_BatchEnd '2'
///全部完成
#define TORA_TSTP_EF_Completed '3'
///无数据
#define TORA_TSTP_EF_NOP '4'

typedef char TTORATstpEndFlagType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpMarketIDType是一个市场代码类型
/////////////////////////////////////////////////////////////////////////
///通用(内部使用)
#define TORA_TSTP_MKD_COMMON '0'
///上海A股
#define TORA_TSTP_MKD_SHA '1'
///深圳A股
#define TORA_TSTP_MKD_SZA '2'
///上海B股
#define TORA_TSTP_MKD_SHB '3'
///深圳B股
#define TORA_TSTP_MKD_SZB '4'
///深圳三版A股
#define TORA_TSTP_MKD_SZThreeA '5'
///深圳三版B股
#define TORA_TSTP_MKD_SZThreeB '6'
///境外市场
#define TORA_TSTP_MKD_Foreign '7'
///深圳港股通市场
#define TORA_TSTP_MKD_SZHK '8'
///上海港股通市场
#define TORA_TSTP_MKD_SHHK '9'

typedef char TTORATstpMarketIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpLogInAccountType是一个登录账户类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpLogInAccountType[21];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpLogInAccountTypeType是一个登录账户类型类型
/////////////////////////////////////////////////////////////////////////
///用户代码
#define TORA_TSTP_LACT_UserID '0'
///资金账号
#define TORA_TSTP_LACT_AccountID '1'
///上海A股
#define TORA_TSTP_LACT_SHAStock '2'
///深圳A股
#define TORA_TSTP_LACT_SZAStock '3'
///上海B股
#define TORA_TSTP_LACT_SHBStock '4'
///深圳B股
#define TORA_TSTP_LACT_SZBStock '5'
///三板A
#define TORA_TSTP_LACT_ThreeNewBoardA '6'
///三板B
#define TORA_TSTP_LACT_ThreeNewBoardB '7'
///港股
#define TORA_TSTP_LACT_HKStock '8'
///统一用户代码
#define TORA_TSTP_LACT_UnifiedUserID '9'

typedef char TTORATstpLogInAccountTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpSpecPrivilegeTypeType是一个特殊权限类别类型
/////////////////////////////////////////////////////////////////////////
///创业板
#define TORA_TSTP_SPLT_GEM '0'
///风险警示板
#define TORA_TSTP_SPLT_RiskWarning '1'
///退市整理板
#define TORA_TSTP_SPLT_Delisting '2'
///港股通
#define TORA_TSTP_SPLT_SZSEHK '3'
///科创板
#define TORA_TSTP_SPLT_SHKC '4'

typedef char TTORATstpSpecPrivilegeTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpMarketStatusType是一个市场状态类型
/////////////////////////////////////////////////////////////////////////
///未知
#define TORA_TSTP_MST_UnKnown '#'
///开盘前
#define TORA_TSTP_MST_BeforeTrading '0'
///连续交易
#define TORA_TSTP_MST_Continous '1'
///收盘
#define TORA_TSTP_MST_Closed '2'
///开盘集合竞价
#define TORA_TSTP_MST_OpenCallAuction '3'
///(港股通)未开市
#define TORA_TSTP_MST_SZSEHKUnopened 'a'
///(港股通)开盘集合竞价输入买卖盘
#define TORA_TSTP_MST_SZSEHKOpenCallAuctionInput 'b'
///(港股通)开盘集合竞价对盘前
#define TORA_TSTP_MST_SZSEHKOpenCallAuctionBeforeMatch 'c'
///(港股通)开盘集合竞价对盘
#define TORA_TSTP_MST_SZSEHKOpenCallAuctionMatch 'd'
///(港股通)暂停
#define TORA_TSTP_MST_SZSEHKHalt 'e'
///(港股通)持续交易
#define TORA_TSTP_MST_SZSEHKContinous 'f'
///(港股通)Exchange Intervention
#define TORA_TSTP_MST_SZSEHKExchangeIntervention 'g'
///(港股通)收盘集合竞价参考价定价
#define TORA_TSTP_MST_SZSEHKCloseCallAuctionReferencePrice 'h'
///(港股通)收盘集合竞价输入买卖盘
#define TORA_TSTP_MST_SZSEHKCloseCallAuctionInput 'i'
///(港股通)收盘集合竞价不可取消
#define TORA_TSTP_MST_SZSEHKCloseCallAuctionCannotCancel 'j'
///(港股通)收盘集合竞价对盘
#define TORA_TSTP_MST_SZSEHKCloseCallAuctionMatch 'k'
///(港股通)收盘集合竞价随机收市
#define TORA_TSTP_MST_SZSEHKCloseCallAuctionRandomClosed 'l'
///(港股通)取消买卖盘
#define TORA_TSTP_MST_SZSEHKCancel 'm'
///(港股通)收市
#define TORA_TSTP_MST_SZSEHKClosed 'n'
///(港股通)全日收市
#define TORA_TSTP_MST_SZSEHKWholeClosed 'o'

typedef char TTORATstpMarketStatusType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpBigsInfoType是一个长字符串附加信息类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpBigsInfoType[33];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpShortsInfoType是一个短字符串附加信息类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpShortsInfoType[9];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIntInfoType是一个整形附加信息类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpIntInfoType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpFloatInfoType是一个浮点型附加信息类型
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpFloatInfoType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpApiGroupIDType是一个Api工作组号类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpApiGroupIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpDesignationTypeType是一个指定交易操作类型类型
/////////////////////////////////////////////////////////////////////////
///指定交易登记
#define TORA_TSTP_DT_Register '0'
///指定交易撤销登记
#define TORA_TSTP_DT_Cancel '1'

typedef char TTORATstpDesignationTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCustodyTransferTypeType是一个深证转托管类型类型
/////////////////////////////////////////////////////////////////////////
///深证转托管注册
#define TORA_TSTP_CT_Register '0'
///深证转托管撤单
#define TORA_TSTP_CT_Cancel '1'

typedef char TTORATstpCustodyTransferTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpProperCtrlBusinessTypeType是一个适当性控制业务类别类型
/////////////////////////////////////////////////////////////////////////
///空值
#define TORA_TSTP_PCBT_None ' '
///其它
#define TORA_TSTP_PCBT_Other '0'
///上海退市整理
#define TORA_TSTP_PCBT_SHDelisting '1'
///风险警示
#define TORA_TSTP_PCBT_ST '2'
///创业板
#define TORA_TSTP_PCBT_GEM '3'
///分级基金
#define TORA_TSTP_PCBT_StructFund '4'
///债券
#define TORA_TSTP_PCBT_BondQualified '5'
///暂停上市债
#define TORA_TSTP_PCBT_SuspendBond '6'
///正回购
#define TORA_TSTP_PCBT_Repurchase '7'
///逆回购
#define TORA_TSTP_PCBT_ReverseRepur '8'
///深圳退市整理
#define TORA_TSTP_PCBT_SZDelisting '9'
///常规股票
#define TORA_TSTP_PCBT_Stock 'a'
///常规股票信用
#define TORA_TSTP_PCBT_CreditStock 'b'

typedef char TTORATstpProperCtrlBusinessTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpProperCtrlPassFlagType是一个适当性控制通过标示类型
/////////////////////////////////////////////////////////////////////////
///空值
#define TORA_TSTP_PCPF_None ' '
///无条件通过
#define TORA_TSTP_PCPF_AnywayPass '0'
///匹配通过
#define TORA_TSTP_PCPF_MatchPass '1'
///有条件通过
#define TORA_TSTP_PCPF_SelectPass '2'
///专投豁免过
#define TORA_TSTP_PCPF_ProfInvestorPass '3'

typedef char TTORATstpProperCtrlPassFlagType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCRiskLevelType是一个客户风险等级类型
/////////////////////////////////////////////////////////////////////////
///最低级别风险
#define TORA_TSTP_RLV_Lowest '0'
///保守型
#define TORA_TSTP_RLV_Conservative '1'
///谨慎型
#define TORA_TSTP_RLV_Cautious '2'
///稳健型
#define TORA_TSTP_RLV_Steady '3'
///积极型
#define TORA_TSTP_RLV_Positive '4'
///激进型
#define TORA_TSTP_RLV_Aggressive '5'

typedef char TTORATstpCRiskLevelType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpProfInvestorTypeType是一个专业投资者类别类型
/////////////////////////////////////////////////////////////////////////
///非专业投资者
#define TORA_TSTP_PIT_NotProf '0'
///当然机构专业投资者
#define TORA_TSTP_PIT_OCInstiPro '1'
///法人或机构专业投资者
#define TORA_TSTP_PIT_InstiPro '2'
///自然人专业投资者
#define TORA_TSTP_PIT_PersonPro '3'
///认定法人或机构专业投资者
#define TORA_TSTP_PIT_ConfirmInstiPro '4'
///认定自然人专业投资者
#define TORA_TSTP_PIT_ConfirmPersonPro '5'

typedef char TTORATstpProfInvestorTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpLOrderTypeType是一个订单类别类型
/////////////////////////////////////////////////////////////////////////
///市价
#define TORA_TSTP_LOT_Market '1'
///限价
#define TORA_TSTP_LOT_Limit '2'
///本方最优
#define TORA_TSTP_LOT_HomeBest '3'

typedef char TTORATstpLOrderTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpLSideType是一个委托方向类型
/////////////////////////////////////////////////////////////////////////
///买
#define TORA_TSTP_LSD_Buy '1'
///卖
#define TORA_TSTP_LSD_Sell '2'
///借入
#define TORA_TSTP_LSD_Borrow '3'
///借出
#define TORA_TSTP_LSD_Lend '4'

typedef char TTORATstpLSideType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpExecTypeType是一个成交类别类型
/////////////////////////////////////////////////////////////////////////
///成交
#define TORA_TSTP_ECT_Fill '1'
///撤销
#define TORA_TSTP_ECT_Cancel '2'
///未知
#define TORA_TSTP_ECT_Unknown 'N'

typedef char TTORATstpExecTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpGOrderTypeType是一个订单类别类型
/////////////////////////////////////////////////////////////////////////
///限价单
#define TORA_TSTP_GOT_LimitPrice '0'
///本方最优
#define TORA_TSTP_GOT_HomeBest '1'
///对手方最优
#define TORA_TSTP_GOT_CounterpartyBest '2'
///立即成交剩余撤销
#define TORA_TSTP_GOT_FAK '3'
///全额成交或撤销
#define TORA_TSTP_GOT_FOK '4'
///最优五档剩余撤销
#define TORA_TSTP_GOT_FiveLevIOC '5'
///最优五档剩余转限
#define TORA_TSTP_GOT_FiveLevGFD '6'
///盘后定价
#define TORA_TSTP_GOT_FixPrice '7'
///增强限价盘
#define TORA_TSTP_GOT_EnhancePrice '8'
///竞价限价盘
#define TORA_TSTP_GOT_BidPrice '9'

typedef char TTORATstpGOrderTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCondCheckType是一个委托条件检查类型
/////////////////////////////////////////////////////////////////////////
///不做任何检查
#define TORA_TSTP_CCT_None '0'
///自成交检查
#define TORA_TSTP_CCT_SelfDeal '1'

typedef char TTORATstpCondCheckType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpHDSerialType是一个硬盘序列号类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpHDSerialType[33];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpMDSubModeType是一个行情订阅模式类型
/////////////////////////////////////////////////////////////////////////
///TCP连接模式
#define TORA_TSTP_MST_TCP '0'
///UDP单播模式
#define TORA_TSTP_MST_UDP '1'
///UDP组播模式
#define TORA_TSTP_MST_MCAST '2'

typedef char TTORATstpMDSubModeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpMDSecurityStatType是一个行情证券状态类型
/////////////////////////////////////////////////////////////////////////
///开盘前
#define TORA_TSTP_MSST_PreOpen '0'
///集合竞价
#define TORA_TSTP_MSST_CallAuction '1'
///连续交易
#define TORA_TSTP_MSST_Continous '2'
///休市
#define TORA_TSTP_MSST_Pause '3'
///停牌
#define TORA_TSTP_MSST_Suspend '4'
///长期停牌
#define TORA_TSTP_MSST_LongSuspend '5'
///波动性中断
#define TORA_TSTP_MSST_UndulationInt '6'
///熔断可恢复
#define TORA_TSTP_MSST_CircuitBreak '7'
///熔断不可恢复
#define TORA_TSTP_MSST_CircuitBreakU '8'
///闭市
#define TORA_TSTP_MSST_Close '9'
///其它
#define TORA_TSTP_MSST_Other 'a'
///收盘集合竞价
#define TORA_TSTP_MSST_CloseCallAuction 'b'
///集中撮合(盘后定价)
#define TORA_TSTP_MSST_CallMatch 'c'
///连续交易(盘后定价)
#define TORA_TSTP_MSST_PostContinous 'd'
///闭市(盘后定价)
#define TORA_TSTP_MSST_PostClose 'e'
///开盘前(盘后定价)
#define TORA_TSTP_MSST_PrePostOpen 'f'

typedef char TTORATstpMDSecurityStatType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCommitStatusType是一个文件委托提交状态类型
/////////////////////////////////////////////////////////////////////////
///初始
#define TORA_TSTP_FOCS_Init '0'
///已复核
#define TORA_TSTP_FOCS_Reviewed '1'
///处理失败
#define TORA_TSTP_FOCS_Failed '2'

typedef char TTORATstpCommitStatusType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpParamTypeType是一个股东参数类型类型
/////////////////////////////////////////////////////////////////////////
///最大买量限制
#define TORA_TSTP_SPT_MaxBuyLimit '0'
///最大卖量限制
#define TORA_TSTP_SPT_MaxSellLimit '1'
///买入大额申报限制比例
#define TORA_TSTP_SPT_LargeBuyLimitRatio '2'
///卖出大额申报限制比例
#define TORA_TSTP_SPT_LargeSelLimitRatio '3'
///风险警示买入上限
#define TORA_TSTP_SPT_RiskWarnBoardLimitVol '4'
///连续申报时间间隔
#define TORA_TSTP_SPT_SeriesDecInterval '5'
///连续申报单位时间委托笔数
#define TORA_TSTP_SPT_SeriesLimitPerUnit '6'
///影响收盘价波动比例
#define TORA_TSTP_SPT_ClosePriceScopeRatio '7'
///炒新控制最大上市时间
#define TORA_TSTP_SPT_OpenDateLimit '8'
///涨跌停板虚假申报占未成交比例
#define TORA_TSTP_SPT_LimitBoardShamRatio '9'
///撤单限制比例
#define TORA_TSTP_SPT_CancelOrderRatio 'a'

typedef char TTORATstpParamTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpContentType是一个消息正文类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpContentType[501];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpStatusMsgType是一个状态信息类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpStatusMsgType[93];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIPONumberIDType是一个新股申购配股号类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpIPONumberIDType[31];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpPageLocateType是一个页定位符类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpPageLocateType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpPriceTickIDType是一个价差品种类型
/////////////////////////////////////////////////////////////////////////
///股本证券
#define TORA_TSTP_PTID_Stock '0'
///债务证券
#define TORA_TSTP_PTID_Bond '1'
///股票期权
#define TORA_TSTP_PTID_Option '2'

typedef char TTORATstpPriceTickIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpPriceTickTypeType是一个价差类别类型
/////////////////////////////////////////////////////////////////////////
///价格上下限
#define TORA_TSTP_PPT_LimitPrice '0'
///价差组
#define TORA_TSTP_PPT_PriceTick '1'

typedef char TTORATstpPriceTickTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpPriceTickGroupIDType是一个价差组号类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpPriceTickGroupIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpLotTypeType是一个港股订单数量类型类型
/////////////////////////////////////////////////////////////////////////
///零股订单
#define TORA_TSTP_LT_OddLot '0'
///整手订单
#define TORA_TSTP_LT_RoundLot '1'

typedef char TTORATstpLotTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpNodeIDType是一个节点编号类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpNodeIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpNodeInfoType是一个节点信息类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpNodeInfoType[33];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpProgressType是一个进度类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpProgressType[11];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpWindCodeType是一个Wind代码类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpWindCodeType[41];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpShareType是一个股本数量类型
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpShareType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCashShareType是一个派息类型
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpCashShareType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCodeType是一个货币代码类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpCodeType[11];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIsChangedType是一个方案是否变更类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpIsChangedType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpChangeContentType是一个方案变更说明类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpChangeContentType[501];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpMemoType是一个备注类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpMemoType[201];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpObjectType是一个对象类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpObjectType[101];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpDvdPriceType是一个分红送配价格类型
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpDvdPriceType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpRatioShareType是一个配股比例类型
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpRatioShareType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpShareContentType是一个配股说明类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpShareContentType[151];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpDvdNameType是一个分红送配简称类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpDvdNameType[41];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpSubscriptionMethodType是一个认购方式类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpSubscriptionMethodType[31];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCompNameType是一个公司名称类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpCompNameType[11];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIPOPriceType是一个发行价格类型
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpIPOPriceType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpHolderNumType是一个股东户数类型
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpHolderNumType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpQuantityType是一个数量类型
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpQuantityType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpHolderNameType是一个股东名称类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpHolderNameType[101];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpFloatHolderNameType是一个流通股东名称类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpFloatHolderNameType[336];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIndustriesCodeType是一个行业代码类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpIndustriesCodeType[39];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIndustriesNameType是一个行业名称类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpIndustriesNameType[51];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpLevelNumType是一个级数类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpLevelNumType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpUsedType是一个是否有效类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpUsedType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIndustriesAliasType是一个板块别名类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpIndustriesAliasType[13];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpSequenceType是一个展示序号类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpSequenceType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIndustriesMemoType是一个板块备注类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpIndustriesMemoType[101];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpChineseDfinitionType是一个板块中文定义类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpChineseDfinitionType[601];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIndustriesNameEngType是一个板块英文名称类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpIndustriesNameEngType[201];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpConceptionCodeType是一个概念板块代码类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpConceptionCodeType[51];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpConceptionNameType是一个概念板块名称类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpConceptionNameType[101];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCurSignType是一个最新标志类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpCurSignType[11];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpItemCodeType是一个项目类别类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpItemCodeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpItemType是一个主营业务项目类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpItemType[101];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIndustryCodeType是一个行业名称类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpIndustryCodeType[17];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIndexIDType是一个指数代码类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpIndexIDType[31];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpPercentValType是一个比例值类型
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpPercentValType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpDistriValueType是一个价格数量分布的数据类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpDistriValueType[1025];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpEventSequenceNoType是一个标记事件序号类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpEventSequenceNoType[31];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTradeStatusType是一个交易状态类型
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpTradeStatusType[11];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTradeBSFlagType是一个内外盘标志类型
/////////////////////////////////////////////////////////////////////////
///外盘,主动买
#define TORA_TSTP_TBSF_Buy 'B'
///内盘,主动卖
#define TORA_TSTP_TBSF_Sell 'S'
///未知
#define TORA_TSTP_TBSF_Unknown 'N'

typedef char TTORATstpTradeBSFlagType;
#endif