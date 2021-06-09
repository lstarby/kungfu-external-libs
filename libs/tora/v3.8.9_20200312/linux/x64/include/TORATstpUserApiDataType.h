/////////////////////////////////////////////////////////////////////////
///@company �Ϻ�̩����Ϣ�Ƽ����޹�˾
///@file TORATstpUserApiStruct.h
///@brief �����˿ͻ��˽ӿ�ʹ�õ�ҵ�����ݽṹ
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
/// TTORATstpDateType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpDateType[9];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTimeType��һ��ʱ������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpTimeType[9];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpMillisecType��һ��ʱ�䣨���룩����
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpMillisecType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpPriceType��һ���۸�����
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpPriceType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpRatioType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpRatioType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpMoneyType��һ���ʽ�����
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpMoneyType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpVolumeType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpVolumeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpLargeVolumeType��һ�������������
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpLargeVolumeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpBoolType��һ������������
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpBoolType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpSequenceNoType��һ����ˮ������
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpSequenceNoType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpSerialType��һ����ˮ������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpSerialType[31];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCommFluxType��һ��ͨѶ��������
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpCommFluxType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpRoleIDType��һ����ɫ�������
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpRoleIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpRoleDescriptionType��һ����ɫ��������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpRoleDescriptionType[161];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpFunctionsType��һ������Ȩ�޼�������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpFunctionsType[513];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpDeviceIDType��һ���豸��ʶ����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpDeviceIDType[129];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCertSerialType��һ����֤��������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpCertSerialType[129];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpExchangeIDType��һ����������������
/////////////////////////////////////////////////////////////////////////
///ͨ��(�ڲ�ʹ��)
#define TORA_TSTP_EXD_COMM '0'
///�Ϻ�������
#define TORA_TSTP_EXD_SSE '1'
///���ڽ�����
#define TORA_TSTP_EXD_SZSE '2'
///��۽�����
#define TORA_TSTP_EXD_HK '3'

typedef char TTORATstpExchangeIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpAuthModeType��һ����֤��ʽ����
/////////////////////////////////////////////////////////////////////////
///����
#define TORA_TSTP_AM_Password '0'
///ָ��
#define TORA_TSTP_AM_FingerPrint '1'
///Կ�״�
#define TORA_TSTP_AM_CertInfo '2'

typedef char TTORATstpAuthModeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpVolumeMultipleType��һ����Լ������������
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpVolumeMultipleType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIdCardNoType��һ��֤���������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpIdCardNoType[51];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpUserIDType��һ�������û���������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpUserIDType[16];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTradeIDType��һ���ɽ��������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpTradeIDType[21];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpOrderSysIDType��һ��ϵͳ�����������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpOrderSysIDType[21];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCondOrderIDType��һ�����������������
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpCondOrderIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpPasswordType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpPasswordType[41];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpFrontIDType��һ��ǰ�ñ������
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpFrontIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpSessionIDType��һ���Ự�������
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpSessionIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpProductInfoType��һ����Ʒ��Ϣ����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpProductInfoType[11];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpProtocolInfoType��һ��Э����Ϣ����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpProtocolInfoType[11];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCountType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpCountType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpErrorIDType��һ�������������
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpErrorIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpErrorMsgType��һ��������Ϣ����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpErrorMsgType[81];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpPositionTypeType��һ���ֲ���������
/////////////////////////////////////////////////////////////////////////
///���ֲ�
#define TORA_TSTP_PT_Net '1'
///�ۺϳֲ�
#define TORA_TSTP_PT_Gross '2'

typedef char TTORATstpPositionTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpParameterCharValType��һ�������ı�ֵ����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpParameterCharValType[101];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpNameType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpNameType[61];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpProductIDType��һ��֤ȯƷ�ִ�������
/////////////////////////////////////////////////////////////////////////
///ͨ��(�ڲ�ʹ��)
#define TORA_TSTP_PID_COMMON '0'
///�Ϻ���Ʊ
#define TORA_TSTP_PID_SHStock '1'
///�Ϻ�����
#define TORA_TSTP_PID_SHFund '3'
///�Ϻ�ծȯ
#define TORA_TSTP_PID_SHBond '4'
///�Ϻ���׼ȯ
#define TORA_TSTP_PID_SHStandard '5'
///�Ϻ���Ѻʽ�ع�
#define TORA_TSTP_PID_SHRepurchase '6'
///���ڹ�Ʊ
#define TORA_TSTP_PID_SZStock '7'
///���ڻ���
#define TORA_TSTP_PID_SZFund '9'
///����ծȯ
#define TORA_TSTP_PID_SZBond 'a'
///���ڱ�׼ȯ
#define TORA_TSTP_PID_SZStandard 'b'
///������Ѻʽ�ع�
#define TORA_TSTP_PID_SZRepurchase 'c'
///���ͨ�۹�����
#define TORA_TSTP_PID_SZSEHKMain 'd'
///���ͨ�۹ɴ�ҵ��
#define TORA_TSTP_PID_SZSEHKGEM 'e'
///���ͨ�۹����佻��֤ȯ
#define TORA_TSTP_PID_SZSEHKETS 'f'
///���ͨ�۹�NasdaqAMX�г�
#define TORA_TSTP_PID_SZSEHKNasdaqAMX 'g'
///�Ϻ�����ͨ
#define TORA_TSTP_PID_SHCDR 'h'
///�Ϻ��ƴ���
#define TORA_TSTP_PID_SHKC 'i'

typedef char TTORATstpProductIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpSecurityIDType��һ��֤ȯ��������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpSecurityIDType[31];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpParValueType��һ����ֵ����
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpParValueType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpPriceTickType��һ����С�䶯��λ����
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpPriceTickType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTradingUnitType��һ�����׵�λ����
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpTradingUnitType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpSecurityStatusType��һ��֤ȯ״̬����
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpSecurityStatusType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpAccountIDType��һ��Ͷ�����ʽ��ʺ�����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpAccountIDType[21];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpInvestorIDType��һ��Ͷ���ߴ�������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpInvestorIDType[13];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpAddressType��һ��ͨѶ��ַ����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpAddressType[101];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpDepartmentIDType��һ�����Ŵ�������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpDepartmentIDType[11];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpBranchIDType��һ��Ӫҵ������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpBranchIDType[11];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpRemarkType��һ����ע����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpRemarkType[513];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTerminalInfoType��һ���ն���Ϣ����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpTerminalInfoType[256];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpShareholderIDType��һ���ɶ��˻���������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpShareholderIDType[11];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpPbuIDType��һ�����׵�Ԫ��������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpPbuIDType[11];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIPAddressType��һ��IP��ַ����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpIPAddressType[16];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpMacAddressType��һ��Mac��ַ����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpMacAddressType[21];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpLangType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpLangType[17];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpInterestType��һ����Ϣ����
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpInterestType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpOrderLocalIDType��һ�����ر����������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpOrderLocalIDType[13];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpPositionVolumeType��һ��֤ȯ��������
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpPositionVolumeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpBusinessUnitIDType��һ��Ͷ�ʵ�Ԫ��������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpBusinessUnitIDType[17];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpBusinessUnitNameType��һ��Ͷ�ʵ�Ԫ��������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpBusinessUnitNameType[61];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTimeStampType��һ��ʱ�������
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpTimeStampType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpBigTimeStampType��һ����ʱ�������
/////////////////////////////////////////////////////////////////////////
#ifdef WINDOWS
typedef __int64 TTORATstpBigTimeStampType;
#else
typedef long long int TTORATstpBigTimeStampType;
#endif

/////////////////////////////////////////////////////////////////////////
/// TTORATstpSecurityNameType��һ��֤ȯ����(��)����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpSecurityNameType[41];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpShortSecurityNameType��һ��֤ȯ����(��)����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpShortSecurityNameType[21];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpExternalSerialType��һ���ⲿ��ˮ������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpExternalSerialType[65];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpOrderRefType��һ��������������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpOrderRefType[13];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpRequestIDType��һ������������
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpRequestIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIntSerialType��һ��������ˮ������
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpIntSerialType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpInvestorNameType��һ��Ͷ������������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpInvestorNameType[81];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpUserNameType��һ���û���������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpUserNameType[81];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpLoginLimitType��һ����¼��������
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpLoginLimitType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCurrencyIDType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpCurrencyIDType[4];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpBankIDType��һ�����д�������
/////////////////////////////////////////////////////////////////////////
///�й���������
#define TORA_TSTP_BKID_CCB '1'
///�й�ũҵ����
#define TORA_TSTP_BKID_ABC '2'
///�й���������
#define TORA_TSTP_BKID_ICBC '3'
///�й�����
#define TORA_TSTP_BKID_BOC '4'
///�й���������
#define TORA_TSTP_BKID_CMB '5'
///�й���ͨ����
#define TORA_TSTP_BKID_BC '6'
///�ֶ���չ����
#define TORA_TSTP_BKID_SPDB '7'
///��ҵ����
#define TORA_TSTP_BKID_CIB '8'
///�й��������
#define TORA_TSTP_BKID_CEB '9'
///�㶫��չ����
#define TORA_TSTP_BKID_GDB 'a'
///�Ͼ�����
#define TORA_TSTP_BKID_NJCB 'b'
///�Ϻ�����
#define TORA_TSTP_BKID_SHCB 'c'
///��������
#define TORA_TSTP_BKID_CITICB 'd'
///��������
#define TORA_TSTP_BKID_HXB 'e'
///��������
#define TORA_TSTP_BKID_CMBC 'f'
///ƽ������
#define TORA_TSTP_BKID_PACB 'g'
///��������
#define TORA_TSTP_BKID_NBCB 'h'

