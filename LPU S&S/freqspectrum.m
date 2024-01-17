clc
clear all
close all
Fs = 1000;
T = 0.1;
N = T*Fs;
Time =linspace(0,T,N);
f1=2000;
x1=sin(2*pi*f1*Time);
figure(1)
plot(Time,x1);
title('sine')
%spectral analysis
Freq=linspace(-Fs/2,Fs/2,N);
x1_fft=fft(x1);
x1_spectrum=fftshift(abs(x1_fft).^2);

figure(2)
plot(Freq,x1_spectrum);
title('Power of Sprectrum')

f2=4000;
x2=sin(2*pi*f2*Time);
x3=x1+x2;
figure(3)
plot(Time,x3)
title('sum of freq')

x3_fft=fft(x3)
x3_spectrum=fftshift(abs(x3_fft).^2);
figure(4)
plot(Freq,x3_spectrum);
title('Power spectrum:sum of two sines');
