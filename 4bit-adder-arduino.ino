void setup()
{

    int a1 = 2;
    int a2 = 3;
    int a3 = 4;
    int a4 = 5;

    int b1 = 9;
    int b2 = 10;
    int b3 = 11;
    int b4 = 12;

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

    for (int number = 0; number < 16; number++)
    {
        if (1 << 0 & number)
        {
            digitalWrite(2, HIGH);
        }
        if (1 << 1 & number)
        {
            digitalWrite(3, HIGH);
        }
        if (1 << 2 & number)
        {
            digitalWrite(a3, HIGH);
        }
        if (1 << 3 & number)
        {
            digitalWrite(a4, HIGH);
        }
        delay(1000);

        digitalWrite(a[0], LOW);
        digitalWrite(a[1], LOW);
        digitalWrite(a[2], LOW);
        digitalWrite(a[3], LOW);
    }
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