typedef char TTORATstpBankIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpBankAccountIDType��һ��ǩԼ�����˺�����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpBankAccountIDType[31];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpRangeModeType��һ����Χģʽ����
/////////////////////////////////////////////////////////////////////////
///��ͨ��Χģʽ
#define TORA_TSTP_RM_Normal '0'
///ģ�巶Χģʽ
#define TORA_TSTP_RM_Template '1'
///�ۿ�ģʽ
#define TORA_TSTP_RM_Discount '2'
///��Ĭ�Ϸ�ͨ��
#define TORA_TSTP_RM_NDNC '3'
///��Ĭ��ͨ��
#define TORA_TSTP_RM_NDYC '4'
///Ĭ�Ϸ�ͨ��
#define TORA_TSTP_RM_YDNC '5'
///Ĭ��ͨ��
#define TORA_TSTP_RM_YDYC '6'

typedef char TTORATstpRangeModeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTransferReasonType��һ����Χϵͳ��λ����ԭ������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpTransferReasonType[21];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpActiveStatusType��һ���û�״̬����
/////////////////////////////////////////////////////////////////////////
///����
#define TORA_TSTP_USTS_Enabled '1'
///����
#define TORA_TSTP_USTS_Disabled '2'
///����
#define TORA_TSTP_USTS_Locked '4'

typedef char TTORATstpActiveStatusType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCombOffsetFlagType��һ����Ͽ�ƽ��־����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpCombOffsetFlagType[5];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCombHedgeFlagType��һ�����Ͷ���ױ���־����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpCombHedgeFlagType[5];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpExchangeInstIDType��һ����������Լ��������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpExchangeInstIDType[31];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTelephoneType��һ����ϵ�绰����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpTelephoneType[41];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpMobileType��һ���ֻ�����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpMobileType[41];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTraderIDType��һ������Ա��������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpTraderIDType[21];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpLongVolumeType��һ��LongVolume����
/////////////////////////////////////////////////////////////////////////
#ifdef WINDOWS
typedef __int64 TTORATstpLongVolumeType;
#else
typedef long long int TTORATstpLongVolumeType;
#endif

/////////////////////////////////////////////////////////////////////////
/// TTORATstpLongSequenceType��һ���������
/////////////////////////////////////////////////////////////////////////
#ifdef WINDOWS
typedef __int64 TTORATstpLongSequenceType;
#else
typedef long long int TTORATstpLongSequenceType;
#endif

/////////////////////////////////////////////////////////////////////////
/// TTORATstpOrderUnitType��һ���걨��λ����
/////////////////////////////////////////////////////////////////////////
///��
#define TORA_TSTP_OUT_Shou '0'
///��
#define TORA_TSTP_OUT_Gu '1'
///��
#define TORA_TSTP_OUT_Fen '2'
///��
#define TORA_TSTP_OUT_Zhang '3'

typedef char TTORATstpOrderUnitType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIdCardTypeType��һ��֤����������
/////////////////////////////////////////////////////////////////////////
///��֯��������
#define TORA_TSTP_ICT_EID '0'
///�й��������֤
#define TORA_TSTP_ICT_IDCard '1'
///����֤
#define TORA_TSTP_ICT_OfficerIDCard '2'
///����֤
#define TORA_TSTP_ICT_PoliceIDCard '3'
///ʿ��֤
#define TORA_TSTP_ICT_SoldierIDCard '4'
///���ڲ�
#define TORA_TSTP_ICT_HouseholdRegister  '5'
///����
#define TORA_TSTP_ICT_Passport '6'
///̨��֤
#define TORA_TSTP_ICT_TaiwanCompatriotIDCard  '7'
///����֤
#define TORA_TSTP_ICT_HomeComingCard '8'
///Ӫҵִ�պ�
#define TORA_TSTP_ICT_LicenseNo '9'
///˰��ǼǺ�/������˰ID
#define TORA_TSTP_ICT_TaxNo 'A'
///�۰ľ��������ڵ�ͨ��֤
#define TORA_TSTP_ICT_HMMainlandTravelPermit 'B'
///̨�����������½ͨ��֤
#define TORA_TSTP_ICT_TwMainlandTravelPermit 'C'
///����
#define TORA_TSTP_ICT_DrivingLicense 'D'
///�����籣ID
#define TORA_TSTP_ICT_SocialID 'F'
///�������֤
#define TORA_TSTP_ICT_LocalID 'G'
///��ҵ�Ǽ�֤
#define TORA_TSTP_ICT_BusinessRegistration 'H'
///�۰������Ծ������֤
#define TORA_TSTP_ICT_HKMCIDCard 'I'
///���п������֤
#define TORA_TSTP_ICT_AccountsPermits 'J'
///����֤��
#define TORA_TSTP_ICT_OtherCard 'x'

typedef char TTORATstpIdCardTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpAccountTypeType��һ���ʽ��˻���������
/////////////////////////////////////////////////////////////////////////
///��ͨ
#define TORA_TSTP_FAT_Normal '1'
///����
#define TORA_TSTP_FAT_Credit '2'
///����Ʒ
#define TORA_TSTP_FAT_Derivatives '3'

typedef char TTORATstpAccountTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpDirectionType��һ�������������
/////////////////////////////////////////////////////////////////////////
///����
#define TORA_TSTP_D_Buy '0'
///����
#define TORA_TSTP_D_Sell '1'
///ETF�����깺
#define TORA_TSTP_D_ETFPur '2'
///ETF�������
#define TORA_TSTP_D_ETFRed '3'
///�¹��깺
#define TORA_TSTP_D_IPO '4'
///���ع�
#define TORA_TSTP_D_Repurchase '5'
///��ع�
#define TORA_TSTP_D_ReverseRepur '6'
///����ʽ�����깺
#define TORA_TSTP_D_OeFundPur '8'
///����ʽ�������
#define TORA_TSTP_D_OeFundRed '9'
///����Ʒ����
#define TORA_TSTP_D_CollateralIn 'a'
///����Ʒ����
#define TORA_TSTP_D_CollateralOut 'b'
///��Ѻ���
#define TORA_TSTP_D_PledgeIn 'd'
///��Ѻ����
#define TORA_TSTP_D_PledgeOut 'e'
///�����ծ
#define TORA_TSTP_D_Rationed 'f'
///����ʽ������
#define TORA_TSTP_D_Split 'g'
///����ʽ����ϲ�
#define TORA_TSTP_D_Merge 'h'
///��������
#define TORA_TSTP_D_MarginBuy 'i'
///��ȯ����
#define TORA_TSTP_D_ShortSell 'j'
///��ȯ����
#define TORA_TSTP_D_SellRepayment 'k'
///��ȯ��ȯ
#define TORA_TSTP_D_BuyRepayment 'l'
///��ȯ��ת
#define TORA_TSTP_D_SecurityRepay 'm'
///��ȯ��ת
#define TORA_TSTP_D_RemainTransfer 'n'
///ծת��
#define TORA_TSTP_D_BondConvertStock 't'
///ծȯ����
#define TORA_TSTP_D_BondPutback 'u'
///ETF�����깺
#define TORA_TSTP_D_ETFOtPur 'v'
///ETF�������
#define TORA_TSTP_D_ETFOtRed 'w'

typedef char TTORATstpDirectionType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpBrokerageTypeType��һ��Ӷ����������
/////////////////////////////////////////////////////////////////////////
///ëӶ��
#define TORA_TSTP_BT_Gross '0'
///��Ӷ��
#define TORA_TSTP_BT_Net '1'

typedef char TTORATstpBrokerageTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpUserTypeType��һ���û���������
/////////////////////////////////////////////////////////////////////////
///���͹�˾�û�
#define TORA_TSTP_UTYPE_BrokerUser '0'
///�����û�
#define TORA_TSTP_UTYPE_SuperUser '1'
///Ͷ�����û�
#define TORA_TSTP_UTYPE_Investor '2'

typedef char TTORATstpUserTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpContingentConditionType��һ��������������
/////////////////////////////////////////////////////////////////////////
///�ɽ�����
#define TORA_TSTP_CC_TradeTouch '0'
///��������
#define TORA_TSTP_CC_CancelTouch '1'
///ʱ�䴥��
#define TORA_TSTP_CC_TimeTouch '2'
///����ʱ�δ���
#define TORA_TSTP_CC_SegmentTouch '3'
///���¼۴��ڵ���������
#define TORA_TSTP_CC_LastPriceGreaterThanStopPrice '4'
///���¼�С�ڵ���������
#define TORA_TSTP_CC_LastPriceLesserThanStopPrice '5'
///��һ�۴��ڵ���������
#define TORA_TSTP_CC_AskPriceGreaterEqualStopPrice '6'
///��һ��С�ڵ���������
#define TORA_TSTP_CC_AskPriceLesserEqualStopPrice '7'
///��һ�۴��ڵ���������
#define TORA_TSTP_CC_BidPriceGreaterEqualStopPrice '8'
///��һ��С�ڵ���������
#define TORA_TSTP_CC_BidPriceLesserEqualStopPrice '9'

