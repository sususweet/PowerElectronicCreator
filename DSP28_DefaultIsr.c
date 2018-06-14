#include "DSP28_Device.h"
#include "math.h"
#define TwoPi 6.28318
//#define Three_Time_Enabled

double a_sin,b_sin,c_sin,frequency=50;
//---------------------------------------------------------------------------
// INT13, INT14, NMI, XINT1, XINT2 ���жϷ�����:
//
interrupt void INT13_ISR(void)     // INT13 ���� CPU-Timer1�жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);
  
  // ����;
}

interrupt void INT14_ISR(void)     // CPU-Timer2�жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);
  
  // ����;
}

interrupt void NMI_ISR(void)       // �ⲿ�����ε��жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);
  
  // ����;
}

interrupt void  XINT1_ISR(void)     //XINT1���ⲿ�ӿڣ��жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);
  
  // ����;
}     

interrupt void  XINT2_ISR(void)     //XINT2���ⲿ�ӿڣ��жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;); 
  
  // ����;
}

//---------------------------------------------------------------------------
// DATALOG, RTOSINT, EMUINT, RTOS �жϷ�����:
//
interrupt void DATALOG_ISR(void)   // CPU���ݼ�¼�жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;); 
  
  // ����;

}

interrupt void RTOSINT_ISR(void)   // CPUʵʱOS�жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;); 
  
  // ����;
}

interrupt void EMUINT_ISR(void)    // CPU�����жϺ���
{
   // ����������жϺ����Ĵ���
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);
  
  // ����;
}

//---------------------------------------------------------------------------
// ILLEGAL Instruction Trap �жϷ�����:
//
interrupt void ILLEGAL_ISR(void)   // �Ƿ����������ж�
{
  // ����������жϺ����Ĵ���
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);
  
  // ����;
}

//---------------------------------------------------------------------------
// �û���������ж�:
//
interrupt void USER0_ISR(void)     // �û�������ж�0
{
  // ����������жϺ����Ĵ���
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;); 
  
  // ����;
}

interrupt void USER1_ISR(void)     // �û�������ж�1
{
  // ����������жϺ����Ĵ���
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;); 
  
  // ����;
}

interrupt void USER2_ISR(void)     // �û�������ж�2
{
  // ����������жϺ����Ĵ���
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);
  
  // ����;

}

interrupt void USER3_ISR(void)     // �û�������ж�3
{
  // ����������жϺ����Ĵ���
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);
  
  // ����;

}

interrupt void USER4_ISR(void)     // �û�������ж�4
{
  // ����������жϺ����Ĵ���
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);  

  // ����;
}

interrupt void USER5_ISR(void)     // �û�������ж�5
{
  // ����������жϺ����Ĵ���
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);
  
  // ����;
}

interrupt void USER6_ISR(void)     // �û�������ж� 6
{
  // ����������жϺ����Ĵ���
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);
  
  // ����;
}

interrupt void USER7_ISR(void)     // �û�������ж�7
{
  // ����������жϺ����Ĵ���
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);
  
  // ����;
}

interrupt void USER8_ISR(void)     // �û�������ж�8
{
  // ����������жϺ����Ĵ���
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);
  
  // ����;
}

interrupt void USER9_ISR(void)     // �û�������ж�9
{
  // ����������жϺ����Ĵ���
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);
  
  // ����;
}

interrupt void USER10_ISR(void)    // �û�������ж�10
{
  // ����������жϺ����Ĵ���
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;); 
  
  // ����;
}

interrupt void USER11_ISR(void)    // �û�������ж�11
{
  // ����������жϺ����Ĵ���
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);
  
  // ����;
}

//---------------------------------------------------------------------------
//����Ϊ�����жϺ��� 
//
interrupt void  ADCINT_ISR(void)     // ADC�жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP1;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}


interrupt void  TINT0_ISR(void)      // CPU-Timer0�жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP1;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}


interrupt void  WAKEINT_ISR(void)    // WD�жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP1;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}


