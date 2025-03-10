// Używamy fotorezystora - kiedy zgasimy światło, zapala się dioda v2
int odczytanaWartosc = 0; //Zmienna do przechowywania odczytu ADC
int prog = 0; // Próg włączenia światła - ustawiamy potencjometrem

void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT); //Konfiguracja wyjść pod diodę LED
}

void loop() {
  odczytanaWartosc = analogRead(A5);//Odczytanie wartości z ADC
  prog = analogRead(A4);
  Serial.println(odczytanaWartosc);
  Serial.println("Aktualny próg" + String(prog));
  if (odczytanaWartosc < prog) {
     digitalWrite(8, HIGH);//Włączenie diody    
  } else {
     digitalWrite(8, LOW);//Wyłączenie diody      
  }
  
  delay(50);
}
