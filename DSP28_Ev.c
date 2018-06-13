
/****************************************************************************
*
*文件名：DSP28_Ev.c
*
*功  能：2812事件管理器的初始化函数，包括了EVA和EVB的初始化
*
*作  者: likyo from hellodsp
*
****************************************************************************/

#include "DSP28_Device.h"

/****************************************************************************
*
*名    称：InitEv()
*
*功    能：初始化EVA，使得PWM1和PWM2输出互补的周期为1KHz的PWM波，占空比初始化为
*          10%，死区时间为4.27us。
*
*入口参数：无
*
*出口参数：无
*
****************************************************************************/

void InitEv(void)
{
    
    //EVA模块
    EvaRegs.T1CON.bit.TMODE=1;        //连续增/减模式
    EvaRegs.T1CON.bit.TPS=0;          //T1CLK=HSPCLK=75M
    EvaRegs.T1CON.bit.TENABLE=0;      //暂时禁止T1计数
    EvaRegs.T1CON.bit.TCLKS10=0;      //使用内部时钟，T1CLK
    EvaRegs.T1CON.bit.TECMPR=1;       //使能定时器比较操作
    
    //EvaRegs.T1PR=0x30D4;              //3KHz的载波 ，0x30D4=12500（D）   		//调节该变量来改变载波频率，HSPCLK75MHz,75MHz/12500/2=3000Hz
    EvaRegs.T1PR=0x0EA6;              //10KHz的载波 ，0x0EA6=3750（D）   		//调节该变量来改变载波频率，HSPCLK75MHz,75MHz/3750/2=10kHz
    //EvaRegs.T1PR=0x927c;              //1KHz的载波 ，0x927c=37500（D）   		//调节该变量来改变载波频率，HSPCLK75MHz,75MHz/37500/2=1kHz
    EvaRegs.T1CNT=0;

    EvaRegs.COMCONA.bit.CENABLE=1;    //使能比较单元的比较操作
    EvaRegs.COMCONA.bit.FCOMPOE=1;    //全比较输出，PWM1-6引脚均由相应的比较逻辑驱动
	EvaRegs.COMCONA.bit.CLD=0;        //当T1CNT=0时装载
    
    //死区时间为：4.27us
    EvaRegs.DBTCONA.bit.DBT=10;       //死区定时器周期，m=10，最大15，四位的寄存器
    EvaRegs.DBTCONA.bit.EDBT1=1;      //死区定时器1使能位
    EvaRegs.DBTCONA.bit.EDBT2=1;      //死区定时器2使能位
    EvaRegs.DBTCONA.bit.EDBT3=1;      //死区定时器3使能位
    EvaRegs.DBTCONA.bit.DBTPS=5;      //死区定时器预定标因子 Tdb=75M/32=2.34M	//调节该变量来改变死区时间。  1/（75MHz/2^5/10）=4.27us，最大32分频
     
    EvaRegs.ACTR.all=0x0666;          //设定引脚PWM1-PWM6的动作属性
    
    EvaRegs.CMPR1=0x0C35;             //初始化占空比为25%
	EvaRegs.CMPR2=0x14AA;             //初始化占空比为42.3%
	EvaRegs.CMPR3=0x03C0;             //初始化占空比为7.7%

	EvaRegs.EVAIMRA.bit.T1PINT=1;     //使能定时器T1周期中断
	EvaRegs.EVAIFRA.bit.T1PINT=1;     //清除T1周期中断的标志位
          
}	
	
//===========================================================================
// No more.
//===========================================================================
