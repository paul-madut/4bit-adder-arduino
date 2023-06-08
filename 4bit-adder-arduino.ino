#include <math.h>

void setup()
{
    // put your setup code here, to run once:

    // first nibble input pins
    int a1 = 2;
    int a2 = 3;
    int a3 = 4;
    int a4 = 5;

    // second nibble input pins
    int b1 = 9;
    int b2 = 10;
    int b3 = 11;
    int b4 = 12;

    // nibble as an array
    int a[] = {a1, a2, a3, a4};
    int b[] = {b1, b2, b3, b4};

    Serial.begin(9600);

    pinMode(a1, OUTPUT);
    pinMode(a2, OUTPUT);
    pinMode(a3, OUTPUT);
    pinMode(a4, OUTPUT);

    pinMode(b1, OUTPUT);
    pinMode(b2, OUTPUT);
    pinMode(b3, OUTPUT);
    pinMode(b4, OUTPUT);

    pinMode(A0, OUTPUT);
    pinMode(A1, OUTPUT);
    pinMode(A2, OUTPUT);
    pinMode(A3, OUTPUT);

    countInput(b, bits(4));
}

void loop()
{
}
void testLights()
{

    for (int a = 2; a < 6; a++)
    {
        digitalWrite(a, HIGH);
        delay(1000);
        digitalWrite(a, LOW);
    }
    for (int b = 9; b < 13; b++)
    {
        digitalWrite(b, HIGH);
        delay(1000);
        digitalWrite(b, LOW);
    }
}

void countInput(int array[], int bits)
{
    for (int number = 0; number < bits; number++)
    {
        if (1 << 0 & number)
        {
            digitalWrite(array[0], HIGH);
        }
        if (1 << 1 & number)
        {
            digitalWrite(array[1], HIGH);
        }
        if (1 << 2 & number)
        {
            digitalWrite(array[2], HIGH);
        }
        if (1 << 3 & number)
        {
            digitalWrite(array[3], HIGH);
        }
        delay(1000);

        digitalWrite(array[0], LOW);
        digitalWrite(array[1], LOW);
        digitalWrite(array[2], LOW);
        digitalWrite(array[3], LOW);
    }
}

int bits(int numberOfBits)
{
    return pow(2, numberOfBits);
}
