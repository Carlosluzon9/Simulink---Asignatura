%% Definicion de parametros
T=10;                         % Tiempo de muestreo (s)
tsim=6250;                    % Tiempo de simulacion (s)
iteraciones=ceil(tsim/T);     % Numero total de iteraciones
ini=3;                        % Inicializacion de vectores (valores t<0)
Umax=100;
Umin=0;                     %límites de saturación
%parámetros del controlador
Kp=1.7383;
Ti=165;
Tt=sqrt(Ti);
%% Inicializacion de variables para comunicación con Arduino
%tclab;


t=-T*(ini-1):T:T*(iteraciones);  %tiempo (segundos)
y=zeros(1,iteraciones+ini);     %salida (temperatura)
u=zeros(1,iteraciones+ini);      %señal de control (porcentaje de accion)
up=u;ui=u;us=u;                  %señal de controlador partes integral y proporcional y saturacion
 
% Variables de control
r=zeros(1,iteraciones+ini);      %referencia
e=zeros(1,iteraciones+ini);      %error
es=e;

% Bucle simulación 

for k=ini:+1:iteraciones+ini
    %tic

    %y(k)=T1C(); %leer salida de la planta
    y(k)=1.833*y(k-1)-0.839*y(k-2)+0.04784*us(k-1)-0.04389*us(k-2); %sistema lineal discretizado con c2d

    r(k) = 0; % Punto de operación

    if t(k) >= 2000 
            r(k) = 30; %cambio de referencia
    end

    e(k) = r(k)- y(k); %error

    ui(k)= ui(k-1)+Kp*T/(2*Ti)*(e(k)+e(k-1)) + T*es(k-1)/Tt; %acción integral del controlador + anti-windup
    up(k)= Kp*e(k); %acción proporcional
    u(k)=ui(k)+up(k); %acción total

    us(k)=max(min(u(k),Umax),Umin); %señal saturada

    es(k)=us(k)-u(k); %comparación señal saturada y normal

    %h1(us(k)); %Mandar acción al transistor

    %pause(T-toc); %Pausar T menos el tiempo de computación
end 

figure

plot(t,r,'black'); hold on
plot(t,u,'g');
plot(t,y,'b');
plot(t,us,'r');

title('Temperaturas TCLab');
legend('Referencia', 'Señal PI Saturada', 'Temperatura del sistema','Señal PI sin saturar');

xlabel('Tiempo (s)'); 
ylabel('Temperatura (ºC) / Apertura (%)'); 

