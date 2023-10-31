figure

plot(out.T1_Lineal);
hold on;
plot(out.T1_NoLineal);
plot(Tiempo, T1_Salida);
title('Temperaturas TCLab');
xlabel('Tiempo (s)'); 
ylabel('Temperatura (ºC)'); 
legend('T1 Lineal', 'T1 No Lineal', 'T1 Ensayo Real');