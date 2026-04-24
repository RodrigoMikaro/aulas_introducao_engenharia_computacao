// ------- SEMÁFORO EM AULA ------- //

#define led_green_1 2



void setup() {
  pinMode(led_green_1, OUTPUT);

}


void loop() {
  digitalWrite(led_green_1, 1);
  delay(5000);

  digitalWrite(led_green_1, 0);
  delay(1000);
}
