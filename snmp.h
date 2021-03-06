#ifndef __SNMP_H__
#define __SNMP_H__

#include <string> 
#include "server.h" 
#include "config.h"


using namespace std; 

#define HWGANTRY_COUNT 54

int snmpInit(void);

int snmpInit(void);
int SendSnmpOid(string mSnmpOid);
int snmptrapInit(void);
void initHUAWEIGantry();
void initHUAWEIALARM();
void initHUAWEIEntity();
void initHUAWEIEntity1();
void initHUAWEIswitchEntity();
void initHUAWEIswitchEntity1();
int mywalkappinit(void);
int SendWalkSnmpOid(string mSnmpOid);
int ClearvecWalkSnmp(void);


#pragma pack(push, 1)
typedef enum
{
	//锂电
	hwAcbGroupBatVolt=1,                //电池电压
	hwAcbGroupBatCurr=2,            //电池电流
	hwAcbGroupTotalCapacity=3,                //电池总容量
	hwAcbGroupTotalRemainCapacity=4,               //电池剩余容量
	hwAcbGroupBackupTime=5,              //电池备电时长
	hwAcbGroupBatSoh=6,             //电池 SOH
	//开关电源
	hwApOrAblVoltage=7,                //A/AB 电压
	hwBpOrBclVoltage=8,                //B/BC 电压
	hwCpOrCalVoltage=9,                //C/CA 电压
	hwAphaseCurrent=10,               //A 相电流
	hwBphaseCurrent=11,              //B 相电流
	hwCphaseCurrent=12,             //C 相电流
	hwDcOutputVoltage=13,             //DC 输出电压
	hwDcOutputCurrent=14,               //DC 输出电流
	//环境传感器
	hwEnvTemperature=15,              //环境温度值
	hwEnvHumidity=16,             //环境湿度值
	//直流空调
	hwDcAirCtrlMode=17,			//空调控制模式
	hwDcAirRunStatus=18,			//空调运行状态
	hwDcAirCompressorRunStatus=19,		//空调压缩机运行状态
	hwDcAirInnrFanSpeed=20,			//空调内机转速
	hwDcAirOuterFanSpeed=21,			//空调外风机转速
	hwDcAirCompressorRunTime=22,		//空调压缩机运行时间
	hwDcAirEnterChannelTemp=23,		//空调回风口温度
	hwDcAirPowerOnTempPoint=24,		//空调开机温度点
	hwDcAirPowerOffTempPoint=25,		//空调关机温度点

	//设备信息
	hwMonEquipSoftwareVersion=26,	//软件版本
	hwMonEquipManufacturer=27,		//设备生产商
	//锂电(新增加)
	hwAcbGroupTemperature=28,			//电池温度
	hwAcbGroupOverCurThr=29,			//充电过流告警点
	hwAcbGroupHighTempThr=30,		//高温告警点
	hwAcbGroupLowTempTh=31,			//低温告警点
	hwAcbGroupDodToAcidBattery=32,	//锂电放电DOD
	//开关电源(新增加)
   	hwSetAcsUpperVoltLimit=33,		//AC过压点设置
   	hwSetAcsLowerVoltLimit=34,		//AC欠压点设置
   	hwSetDcsUpperVoltLimit=35,		//设置DC过压点
   	hwSetDcsLowerVoltLimit=36,		//设置DC欠压点
   	hwSetLvdVoltage=37,				//设置LVD电压
	//环境传感器(新增加)
   	hwSetEnvTempUpperLimit=38,		//环境温度告警上限
   	hwSetEnvTempLowerLimit=39,		//环境温度告警下限
   	hwSetEnvTempUltraHighTempThreshold=40,		//环境高高温告警点
   	hwSetEnvHumidityUpperLimit=41,		//环境湿度告警上限
   	hwSetEnvHumidityLowerLimit=42,		//环境湿度告警下限
	//直流空调(新增加)
	hwDcAirRunTime=43,				//空调运行时间
	hwCoolingDevicesMode=44,			//温控模式

	//2019-08-20新增
	hwAcbGroupBatRunningState=45,		//电池状态
	hwSmokeSensorStatus=46,				//烟雾传感器状态
	hwWaterSensorStatus=47,				//水浸传感器状态
	hwDoorSensorStatus=48,				//门磁传感器状态
    //hwDcAirEquipAddress=49,				//空调地址
    //hwTemHumEquipAddress=50,			//温湿度地址
	//单个锂电池
    hwAcbBatVolt=49,					//单个电池电压
    hwAcbBatCurr=50,					//单个电池电流
    hwAcbBatSoh=51,						//单个电池串SOH
    hwAcbBatCapacity=52,				//单个电池容量
    //2019-09-05新增
    hwCtrlSmokeReset=53,				 //控制烟感复位 1,2，255
    hwCtrlMonEquipReset=54,             //控制单板复位 1,2,255

    hwDcAirEquipAddress=8000,			//空调地址
    hwTemHumEquipAddress=8001,			//温湿度地址


    //防火墙
    hwEntityCpuUCheck = 10000,             //查询
    hwEntityCpuUsage = 10001,              //CPU
    hwEntityMemUsage = 10002,                 //内存使用率
    hwEntityTemperature = 10003,               //温度
    hwEntityDescr = 10004,                  //接口查询
    hwEntityOperStatus = 10005,             //接口状态查询
    hwEntityInOctets = 10006,               //总字节数
    hwEntityInErrors = 10007,               //出错数
    hwEntityOutOctets = 10008,               //总字节数
    hwEntityOutErrors = 10009,               //出错数
    hwEntityDevModel = 10010,                //型号


    //交换机
    hwswitchEntityCpuCheck = 11000,             //查询
    hwswitchEntityCpuUsage = 11001,              //CPU
    hwswitchEntityMemUsage = 11002,              //内存使用率
    hwswitchEntityTemperature = 11003,            //温度
    hwswitchEntityDescr = 11004,                  //接口查询
    hwswitchEntityOperStatus = 11005,             //接口状态查询
    hwswitchEntityInOctets = 11006,               //总字节数
    hwswitchEntityInErrors = 11007,               //出错数
    hwswitchEntityOutOctets = 11008,               //总字节数
    hwswitchEntityOutErrors = 11009,               //出错数
    hwswitchEntityDevModel = 11010,               //型号


    //迪普防火墙
    dpEntityCpuUCheck = 12000,             //查询
    dpEntityCpuUsage = 12001,              //CPU
    dpEntityMemUsage = 12002,                 //内存使用率
    dpEntityTemperature = 12003,               //温度
    dpEntityDescr = 12004,                  //接口查询
    dpEntityOperStatus = 12005,             //接口状态查询
    dpEntityInOctets = 12006,               //总字节数
    dpEntityInErrors = 12007,               //出错数
    dpEntityOutOctets = 12008,               //总字节数
    dpEntityOutErrors = 12009,               //出错数
    dpEntityDevModel = 12010                //型号




}EM_HUAWEIGantry;

