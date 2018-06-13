
/****************************************************************************
*
*�ļ�����DSP28_Ev.c
*
*��  �ܣ�2812�¼��������ĳ�ʼ��������������EVA��EVB�ĳ�ʼ��
*
*��  ��: likyo from hellodsp
*
****************************************************************************/

#include "DSP28_Device.h"

/****************************************************************************
*
*��    �ƣ�InitEv()
*
*��    �ܣ���ʼ��EVA��ʹ��PWM1��PWM2�������������Ϊ1KHz��PWM����ռ�ձȳ�ʼ��Ϊ
*          10%������ʱ��Ϊ4.27us��
*
*��ڲ�������
*
*���ڲ�������
*
****************************************************************************/

void InitEv(void)
{
    
    //EVAģ��
    EvaRegs.T1CON.bit.TMODE=1;        //������/��ģʽ
    EvaRegs.T1CON.bit.TPS=0;          //T1CLK=HSPCLK=75M
    EvaRegs.T1CON.bit.TENABLE=0;      //��ʱ��ֹT1����
    EvaRegs.T1CON.bit.TCLKS10=0;      //ʹ���ڲ�ʱ�ӣ�T1CLK
    EvaRegs.T1CON.bit.TECMPR=1;       //ʹ�ܶ�ʱ���Ƚϲ���
    
    //EvaRegs.T1PR=0x30D4;              //3KHz���ز� ��0x30D4=12500��D��   		//���ڸñ������ı��ز�Ƶ�ʣ�HSPCLK75MHz,75MHz/12500/2=3000Hz
    EvaRegs.T1PR=0x0EA6;              //10KHz���ز� ��0x0EA6=3750��D��   		//���ڸñ������ı��ز�Ƶ�ʣ�HSPCLK75MHz,75MHz/3750/2=10kHz
    //EvaRegs.T1PR=0x927c;              //1KHz���ز� ��0x927c=37500��D��   		//���ڸñ������ı��ز�Ƶ�ʣ�HSPCLK75MHz,75MHz/37500/2=1kHz
    EvaRegs.T1CNT=0;

    EvaRegs.COMCONA.bit.CENABLE=1;    //ʹ�ܱȽϵ�Ԫ�ıȽϲ���
    EvaRegs.COMCONA.bit.FCOMPOE=1;    //ȫ�Ƚ������PWM1-6���ž�����Ӧ�ıȽ��߼�����
	EvaRegs.COMCONA.bit.CLD=0;        //��T1CNT=0ʱװ��
    
    //����ʱ��Ϊ��4.27us
    EvaRegs.DBTCONA.bit.DBT=10;       //������ʱ�����ڣ�m=10�����15����λ�ļĴ���
    EvaRegs.DBTCONA.bit.EDBT1=1;      //������ʱ��1ʹ��λ
    EvaRegs.DBTCONA.bit.EDBT2=1;      //������ʱ��2ʹ��λ
    EvaRegs.DBTCONA.bit.EDBT3=1;      //������ʱ��3ʹ��λ
    EvaRegs.DBTCONA.bit.DBTPS=5;      //������ʱ��Ԥ�������� Tdb=75M/32=2.34M	//���ڸñ������ı�����ʱ�䡣  1/��75MHz/2^5/10��=4.27us�����32��Ƶ
     
    EvaRegs.ACTR.all=0x0666;          //�趨����PWM1-PWM6�Ķ�������
    
    EvaRegs.CMPR1=0x0C35;             //��ʼ��ռ�ձ�Ϊ25%
	EvaRegs.CMPR2=0x14AA;             //��ʼ��ռ�ձ�Ϊ42.3%
	EvaRegs.CMPR3=0x03C0;             //��ʼ��ռ�ձ�Ϊ7.7%

	EvaRegs.EVAIMRA.bit.T1PINT=1;     //ʹ�ܶ�ʱ��T1�����ж�
	EvaRegs.EVAIFRA.bit.T1PINT=1;     //���T1�����жϵı�־λ
          
}	
	
//===========================================================================
// No more.
//===========================================================================
