#define zielona 8
#define czerwona 9

String odebraneDane = ""; //Pusty ciąg odebranych danych

void setup() {
  Serial.begin(9600); //Uruchomienie komunikacji
  pinMode(zielona, OUTPUT); //Konfiguracja wyjść
  pinMode(czerwona, OUTPUT);
  
  digitalWrite(zielona, LOW); //Wyłączamy diody
  digitalWrite(czerwona, LOW);
}

void loop() {
  if(Serial.available() > 0) { //Czy Arduino odebrało dane
    //Jeśli tak, to odczytujemy je do znaku końca linii i zapisz w zmiennej odebraneDane
    odebraneDane = Serial.readStringUntil('\n'); 
    
    if (odebraneDane == "zielona") { //Jeśli odebrano słowo "zielona"
      if (digitalRead(zielona) == LOW) {
        digitalWrite(zielona, HIGH);
      }
      else {
        digitalWrite(zielona, LOW); 
      }
    }
    
    else if (odebraneDane == "czerwona") { //Jeśli odebrano słowo "czerwona"
      if (digitalRead(czerwona) == LOW) {
        digitalWrite(czerwona, HIGH);
      }
      else {
        digitalWrite(czerwona, LOW); 
      }
    }

    else {
      Serial.println("Niepoprawne dane!");
      delay(1000);
    }
  }
}