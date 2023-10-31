
t = tiledlayout(1,1);
ax1 = axes(t);
plot(ax1, out.T1_Lineal.time, out.T1_Lineal.signals.values);
title('Comparacion_Temperaturas');
hold on;

ax2 = axes(t);
plot(ax2, Tiempo, T1_Salida);
ax2.XAxisLocation = "top";




