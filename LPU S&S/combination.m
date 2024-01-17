clc
clear all
close all
%set the parameters
fs = 8000; %sampling rate(hz)
duration = 5; %duration of the signal in seconds
num_samples = fs*duration;
line_frequency = 60; %line frequency in hz
% Specify the path to your WAV file
recorded_audio = 'recorded (2).wav';

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

% Make sure the noise signal and recorded audio have the same length
% You can trim or extend either signal to match the length of the other.
% Here, we'll trim both signals to the shorter of the two.

min_length = min(length(recorded_audio), length(combined_signal));
recorded_audio = recorded_audio(1:min_length);
combined_signal = combined_signal(1:min_length);

% Add the noise signal to the recorded audio
noisy_recorded_audio = recorded_audio + combined_signal;
% Optionally, you can save the resulting audio to a WAV file
audiowrite('noisy_recorded_speech.wav', noisy_recorded_audio, fs);

% Load the notch filter coefficients
load('notch_filter_coefficients.mat');  % Make sure you have the correct filename

% Filter the audio signal using the notch filter
filtered_audio = filter(b, a, noisy_recorded_audio);

% Plot the original (noisy) recorded signal
subplot(3, 1, 1);
time = (0:(length(noisy_recorded_audio)-1)) / fs;
plot(time, noisy_recorded_audio);
title('Noisy Recorded Signal');
xlabel('Time (s)');
ylabel('Amplitude');

% Plot the filtered signal
subplot(3, 1, 2);
time = (0:(length(filtered_audio)-1)) / fs;
plot(time, filtered_audio);
title('Filtered Signal ');
xlabel('Time (s)');
ylabel('Amplitude');
% Specify the path to your WAV file
recorded_audio = 'recorded_audio.wav';

% Use audioread to read the WAV file
[audio_data, fs] = audioread(recorded_audio);



% Assuming you have the original (noisy) signal and the filtered signal


% Calculate the residual noise
residual_noise =filtered_audio-recorded_audio;

% Plot the original, filtered, and residual noise signals for comparison


subplot(3, 1, 3);
time = (0:(length(residual_noise)-1)) / fs;
plot(time, residual_noise);
title('Residual Noise');
xlabel('Time (s)');
ylabel('Amplitude');
% Specify the path to your WAV file
recorded_audio = 'recorded_audio.wav';

% Use audioread to read the WAV file
[audio_data, fs] = audioread(recorded_audio);


% Compute the Signal-to-Noise Ratio (SNR)
% SNR measures the ratio of the clean speech to the residual noise (noisy - clean)
snr_value = 10 * log10(sum(recorded_audio.^2) / sum(residual_noise.^2));

% Compute the Mean Squared Error (MSE)
% MSE measures the average squared difference between the clean and filtered signals
mse_value = mean((recorded_audio-filtered_audio).^2);

% Display the SNR and MSE values
fprintf('SNR: %.2f dB\n', snr_value);
fprintf('MSE: %.4f\n', mse_value);
