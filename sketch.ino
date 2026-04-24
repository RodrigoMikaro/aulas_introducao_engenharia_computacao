// ------- SEMÁFORO EM AULA ------- //

#define led_green_1 2
#define led_yellow_1 3 
#define led_red_1 4


void setup() {
  pinMode(led_green_1, OUTPUT);
  pinMode(led_yellow_1, OUTPUT);
  pinMode(led_red_1, OUTPUT);
}


void loop() {
  digitalWrite(led_green_1, 1);
  digitalWrite(led_yellow_1, 0);
  digitalWrite(led_red_1, 0);
  delay(5000);

  digitalWrite(led_green_1, 0);
  digitalWrite(led_yellow_1, 1);
  digitalWrite(led_red_1, 0);
  delay(1000);

  digitalWrite(led_green_1, 0);
  digitalWrite(led_yellow_1, 0);
  digitalWrite(led_red_1, 1);
  delay(5000);

  digitalWrite(led_green_1, 0);
  digitalWrite(led_yellow_1, 0);
  digitalWrite(led_red_1, 1);
  delay(1000);
}