typedef char TTORATstpContingentConditionType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpETFCurrenceReplaceStatusType��һ��ETF�ֽ������־����
/////////////////////////////////////////////////////////////////////////
///��ֹ�ֽ����
#define TORA_TSTP_ETFCTSTAT_Forbidden '0'
///�����ֽ����
#define TORA_TSTP_ETFCTSTAT_Allow '1'
///�����ֽ����
#define TORA_TSTP_ETFCTSTAT_Force '2'
///�����˲��ֽ����
#define TORA_TSTP_ETFCTSTAT_CBAllow '3'
///���б����ֽ����
#define TORA_TSTP_ETFCTSTAT_CBForce '4'

typedef char TTORATstpETFCurrenceReplaceStatusType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCreRedTypeType��һ��������������
/////////////////////////////////////////////////////////////////////////
///��������
#define TORA_TSTP_CRT_IS '0'
///��������
#define TORA_TSTP_CRT_OS '1'

typedef char TTORATstpCreRedTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpOperateSourceType��һ��������Դ����
/////////////////////////////////////////////////////////////////////////
///ʵʱ�ϳ�
#define TORA_TSTP_OPRTSRC_DBCommand '0'
///API����
#define TORA_TSTP_OPRTSRC_SyncAPI '1'

typedef char TTORATstpOperateSourceType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpOperwayType��һ��ί�з�ʽ����
/////////////////////////////////////////////////////////////////////////
///�绰ί��
#define TORA_TSTP_OPERW_Telephone '0'
///��̨ί��
#define TORA_TSTP_OPERW_OTC '1'
///�ƶ��ͻ���ί��
#define TORA_TSTP_OPERW_MobileClient '2'
///PC�ͻ���ί��
#define TORA_TSTP_OPERW_PCClient '3'
///TYί��
#define TORA_TSTP_OPERW_TY '4'

typedef char TTORATstpOperwayType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpOperwaysType��һ��ί�з�ʽ�ϼ�����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpOperwaysType[41];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpOrderPriceTypeType��һ�������۸���������
/////////////////////////////////////////////////////////////////////////
///�����
#define TORA_TSTP_OPT_AnyPrice '1'
///�޼�
#define TORA_TSTP_OPT_LimitPrice '2'
///���ż�
#define TORA_TSTP_OPT_BestPrice '3'
///�̺󶨼�
#define TORA_TSTP_OPT_FixPrice '8'
///�嵵��
#define TORA_TSTP_OPT_FiveLevelPrice 'G'
///��������
#define TORA_TSTP_OPT_HomeBestPrice 'a'

typedef char TTORATstpOrderPriceTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTriggerOrderPriceTypeType��һ��������׼�۸���������
/////////////////////////////////////////////////////////////////////////
///�Զ���۸�
#define TORA_TSTP_TOPT_CustomPrice '2'
///���¼�
#define TORA_TSTP_TOPT_LastPrice '4'
///��һ��
#define TORA_TSTP_TOPT_AskPrice1 '5'
///��һ��
#define TORA_TSTP_TOPT_BidPrice1 '6'
///��ؼ�
#define TORA_TSTP_TOPT_Relative '7'

typedef char TTORATstpTriggerOrderPriceTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTriggerOrderVolumeTypeType��һ��������׼������������
/////////////////////////////////////////////////////////////////////////
///�Զ�������
#define TORA_TSTP_TOVT_CustomVol '1'
///�������
#define TORA_TSTP_TOVT_RelativeVol '2'

typedef char TTORATstpTriggerOrderVolumeTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTimeConditionType��һ����Ч����������
/////////////////////////////////////////////////////////////////////////
///������ɣ�������
#define TORA_TSTP_TC_IOC '1'
///������Ч
#define TORA_TSTP_TC_GFS '2'
///������Ч
#define TORA_TSTP_TC_GFD '3'
///ָ������ǰ��Ч
#define TORA_TSTP_TC_GTD '4'
///����ǰ��Ч
#define TORA_TSTP_TC_GTC '5'
///���Ͼ�����Ч
#define TORA_TSTP_TC_GFA '6'

typedef char TTORATstpTimeConditionType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpVolumeConditionType��һ���ɽ�����������
/////////////////////////////////////////////////////////////////////////
///�κ�����
#define TORA_TSTP_VC_AV '1'
///��С����
#define TORA_TSTP_VC_MV '2'
///ȫ������
#define TORA_TSTP_VC_CV '3'

typedef char TTORATstpVolumeConditionType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpForceCloseReasonType��һ��ǿƽԭ������
/////////////////////////////////////////////////////////////////////////
///��ǿƽ
#define TORA_TSTP_FCC_NotForceClose '0'
///�ʽ���
#define TORA_TSTP_FCC_LackDeposit '1'
///�ͻ�����
#define TORA_TSTP_FCC_ClientOverPositionLimit '2'
///��Ա����
#define TORA_TSTP_FCC_MemberOverPositionLimit '3'
///�ֲַ�������
#define TORA_TSTP_FCC_NotMultiple '4'
///Υ��
#define TORA_TSTP_FCC_Violation '5'
///����
#define TORA_TSTP_FCC_Other '6'

typedef char TTORATstpForceCloseReasonType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpFileOrderTypeType��һ���ļ������������
/////////////////////////////////////////////////////////////////////////
///����
#define TORA_TSTP_EOT_Review '0'
///����
#define TORA_TSTP_EOT_Cancel '1'
///�޼۵�
#define TORA_TSTP_EOT_Limit '2'
///�����嵵��ʱ�ɽ�ʣ�೷��
#define TORA_TSTP_EOT_FRC '3'
///�����嵵��ʱ�ɽ�ʣ��ת�޼�
#define TORA_TSTP_EOT_FRL '4'
///���ַ�����
#define TORA_TSTP_EOT_BP '5'
///��������
#define TORA_TSTP_EOT_HP '6'
///�����ɽ�ʣ�೷��
#define TORA_TSTP_EOT_FAK '7'
///ȫ��ɽ�����
#define TORA_TSTP_EOT_FOK '8'

typedef char TTORATstpFileOrderTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTransferDirectionType��һ��ת�Ʒ�������
/////////////////////////////////////////////////////////////////////////
///����
#define TORA_TSTP_TRNSD_In '0'
///���
#define TORA_TSTP_TRNSD_Out '1'
///���н��׵���
#define TORA_TSTP_TRNSD_MoveIn '2'
///���н��׵���
#define TORA_TSTP_TRNSD_MoveOut '3'
///����
#define TORA_TSTP_TRNSD_Freeze '4'
///�ⶳ
#define TORA_TSTP_TRNSD_UnFreeze '5'
///֤ȯת����
#define TORA_TSTP_TRNSD_StockToBank '6'
///����ת֤ȯ
#define TORA_TSTP_TRNSD_BankToStock '7'
///��Ȩϵͳת��
#define TORA_TSTP_TRNSD_StockToOption '8'
///��Ȩϵͳת��
#define TORA_TSTP_TRNSD_OptionToStock '9'
///����ϵͳת��
#define TORA_TSTP_TRNSD_StockToMargin 'a'
///����ϵͳת��
#define TORA_TSTP_TRNSD_MarginToStock 'b'
///�ⲿ�ڵ�ת��
#define TORA_TSTP_TRNSD_NodeMoveIn 'c'
///�ⲿ�ڵ�ת��
#define TORA_TSTP_TRNSD_NodeMoveOut 'd'

typedef char TTORATstpTransferDirectionType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCollateralDirectionType��һ������Ʒ���뷽������
/////////////////////////////////////////////////////////////////////////
///����Ʒ����
#define TORA_TSTP_CLTD_CollateralIn '6'
///����Ʒ����
#define TORA_TSTP_CLTD_CollateralOut '7'

typedef char TTORATstpCollateralDirectionType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTransferStatusType��һ��ת��״̬����
/////////////////////////////////////////////////////////////////////////
///Transfer���ڴ���
#define TORA_TSTP_TRANST_TranferHandling '0'
///Transfer�ɹ�
#define TORA_TSTP_TRANST_TransferSuccess '1'
///Transferʧ��
#define TORA_TSTP_TRANST_TransferFail '2'
///Repeal���ڴ���
#define TORA_TSTP_TRANST_RepealHandling '3'
///Repeal�ɹ�
#define TORA_TSTP_TRANST_RepealSuccess '4'
///Repealʧ��
#define TORA_TSTP_TRANST_RepealFail '5'
///�ⲿϵͳ�ѽ���
#define TORA_TSTP_TRANST_ExternalAccepted '6'

typedef char TTORATstpTransferStatusType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTransferPositionTypeType��һ��ת�Ƴֲ���������
/////////////////////////////////////////////////////////////////////////
///�����
#define TORA_TSTP_TPT_ALL '0'
///���
#define TORA_TSTP_TPT_History '1'
///��������
#define TORA_TSTP_TPT_TodayBS '2'
///�������
#define TORA_TSTP_TPT_TodayPR '3'

typedef char TTORATstpTransferPositionTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpSystemNameType��һ��ϵͳ��������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpSystemNameType[41];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpRelativeCondParamType��һ�����������������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpRelativeCondParamType[31];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpOrderStatusType��һ������״̬����
/////////////////////////////////////////////////////////////////////////
///ȫ���ɽ�
#define TORA_TSTP_OST_AllTraded '0'
///���ֳɽ����ڶ�����
#define TORA_TSTP_OST_PartTradedQueueing '1'
///���ֳɽ����ڶ�����
#define TORA_TSTP_OST_PartTradedNotQueueing '2'
///δ�ɽ����ڶ�����
#define TORA_TSTP_OST_NoTradeQueueing '3'
///δ�ɽ����ڶ�����
#define TORA_TSTP_OST_NoTradeNotQueueing '4'
///����
#define TORA_TSTP_OST_Canceled '5'
///δ֪
#define TORA_TSTP_OST_Unknown 'a'
///��δ����
#define TORA_TSTP_OST_NotTouched 'b'
///�Ѵ���
#define TORA_TSTP_OST_Touched 'c'
///Ԥ��
#define TORA_TSTP_OST_Cached 'd'

