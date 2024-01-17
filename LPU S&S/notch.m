clc
clear all
close all

% Set the parameters
fs = 8000;          % Sampling rate (Hz)
line_frequency = 60; % Frequency to remove (Hz)
Q = 10;             % Quality factor

% Calculate the notch filter parameters
omega = 2 * pi * line_frequency / fs;
alpha = sin(omega) / (2 * Q);

% Design the notch filter coefficients
b = [1, -2 * cos(omega), 1];
a = [1, -2 * alpha * cos(omega), alpha^2];

% Display the filter coefficients
disp('Filter Coefficients:');
disp('Numerator (b):');
disp(b);
disp('Denominator (a):');
disp(a);

% Save the filter coefficients to a MAT file
save('notch_filter_coefficients.mat', 'b', 'a');

% Plot the frequency response
freqz(b, a, 1024, fs);
title('Notch Filter Frequency Response');
xlabel('Frequency (Hz)');
ylabel('Magnitude (dB)');
grid on;
