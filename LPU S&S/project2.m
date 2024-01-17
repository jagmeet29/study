clc
clear all
close all
%set the parameters
fs = 8000; %sampling rate(hz)
duration = 5; %duration of the signal in seconds
num_samples = fs*duration;
line_frequency = 60; %line frequency in hz
% Specify the path to your WAV file
recorded_audio = 'recorded_audio.wav';

% Use audioread to read the WAV file
[audio_data, fs] = audioread(recorded_audio);

% Display information about the audio file
disp('Audio Information:');
disp(['Sampling rate: ', num2str(fs), ' Hz']);
disp(['Number of samples: ', num2str(length(audio_data))]);

% Plot the audio signal (optional)
time = (0:(length(audio_data)-1)) / fs;
subplot(2,1,1);
plot(time, audio_data);
title('Audio Signal');
xlabel('Time (s)');
ylabel('Amplitude');
sound(audio_data);


% Generate a noise signal (as shown in the previous response)
%generate a time vector
t = (0:(num_samples-1))/fs;
%generate random white noise
noise_signal = randn(1,num_samples);
%create a sinusoidal signal at the line frequency
line_signal = sin(2*pi*line_frequency*t);
%combine tthe noise and line signal
combined_signal = noise_signal+line_signal;
%plot the combined_signal
subplot(2,1,2);
plot(t,combined_signal);
title('Noise signal with 60hz component');
xlabel('Time(s)');
ylabel('Amplitude');