typedef char TTORATstpOrderStatusType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCondOrderStatusType��һ��������״̬����
/////////////////////////////////////////////////////////////////////////
///��ʼ
#define TORA_TSTP_COST_Initial '#'
///δ����
#define TORA_TSTP_COST_NotTouched '0'
///�Ѵ���
#define TORA_TSTP_COST_Touched '1'
///�ѽ���
#define TORA_TSTP_COST_Finished '2'
///�ѳ���
#define TORA_TSTP_COST_Cancel '3'
///����ʧ��
#define TORA_TSTP_COST_Failed '4'

typedef char TTORATstpCondOrderStatusType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpOrderSubmitStatusType��һ�������ύ״̬����
/////////////////////////////////////////////////////////////////////////
///δ�ύ
#define TORA_TSTP_OSS_UnSubmit '#'
///����δ�ύ
#define TORA_TSTP_OSS_CancelUnSubmitted '*'
///�Ѿ��ύ
#define TORA_TSTP_OSS_InsertSubmitted '0'
///�����Ѿ��ύ
#define TORA_TSTP_OSS_CancelSubmitted '1'
///�޸��Ѿ��ύ
#define TORA_TSTP_OSS_ModifySubmitted '2'
///�Ѿ�����
#define TORA_TSTP_OSS_Accepted '3'
///�����Ѿ����ܾ�
#define TORA_TSTP_OSS_InsertRejected '4'
///�����Ѿ����ܾ�
#define TORA_TSTP_OSS_CancelRejected '5'
///�ĵ��Ѿ����ܾ�
#define TORA_TSTP_OSS_ModifyRejected '6'

typedef char TTORATstpOrderSubmitStatusType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpOrderTypeType��һ��������������
/////////////////////////////////////////////////////////////////////////
///����
#define TORA_TSTP_ORDT_Normal '0'
///��������
#define TORA_TSTP_ORDT_DeriveFromQuote '1'
///�������
#define TORA_TSTP_ORDT_DeriveFromCombination '2'
///��ϱ���
#define TORA_TSTP_ORDT_Combination '3'
///������
#define TORA_TSTP_ORDT_ConditionalOrder '4'
///������
#define TORA_TSTP_ORDT_Swap '5'
///Ԥ��
#define TORA_TSTP_ORDT_Cache '6'
///ҹ��ί��
#define TORA_TSTP_ORDT_Night '7'

typedef char TTORATstpOrderTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpOffsetFlagType��һ����ƽ��־����
/////////////////////////////////////////////////////////////////////////
///����
#define TORA_TSTP_OF_Open '0'
///ƽ��
#define TORA_TSTP_OF_Close '1'
///ǿƽ
#define TORA_TSTP_OF_ForceClose '2'
///ƽ��
#define TORA_TSTP_OF_CloseToday '3'
///ƽ��
#define TORA_TSTP_OF_CloseYesterday '4'
///ǿ��
#define TORA_TSTP_OF_ForceOff '5'
///����ǿƽ
#define TORA_TSTP_OF_LocalForceClose '6'

typedef char TTORATstpOffsetFlagType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpHedgeFlagType��һ��Ͷ���ױ���־����
/////////////////////////////////////////////////////////////////////////
///Ͷ��
#define TORA_TSTP_HF_Speculation '1'
///����
#define TORA_TSTP_HF_Arbitrage '2'
///�ױ�
#define TORA_TSTP_HF_Hedge '3'
///����
#define TORA_TSTP_HF_Covered '4'

typedef char TTORATstpHedgeFlagType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpActionFlagType��һ��������־����
/////////////////////////////////////////////////////////////////////////
///ɾ��
#define TORA_TSTP_AF_Delete '0'
///�޸�
#define TORA_TSTP_AF_Modify '3'
///ǿ��ɾ��
#define TORA_TSTP_AF_ForceDelete '4'

typedef char TTORATstpActionFlagType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpOrderActionStatusType��һ����������״̬����
/////////////////////////////////////////////////////////////////////////
///�Ѿ��ύ
#define TORA_TSTP_OAS_Submitted 'a'
///�Ѿ�����
#define TORA_TSTP_OAS_Accepted 'b'
///�Ѿ����ܾ�
#define TORA_TSTP_OAS_Rejected 'c'
///Ԥ��δ�ύ
#define TORA_TSTP_OAS_Cached 'e'

typedef char TTORATstpOrderActionStatusType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpClientIDTypeType��һ�����ױ�����������
/////////////////////////////////////////////////////////////////////////
///δ֪
#define TORA_TSTP_CIDT_Unknown '0'
///Ͷ��
#define TORA_TSTP_CIDT_Speculation '1'
///����
#define TORA_TSTP_CIDT_Arbitrage '2'
///�ױ�
#define TORA_TSTP_CIDT_Hedge '3'
///��ͨ
#define TORA_TSTP_CIDT_Normal 'a'
///����
#define TORA_TSTP_CIDT_Credit 'b'
///����Ʒ
#define TORA_TSTP_CIDT_Derivatives 'c'

typedef char TTORATstpClientIDTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpBizClassType��һ��ҵ���������
/////////////////////////////////////////////////////////////////////////
///����
#define TORA_TSTP_BC_Buy '0'
///����
#define TORA_TSTP_BC_Sell '1'
///ETF�����깺
#define TORA_TSTP_BC_ETFPur '2'
///ETF�������
#define TORA_TSTP_BC_ETFRed '3'
///�¹��깺
#define TORA_TSTP_BC_SubscribingShares '4'
///���ع�
#define TORA_TSTP_BC_Repurchase '5'
///��ع�
#define TORA_TSTP_BC_ReverseRepur '6'
///����ʽ�����깺
#define TORA_TSTP_BC_OeFundPur '8'
///����ʽ�������
#define TORA_TSTP_BC_OeFundRed '9'
///��Ѻ���
#define TORA_TSTP_BC_PledgeIn 'd'
///��Ѻ����
#define TORA_TSTP_BC_PledgeOut 'e'
///�����ծ
#define TORA_TSTP_BC_Rationed 'f'
///����ʽ������
#define TORA_TSTP_BC_Split 'g'
///����ʽ����ϲ�
#define TORA_TSTP_BC_Merge 'h'
///ת�й�
#define TORA_TSTP_BC_CustodyTransfer 'q'
///ծת��
#define TORA_TSTP_BC_BondConvertStock 't'
///ծȯ����
#define TORA_TSTP_BC_BondPutback 'u'
///ETF�����깺
#define TORA_TSTP_BC_ETFOtPur 'v'
///ETF�������
#define TORA_TSTP_BC_ETFOtRed 'w'

typedef char TTORATstpBizClassType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIssueModeType��һ�����з�ʽ����
/////////////////////////////////////////////////////////////////////////
///��ֵ���۷�ʽ
#define TORA_TSTP_IMO_ValueLimit '0'
///�������۷�ʽ
#define TORA_TSTP_IMO_AddIssue '1'
///�����깺��ʽ
#define TORA_TSTP_IMO_Credit '2'