interrupt void PDPINTA_ISR( void )    // EV-A�������������жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP1;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}


interrupt void CMP1INT_ISR(void)    // �Ƚϵ�Ԫ1�ıȽ��ж�
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP2;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void CMP2INT_ISR(void)    // �Ƚϵ�Ԫ2�ıȽ��ж�
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP2;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void CMP3INT_ISR(void)    // �Ƚϵ�Ԫ3�ıȽ��ж�
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP2;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void T1PINT_ISR(void)    // ͨ�ö�ʱ��T1�������ж�
{   
	//t++;
//    if((i>0)&&(i<N/2)) //ǰ������
//	{
//        EvaRegs.CMPR1=EvaRegs.T1PR*((1.0+M*sina[i])/2.0); //A��
//		EvaRegs.CMPR2=EvaRegs.T1PR*((1.0+M*sinb[i])/2.0); //B��
//        EvaRegs.CMPR3=EvaRegs.T1PR*((1.0-M*(sina[i]+sinb[i]))/2.0); //C��
//	}
//
//	if((i>=N/2)&&(i<N)) //�������
//	{
//        EvaRegs.CMPR1=EvaRegs.T1PR*((1.0-M*sina[i-30])/2.0); //A��
//		EvaRegs.CMPR2=EvaRegs.T1PR*((1.0-M*sinb[i-30])/2.0); //B��
//		EvaRegs.CMPR3=EvaRegs.T1PR*((1.0+M*(sina[i]+sinb[i]))/2.0); //C��
//	}
//
//	i++;
//	{
//      if(i>=N)
//	  {
//         i=0;
//	  }
//
//	}  // ͬ�����Ƶ�һ�ַ���


    // �첽���ƣ��ز�Ƶ�ʱ��ֲ���

#ifdef Three_Time_Enabled
    // ע������г��
    a_sin = sin(TwoPi * frequency * i / 10000) + 0.1666 * sin(3 * TwoPi * frequency * i / 10000);
    b_sin = sin(TwoPi * frequency * i / 10000 - TwoPi / 3) + 0.1666 * sin(3 * TwoPi * frequency * i / 10000);
    c_sin = sin(TwoPi * frequency * i / 10000 - 2 * TwoPi / 3) + 0.1666 * sin(3 * TwoPi * frequency * i / 10000);
    EvaRegs.CMPR1 = EvaRegs.T1PR * ((1.0 + M * a_sin) / 2.0); //A��
    EvaRegs.CMPR2 = EvaRegs.T1PR * ((1.0 + M * b_sin) / 2.0); //B��
    EvaRegs.CMPR3 = EvaRegs.T1PR * ((1.0 + M * c_sin) / 2.0); //C��
#else
    // ��ע������г��
    // �˴� 10000 Ϊ10kHz���ز���frequencyΪ���Ʋ�Ƶ�� 50Hz��frequency/10000Ϊ1/N��
    // ����NΪ�ز��ȣ��˴�N=200?
    // �����������ǲ������Ҳ��Ƚ�ֵ
    a_sin=sin(TwoPi*frequency*i/10000);
    b_sin=sin(TwoPi*frequency*i/10000-TwoPi/3);
    EvaRegs.CMPR1 = EvaRegs.T1PR * ((1.0 + M * a_sin) / 2.0); //A��
    EvaRegs.CMPR2 = EvaRegs.T1PR * ((1.0 + M * b_sin) / 2.0); //B��
    EvaRegs.CMPR3=EvaRegs.T1PR*((1.0-M*(a_sin+b_sin))/2.0); //C��
#endif

    i++;
    if (frequency * i > 10000) i -= 10000 / frequency;

    PieCtrl.PIEACK.bit.ACK2=1;   //��Ӧͬ���ж�
	EvaRegs.EVAIFRA.bit.T1PINT=1;//����жϱ�־λ
	EINT; //��ȫ���ж�
}

interrupt void T1CINT_ISR(void)    // ͨ�ö�ʱ��T1�ıȽ��ж�
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP2;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void T1UFINT_ISR(void)   // ͨ�ö�ʱ��1�������ж�
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP2;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void T1OFINT_ISR(void)   // ͨ�ö�ʱ��1�������ж�
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP2;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}
      
