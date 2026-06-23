% 1. Initialization
pkg load signal;
graphics_toolkit('qt');

% 2. Read Audio Files
[y_clean, fs] = audioread('signal_clean.wav');
[y_noisy, fs] = audioread('signal_noisy.wav');

% 3. Filter Specifications
f_pass = 800;
Wn = f_pass / (fs / 2);
order_iir = 3;
Rp = 1;

% 4. IIR Filter Design
[b_cheby, a_cheby] = cheby1(order_iir, Rp, Wn, 'low');
y_cheby = filter(b_cheby, a_cheby, y_noisy);

% 5. Time Vector Calculation
N = length(y_clean);
t = (0:N-1) / fs;

% 6. Time-Domain Plotting
figure;

subplot(3,1,1);
plot(t, y_clean, 'b');
title('Clean Signal');
xlabel('Time (seconds)');
ylabel('Amplitude');
xlim([0 2]);
ylim([-1 1]);
grid on;

subplot(3,1,2);
plot(t, y_noisy, 'r');
title('Noisy Signal');
xlabel('Time (seconds)');
ylabel('Amplitude');
xlim([0 2]);
ylim([-1 1]);
grid on;

subplot(3,1,3);
plot(t, y_cheby, 'g');
title('3rd-Order Chebyshev Filtered Signal');
xlabel('Time (seconds)');
ylabel('Amplitude');
xlim([0 2]);
ylim([-1 1]);
grid on;

drawnow;

% 7. Audio Playback Execution
audio_duration = N / fs;
pause_time = audio_duration + 0.5; % Adds a 0.5s buffer between plays

fprintf('\n--- Audio Playback Sequence Started ---\n');

% Play Clean Signal Twice
fprintf('Playing: Clean Signal (1 of 2)...\n');
sound(y_clean, fs);
pause(pause_time);

fprintf('Playing: Clean Signal (2 of 2)...\n');
sound(y_clean, fs);
pause(pause_time);

% Play Noisy Signal Twice
fprintf('\nPlaying: Noisy Signal (1 of 2)...\n');
sound(y_noisy, fs);
pause(pause_time);

fprintf('Playing: Noisy Signal (2 of 2)...\n');
sound(y_noisy, fs);
pause(pause_time);

% Play Filtered Signal Twice
fprintf('\nPlaying: Filtered Signal (1 of 2)...\n');
sound(y_cheby, fs);
pause(pause_time);

fprintf('Playing: Filtered Signal (2 of 2)...\n');
sound(y_cheby, fs);
pause(pause_time);

fprintf('\n--- Audio Playback Sequence Complete ---\n\n');

