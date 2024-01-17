clc
clear all
close all
% Unit impulse signal
n=-5:5;
y=[(n==0)];
subplot(2,2,1)
stem(n,y)
title('impule signal')
xlabel('number of samlpes')
ylabel('amplitude')
% Unit step signal
n=-5:5;
y=[(n>=0)];
subplot(2,2,2)
stem(n,y)
xlabel('Number of samlpes')
ylabel('Amplitude')
title('Unit step signal')
% Ramp signal
n=0:5;
r=n
subplot(2,2,3)
stem(n,r)
title('Unit ramp signal')
% explonential signal
n=-5:5;
y=0.8.^n;
subplot(2,2,4)
stem(n,y)
title('Exponential signal')