interrupt void T2PINT_ISR(void)     //ͨ�ö�ʱ��2�������ж�
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP3;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void T2CINT_ISR(void)     // ͨ�ö�ʱ��2�ıȽ��ж�
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP3;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void T2UFINT_ISR(void)    // ͨ�ö�ʱ��2�������ж�
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP3;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void T2OFINT_ISR(void)    // ͨ�ö�ʱ��2�������ж�
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP3;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void CAPINT1_ISR(void)    // ����Ԫ1�ж�
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP3;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void CAPINT2_ISR(void)    // ����Ԫ2�ж�
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP3;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void CAPINT3_ISR(void)    // ����Ԫ3�ж�
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP3;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}
      

interrupt void  PDPINTB_ISR(void)   // EV-B�������������жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP1;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void CMP4INT_ISR(void)    // �Ƚϵ�Ԫ4�ıȽ��жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP4;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void CMP5INT_ISR(void)    // �Ƚϵ�Ԫ5�ıȽ��жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP4;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void CMP6INT_ISR(void)    // �Ƚϵ�Ԫ6�ıȽ��жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP4;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void T3PINT_ISR(void)     // ͨ�ö�ʱ��3�������жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP4;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void T3CINT_ISR(void)     // ͨ�ö�ʱ��3�ıȽ��жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP4;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void T3UFINT_ISR(void)    // ͨ�ö�ʱ��3�������жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP4;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void T3OFINT_ISR(void)    // ͨ�ö�ʱ��3�������жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP4;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}
     
interrupt void T4PINT_ISR(void)    // ͨ�ö�ʱ��4�������жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP5;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void T4CINT_ISR(void)    // ͨ�ö�ʱ��4�ıȽ��жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP5;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void T4UFINT_ISR(void)   // ͨ�ö�ʱ��4�������жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP5;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void T4OFINT_ISR(void)   // ͨ�ö�ʱ��4�������жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP5;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void CAPINT4_ISR(void)   // ����Ԫ4�жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP5;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void CAPINT5_ISR(void)   // ����Ԫ5�жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP5;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void CAPINT6_ISR(void)   // ����Ԫ6�жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP5;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}


interrupt void MRINTA_ISR(void)     // McBSP-A�����жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP6;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void MXINTA_ISR(void)     // McBSP-A�����жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP6;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}


interrupt void SPIRXINTA_ISR(void)    // SPI-A�����жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP6;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}


interrupt void SPITXINTA_ISR(void)     // SPI-A�����жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP6;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}


interrupt void SCIRXINTA_ISR(void)     // SCI-A�����жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP9;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void SCITXINTA_ISR(void)     // SCI-A�����жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP9;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}


interrupt void SCIRXINTB_ISR(void)     // SCI-B�����жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP9;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void SCITXINTB_ISR(void)     // SCI-B�����жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP9;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}


interrupt void ECAN0INTA_ISR(void)  // eCAN0�жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP9;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}

interrupt void ECAN1INTA_ISR(void)  // eCAN1�жϺ���
{
  // ����������жϺ����Ĵ���
  
  // ע���˳��жϺ���ʱ��Ҫ���ͷ�PIE��ʹ��PIE�ܹ���Ӧͬ�������ж� 
  // PieCtrl.PIEACK.all = PIEACK_GROUP9;
  
  // ��������ֻ��Ϊ�˱����д�ģ����������뽫��ɾ��
  
  // �жϺ�������
     asm ("      ESTOP0");
     for(;;);

  // ����;
}


interrupt void PIE_RESERVED(void)  // PIE�����Ŀռ䣬����TI����
{
  asm ("      ESTOP0");
  for(;;);
}

interrupt void rsvd_ISR(void)          // TI������
{
  asm ("      ESTOP0");
  for(;;);
}

//===========================================================================
// No more.
//===========================================================================

