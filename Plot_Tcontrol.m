%load Temperatura_ap_control.mat;
load Temperatura_cp_control.mat
figure

plot(Tiempo, T1_Control);
hold on;
plot(Tiempo, PI_Salida);
plot(Tiempo, Q1_Entrada);
plot(Tiempo, REF_PI);
plot(Tiempo, T2_Control);
title('Temperaturas TCLab');
legend('T1', 'Salida del PI', 'Entrada a la planta', 'Referencia', 'T2');

xlabel('Tiempo (s)'); 
ylabel('Temperatura (ºC) / Apertura (%)'); 
