const int RAIN_PIN = D6;
const int PUMP_PIN = D7; // Pino de controle da bomba de água

void setup() {
  pinMode(RAIN_PIN, INPUT); // Configura o pino do sensor de chuva como entrada
  pinMode(PUMP_PIN, OUTPUT); // Configura o pino da bomba como saída
  digitalWrite(PUMP_PIN, LOW); // Garante que a bomba esteja desligada inicialmente
}

bool getRain() {
  bool sensorValue = digitalRead(RAIN_PIN); // Lê o estado do sensor de chuva
  if (sensorValue == 0) { // Verifica se há chuva (o sensor retorna 0 quando detecta água)
    Serial.println(F("Chuva detectada! Ligando a bomba de água."));
    digitalWrite(PUMP_PIN, HIGH); // Liga a bomba de água
  } else {
    Serial.println(F("Sem chuva. Bomba desligada."));
    digitalWrite(PUMP_PIN, LOW); // Desliga a bomba de água
  }
  return sensorValue == 0; // Retorna `true` se estiver chovendo
}

void loop() {
  getRain(); // Monitora o estado do sensor de chuva e controla a bomba
  delay(1000); // Aguarda 1 segundo antes de verificar novamente
}
