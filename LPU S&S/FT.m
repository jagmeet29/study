clc
clear all
close all
Fs= 1000;
T=1/Fs;
L=1500;
t=(0:L-1)*T;
S=0.7*sin(2*pi*50*t)+sin(2*pi*120*t);
subplot(2,1,1)
plot(S)
Y=fft(S) % FT command
P2=abs(Y/L);
P1=P2(1:L/2+1);
P1(2:end-1)=2*P1(2:end-1);
f=Fs*(0:(L/2))/L;
subplot(2,1,2)
plot(f,P1)
tilde('spectrum of S(t)')
Xlable('f (Hz)')
ylabel('|P1(f)|')
