// Używamy fotorezystora - kiedy zgasimy światło, zapala się dioda
int odczytanaWartosc = 0; //Zmienna do przechowywania odczytu ADC

void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT); //Konfiguracja wyjść pod diodę LED
}

void loop() {
  odczytanaWartosc = analogRead(A5);//Odczytanie wartości z ADC
  Serial.println(odczytanaWartosc);
  if (odczytanaWartosc < 100) {
     digitalWrite(8, HIGH);//Włączenie diody    
  } else {
     digitalWrite(8, LOW);//Wyłączenie diody      
  }
  
  delay(50);
}