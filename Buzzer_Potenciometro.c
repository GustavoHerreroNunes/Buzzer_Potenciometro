/* Pequeno código para controle da frequência
* emitida por um potênciometro, a qual é informada
* ao usuário por meio do monitor Serial
*/

int Freque = 0;//Receberá a frequência

void setup()
{
  Serial.begin(9600);
  
  pinMode(2, OUTPUT);
  pinMode(7, INPUT);
  
  Serial.println("***********************************************");
}

void loop()
{
  
  Freque= map(analogRead(A0),0, 1023, 20, 2000);//Recebendo o valor obtido pela entrada A0(potenciometro) depois de uma conversão para os valores de frequência 20 à 2000 Hz
  
  Serial.print("Frequencia atual: ");
  Serial.print(Freque);
  Serial.println("Hz\n");
  
  tone(2, Freque, 2000);//Realização do toque na frequência desejada por 2s
  delay(3000);
  
}