void setup()
{
    Serial.begin(9600);

    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);

    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);

    testLights();
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