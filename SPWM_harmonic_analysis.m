clc
clear
%��������
A1=0.8;            %�ο�����ֵ1V
f1=50;           %�ο���Ƶ��50Hz
A2=1;            %�ز���ֵ1V
f2=1000;         %�ز�Ƶ��1kHz
pi=3.1415926;    %����
T1=1/f1;         %�ο�������
T2=1/f2;         %�ز�����
w1=2*pi*f1;      %�ο������ٶ�
i=1;  
death_time=1;      %������ȣ����ﶨ�Է��棬��ȡ1��2��3.


lab=1;%ѡ��������ݴ��ţ�1��ʾ��ͬ���ƶȶ�г��Ӱ����棬2��ʾ�������棬3��ʾע������г������
switch lab
    case 1
       for t = 0:0.0001:0.1;       %forѭ������PWM��
            u1(i)=A1*sin(w1*t);%�ο������ʽ
            if mod(t,T2)<T2/2
                u2(i)=-A2+4*A2*mod(t,T2)/T2;
            else u2(i)=3*A2-4*A2*mod(t,T2)/T2;%�ز����ʽ
            end
            
            if u1(i)>u2(i)
                uo(i)=1;
            else uo(i)=-1;        %�����ѹ���ʽ
            end
            
            i=i+1;
       end
        y = fft(uo,1001);
        Y=abs(y);               %�����ѹг��FFT����
        figure(1)
        plot(Y)     %figure1Ϊ�Ե�ǰ���ƶȡ���ǰƵ�������PWM����fft���Σ�����ʱ��Ϊ0.1s������ÿһ����10Hz����һ��1�����ڴ�Ϊֱ��ƫ�ã���0Hz
        figure(2)
        subplot(3,1,1);  %figure2Ϊ���Ʋ����ز���PWM���Ĳ���
        plot(u1)
        % plot(x);
        subplot(3,1,2);
        plot(u2);
        % plot(y);
        subplot(3,1,3);
        plot(uo);
        % plot(YY);
    case 2
       for t = 0:0.0001:0.1;       %forѭ������PWM��
            u1(i)=A1*sin(w1*t);%�ο������ʽ
            if mod(t,T2)<T2/2
                u2(i)=-A2+4*A2*mod(t,T2)/T2;
            else u2(i)=3*A2-4*A2*mod(t,T2)/T2;%�ز����ʽ
            end
            if u1(i)>u2(i)
                uo(i)=1;
            else uo(i)=-1;        %�����ѹ���ʽ
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
        Y=abs(y);               %�����ѹг��FFT����
        figure(1)
        plot(Y)     %figure1Ϊ�Ե�ǰ���ƶȡ���ǰƵ�������PWM����fft���Σ�����ʱ��Ϊ0.1s������ÿһ����10Hz����һ��1�����ڴ�Ϊֱ��ƫ�ã���0Hz
        figure(2)
        subplot(3,1,1);  %figure2Ϊ���Ʋ����ز���PWM���Ĳ���
        plot(u1)
        % plot(x);
        subplot(3,1,2);
        plot(u2);
        % plot(y);
        subplot(3,1,3);
        plot(uo);
        % plot(YY);
    case 3
      A1=1.1;  %�����ƣ�����ע������г���ķ�ʽ��С�����������г������lab3��FFT������lab1��A1=1.1�Ĳ��ν��бȽ�
      for t = 0:0.0001:0.1;       %forѭ������PWM��
            u1(i)=A1*sin(w1*t)+0.2*sin(3*w1*t);%�ο������ʽ
            if mod(t,T2)<T2/2
                u2(i)=-A2+4*A2*mod(t,T2)/T2;
            else u2(i)=3*A2-4*A2*mod(t,T2)/T2;%�ز����ʽ
            end
            
            if u1(i)>u2(i)
                uo(i)=1;
            else uo(i)=-1;        %�����ѹ���ʽ
            end
            
            i=i+1;
       end
        y = fft(uo,1001);
        Y=abs(y);               %�����ѹг��FFT����
        figure(1)
        plot(Y)     %figure1Ϊ�Ե�ǰ���ƶȡ���ǰƵ�������PWM����fft���Σ�����ʱ��Ϊ0.1s������ÿһ����10Hz����һ��1�����ڴ�Ϊֱ��ƫ�ã���0Hz
        figure(2)
        subplot(3,1,1);  %figure2Ϊ���Ʋ����ز���PWM���Ĳ���
        plot(u1)
        % plot(x);
        subplot(3,1,2);
        plot(u2);
        % plot(y);
        subplot(3,1,3);
        plot(uo);
        % plot(YY);  
end





%�����ʹ�г����г����ֵ�����Ȼ�����ֵ�󣨵��ز���ֵ���ڻ�����ֵʱ����
%���ǹ���������ʹ�г��������ϵ����Сʱ��Ȼ���ڽϴ�Ŀ���Ƶ�ʵ�г�������Ǹ�Ƶг���Ե���ฺ�ص�Σ����С����Ӧ����Ϊ����SPWM��ֵ����ߵ���ϵ������ĵʹ�г��
%�ٷ���������ЧӦ����ߵ���ϵ���Ҳ�����ʹ�г���ķ�����ע������г������ߵ���ϵ��