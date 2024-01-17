clc
clear all;
close all;

% First we will be loading image
img =imread('AREMOGI.jpg')
figure('Name','Original Image'); imshow(img);

% Now let's convert into grayscale image
gray_img=rgb2gray(img);
figure('Name','Gray Scale Image'); imshow(gray_img);

%Get Fourier Transform of an image
F = fft2(gray_img);
figure('Name','Fourier transform of an image'); imshow(abs(F), []);

%Get the centered spectrum
Fsh = fftshift(F);
figure('Name','Centered fourier transform of Image');  imshow(abs(Fsh), []);

%apply log transform
log_img = log(1+abs(Fsh));
figure('Name','Log fourier transform of Image'); imshow(log_img,[]);

% Get the magnitude and phase components of the transform
I_amp = abs (F);
I_phase = angle (F);
figure ('Name', "Phase of Fourier Transform");
imshow (I_phase);
colormap(gray);
title('Phase respose');
xlabel('x-axix');
ylabel('y-axix');
figure ('Name', "Magnitude of Fourier Transform(JAGMEET)");
imshow (log (I_amp),[])
title('Magnitude of FT(JAGMEET)');
xlabel('x-axix');
ylabel('y-axix');
