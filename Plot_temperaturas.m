figure

plot(out.T1_Lineal);
hold on;
plot(out.T1_NoLineal);
plot(Tiempo, T1_Salida);
plot(Tiempo, T2_Salida);
plot(Tiempo, Q1_Entrada);
plot(Tiempo, Q2_Entrada);
title('Temperaturas TCLab');
legend('T1 Lineal', 'T1 No Lineal', 'T1 Ensayo Real','T2 Ensayo Real', 'Q1', 'Q2');

xlabel('Tiempo (s)'); 
ylabel('Temperatura (ºC) / Apertura (%)'); 
