clc
clear all
close all
%folding of signal
x=0:3;
y=[4,8,1,11]
subplot(2,1,1)
stem(x,y)
title('orignal signal');
axis([-5 5 0 11])
xlabel('samples');
ylabel('Amplitude');
%folding y axis values
y1=fliplr(y);
n=-fliplr(x);
subplot(2,1,2)
stem(n,y1);
axis([-5 5 0 11])
xlabel('samples');
ylabel('Amplitude');
titlie('folded signal');