typedef char TTORATstpIssueModeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpFunctionIDType��һ�����ܴ�������
/////////////////////////////////////////////////////////////////////////
///��
#define TORA_TSTP_FID_NAN "00"
///��������
#define TORA_TSTP_FID_OrderInsert "11"
///��������
#define TORA_TSTP_FID_OrderAction "12"
///���ⲿϵͳ��������ȯ
#define TORA_TSTP_FID_CollateralInJZ "13"
///�ʽ����
#define TORA_TSTP_FID_MoveFund "14"
///��֤ת��
#define TORA_TSTP_FID_TransferFund "15"
///�����ʽ�
#define TORA_TSTP_FID_RepealFund "16"
///������λ
#define TORA_TSTP_FID_RepealPosition "17"
///�ֲֵ���
#define TORA_TSTP_FID_MovePosition "18"
///������������
#define TORA_TSTP_FID_CondOrderInsert "19"
///������������
#define TORA_TSTP_FID_CondOrderAction "1a"
///ָ�����׵Ǽǳ���
#define TORA_TSTP_FID_DesignationRegistration "1b"
///��֤ת�йܳ���
#define TORA_TSTP_FID_CustodyTransfer "1c"
///ǿ��ɾ������
#define TORA_TSTP_FID_ForceDelete "1d"
///��ع���
#define TORA_TSTP_FID_RiskManage "1e"
///��¼������־
#define TORA_TSTP_FID_RecordOperateLog "1f"
///�ش�����
#define TORA_TSTP_FID_UploadTradeData "1g"
///�����ʽ����
#define TORA_TSTP_FID_ReviewAdjustFund "20"
///���˲�λ����
#define TORA_TSTP_FID_ReviewAdjustPosition "21"
///���˹�Ա����
#define TORA_TSTP_FID_ReviewBrokerUserManage "23"
///���˿ͻ���Ϣ����
#define TORA_TSTP_FID_ReviewCustomerInfoManage "24"
///���˽�ɫ����
#define TORA_TSTP_FID_ReviewBrokerUserRoleManage "25"
///����Ԥ��ͨ������
#define TORA_TSTP_FID_ReviewAdjustCacheChannel "26"
///֤ȯ��Ϣ����
#define TORA_TSTP_FID_AdjustSecurity "30"
///����ϵͳ����
#define TORA_TSTP_FID_AdjustSystemParam "32"
///�ڲ������������
#define TORA_TSTP_FID_AppRunManage "33"
///������ع����г�״̬/ƽ̨״̬�ȣ�
#define TORA_TSTP_FID_MarketDataManage "34"
///�ն���Ϣ����
#define TORA_TSTP_FID_TerminalInfoManage "36"
///�¹������ǩ��Ϣ���¹ɶ�ȹ���
#define TORA_TSTP_FID_IPOManage "37"
///�ͻ���Ϣ�������á����á��������������롢�ǳ�������IP����
#define TORA_TSTP_FID_CustomerManage "38"
///ϯλ����
#define TORA_TSTP_FID_TraderManage "39"
///������Ϣ����
#define TORA_TSTP_FID_DepartmentInfoManage "3a"
///��Ա��������ɾ���ġ��������Ȩ�ޡ��������Ȩ�ޡ����á����á��������ǳ����������롢����IP���ƣ�
#define TORA_TSTP_FID_BrokerUserManage "3b"
///��ɫ��������ɾ���Ľ�ɫ��
#define TORA_TSTP_FID_BrokerUserRoleManage "3c"
///Ͷ���߽��ײ�����������ɾ���ķ��ʡ�����������������Ȩ�ޡ�ϵͳȨ�ޡ����⽻��Ȩ�ޣ�
#define TORA_TSTP_FID_CustomerTradingParamManage "3d"
///���͹�˾���ײ�����������ɾ���ķ���ģ�塢Ȩ��ģ�塢�ֲֽ������ԡ��������׷��ʡ�����ǰ׺���������ر���ţ�
#define TORA_TSTP_FID_BrokerTradingParamManage "3e"
///�ʽ�������
#define TORA_TSTP_FID_AdjustFund "3f"
///�޸Ĺ�Ա����
#define TORA_TSTP_FID_UpdateBrokerUserPassword "3g"
///��Ա����Ȩ�޹���
#define TORA_TSTP_FID_AdjustBrokerUserFunction "3h"
///ǿ�ƹ�Ա�ǳ�
#define TORA_TSTP_FID_ForceBrokerUserLogout "3i"
///ǿ�ƹ�Ա�˳�
#define TORA_TSTP_FID_ForceBrokerUserExit "3j"
///�����Ա�û�
#define TORA_TSTP_FID_ActiveBrokerUser "3k"
///��λ�������
#define TORA_TSTP_FID_AdjustPosition "3A"
///Ԥ��ͨ������
#define TORA_TSTP_FID_AdjustCacheChannel "3B"
///�ڵ���Ϣ����
#define TORA_TSTP_FID_NodeInfoManage "3C"
///��̬�������
#define TORA_TSTP_FID_DynamicPasswordManage "3D"
///��ѯϯλ��أ�PBU��TradeOffer��MDServer
#define TORA_TSTP_FID_QryTrader "50"
///��ѯ�г�
#define TORA_TSTP_FID_QryMarketData "51"
///��ѯ֤ȯ��Ϣ
#define TORA_TSTP_FID_QrySecurity "52"
///��ѯ������Ϣ
#define TORA_TSTP_FID_QryDepartmentInfo "53"
///��ѯ��Ա��Ϣ����ɫ��Ȩ������Ȩ�ޡ�����Ȩ��
#define TORA_TSTP_FID_QryBrokerUserInfo "54"
///��ѯ��ɫ
#define TORA_TSTP_FID_QryBrokerUserRole "55"
///��ѯͶ������Ϣ:�ɶ��˻���Investor��User�������˻�
#define TORA_TSTP_FID_QryCustomerInfo "56"
///��ѯί��/����
#define TORA_TSTP_FID_QryOrder "58"
///��ѯ�ɽ�
#define TORA_TSTP_FID_QryTrade "59"
///��ѯ�ʽ�
#define TORA_TSTP_FID_QryTradingAccount "5a"
///��ѯ��Ѻ/֤ȯ����׼ȯ�ֲ�
#define TORA_TSTP_FID_QryPositon "5b"
///��ѯͶ���߽��ײ���:���ʡ�����������������Ȩ�ޡ�ϵͳȨ�ޡ����⽻��Ȩ��
#define TORA_TSTP_FID_QryCustomerTradingParam "5c"
///��ѯ�¹������Ϣ����ȡ���š���ǩ���
#define TORA_TSTP_FID_QryIPORelateInfo "5d"
///��ѯ������ϸ�ʽ�
#define TORA_TSTP_FID_QryOrderFundDetail "5e"
///��ѯ�ʽ�ת����ϸ�ʽ�
#define TORA_TSTP_FID_QryFundTransferDetail "5f"
///��ѯ�ֲ�ת����ˮ
#define TORA_TSTP_FID_QryPositionTransferDetail "5g"
///��ѯ���͹�˾���ײ���:����ģ�塢Ȩ��ģ�塢�ֲֽ������ԡ��������׷��ʡ�����ǰ׺���������ر����
#define TORA_TSTP_FID_QryBrokerTradingParam "5h"
///��ѯ����֪ͨ
#define TORA_TSTP_FID_QryTradingNotice "5i"
///��ѯ�û��¼�
#define TORA_TSTP_FID_QryTradeEvent "5j"
///��ѯϵͳ����
#define TORA_TSTP_FID_QrySystemParam "5n"
///��ѯӦ�ó������
#define TORA_TSTP_FID_QryAppInfo "5o"
///��ѯ�ʽ����
#define TORA_TSTP_FID_QryAdjustFund "5p"
///��ѯ��λ����
#define TORA_TSTP_FID_QryAdjustPosition "5q"
///��ѯԤ��ͨ������
#define TORA_TSTP_FID_QryAdjustCacheChannel "5r"
///��ѯ��Ա����
#define TORA_TSTP_FID_QryAdjustBrokerUser "5s"
///��ѯ�ͻ���Ϣ����
#define TORA_TSTP_FID_QryAdjustCustomerInfo "5t"
///��ѯ��ɫ����
#define TORA_TSTP_FID_QryAdjustBrokerUserRole "5u"
///��ѯ�ڵ���Ϣ
#define TORA_TSTP_FID_QryNodeInfo "5v"
///��ѯ��̬������Ϣ
#define TORA_TSTP_FID_QryDynamicPasswordInfo "5w"
///�����ϳ�
#define TORA_TSTP_FID_EmergencyDbmt "60"
///Dumpϯλ��أ�PBU��TradeOffer��MDServer
#define TORA_TSTP_FID_DumpTrader "70"
///Dump�г�
#define TORA_TSTP_FID_DumpMarketData "71"
///Dump֤ȯ��Ϣ
#define TORA_TSTP_FID_DumpSecurity "72"
///Dump������Ϣ
#define TORA_TSTP_FID_DumpDepartmentInfo "73"
///Dump��Ա��Ϣ����ɫ��Ȩ������Ȩ�ޡ�����Ȩ��
#define TORA_TSTP_FID_DumpBrokerUserInfo "74"
///Dump��ɫ
#define TORA_TSTP_FID_DumpBrokerUserRole "75"
///DumpͶ������Ϣ:�ɶ��˻���Investor��User�������˻�
#define TORA_TSTP_FID_DumpCustomerInfo "76"
///Dumpί��/����
#define TORA_TSTP_FID_DumpOrder "78"
///Dump�ɽ�
#define TORA_TSTP_FID_DumpTrade "79"
///Dump�ʽ�
#define TORA_TSTP_FID_DumpTradingAccount "7a"
///Dump��Ѻ/֤ȯ����׼ȯ�ֲ�
#define TORA_TSTP_FID_DumpPositon "7b"
///DumpͶ���߽��ײ���:���ʡ�����������������Ȩ�ޡ�ϵͳȨ�ޡ����⽻��Ȩ��
#define TORA_TSTP_FID_DumpCustomerTradingParam "7c"
///Dump�¹������Ϣ����ȡ���š���ǩ���
#define TORA_TSTP_FID_DumpIPORelateInfo "7d"
///Dump������ϸ�ʽ�
#define TORA_TSTP_FID_DumpOrderFundDetail "7e"
///Dump�ʽ�ת����ϸ�ʽ�
#define TORA_TSTP_FID_DumpFundTransferDetail "7f"
///Dump�ֲ�ת����ˮ
#define TORA_TSTP_FID_DumpPositionTransferDetail "7g"
///Dump���͹�˾���ײ���:����ģ�塢Ȩ��ģ�塢�ֲֽ������ԡ��������׷��ʡ�����ǰ׺���������ر����
#define TORA_TSTP_FID_DumpBrokerTradingParam "7h"
///Dump����֪ͨ
#define TORA_TSTP_FID_DumpTradingNotice "7i"
///Dump�û��¼�
#define TORA_TSTP_FID_DumpTradeEvent "7j"
///Dumpϵͳ����
#define TORA_TSTP_FID_DumpSystemParam "7n"
///DumpӦ�ó������
#define TORA_TSTP_FID_DumpAppInfo "7o"
///Dump�ʽ����
#define TORA_TSTP_FID_DumpAdjustFund "7p"
///Dump��λ����
#define TORA_TSTP_FID_DumpAdjustPosition "7q"
///DumpԤ��ͨ������
#define TORA_TSTP_FID_DumpAdjustCacheChannel "7r"
///Dump��Ա����
#define TORA_TSTP_FID_DumpAdjustBrokerUser "7s"
///Dump�ͻ���Ϣ����
#define TORA_TSTP_FID_DumpAdjustCustomerInfo "7t"
///Dump��ɫ����
#define TORA_TSTP_FID_DumpAdjustBrokerUserRole "7u"
///Dump�ڵ���Ϣ
#define TORA_TSTP_FID_DumpNodeInfo "7v"
///Dump�ն˶�̬����
#define TORA_TSTP_FID_DumpDynamicPassword "7w"
///Dump��������
#define TORA_TSTP_FID_DumpAll "7Z"
///��Ȩ��������
#define TORA_TSTP_FID_GrantOrderInsert "a1"
///��Ȩ��������
#define TORA_TSTP_FID_GrantOrderAction "a2"
///��Ȩ�ʽ����
#define TORA_TSTP_FID_GrantMoveFund "a4"
///��Ȩ�ֲֵ���
#define TORA_TSTP_FID_GrantMovePosition "a8"
///��Ȩ����������
#define TORA_TSTP_FID_GrantCondOrderInsert "a9"
///��Ȩ����������
#define TORA_TSTP_FID_GrantCondOrderAction "aa"

