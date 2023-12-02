load Temperatura_ap_control.mat;
figure

plot(Tiempo, T1_Control);
hold on;
plot(Tiempo, PI_Salida);
plot(Tiempo, Q1_Entrada);
plot(Tiempo, REF_PI);
title('Temperaturas TCLab');
legend('T1', 'Salida del PI', 'Entrada a la planta', 'Referencia');

xlabel('Tiempo (s)'); 
ylabel('Temperatura (ºC) / Apertura (%)'); 
