T0=296.15;
TA=26.4 + 273.15;
T1i=26.4 + 273.15;
T2i=26.4 + 273.15;
Hf1=0.01;
Hf2=0.004;
cp=500;
A=0.0012;
m=0.004;
U=1.4;
e=0.9;
th=0.0000000567;
Tk=273.15;


% Condiciones iniciales del sistema
Tk = 273.15;
Q1 = 13;
Q2 = 0;


% Código para obtener condiciones iniciales de T1 y 

fun = @(x)root2d(x,Q1,Q2,Hf1,U,A,e,th,TA);
x0 = [0,0];
x = fsolve(fun,x0);
T1o = x(1);
T2o = x(2);


% Variables de funciones de trasnferencia linealizadas

Tau1= (m*cp)/(2*U*A+8*e*th*A*(T1o)^3);
Tau2= (m*cp)/(2*U*A+8*e*th*A*(T2o)^3);
k1= (U*A+3*e*th*A*(T2o)^3)/(2*U*A+8*e*th*A*(T1o)^3);
k2= (U*A+3*e*th*A*(TA)^3)/(2*U*A+8*e*th*A*(T1o)^3);
k3= Hf1/(2*U*A+8*e*th*A*(T1o)^3);
k4= (U*A+3*e*th*A*(T1o)^3)/(2*U*A+8*e*th*A*(T2o)^3);
k5= (U*A+3*e*th*A*(TA)^3)/(2*U*A+8*e*th*A*(T2o)^3);
k6= Hf2/(2*U*A+8*e*th*A*(T2o)^3);

% Para el sistema linealizado GQ1T1

C1_Q1= k3*Tau2;
C2_Q1= k3;
P1_Q1= Tau1*Tau2;
P2_Q1= Tau2+Tau1;
P3_Q1= 1- k1*k4;

% Para el sistema linealizado GQ2T1

C1_Q2= k1*k6;
P1_Q2= Tau1*Tau2;
P2_Q2= Tau2+Tau1;
P3_Q2= 1- k1*k4;

% Para introducir matrices de T1, Q1 y Q2 del ensayo real a simulink

T1t = [Tiempo T1_Salida];
Q1t= [Tiempo Q1_Entrada];
Q2t= [Tiempo Q2_Entrada];


function F = root2d(x,Q1,Q2,Hf1,U,A,ep,sig,TA)
F(1) = U*A * (TA + x(2) - 2*x(1)) + ep*sig*A * (TA^4 + x(2)^4 - 2*x(1)^4) + Hf1*Q1;
F(2) = U*A * (TA + x(1) - 2*x(2)) + ep*sig*A * (TA^4 + x(1)^4 - 2*x(2)^4) + Hf1*Q2;
end