%% Definicion de parametros
T=10;                         % Tiempo de muestreo (s)
tsim=6250;                    % Tiempo de simulacion (s)
iteraciones=ceil(tsim/T);     % Numero total de iteraciones
ini=2;                        % Inicializacion de vectores (valores t<0)
Umax=100;
Umin=100;                     %límites de saturación
%parámetros del controlador
Kp=3.89;
Ti=44.72;
Tt=sqrt(Ti);
%% Inicializacion de variables para comunicación con Arduino
tclab;

t=-T*(ini-1):T:T*(iteraciones);  %tiempo (segundos)
T1=zeros(1,iteraciones+ini);     %salida (temperatura)
u=zeros(1,iteraciones+ini);      %señal de control (porcentaje de accion)
up=u;ui=u;us=u;                  %señal de controlador partes integral y proporcional y saturacion
 
% Variables de control
r=zeros(1,iteraciones+ini);      %referencia
e=zeros(1,iteraciones+ini);      %error

for k=ini:+1:iteraciones+ini
    tic

    y(k)=T1C();

    r(k) = 36.6; % Punto de operación

    if t(k) >= 2000 % 20 min
            r(k) = 56; %cambio de referencia
    end

    e(k) = r(k)-y(k); %error

    ui(k)= ui(k-1)+Kp*T/(2*Ti)*(e(k)+e(k-1)) + T*es/Tt; %acción integral del controlador +Feedforward
    up(k)= Kp*e(k); %acción proporcional
    u(k)=ui(k)+up(k); %acción total

    us(k)=max(min(u(k),Umax),Umin);

    es=us(k)-u(k);

    h1(us(k)); %Mandar acción al transistor

    pause(T-toc); %Pausar T menos el tiempo de computación
end 