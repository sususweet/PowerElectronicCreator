clc
clear
%常数定义
A1=0.8;            %参考波幅值1V
f1=50;           %参考波频率50Hz
A2=1;            %载波幅值1V
f2=1000;         %载波频率1kHz
pi=3.1415926;    %常数
T1=1/f1;         %参考波周期
T2=1/f2;         %载波周期
w1=2*pi*f1;      %参考波角速度
i=1;  
death_time=1;      %死区宽度，这里定性仿真，可取1、2、3.


lab=1;%选择仿真内容代号，1表示不同调制度对谐波影响仿真，2表示死区仿真，3表示注入三次谐波仿真
switch lab
    case 1
       for t = 0:0.0001:0.1;       %for循环产生PWM波
            u1(i)=A1*sin(w1*t);%参考波表达式
            if mod(t,T2)<T2/2
                u2(i)=-A2+4*A2*mod(t,T2)/T2;
            else u2(i)=3*A2-4*A2*mod(t,T2)/T2;%载波表达式
            end
            
            if u1(i)>u2(i)
                uo(i)=1;
            else uo(i)=-1;        %输出电压表达式
            end
            
            i=i+1;
       end
        y = fft(uo,1001);
        Y=abs(y);               %输出电压谐波FFT分析
        figure(1)
        plot(Y)     %figure1为以当前调制度、当前频率输出的PWM波的fft波形，仿真时长为0.1s，所以每一格是10Hz，第一格（1）所在处为直流偏置，即0Hz
        figure(2)
        subplot(3,1,1);  %figure2为调制波、载波、PWM波的波形
        plot(u1)
        % plot(x);
        subplot(3,1,2);
        plot(u2);
        % plot(y);
        subplot(3,1,3);
        plot(uo);
        % plot(YY);
    case 2
       for t = 0:0.0001:0.1;       %for循环产生PWM波
            u1(i)=A1*sin(w1*t);%参考波表达式
            if mod(t,T2)<T2/2
                u2(i)=-A2+4*A2*mod(t,T2)/T2;
            else u2(i)=3*A2-4*A2*mod(t,T2)/T2;%载波表达式
            end
            if u1(i)>u2(i)
                uo(i)=1;
            else uo(i)=-1;        %输出电压表达式
            end
            i=i+1;
       end
       for i=2:1001
           if uo(i-1)*uo(i) == -1
               if death_time==1
                   uo(i)=0;
               elseif death_time==2
                   uo(i)=0;
                   uo(i+1)=0;
               else
                   uo(i)=0;
                   uo(i+1)=0;
                   uo(i+2)=0;
               end    
           end
       end
        y = fft(uo,1001);
        Y=abs(y);               %输出电压谐波FFT分析
        figure(1)
        plot(Y)     %figure1为以当前调制度、当前频率输出的PWM波的fft波形，仿真时长为0.1s，所以每一格是10Hz，第一格（1）所在处为直流偏置，即0Hz
        figure(2)
        subplot(3,1,1);  %figure2为调制波、载波、PWM波的波形
        plot(u1)
        % plot(x);
        subplot(3,1,2);
        plot(u2);
        % plot(y);
        subplot(3,1,3);
        plot(uo);
        % plot(YY);
    case 3
      A1=1.1;  %过调制，采用注入三次谐波的方式减小过调制引起的谐波，将lab3的FFT波形与lab1中A1=1.1的波形进行比较
      for t = 0:0.0001:0.1;       %for循环产生PWM波
            u1(i)=A1*sin(w1*t)+0.2*sin(3*w1*t);%参考波表达式
            if mod(t,T2)<T2/2
                u2(i)=-A2+4*A2*mod(t,T2)/T2;
            else u2(i)=3*A2-4*A2*mod(t,T2)/T2;%载波表达式
            end
            
            if u1(i)>u2(i)
                uo(i)=1;
            else uo(i)=-1;        %输出电压表达式
            end
            
            i=i+1;
       end
        y = fft(uo,1001);
        Y=abs(y);               %输出电压谐波FFT分析
        figure(1)
        plot(Y)     %figure1为以当前调制度、当前频率输出的PWM波的fft波形，仿真时长为0.1s，所以每一格是10Hz，第一格（1）所在处为直流偏置，即0Hz
        figure(2)
        subplot(3,1,1);  %figure2为调制波、载波、PWM波的波形
        plot(u1)
        % plot(x);
        subplot(3,1,2);
        plot(u2);
        % plot(y);
        subplot(3,1,3);
        plot(uo);
        % plot(YY);  
end





%消除低次谐波、谐波幅值甚至比基波幅值大（当载波幅值大于基波幅值时）。
%但是过调制引入低次谐波，调制系数较小时虽然存在较大的开关频率的谐波，但是高频谐波对电机类负载的危害较小，故应避免为增加SPWM幅值而提高调制系数引入的低次谐波
%再仿真死区的效应，提高调制系数且不引入低次谐波的方法如注入三次谐波来提高调制系数