typedef struct
{
	unsigned long hwTimeStamp; 		//机柜状态获取时间戳
	bool hwLinked;					//机柜状态 0:断开 1：连接
	//锂电
	string strhwAcbGroupBatVolt;                //电池电压 "51.1"
	string strhwAcbGroupBatCurr;            //电池电流
	string strhwAcbGroupTotalCapacity;                //电池总容量
	string strhwAcbGroupTotalRemainCapacity;               //电池剩余容量
	string strhwAcbGroupBackupTime;              //电池备电时长
	string strhwAcbGroupBatSoh;             //电池 SOH
	//开关电源
	string strhwApOrAblVoltage;                //A/AB 电压
	string strhwBpOrBclVoltage;                //B/BC 电压
	string strhwCpOrCalVoltage;                //C/CA 电压
	string strhwAphaseCurrent;               //A 相电流
	string strhwBphaseCurrent;              //B 相电流
	string strhwCphaseCurrent;             //C 相电流
	string strhwDcOutputVoltage;             //DC 输出电压
	string strhwDcOutputCurrent;               //DC 输出电流
	//环境传感器
    string strhwEnvTemperature[2];              //环境温度值
    string strhwEnvHumidity[2];            //环境湿度值
	//直流空调
//    string strhwDcAirCtrlMode[2];			//空调控制模式
    string strhwDcAirRunStatus[2];			//空调运行状态
    string strhwDcAirCompressorRunStatus[2];		//空调压缩机运行状态
    string strhwDcAirInnrFanSpeed[2];			//空调内机转速
    string strhwDcAirOuterFanSpeed[2];			//空调外风机转速
    string strhwDcAirCompressorRunTime[2];		//空调压缩机运行时间
    string strhwDcAirEnterChannelTemp[2];		//空调回风口温度
    string strhwDcAirPowerOnTempPoint[2];		//空调开机温度点
    string strhwDcAirPowerOffTempPoint[2];		//空调关机温度点
	
	//设备信息 
	string strhwMonEquipSoftwareVersion;	//软件版本
	string strhwMonEquipManufacturer;		//设备生产商
	//锂电(新增加)
	string strhwAcbGroupTemperature;			//电池温度
	string strhwAcbGroupOverCurThr;			//充电过流告警点
	string strhwAcbGroupHighTempThr;		//高温告警点
	string strhwAcbGroupLowTempTh;			//低温告警点
	string strhwAcbGroupDodToAcidBattery;	//锂电放电DOD
	//开关电源(新增加)
   	string strhwSetAcsUpperVoltLimit;		//AC过压点设置
   	string strhwSetAcsLowerVoltLimit;		//AC欠压点设置
   	string strhwSetDcsUpperVoltLimit;		//设置DC过压点
   	string strhwSetDcsLowerVoltLimit;		//设置DC欠压点
   	string strhwSetLvdVoltage;				//设置LVD电压
	//环境传感器(新增加)
    string strhwSetEnvTempUpperLimit[2];		//环境温度告警上限
    string strhwSetEnvTempLowerLimit[2];		//环境温度告警下限
   	string strhwSetEnvTempUltraHighTempThreshold;		//环境高高温告警点
    string strhwSetEnvHumidityUpperLimit[2];		//环境湿度告警上限
    string strhwSetEnvHumidityLowerLimit[2];		//环境湿度告警下限
	//直流空调(新增加)
    string strhwDcAirRunTime[2];				//空调运行时间
	string strhwCoolingDevicesMode;			//温控模式
	//2019-08-20新增
	string strhwAcbGroupBatRunningState;		//电池状态
	string strhwDcAirEquipAddress;				//空调地址
	string strhwTemHumEquipAddress;			//温湿度地址
	//单个锂电池2019-08-20新增
	string strhwAcbBatVolt;					//单个电池电压
	string strhwAcbBatCurr;					//单个电池电流
	string strhwAcbBatSoh;						//单个电池串SOH
	string strhwAcbBatCapacity;				//单个电池容量
    //2019-09-05新增
    string strhwCtrlSmokeReset;             //控制烟感复位 1,2，255
    string strhwCtrlMonEquipReset;          //控制单板复位 1,2,255

    //防火墙
	unsigned long hwEntityTimeStamp; 		//防火墙获取时间戳
	bool hwEntityLinked;					//连接状态
    string strhwEntityCpuUsage;                //CPU 
    string strhwEntityMemUsage ;              //内存使用率
    string strhwEntityTemperature;            //温度
	unsigned long hwEntityTimeStamp1; 		//防火墙获取时间戳
	bool hwEntityLinked1;					//连接状态
    string strhwEntityCpuUsage1;                //CPU
    string strhwEntityMemUsage1 ;              //内存使用率
    string strhwEntityTemperature1;            //温度
    //交换机
	unsigned long hwswitchEntityTimeStamp; 		//交换机获取时间戳
	bool hwswitchEntityLinked;					//连接状态
    string strhwswitchEntityCpuUsage;          //CPU 
    string strhwswitchEntityMemUsage;          //内存使用率
    string strhwswitchEntityTemperature;       //温度
	unsigned long hwswitchEntityTimeStamp1; 		//交换机获取时间戳
	bool hwswitchEntityLinked1;					//连接状态
    string strhwswitchEntityCpuUsage1;          //CPU
    string strhwswitchEntityMemUsage1;          //内存使用率
    string strhwswitchEntityTemperature1;       //温度

    string strhwEntityFactory;                	//生产商
    string strhwEntityDevModel;                //设备型号
    string strhwEntityFactory1;                	//生产商
    string strhwEntityDevModel1;                //设备型号

    string strhwswitchEntityFactory;            //生产商
    string strhwswitchEntityDevModel;           //设备型号
    string strhwswitchEntityFactory1;            //生产商
    string strhwswitchEntityDevModel1;           //设备型号


#if(CABINETTYPE == 5) //飞达中兴
    //中兴机柜增加
    string RectifierModuleVol;  //整流器输出电压
    string RectifierModuleCurr; //整流器输出电流
    string RectifierModuleTemp;//整流器机内温度
    //空调
    string StrIn_FanState;  //内风机状态 0代表关闭 1代表开启
    string StrIn_FanState2;  //内风机状态 0代表关闭 1代表开启
    string StrOut_FanState; //外风机状态 0代表关闭 1代表开启
    string StrOut_FanState2; //外风机状态 0代表关闭 1代表开启
#elif(CABINETTYPE == 6) //金晟安
    //Ups
    string StrUpsCityVol;    //Ups市电电压
    string StrUpsOVol;      //Ups输出电压
    string StrUpsTemp;      //Ups温度
    //空调
    string StrIn_FanState;  //内风机状态 0代表关闭 1代表开启
    string StrIn_FanState2;  //内风机状态 0代表关闭 1代表开启
    string StrOut_FanState; //外风机状态 0代表关闭 1代表开启
    string StrOut_FanState2; //外风机状态 0代表关闭 1代表开启

#elif(CABINETTYPE == 7) //爱特思
    //爱特思
    //Ups
    string StrUpsCityVol;    //Ups市电电压
    string StrUpsOVol;      //Ups输出电压
    string StrUpsTemp;      //Ups温度
    //空调
    string StrCoolerState;  //制冷器状态 0代表关闭 1代表开启
    string StrIn_FanState;  //内风机状态 0代表关闭 1代表开启
    string StrOut_FanState; //外风机状态 0代表关闭 1代表开启
    string StrHeaterState;  //加热器状态  0代表关闭 1代表开启
#endif
}THUAWEIGantry;

