#define redPin 8
#define greenPin 9

void setup(){
  Serial.begin(9600); //Uruchamiamy transmisję
  
  pinMode(redPin, OUTPUT); //Wyjście diody czerwonej
  pinMode(greenPin, OUTPUT); //Wyjście diody zielonej
  pinMode(10, INPUT_PULLUP); //Przycisk
  
  digitalWrite(redPin, LOW); //Wyłączenie obu diod
  digitalWrite(greenPin, LOW);
}
void loop() {
  if (digitalRead(10) == LOW) { //Jeśli przycisk jest wciśnięty
    digitalWrite(greenPin, HIGH); //Włączenie diody zielonej
    digitalWrite(redPin, LOW); //Wyłączenie diody czerwonej
  } else { //Jeśli przycisk nie jest wciśnięty
    digitalWrite(greenPin, LOW); //Wyłączenie diody zielonej
    digitalWrite(redPin, HIGH); //Włączenie diody czerwonej
    Serial.println("Uwaga! Alarm! Okno nie jest zamkniete!");

    while (digitalRead(10) == HIGH) {
      delay(25);
    }
  }
}