typedef char TTORATstpFunctionIDType[3];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpSecurityTypeType��һ��֤ȯ�������
/////////////////////////////////////////////////////////////////////////
///ͨ��(�ڲ�ʹ��)
#define TORA_TSTP_STP_COMMON '0'
///�Ϻ�A��
#define TORA_TSTP_STP_SHAShares 'a'
///�Ϻ����г���ƱETF
#define TORA_TSTP_STP_SHSingleMarketStockETF 'b'
///�Ϻ����г�ʵ��ծȯETF
#define TORA_TSTP_STP_SHSingleMarketBondETF 'c'
///�Ϻ��ƽ�ETF
#define TORA_TSTP_STP_SHGoldETF 'd'
///�Ϻ�����ETF
#define TORA_TSTP_STP_SHTradableMonetaryFund 'e'
///�Ϻ���ծ�ط�ծ
#define TORA_TSTP_STP_SHBondNation 'f'
///�Ϻ���ҵծ
#define TORA_TSTP_STP_SHBondCorporation 'g'
///�Ϻ���˾ծ
#define TORA_TSTP_STP_SHBondCompany 'h'
///�Ϻ���תծ
#define TORA_TSTP_STP_SHBondConversion 'i'
///�Ϻ�����ծ
#define TORA_TSTP_STP_SHBondSeparation 'j'
///�Ϻ���׼ȯ
#define TORA_TSTP_STP_SHStandard 'o'
///�Ϻ���Ѻʽ�ع�
#define TORA_TSTP_STP_SHRepo 'p'
///�Ϻ����ʽ����
#define TORA_TSTP_STP_SHCEFund 'q'
///�Ϻ�����ʽ����
#define TORA_TSTP_STP_SHOEFund 'r'
///�Ϻ����г�ETF
#define TORA_TSTP_STP_SHCrossMarketStockETF 's'
///�Ϻ��羳ETF
#define TORA_TSTP_STP_SHCrossBorderETF 't'
///�Ϻ��ּ�ĸ����
#define TORA_TSTP_STP_SHMontherStructFund 'u'
///�Ϻ��ּ��ӻ���
#define TORA_TSTP_STP_SHSubStructFund 'v'
///�Ϻ�ʵʱ������һ���
#define TORA_TSTP_STP_SHRealTimeMonetaryFund 'w'
///�Ϻ��ɽ���ծ
#define TORA_TSTP_STP_SHExchangeableBond 'x'
///�Ϻ���׼LOF����
#define TORA_TSTP_STP_SHLOF 'A'
///��������A��
#define TORA_TSTP_STP_SZMainAShares 'B'
///������С��ҵ��
#define TORA_TSTP_STP_SZSME 'C'
///���ڹ�ծ���ط�ծ
#define TORA_TSTP_STP_SZBondNation 'D'
///������ҵծ
#define TORA_TSTP_STP_SZBondCorporation 'E'
///���ڹ�˾ծ
#define TORA_TSTP_STP_SZBondCompany 'F'
///���ڿ�תծ
#define TORA_TSTP_STP_SZBondConversion 'G'
///���ڷ���ծ
#define TORA_TSTP_STP_SZBondSeparation 'H'
///���ڿ羳ETF
#define TORA_TSTP_STP_SZCrossBorderETF 'K'
///���ڻƽ�ETF
#define TORA_TSTP_STP_SZGoldETF 'L'
///�����ֽ�ծȯETF
#define TORA_TSTP_STP_SZCashBondETF 'M'
///���ڵ��г���ƱETF
#define TORA_TSTP_STP_SZSingleMarketStockETF 'N'
///���ڵ��г�ʵ��ծȯETF
#define TORA_TSTP_STP_SZSingleMarketBondETF 'O'
///���ڻ���ETF
#define TORA_TSTP_STP_SZMonetaryFundETF 'P'
///���ڴ�ҵ��
#define TORA_TSTP_STP_SZGEM 'Q'
///���ڱ�׼ȯ
#define TORA_TSTP_STP_SZStandard 'T'
///������Ѻʽ�ع�
#define TORA_TSTP_STP_SZRepo 'U'
///���ڷ��ʽ����
#define TORA_TSTP_STP_SZCEFund 'V'
///���ڿ���ʽ����
#define TORA_TSTP_STP_SZOEFund 'W'
///���ڿ羳����ʽ����
#define TORA_TSTP_STP_SZCrossBorderOEFund 'X'
///���ڿ��г���ƱETF
#define TORA_TSTP_STP_SZCrossMarketStockETF 'Y'
///���ڱ�׼LOF����
#define TORA_TSTP_STP_SZLOF 'Z'
///���ڿ羳LOF����
#define TORA_TSTP_STP_SZCrossBorderLOF '1'
///���ڴ�ͳ�ּ�ĸ����
#define TORA_TSTP_STP_SZMontherStructFund '2'
///���ڴ�ͳ�ּ��ӻ���
#define TORA_TSTP_STP_SZSubStructFund '3'
///���ڿ羳�ּ�ĸ����
#define TORA_TSTP_STP_SZMontherCrossBorderStructFund '4'
///���ڿ羳�ּ��ӻ���
#define TORA_TSTP_STP_SZSubCrossBorderStructFund '5'
///���ڿɽ���ծ
#define TORA_TSTP_STP_SZExchangeableBond '6'
///���ڴ�ҵ���תծ
#define TORA_TSTP_STP_SZGEMConversionBond '7'
///���ͨ�۹�ծȯ
#define TORA_TSTP_STP_SZSEHKBond '8'
///���ͨ�۹�һ����Ȩ֤
#define TORA_TSTP_STP_SZSEHKBasketWarrant '9'
///���ͨ�۹ɹɱ�
#define TORA_TSTP_STP_SZSEHKEquity 'y'
///���ͨ�۹�����
#define TORA_TSTP_STP_SZSEHKTrust 'z'
///���ͨ�۹�Ȩ֤
#define TORA_TSTP_STP_SZSEHKWarrant '#'
///�Ϻ�����ͨ
#define TORA_TSTP_STP_SHCDR '+'
///�Ϻ��ƴ����Ʊ
#define TORA_TSTP_STP_SHKC '*'
///�Ϻ��ƴ������ƾ֤
#define TORA_TSTP_STP_SHKCCDR '-'

typedef char TTORATstpSecurityTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpEndFlagType��һ��������־����
/////////////////////////////////////////////////////////////////////////
///����
#define TORA_TSTP_EF_ToBeContinued '1'
///������
#define TORA_TSTP_EF_BatchEnd '2'
///ȫ�����
#define TORA_TSTP_EF_Completed '3'
///������
#define TORA_TSTP_EF_NOP '4'

typedef char TTORATstpEndFlagType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpMarketIDType��һ���г���������
/////////////////////////////////////////////////////////////////////////
///ͨ��(�ڲ�ʹ��)
#define TORA_TSTP_MKD_COMMON '0'
///�Ϻ�A��
#define TORA_TSTP_MKD_SHA '1'
///����A��
#define TORA_TSTP_MKD_SZA '2'
///�Ϻ�B��
#define TORA_TSTP_MKD_SHB '3'
///����B��
#define TORA_TSTP_MKD_SZB '4'
///��������A��
#define TORA_TSTP_MKD_SZThreeA '5'
///��������B��
#define TORA_TSTP_MKD_SZThreeB '6'
///�����г�
#define TORA_TSTP_MKD_Foreign '7'
///���ڸ۹�ͨ�г�
#define TORA_TSTP_MKD_SZHK '8'
///�Ϻ��۹�ͨ�г�
#define TORA_TSTP_MKD_SHHK '9'

typedef char TTORATstpMarketIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpLogInAccountType��һ����¼�˻�����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpLogInAccountType[21];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpLogInAccountTypeType��һ����¼�˻���������
/////////////////////////////////////////////////////////////////////////
///�û�����
#define TORA_TSTP_LACT_UserID '0'
///�ʽ��˺�
#define TORA_TSTP_LACT_AccountID '1'
///�Ϻ�A��
#define TORA_TSTP_LACT_SHAStock '2'
///����A��
#define TORA_TSTP_LACT_SZAStock '3'
///�Ϻ�B��
#define TORA_TSTP_LACT_SHBStock '4'
///����B��
#define TORA_TSTP_LACT_SZBStock '5'
///����A
#define TORA_TSTP_LACT_ThreeNewBoardA '6'
///����B
#define TORA_TSTP_LACT_ThreeNewBoardB '7'
///�۹�
#define TORA_TSTP_LACT_HKStock '8'
///ͳһ�û�����
#define TORA_TSTP_LACT_UnifiedUserID '9'

typedef char TTORATstpLogInAccountTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpSpecPrivilegeTypeType��һ������Ȩ���������
/////////////////////////////////////////////////////////////////////////
///��ҵ��
#define TORA_TSTP_SPLT_GEM '0'
///���վ�ʾ��
#define TORA_TSTP_SPLT_RiskWarning '1'
///���������
#define TORA_TSTP_SPLT_Delisting '2'
///�۹�ͨ
#define TORA_TSTP_SPLT_SZSEHK '3'
///�ƴ���
#define TORA_TSTP_SPLT_SHKC '4'

typedef char TTORATstpSpecPrivilegeTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpMarketStatusType��һ���г�״̬����
/////////////////////////////////////////////////////////////////////////
///δ֪
#define TORA_TSTP_MST_UnKnown '#'
///����ǰ
#define TORA_TSTP_MST_BeforeTrading '0'
///��������
#define TORA_TSTP_MST_Continous '1'
///����
#define TORA_TSTP_MST_Closed '2'
///���̼��Ͼ���
#define TORA_TSTP_MST_OpenCallAuction '3'
///(�۹�ͨ)δ����
#define TORA_TSTP_MST_SZSEHKUnopened 'a'
///(�۹�ͨ)���̼��Ͼ�������������
#define TORA_TSTP_MST_SZSEHKOpenCallAuctionInput 'b'
///(�۹�ͨ)���̼��Ͼ��۶���ǰ
#define TORA_TSTP_MST_SZSEHKOpenCallAuctionBeforeMatch 'c'
///(�۹�ͨ)���̼��Ͼ��۶���
#define TORA_TSTP_MST_SZSEHKOpenCallAuctionMatch 'd'
///(�۹�ͨ)��ͣ
#define TORA_TSTP_MST_SZSEHKHalt 'e'
///(�۹�ͨ)��������
#define TORA_TSTP_MST_SZSEHKContinous 'f'
///(�۹�ͨ)Exchange Intervention
#define TORA_TSTP_MST_SZSEHKExchangeIntervention 'g'
///(�۹�ͨ)���̼��Ͼ��۲ο��۶���
#define TORA_TSTP_MST_SZSEHKCloseCallAuctionReferencePrice 'h'
///(�۹�ͨ)���̼��Ͼ�������������
#define TORA_TSTP_MST_SZSEHKCloseCallAuctionInput 'i'
///(�۹�ͨ)���̼��Ͼ��۲���ȡ��
#define TORA_TSTP_MST_SZSEHKCloseCallAuctionCannotCancel 'j'
///(�۹�ͨ)���̼��Ͼ��۶���
#define TORA_TSTP_MST_SZSEHKCloseCallAuctionMatch 'k'
///(�۹�ͨ)���̼��Ͼ����������
#define TORA_TSTP_MST_SZSEHKCloseCallAuctionRandomClosed 'l'
///(�۹�ͨ)ȡ��������
#define TORA_TSTP_MST_SZSEHKCancel 'm'
///(�۹�ͨ)����
#define TORA_TSTP_MST_SZSEHKClosed 'n'
///(�۹�ͨ)ȫ������
#define TORA_TSTP_MST_SZSEHKWholeClosed 'o'

typedef char TTORATstpMarketStatusType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpBigsInfoType��һ�����ַ���������Ϣ����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpBigsInfoType[33];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpShortsInfoType��һ�����ַ���������Ϣ����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpShortsInfoType[9];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIntInfoType��һ�����θ�����Ϣ����
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpIntInfoType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpFloatInfoType��һ�������͸�����Ϣ����
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpFloatInfoType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpApiGroupIDType��һ��Api�����������
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpApiGroupIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpDesignationTypeType��һ��ָ�����ײ�����������
/////////////////////////////////////////////////////////////////////////
///ָ�����׵Ǽ�
#define TORA_TSTP_DT_Register '0'
///ָ�����׳����Ǽ�
#define TORA_TSTP_DT_Cancel '1'

typedef char TTORATstpDesignationTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCustodyTransferTypeType��һ����֤ת�й���������
/////////////////////////////////////////////////////////////////////////
///��֤ת�й�ע��
#define TORA_TSTP_CT_Register '0'
///��֤ת�йܳ���
#define TORA_TSTP_CT_Cancel '1'

typedef char TTORATstpCustodyTransferTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpProperCtrlBusinessTypeType��һ���ʵ��Կ���ҵ���������
/////////////////////////////////////////////////////////////////////////
///��ֵ
#define TORA_TSTP_PCBT_None ' '
///����
#define TORA_TSTP_PCBT_Other '0'
///�Ϻ���������
#define TORA_TSTP_PCBT_SHDelisting '1'
///���վ�ʾ
#define TORA_TSTP_PCBT_ST '2'
///��ҵ��
#define TORA_TSTP_PCBT_GEM '3'
///�ּ�����
#define TORA_TSTP_PCBT_StructFund '4'
///ծȯ
#define TORA_TSTP_PCBT_BondQualified '5'
///��ͣ����ծ
#define TORA_TSTP_PCBT_SuspendBond '6'
///���ع�
#define TORA_TSTP_PCBT_Repurchase '7'
///��ع�
#define TORA_TSTP_PCBT_ReverseRepur '8'
///������������
#define TORA_TSTP_PCBT_SZDelisting '9'
///�����Ʊ
#define TORA_TSTP_PCBT_Stock 'a'
///�����Ʊ����
#define TORA_TSTP_PCBT_CreditStock 'b'

typedef char TTORATstpProperCtrlBusinessTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpProperCtrlPassFlagType��һ���ʵ��Կ���ͨ����ʾ����
/////////////////////////////////////////////////////////////////////////
///��ֵ
#define TORA_TSTP_PCPF_None ' '
///������ͨ��
#define TORA_TSTP_PCPF_AnywayPass '0'
///ƥ��ͨ��
#define TORA_TSTP_PCPF_MatchPass '1'
///������ͨ��
#define TORA_TSTP_PCPF_SelectPass '2'
///רͶ�����
#define TORA_TSTP_PCPF_ProfInvestorPass '3'

typedef char TTORATstpProperCtrlPassFlagType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCRiskLevelType��һ���ͻ����յȼ�����
/////////////////////////////////////////////////////////////////////////
///��ͼ������
#define TORA_TSTP_RLV_Lowest '0'
///������
#define TORA_TSTP_RLV_Conservative '1'
///������
#define TORA_TSTP_RLV_Cautious '2'
///�Ƚ���
#define TORA_TSTP_RLV_Steady '3'
///������
#define TORA_TSTP_RLV_Positive '4'
///������
#define TORA_TSTP_RLV_Aggressive '5'

typedef char TTORATstpCRiskLevelType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpProfInvestorTypeType��һ��רҵͶ�����������
/////////////////////////////////////////////////////////////////////////
///��רҵͶ����
#define TORA_TSTP_PIT_NotProf '0'
///��Ȼ����רҵͶ����
#define TORA_TSTP_PIT_OCInstiPro '1'
///���˻����רҵͶ����
#define TORA_TSTP_PIT_InstiPro '2'
///��Ȼ��רҵͶ����
#define TORA_TSTP_PIT_PersonPro '3'
///�϶����˻����רҵͶ����
#define TORA_TSTP_PIT_ConfirmInstiPro '4'
///�϶���Ȼ��רҵͶ����
#define TORA_TSTP_PIT_ConfirmPersonPro '5'

typedef char TTORATstpProfInvestorTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpLOrderTypeType��һ�������������
/////////////////////////////////////////////////////////////////////////
///�м�
#define TORA_TSTP_LOT_Market '1'
///�޼�
#define TORA_TSTP_LOT_Limit '2'
///��������
#define TORA_TSTP_LOT_HomeBest '3'

typedef char TTORATstpLOrderTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpLSideType��һ��ί�з�������
/////////////////////////////////////////////////////////////////////////
///��
#define TORA_TSTP_LSD_Buy '1'
///��
#define TORA_TSTP_LSD_Sell '2'
///����
#define TORA_TSTP_LSD_Borrow '3'
///���
#define TORA_TSTP_LSD_Lend '4'

typedef char TTORATstpLSideType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpExecTypeType��һ���ɽ��������
/////////////////////////////////////////////////////////////////////////
///�ɽ�
#define TORA_TSTP_ECT_Fill '1'
///����
#define TORA_TSTP_ECT_Cancel '2'
///δ֪
#define TORA_TSTP_ECT_Unknown 'N'

typedef char TTORATstpExecTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpGOrderTypeType��һ�������������
/////////////////////////////////////////////////////////////////////////
///�޼۵�
#define TORA_TSTP_GOT_LimitPrice '0'
///��������
#define TORA_TSTP_GOT_HomeBest '1'
///���ַ�����
#define TORA_TSTP_GOT_CounterpartyBest '2'
///�����ɽ�ʣ�೷��
#define TORA_TSTP_GOT_FAK '3'
///ȫ��ɽ�����
#define TORA_TSTP_GOT_FOK '4'
///�����嵵ʣ�೷��
#define TORA_TSTP_GOT_FiveLevIOC '5'
///�����嵵ʣ��ת��
#define TORA_TSTP_GOT_FiveLevGFD '6'
///�̺󶨼�
#define TORA_TSTP_GOT_FixPrice '7'
///��ǿ�޼���
#define TORA_TSTP_GOT_EnhancePrice '8'
///�����޼���
#define TORA_TSTP_GOT_BidPrice '9'

