int odczytanaWartoscGora = 0; //Zmienne do przechowywania odczytu ADC
int odczytanaWartoscDol = 0; 

void setup() {
  Serial.begin(9600);
}

void loop() {
  odczytanaWartoscGora = analogRead(A5);//Odczytanie wartości z ADC
  odczytanaWartoscDol = analogRead(A4);//Odczytanie wartości z ADC  
  
  Serial.println("Odczytana wartość GÓRA: " + String(odczytanaWartoscGora));
  Serial.println("Odczytana wartość DOL: " + String(odczytanaWartoscDol));
  
  if (odczytanaWartoscGora > odczytanaWartoscDol) {
    Serial.println("Największe natężenie swiatła na górnym fotorezystorze");
  } else {
    Serial.println("Największe natężenie swiatła na dolnym fotorezystorze");
  }
  
  delay(1000);
}