typedef struct
{
	unsigned long timestamp; 		//获取时间戳
	string hwEnvTempAlarmTraps;		//高温/低温/高高温告警
    string hwEnvTempAlarmTraps2;		//高温/低温/高高温告警
	string hwEnvHumiAlarmTraps;		//高湿/低湿告警
    string hwEnvHumiAlarmTraps2;		//高湿/低湿告警
	string hwSpareDigitalAlarmTraps;	//输入干接点告警
	string hwDoorAlarmTraps;		//门禁告警(电池柜)
	string hwDoorAlarmTraps2;		//门禁告警(设备柜)
	string hwWaterAlarmTraps;		//水浸告警
	string hwSmokeAlarmTraps;		//烟感告警

	string hwair_cond_infan_alarm;	//空调内风机故障
    string hwair_cond_infan_alarm2;	//空调内风机故障
	string hwair_cond_outfan_alarm;	//空调外风机故障
    string hwair_cond_outfan_alarm2;//空调外风机故障
	string hwair_cond_comp_alarm;	//空调压缩机故障
    string hwair_cond_comp_alarm2;	//空调压缩机故障
	string hwair_cond_return_port_sensor_alarm;	//空调回风口传感器故障
    string hwair_cond_return_port_sensor_alarm2;//空调回风口传感器故障
	string hwair_cond_evap_freezing_alarm;		//空调蒸发器冻结
    string hwair_cond_evap_freezing_alarm2;		//空调蒸发器冻结
	string hwair_cond_freq_high_press_alarm;	//空调频繁高压力
    string hwair_cond_freq_high_press_alarm2;	//空调频繁高压力
	string hwair_cond_comm_fail_alarm;			//空调通信失败告警
    string hwair_cond_comm_fail_alarm2;			//空调通信失败告警

	//新增加告警
	string hwACSpdAlarmTraps;					//交流防雷器故障
	string hwDCSpdAlarmTraps;					//直流防雷器故障
	//电源告警
	string hwAcInputFailAlarm;				//交流电源输入停电告警
	string hwAcInputL1FailAlarm;				//交流电源输入L1	相缺相告警
	string hwAcInputL2FailAlarm;				//交流电源输入L2	相缺相告警
	string hwAcInputL3FailAlarm;				//交流电源输入L3	相缺相告警
	string hwDcVoltAlarmTraps;				//直流电源输出告警
	string hwLoadLvdAlarmTraps;				//LLVD1下电告警
	//锂电池告警
	string hwAcbGroup_comm_fail_alarm;		//所有锂电通信失败
	string hwAcbGroup_discharge_alarm;		//电池放电告警
	string hwAcbGroup_charge_overcurrent_alarm;	//电池充电过流
	string hwAcbGroup_temphigh_alarm;		//电池温度高
	string hwAcbGroup_templow_alarm;		//电池温度低
	string hwAcbGroup_poweroff_alarm;		//电池下电
	string hwAcbGroup_fusebreak_alarm;		//电池熔丝断
	string hwAcbGroup_moduleloss_alarm;		//模块丢失

    //单个锂电池告警
    string hwAcbCom_Failure[4];		        //锂电通信失败
    string hwAcbHeater_Fault_alarm[4];		//加热器故障
    string hwAcbBoard_Hardware_Fault_alarm[4];	//单板故障
    string hwAcbLow_Temp_Protection_alarm[4];		//低温保护

    #if(CABINETTYPE == 5) //飞达中兴
    //中兴机柜增加开关电源报警
    string SwitchPowerCom_alarm;  //开关电源断线告警
    string RectifierModuleCom_alarm; //整流模块通讯故障
    //空调
    string Air_High_temper_alarm;  //高温告警
    string Air_Lower_temper_alarm; //低温告警
    string Air_Heater_alarm;       //加热器故障告警
    string Air_Temper_Sensor_alarm;       //温度传感器故障
    #elif(CABINETTYPE == 6) //爱特思
    //空调
    string Ups_alarm;  //ups故障状态
    string Air_High_temper_alarm;  //高温告警
    string Air_Lower_temper_alarm; //低温告警
    string Air_Heater_alarm;       //加热器故障告警
    string Air_Temper_Sensor_alarm;       //温度传感器故障
    #elif(CABINETTYPE == 7) //爱特思
    string Ups_alarm;  //ups故障状态
    //空调
    string Air_Cooler_alarm;       //制冷器故障告警
    string Air_High_temper_alarm;  //高温告警
    string Air_Lower_temper_alarm; //低温告警
    string Air_Heater_alarm;       //加热器故障告警
    string Air_Temper_Sensor_alarm;       //温度传感器故障
    string Air_High_Vol_alarm; //电压高压告警
    string Air_Lower_Vol_alarm;//电压低压告警

    #endif

}THUAWEIALARM;



typedef struct
{
  int Descr;
  string type;
  string state;
  string inoctets;
  string inerrors;
  string outoctets;
  string outerrors;


}TFIRESWITCH;




#pragma pack(pop)

int SendHUAWEIsnmp(EM_HUAWEIGantry mEM_HUAWEIGantry);
int SnmpSetOid(EM_HUAWEIGantry mEM_HUAWEIGantry,string mIntValue,int mIndex);
void UpdataHUAWEIGantryStr(char* mstr,int len,EM_HUAWEIGantry mIntHUAWEIGantry);
void DealAlarm(string Stroid,int AlarmID,int mgetIndex);
int GetAlarmID(char* sp);

#endif