typedef char TTORATstpGOrderTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCondCheckType��һ��ί�������������
/////////////////////////////////////////////////////////////////////////
///�����κμ��
#define TORA_TSTP_CCT_None '0'
///�Գɽ����
#define TORA_TSTP_CCT_SelfDeal '1'

typedef char TTORATstpCondCheckType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpHDSerialType��һ��Ӳ�����к�����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpHDSerialType[33];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpMDSubModeType��һ�����鶩��ģʽ����
/////////////////////////////////////////////////////////////////////////
///TCP����ģʽ
#define TORA_TSTP_MST_TCP '0'
///UDP����ģʽ
#define TORA_TSTP_MST_UDP '1'
///UDP�鲥ģʽ
#define TORA_TSTP_MST_MCAST '2'

typedef char TTORATstpMDSubModeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpMDSecurityStatType��һ������֤ȯ״̬����
/////////////////////////////////////////////////////////////////////////
///����ǰ
#define TORA_TSTP_MSST_PreOpen '0'
///���Ͼ���
#define TORA_TSTP_MSST_CallAuction '1'
///��������
#define TORA_TSTP_MSST_Continous '2'
///����
#define TORA_TSTP_MSST_Pause '3'
///ͣ��
#define TORA_TSTP_MSST_Suspend '4'
///����ͣ��
#define TORA_TSTP_MSST_LongSuspend '5'
///�������ж�
#define TORA_TSTP_MSST_UndulationInt '6'
///�۶Ͽɻָ�
#define TORA_TSTP_MSST_CircuitBreak '7'
///�۶ϲ��ɻָ�
#define TORA_TSTP_MSST_CircuitBreakU '8'
///����
#define TORA_TSTP_MSST_Close '9'
///����
#define TORA_TSTP_MSST_Other 'a'
///���̼��Ͼ���
#define TORA_TSTP_MSST_CloseCallAuction 'b'
///���д��(�̺󶨼�)
#define TORA_TSTP_MSST_CallMatch 'c'
///��������(�̺󶨼�)
#define TORA_TSTP_MSST_PostContinous 'd'
///����(�̺󶨼�)
#define TORA_TSTP_MSST_PostClose 'e'
///����ǰ(�̺󶨼�)
#define TORA_TSTP_MSST_PrePostOpen 'f'

typedef char TTORATstpMDSecurityStatType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCommitStatusType��һ���ļ�ί���ύ״̬����
/////////////////////////////////////////////////////////////////////////
///��ʼ
#define TORA_TSTP_FOCS_Init '0'
///�Ѹ���
#define TORA_TSTP_FOCS_Reviewed '1'
///����ʧ��
#define TORA_TSTP_FOCS_Failed '2'

typedef char TTORATstpCommitStatusType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpParamTypeType��һ���ɶ�������������
/////////////////////////////////////////////////////////////////////////
///�����������
#define TORA_TSTP_SPT_MaxBuyLimit '0'
///�����������
#define TORA_TSTP_SPT_MaxSellLimit '1'
///�������걨���Ʊ���
#define TORA_TSTP_SPT_LargeBuyLimitRatio '2'
///��������걨���Ʊ���
#define TORA_TSTP_SPT_LargeSelLimitRatio '3'
///���վ�ʾ��������
#define TORA_TSTP_SPT_RiskWarnBoardLimitVol '4'
///�����걨ʱ����
#define TORA_TSTP_SPT_SeriesDecInterval '5'
///�����걨��λʱ��ί�б���
#define TORA_TSTP_SPT_SeriesLimitPerUnit '6'
///Ӱ�����̼۲�������
#define TORA_TSTP_SPT_ClosePriceScopeRatio '7'
///���¿����������ʱ��
#define TORA_TSTP_SPT_OpenDateLimit '8'
///�ǵ�ͣ������걨ռδ�ɽ�����
#define TORA_TSTP_SPT_LimitBoardShamRatio '9'
///�������Ʊ���
#define TORA_TSTP_SPT_CancelOrderRatio 'a'

typedef char TTORATstpParamTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpContentType��һ����Ϣ��������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpContentType[501];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpStatusMsgType��һ��״̬��Ϣ����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpStatusMsgType[93];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIPONumberIDType��һ���¹��깺��ɺ�����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpIPONumberIDType[31];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpPageLocateType��һ��ҳ��λ������
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpPageLocateType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpPriceTickIDType��һ���۲�Ʒ������
/////////////////////////////////////////////////////////////////////////
///�ɱ�֤ȯ
#define TORA_TSTP_PTID_Stock '0'
///ծ��֤ȯ
#define TORA_TSTP_PTID_Bond '1'
///��Ʊ��Ȩ
#define TORA_TSTP_PTID_Option '2'

typedef char TTORATstpPriceTickIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpPriceTickTypeType��һ���۲��������
/////////////////////////////////////////////////////////////////////////
///�۸�������
#define TORA_TSTP_PPT_LimitPrice '0'
///�۲���
#define TORA_TSTP_PPT_PriceTick '1'

typedef char TTORATstpPriceTickTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpPriceTickGroupIDType��һ���۲��������
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpPriceTickGroupIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpLotTypeType��һ���۹ɶ���������������
/////////////////////////////////////////////////////////////////////////
///��ɶ���
#define TORA_TSTP_LT_OddLot '0'
///���ֶ���
#define TORA_TSTP_LT_RoundLot '1'

typedef char TTORATstpLotTypeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpNodeIDType��һ���ڵ�������
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpNodeIDType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpNodeInfoType��һ���ڵ���Ϣ����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpNodeInfoType[33];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpProgressType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpProgressType[11];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpWindCodeType��һ��Wind��������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpWindCodeType[41];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpShareType��һ���ɱ���������
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpShareType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCashShareType��һ����Ϣ����
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpCashShareType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCodeType��һ�����Ҵ�������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpCodeType[11];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIsChangedType��һ�������Ƿ�������
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpIsChangedType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpChangeContentType��һ���������˵������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpChangeContentType[501];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpMemoType��һ����ע����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpMemoType[201];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpObjectType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpObjectType[101];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpDvdPriceType��һ���ֺ�����۸�����
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpDvdPriceType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpRatioShareType��һ����ɱ�������
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpRatioShareType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpShareContentType��һ�����˵������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpShareContentType[151];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpDvdNameType��һ���ֺ�����������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpDvdNameType[41];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpSubscriptionMethodType��һ���Ϲ���ʽ����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpSubscriptionMethodType[31];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCompNameType��һ����˾��������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpCompNameType[11];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIPOPriceType��һ�����м۸�����
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpIPOPriceType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpHolderNumType��һ���ɶ���������
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpHolderNumType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpQuantityType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef double TTORATstpQuantityType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpHolderNameType��һ���ɶ���������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpHolderNameType[101];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpFloatHolderNameType��һ����ͨ�ɶ���������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpFloatHolderNameType[336];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIndustriesCodeType��һ����ҵ��������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpIndustriesCodeType[39];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIndustriesNameType��һ����ҵ��������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpIndustriesNameType[51];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpLevelNumType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpLevelNumType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpUsedType��һ���Ƿ���Ч����
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpUsedType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIndustriesAliasType��һ������������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpIndustriesAliasType[13];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpSequenceType��һ��չʾ�������
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpSequenceType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIndustriesMemoType��һ����鱸ע����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpIndustriesMemoType[101];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpChineseDfinitionType��һ��������Ķ�������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpChineseDfinitionType[601];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIndustriesNameEngType��һ�����Ӣ����������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpIndustriesNameEngType[201];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpConceptionCodeType��һ���������������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpConceptionCodeType[51];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpConceptionNameType��һ����������������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpConceptionNameType[101];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpCurSignType��һ�����±�־����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpCurSignType[11];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpItemCodeType��һ����Ŀ�������
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpItemCodeType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpItemType��һ����Ӫҵ����Ŀ����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpItemType[101];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIndustryCodeType��һ����ҵ��������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpIndustryCodeType[17];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpIndexIDType��һ��ָ����������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpIndexIDType[31];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpPercentValType��һ������ֵ����
/////////////////////////////////////////////////////////////////////////
typedef int TTORATstpPercentValType;

/////////////////////////////////////////////////////////////////////////
/// TTORATstpDistriValueType��һ���۸������ֲ�����������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpDistriValueType[1025];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpEventSequenceNoType��һ������¼��������
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpEventSequenceNoType[31];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTradeStatusType��һ������״̬����
/////////////////////////////////////////////////////////////////////////
typedef char TTORATstpTradeStatusType[11];

/////////////////////////////////////////////////////////////////////////
/// TTORATstpTradeBSFlagType��һ�������̱�־����
/////////////////////////////////////////////////////////////////////////
///����,������
#define TORA_TSTP_TBSF_Buy 'B'
///����,������
#define TORA_TSTP_TBSF_Sell 'S'
///δ֪
#define TORA_TSTP_TBSF_Unknown 'N'

typedef char TTORATstpTradeBSFlagType;
#endif