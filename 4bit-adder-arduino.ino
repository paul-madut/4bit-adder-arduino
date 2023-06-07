int a1 = 2;
int a2 = 3;
int a3 = 4;
int a4 = 5;

int b1 = 9;
int b2 = 10;
int b3 = 11;
int b4 = 12;

void setup()
{
    Serial.begin(9600);

    pinMode(a1, OUTPUT);
    pinMode(a2, OUTPUT);
    pinMode(a3, OUTPUT);
    pinMode(a4, OUTPUT);

    pinMode(b1, OUTPUT);
    pinMode(b2, OUTPUT);
    pinMode(b3, OUTPUT);
    pinMode(b4, OUTPUT);

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