#include "DSP28_Device.h"
#include "math.h"
#define TwoPi 6.28318

double a_sin,b_sin,frequency=50;
//---------------------------------------------------------------------------
// INT13, INT14, NMI, XINT1, XINT2 的中断服务函数:
//
interrupt void INT13_ISR(void)     // INT13 或者 CPU-Timer1中断函数
{
  // 在这里插入中断函数的代码
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);
  
  // 返回;
}

interrupt void INT14_ISR(void)     // CPU-Timer2中断函数
{
  // 在这里插入中断函数的代码
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);
  
  // 返回;
}

interrupt void NMI_ISR(void)       // 外部非屏蔽的中断函数
{
  // 在这里插入中断函数的代码
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);
  
  // 返回;
}

interrupt void  XINT1_ISR(void)     //XINT1（外部接口）中断函数
{
  // 在这里插入中断函数的代码
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);
  
  // 返回;
}     

interrupt void  XINT2_ISR(void)     //XINT2（外部接口）中断函数
{
  // 在这里插入中断函数的代码
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;); 
  
  // 返回;
}

//---------------------------------------------------------------------------
// DATALOG, RTOSINT, EMUINT, RTOS 中断服务函数:
//
interrupt void DATALOG_ISR(void)   // CPU数据记录中断函数
{
  // 在这里插入中断函数的代码
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;); 
  
  // 返回;

}

interrupt void RTOSINT_ISR(void)   // CPU实时OS中断函数
{
  // 在这里插入中断函数的代码
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;); 
  
  // 返回;
}

interrupt void EMUINT_ISR(void)    // CPU仿真中断函数
{
   // 在这里插入中断函数的代码
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);
  
  // 返回;
}

//---------------------------------------------------------------------------
// ILLEGAL Instruction Trap 中断服务函数:
//
interrupt void ILLEGAL_ISR(void)   // 非法操作捕获中断
{
  // 在这里插入中断函数的代码
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);
  
  // 返回;
}

//---------------------------------------------------------------------------
// 用户定义的软中断:
//
interrupt void USER0_ISR(void)     // 用户定义的中断0
{
  // 在这里插入中断函数的代码
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;); 
  
  // 返回;
}

interrupt void USER1_ISR(void)     // 用户定义的中断1
{
  // 在这里插入中断函数的代码
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;); 
  
  // 返回;
}

interrupt void USER2_ISR(void)     // 用户定义的中断2
{
  // 在这里插入中断函数的代码
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);
  
  // 返回;

}

interrupt void USER3_ISR(void)     // 用户定义的中断3
{
  // 在这里插入中断函数的代码
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);
  
  // 返回;

}

interrupt void USER4_ISR(void)     // 用户定义的中断4
{
  // 在这里插入中断函数的代码
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);  

  // 返回;
}

interrupt void USER5_ISR(void)     // 用户定义的中断5
{
  // 在这里插入中断函数的代码
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);
  
  // 返回;
}

interrupt void USER6_ISR(void)     // 用户定义的中断 6
{
  // 在这里插入中断函数的代码
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);
  
  // 返回;
}

interrupt void USER7_ISR(void)     // 用户定义的中断7
{
  // 在这里插入中断函数的代码
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);
  
  // 返回;
}

interrupt void USER8_ISR(void)     // 用户定义的中断8
{
  // 在这里插入中断函数的代码
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);
  
  // 返回;
}

interrupt void USER9_ISR(void)     // 用户定义的中断9
{
  // 在这里插入中断函数的代码
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);
  
  // 返回;
}

interrupt void USER10_ISR(void)    // 用户定义的中断10
{
  // 在这里插入中断函数的代码
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;); 
  
  // 返回;
}

interrupt void USER11_ISR(void)    // 用户定义的中断11
{
  // 在这里插入中断函数的代码
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);
  
  // 返回;
}

//---------------------------------------------------------------------------
//以下为外设中断函数 
//
interrupt void  ADCINT_ISR(void)     // ADC中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP1;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}


interrupt void  TINT0_ISR(void)      // CPU-Timer0中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP1;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}


interrupt void  WAKEINT_ISR(void)    // WD中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP1;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}


interrupt void PDPINTA_ISR( void )    // EV-A功率驱动保护中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP1;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}


