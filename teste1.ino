#define ativa_motor_cesta 13
#define ativa_motor_sensor 12
#define sensor_ponto 10
#define sensor_motor 11
int pontos = 0;

void setup() {
  pinMode(ativa_motor_cesta, OUTPUT);
  pinMode(ativa_motor_sensor, OUTPUT);
  pinMode(sensor_motor, INPUT_PULLUP);
  pinMode(sensor_ponto, INPUT_PULLUP);

}

void loop() {
  if(!digitalRead(sensor_motor)==true){
    digitalWrite(ativa_motor_sensor, LOW);
  } else {
    digitalWrite(ativa_motor_sensor, HIGH);
  }
  digitalWrite(led, HIGH);
}

void contapontos(){
  if(!digitalRead(sensor_ponto)==true){
    ponto+2
  }
}
