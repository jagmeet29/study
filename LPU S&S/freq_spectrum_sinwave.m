clc
clear all
close all
% Freq. of sine wave
%t=0:150;
t=0:1/50:10-1/50;
x=sin(2*pi*1*t);
figure
plot(t,x)
y=fft(x);

