clc
clear
%��������
A1=0.8;            %�ο�����ֵ0.8V
f1=50;           %�ο���Ƶ��50Hz
A2=1;            %�ز���ֵ1V
f2=10000;         %�ز�Ƶ��10kHz
pi=3.1415926;    %����
T1=1/f1;         %�ο�������
T2=1/f2;         %�ز�����
w1=2*pi*f1;      %�ο������ٶ�
i=1;  
death_time=2;      %������ȣ����ﶨ�Է��棬��ȡ1��2��3.


lab=2;%ѡ��������ݴ��ţ�1��ʾ��ͬ���ƶȶ�г��Ӱ����棬2��ʾ�������棬3��ʾע������г������
switch lab
    case 1
       for t = 0:0.000001:0.1;       %forѭ������PWM��
            u1(i)=A1*sin(w1*t);%�ο������ʽ
            if mod(t,T2)<T2/2
                u2(i)=-A2+4*A2*mod(t,T2)/T2;
            else u2(i)=3*A2-4*A2*mod(t,T2)/T2;%�ز����ʽ
            end
            
            if u1(i)>u2(i)
                uo(i)=1;
            else
                uo(i)=-1;        %�����ѹ���ʽ
            end
            
            i=i+1;
       end
        fx = 1:100000;
        fx = (fx -1)*10;
        y = fft(uo,100000);
        Y=abs(y)*2/100000;               %�����ѹг��FFT����
        figure(1)
        plot(fx(1:100),Y(1:100))     %figure1Ϊ�Ե�ǰ���ƶȡ���ǰƵ�������PWM����fft���Σ�����ʱ��Ϊ0.1s������ÿһ����10Hz����һ��1�����ڴ�Ϊֱ��ƫ�ã���0Hz
        xlabel('Ƶ��f��Hz��');
        ylabel('��ֵ');
        figure(2)
        subplot(3,1,1);  %figure2Ϊ���Ʋ����ز���PWM���Ĳ���
        plot(u1(1:40000))
        % plot(x);
        subplot(3,1,2);
        plot(u2(1:40000));
        % plot(y);
        subplot(3,1,3);
        plot(uo(1:40000));
        % plot(YY);
    case 2
       for t = 0:0.00001:0.1;       %forѭ������PWM��
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
       for i=2:10000
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
        fx = 1:10000;
        fx = (fx -1)*10;
        y = fft(uo,10000);
        Y=abs(y)*2/10000;               %�����ѹг��FFT����
        figure(1)
        plot(fx(1:100),Y(1:100))     %figure1Ϊ�Ե�ǰ���ƶȡ���ǰƵ�������PWM����fft���Σ�����ʱ��Ϊ0.1s������ÿһ����10Hz����һ��1�����ڴ�Ϊֱ��ƫ�ã���0Hz
        xlabel('Ƶ��f��Hz��');
        ylabel('��ֵ');
        figure(2)
        subplot(3,1,1);  %figure2Ϊ���Ʋ����ز���PWM���Ĳ���
        plot(u1(1:4000))
        % plot(x);
        subplot(3,1,2);
        plot(u2(1:4000));
        % plot(y);
        subplot(3,1,3);
        plot(uo(1:4000));
        % plot(YY);
    case 3
      for t = 0:0.00001:0.1;       %forѭ������PWM��
            u1(i)=A1*sin(w1*t)+0.16666*A1*sin(3*w1*t);%�ο������ʽ
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
        y = fft(uo,10000);
        fx = 1:10000;
        fx = (fx -1)*10;
        Y=abs(y)*2/10000;               %�����ѹг��FFT����
        figure(1)
        plot(fx(1:100),Y(1:100))     %figure1Ϊ�Ե�ǰ���ƶȡ���ǰƵ�������PWM����fft���Σ�����ʱ��Ϊ0.1s������ÿһ����10Hz����һ��1�����ڴ�Ϊֱ��ƫ�ã���0Hz
        xlabel('Ƶ��f��Hz��');
        ylabel('��ֵ');
        figure(2)
        subplot(3,1,1);  %figure2Ϊ���Ʋ����ز���PWM���Ĳ���
        plot(u1(1:4000))
        % plot(x);
        subplot(3,1,2);
        plot(u2(1:4000));
        % plot(y);
        subplot(3,1,3);
        plot(uo(1:4000));
        % plot(YY);  
end





%�����ʹ�г����г����ֵ�����Ȼ�����ֵ�󣨵��ز���ֵ���ڻ�����ֵʱ����
%���ǹ���������ʹ�г��������ϵ����Сʱ��Ȼ���ڽϴ�Ŀ���Ƶ�ʵ�г�������Ǹ�Ƶг���Ե���ฺ�ص�Σ����С����Ӧ����Ϊ����SPWM��ֵ����ߵ���ϵ������ĵʹ�г��
%�ٷ���������ЧӦ����ߵ���ϵ���Ҳ�����ʹ�г���ķ�����ע������г������ߵ���ϵ��