interrupt void CMP1INT_ISR(void)    // 比较单元1的比较中断
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP2;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void CMP2INT_ISR(void)    // 比较单元2的比较中断
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP2;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void CMP3INT_ISR(void)    // 比较单元3的比较中断
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP2;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void T1PINT_ISR(void)    // 通用定时器T1的周期中断
{   
	//t++;
//    if((i>0)&&(i<N/2)) //前半周期
//	{
//        EvaRegs.CMPR1=EvaRegs.T1PR*((1.0+M*sina[i])/2.0); //A相
//		EvaRegs.CMPR2=EvaRegs.T1PR*((1.0+M*sinb[i])/2.0); //B相
//        EvaRegs.CMPR3=EvaRegs.T1PR*((1.0-M*(sina[i]+sinb[i]))/2.0); //C相
//	}
//
//	if((i>=N/2)&&(i<N)) //后半周期
//	{
//        EvaRegs.CMPR1=EvaRegs.T1PR*((1.0-M*sina[i-30])/2.0); //A相
//		EvaRegs.CMPR2=EvaRegs.T1PR*((1.0-M*sinb[i-30])/2.0); //B相
//		EvaRegs.CMPR3=EvaRegs.T1PR*((1.0+M*(sina[i]+sinb[i]))/2.0); //C相
//	}
//
//	i++;
//	{
//      if(i>=N)
//	  {
//         i=0;
//	  }
//
//	}  // 同步调制的一种方法
	//异步调制
	a_sin=sin(TwoPi*frequency*i/10000);
	b_sin=sin(TwoPi*frequency*i/10000-TwoPi/3);
	        EvaRegs.CMPR1=EvaRegs.T1PR*((1.0+M*a_sin)/2.0); //A相
			EvaRegs.CMPR2=EvaRegs.T1PR*((1.0+M*b_sin)/2.0); //B相
	        EvaRegs.CMPR3=EvaRegs.T1PR*((1.0-M*(a_sin+b_sin))/2.0); //C相
	i++;
	if(frequency*i>10000) i-=10000/frequency;

    PieCtrl.PIEACK.bit.ACK2=1;   //响应同组中断
	EvaRegs.EVAIFRA.bit.T1PINT=1;//清除中断标志位
	EINT; //开全局中断
}

interrupt void T1CINT_ISR(void)    // 通用定时器T1的比较中断
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP2;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void T1UFINT_ISR(void)   // 通用定时器1的下溢中断
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP2;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void T1OFINT_ISR(void)   // 通用定时器1的上溢中断
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP2;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}
      
interrupt void T2PINT_ISR(void)     //通用定时器2的周期中断
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP3;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void T2CINT_ISR(void)     // 通用定时器2的比较中断
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP3;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void T2UFINT_ISR(void)    // 通用定时器2的下溢中断
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP3;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void T2OFINT_ISR(void)    // 通用定时器2的上溢中断
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP3;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void CAPINT1_ISR(void)    // 捕获单元1中断
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP3;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void CAPINT2_ISR(void)    // 捕获单元2中断
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP3;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void CAPINT3_ISR(void)    // 捕获单元3中断
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP3;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}
      

interrupt void  PDPINTB_ISR(void)   // EV-B功率驱动保护中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP1;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void CMP4INT_ISR(void)    // 比较单元4的比较中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP4;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void CMP5INT_ISR(void)    // 比较单元5的比较中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP4;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void CMP6INT_ISR(void)    // 比较单元6的比较中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP4;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void T3PINT_ISR(void)     // 通用定时器3的周期中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP4;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void T3CINT_ISR(void)     // 通用定时器3的比较中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP4;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void T3UFINT_ISR(void)    // 通用定时器3的下溢中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP4;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void T3OFINT_ISR(void)    // 通用定时器3的上溢中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP4;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}
     
interrupt void T4PINT_ISR(void)    // 通用定时器4的周期中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP5;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void T4CINT_ISR(void)    // 通用定时器4的比较中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP5;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void T4UFINT_ISR(void)   // 通用定时器4的下溢中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP5;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void T4OFINT_ISR(void)   // 通用定时器4的上溢中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP5;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void CAPINT4_ISR(void)   // 捕获单元4中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP5;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void CAPINT5_ISR(void)   // 捕获单元5中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP5;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void CAPINT6_ISR(void)   // 捕获单元6中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP5;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}


interrupt void MRINTA_ISR(void)     // McBSP-A接收中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP6;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void MXINTA_ISR(void)     // McBSP-A发送中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP6;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}


interrupt void SPIRXINTA_ISR(void)    // SPI-A接收中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP6;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}


interrupt void SPITXINTA_ISR(void)     // SPI-A发送中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP6;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}


interrupt void SCIRXINTA_ISR(void)     // SCI-A接收中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP9;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void SCITXINTA_ISR(void)     // SCI-A发送中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP9;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}


interrupt void SCIRXINTB_ISR(void)     // SCI-B接收中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP9;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void SCITXINTB_ISR(void)     // SCI-B发送中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP9;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}


interrupt void ECAN0INTA_ISR(void)  // eCAN0中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP9;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}

interrupt void ECAN1INTA_ISR(void)  // eCAN1中断函数
{
  // 在这里插入中断函数的代码
  
  // 注意退出中断函数时需要先释放PIE，使得PIE能够响应同组其他中断 
  // PieCtrl.PIEACK.all = PIEACK_GROUP9;
  
  // 下面两行只是为了编译而写的，插入代码后请将其删除
  
  // 中断函数代码
     asm ("      ESTOP0");
     for(;;);

  // 返回;
}


interrupt void PIE_RESERVED(void)  // PIE保留的空间，仅供TI测试
{
  asm ("      ESTOP0");
  for(;;);
}

interrupt void rsvd_ISR(void)          // TI测试用
{
  asm ("      ESTOP0");
  for(;;);
}

//===========================================================================
// No more.
//===========================================================================

