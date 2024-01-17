clc
clear all
close all
% Set the parameters
fs = 8000;          % Sampling rate (Hz)
duration = 5;       % Recording duration (seconds)

% Create an audio recorder object
recObj = audiorecorder(fs, 16, 1);  % 16 bits per sample, 1 channel (monaural)

% Record the audio
disp('Start speaking.');
recordblocking(recObj, duration);
disp('End of recording.');

% Retrieve the recorded audio data
recorded_audio = getaudiodata(recObj);


% Plot the recorded signal
time = (0:(length(recorded_audio)-1)) / fs;
plot(time, recorded_audio);
title('Recorded Audio Signal');
xlabel('Time (s)');
ylabel('Amplitude');

% Save the recorded audio to a WAV file (optional)
audiowrite('recorded (2).wav', recorded_audio, fs);


