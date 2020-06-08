# Sist.Desarrollo_TP2
UART BASICO

# Objetivos:

Poner en práctica el uso de la UART de un microcontrolador, reconociendo las señales que
la conforman y estableciendo una comunicación básica entre el micro y una terminal.
Para el desarrollo de este trabajo práctico se utilizará el PIC16F886, que es un micro
superior al PIC16F628A en cuanto a capacidad de memoria FLASH, RAM y cantidad de
periféricos.

# Implementación

En este trabajo práctico realizaremos el control de un dígito de 7 segmentos a través de una
terminal. Además el micro deberá tener configurado dos entradas digitales. El conexionado puede
ser el mismo del trabajo anterior (sin multiplexación de los tres dígitos por tener un solo dígito) y
las dos entradas. Además el conexionado deberá contemplar las conexiones RX y TX de la UART.
Dada las limitaciones que tenemos de acceso a hardware (programadores, micros, etc...), la
resolución de dicha actividad será resuelta utilizando el simulador simulIDE.

# Consignas

1. Dibujar el esquemático en simulIDE.

2. Realizar un programa para que al recibir el microcontrolador un caracter de '0', '1', '2', '3',...
'9' encienda el mismo valor en el dígito de siete segmentos. Si recibe cualquier otro caracter
no debe realizar ninguna acción. Además cada vez que el microcontrolador detecte un flanco
positivo en una entrada, deberá transmitir un caracter 'A' si se trata del pulsador uno o un
caracter 'B' si se trata del pulsador 2. Por último la velocidad de comunicación serie debe ser
de 9600bps.
