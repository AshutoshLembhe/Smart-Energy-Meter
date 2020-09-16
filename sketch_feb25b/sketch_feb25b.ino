int SensorPin= 1;
int raw=0;
void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop()
{
  // put your main code here, to run repeatedly:
  raw=analogRead(SensorPin);
  float mv=(raw/1024.0)*5000;
  float cel=mv/10;
  float far=(cel*9)/5+32;
  Serial.print(" Temperature=");
  Serial.print(cel);
  Serial.print("*C");
  delay(1000);
  Serial.print("\n Tempearture=");
  Serial.print(far);
  Serial.print("*F ");
  
  
}
