#include <stdio.h>
#include <wiringPi.h>
#include <string.h>

int main()
{

    wiringPiSetup();     // inicia a biblioteca WiringPi
    pinMode(29, OUTPUT); // configura o pino 21 como saída

    FILE *file;

    if (file = fopen("/home/pi/Autorizacao.txt", "r"))
    {

        digitalWrite(29, HIGH); // liga o pino 21
        delay(1000);            // espera 1 segundo
        digitalWrite(29, LOW);  // desliga o pino 21
        delay(20000);           //  espera 1 segundo
        digitalWrite(29, HIGH); // liga o pino 21
        delay(1000);            // espera 1 segundo
        digitalWrite(29, LOW);  // desliga o pino 21

        fclose(file);
    }
    else
    {

        digitalWrite(29, LOW); // desliga o pino 21
    }

    return 0;
}