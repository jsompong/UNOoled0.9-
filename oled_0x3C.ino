#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_RESET 4
#define LED_12 12
#define LED_11 11
#define LED_10 10
#define LED_9 9
#define LED_8 8
#define LED_7 7
#define LED_6 6
#define LED_5 5
#define LED_3 3

Adafruit_SSD1306 display(OLED_RESET);

//char foo[] = {"....Hello YELLOW...."};   //("Hello,YELLOW!");
//char foo[] = {".......ASCII ......."};
char foo[] = {"ASCII / Ana[A0] Read"};

char firstName = "Sompong";
char lastName = "Jongmeesuk";
char fullName = firstName + " " + lastName;
char goo[] = {"Sompong Jongmeesuk"};

String message = "Fawad Khan!";
int i = 0;
int j = 0;
int dela = 2;

void setup() {
pinMode(LED_BUILTIN, OUTPUT);   pinMode(LED_12, OUTPUT);    pinMode(LED_11, OUTPUT);        pinMode(LED_10, OUTPUT);
pinMode(LED_9, OUTPUT);         pinMode(LED_8, OUTPUT);     pinMode(LED_7, OUTPUT);         pinMode(LED_6, OUTPUT);
pinMode(LED_5, OUTPUT);         pinMode(LED_3, OUTPUT);

Serial.begin(2400);
//while (!Serial);

// by default, we'll generate the high voltage from the 3.3v line internally! (neat!)
// display.begin(SSD1306_SWITCHCAPVCC, 0x78); 
 display.begin(SSD1306_SWITCHCAPVCC, 0x3C); 
// initialize with the I2C addr 0x3D (for the 128x64)
// init done

// Show image buffer on the display hardware.
// Since the buffer is intialized with an Adafruit splashscreen
// internally, this will display the splashscreen.
display.display();
Serial.print("RUN2");
delay(100);

display.clearDisplay();   // Clear the buffer.
display.setTextSize(1);
display.setTextColor(WHITE);

display.setCursor(0,0);
display.println("A4 = SDA , A5 = SCL");
//display.println(char(j));
display.println("3.3V Oled!");
//display.println(char(i) + char(j));
//display.println("");
display.setTextSize(1);
display.println(goo);
//display.println("counts"+ 123);
display.println("keyes!"+ millis());
//display.println("keyestudio");
display.display();
}

void loop() {
goo[0] = 'J';

digitalWrite(LED_BUILTIN, HIGH);  delay(dela);   digitalWrite(LED_12, HIGH);  delay(dela);
digitalWrite(LED_11, HIGH);  delay(dela);   digitalWrite(LED_10, HIGH);  delay(dela);
digitalWrite(LED_9, HIGH);  delay(dela);   digitalWrite(LED_8, HIGH);  delay(dela);
digitalWrite(LED_7, HIGH);  delay(dela);   digitalWrite(LED_6, HIGH);  delay(dela);
digitalWrite(LED_5, HIGH);  delay(dela);   digitalWrite(LED_3, HIGH);  delay(dela);

Serial.println(goo);
 strcpy(goo, "000000000000000000000");
  Serial.println(goo);

display.clearDisplay();
display.setTextSize(1);
// display.setTextColor(WHITE);
display.setCursor(0,0);
//display.println(fullName);
display.println(foo);
display.print(0 + char(j));
display.print(" : ");
//display.setCursor(0,3);
display.println(char(j));
display.setTextSize(2);
//display.setTextSize(1);
display.println(analogRead(A0));

display.display();
Serial.println("RUN3 ");


//foo++;

j++; //  'A' ++
if (j == 128)     { j = 0; }

digitalWrite(LED_BUILTIN, LOW);   delay(dela);     digitalWrite(LED_12, LOW);   delay(dela);
digitalWrite(LED_11, LOW);   delay(dela);          digitalWrite(LED_10, LOW);   delay(dela);
digitalWrite(LED_9, LOW);   delay(dela);          digitalWrite(LED_8, LOW);   delay(dela);
digitalWrite(LED_7, LOW);   delay(dela);          digitalWrite(LED_6, LOW);   delay(dela);
digitalWrite(LED_5, LOW);   delay(dela);          digitalWrite(LED_3, LOW);   delay(dela);
}