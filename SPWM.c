/****************************************************************************
*
*��  �ܣ���������SPWM����
*
*˵  ����EVA�����ͨ�ö�ʱ��T1������������/������ģʽ�����������ز����ز�Ƶ��Ϊ10kHz/1kHz�ɵ���
*	 �ز�Ƶ�ʵ��ڷ���������DSP28_Ev.c�ļ��а�����Ҫע��38�л�39�г���ȷ��1k��10k���ز�Ƶ�ʣ�����DSP28_DefaultIsr.c�ļ��е�439-445���еĳ�����Ϊ1000���ز�Ƶ��1k����10000���ز�Ƶ��10k����
*   ���ƶȿɵ�����ʼֵ0.8���ı䷽������watch window�и��ı�����M����Ҳ�����Ҳ���ֵ��
*   ���Ʋ�Ƶ�ʿɵ�����ʼֵ50Hz���ı䷽������watch window�и��ı�����frequency����
*   ����ʱ��ɵ�����ʼֵΪ4.27us���ı䷽������watch window�и��ı�����death_time������Χ��1��15������ʱ��Ϊ0.427us*death_time��
*
*

****************************************************************************/


#include "DSP28_Device.h"
#include "DSP28_Globalprototypes.h"


Uint32 N=60; //�ز���
float M=0.8;  //���ƶȣ�Ҳ�����Ҳ���ֵ
Uint32 i;
Uint32 p,q,death_time;
//Ԥ��A���B�������ֵ�б���C��Ŀ��Ը���A���B���ֵ�������
float sina[30]={ 0.000000,    0.104528,    0.207911,    0.309016,    0.406737,
                 0.500000,    0.587785,    0.669131,    0.743145,    0.809017,
		         0.866025,    0.913545,    0.951057,    0.978148,    0.994522,
		         1.000000,    0.994522,    0.978148,    0.951057,    0.913545,
		         0.866025,    0.809017,    0.743145,    0.669131,    0.587785,
		         0.500000,    0.406737,    0.309016,    0.207911,    0.104528};

float sinb[30]={ 0.866025,    0.809017,    0.743145,    0.669131,    0.587785,
                 0.500000,    0.406737,    0.309016,    0.207911,    0.104528,
		         0.000000,   -0.104528,   -0.207911,   -0.309016,   -0.406737,
		        -0.500000,   -0.587785,   -0.669131,   -0.743145,   -0.809017,
		        -0.866025,   -0.913545,   -0.951057,   -0.978148,   -0.994522,
		        -1.000000,   -0.994522,   -0.978148,   -0.951057,   -0.913545};//���ų���������ͬ������ʱʹ�ã��˴������ò����ñ�

/****************************************************************************
*
*��    �ƣ�main()
*
*��    �ܣ���ʼ��ϵͳ�͸�������
*
*��ڲ�������
*
*���ڲ�������
*
****************************************************************************/

void main(void)
{
    
	InitSysCtrl();  //��ʼ��ϵͳ����

	DINT;
	IER = 0x0000;   //��ֹCPU�ж�
	IFR = 0x0000;   //���CPU�жϱ�־
	
	InitPieCtrl(); 	 //��ʼ��PIE���ƼĴ���

	InitPieVectTable();  //��ʼ��PIE�ж�������	 
	
	InitGpio();  //��ʼ��Gpio�ڣ�ѡ��PWM1~6���ܿ�

    InitEv();  //��ʼ��EV��ʱ�������������PWM���˴�ʵ��ĺ�������

	i=1;//������sin(wt)�У�t=i*T��TΪ�ز�����

	PieCtrl.PIEIER2.bit.INTx4=1;      //ʹ��PIE�жϣ�T1��ʱ���ж�λ��INT2.4

    IER|=M_INT2;

	EINT;  //��ȫ���ж�
	ERTM;  //��ʵʱ�ж�
	
	EvaRegs.T1CON.bit.TENABLE=1;      //ʹ�ܶ�ʱ��T1��������

	death_time=10;//1-15����ʼֵΪ10����Ӧ����ʱ��Ϊ4.27us��
    while(1)
	{    
    	  EvaRegs.DBTCONA.bit.DBT=death_time;       //������ʱ������
    }
	
} 	