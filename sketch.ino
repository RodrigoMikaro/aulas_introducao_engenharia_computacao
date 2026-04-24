// ------- SEMÁFORO EM AULA ------- //

#define led_green_1 2
#define led_yellow_1 3 
#define led_red_1 4

#define led_green_2 5
#define led_yellow_2 6
#define led_red_2 7


void setup() {
  pinMode(led_green_1, OUTPUT);
  pinMode(led_yellow_1, OUTPUT);
  pinMode(led_red_1, OUTPUT);
  pinMode(led_green_2, OUTPUT);
  pinMode(led_yellow_2, OUTPUT);
  pinMode(led_red_2, OUTPUT);
}


void loop() {
  digitalWrite(led_green_1, 1);
  digitalWrite(led_yellow_1, 0);
  digitalWrite(led_red_1, 0);
  digitalWrite(led_green_2, 0);
  digitalWrite(led_yellow_2, 0);
  digitalWrite(led_red_2, 1);
  delay(5000);

  digitalWrite(led_green_1, 0);
  digitalWrite(led_yellow_1, 1);
  digitalWrite(led_red_1, 0);
  digitalWrite(led_green_2, 0);
  digitalWrite(led_yellow_2, 0);
  digitalWrite(led_red_2, 1);  
  delay(1000);

  digitalWrite(led_green_1, 0);
  digitalWrite(led_yellow_1, 0);
  digitalWrite(led_red_1, 1);
  digitalWrite(led_green_2, 1);
  digitalWrite(led_yellow_2, 0);
  digitalWrite(led_red_2, 0);  
  delay(5000);

  digitalWrite(led_green_1, 0);
  digitalWrite(led_yellow_1, 0);
  digitalWrite(led_red_1, 1);
  digitalWrite(led_green_2, 0);
  digitalWrite(led_yellow_2, 1);
  digitalWrite(led_red_2, 0);  
  delay(1000);
}
