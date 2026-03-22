#define led_verde   11
#define led_amarelo 10
#define led_vermelho 9
#define botao 7

void setup() {

  pinMode(led_verde, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_vermelho, OUTPUT);
  pinMode(botao, INPUT_PULLUP);

  digitalWrite(led_verde, HIGH);
  digitalWrite(led_amarelo, LOW);
  digitalWrite(led_vermelho, LOW);

}

void loop() {
  
  int status_do_botao = digitalRead(botao);

  if (status_do_botao == LOW){
    pisca_led(HIGH, LOW, LOW, 1500);
    pisca_led(LOW, HIGH, LOW, 2000);
    pisca_led(LOW, LOW, HIGH, 2500);
    
    digitalWrite(led_verde, HIGH);
    digitalWrite(led_vermelho, LOW);

  }

}
void pisca_led(int status_led_verde, int status_led_amarelo, int status_led_vermelho, int tempo){

  digitalWrite(led_verde, status_led_verde);
  digitalWrite(led_amarelo, status_led_amarelo);
  digitalWrite(led_vermelho, status_led_vermelho);
  delay(tempo);
  

}
