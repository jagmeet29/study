clc
clear all
close all
% plot sinewave
x=0:0.1:2*pi;
y= sin(x);
subplot(2,2,1)
plot(x,y);
title('Sinewave')
xlabel('tine')
ylabel('Amplitude')
%plot cose wave
x=0:0.1:2*pi;
y= cos(x);
subplot(2,2,2)
plot(x,y);
title('Cosewave')
xlabel('time')
ylabel('Amlpitude')
