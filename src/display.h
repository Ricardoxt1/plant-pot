#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#include <faceHappy.h>
#include <faceSad.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define SCREEN_ADDRESS 0x3C

//#define PAGE_BUTTON D5

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire);

void setup() {
  // Inicializa o display
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("Falha ao inicializar o display OLED!"));
    for(;;);
  }
  display.clearDisplay();
}

void loop() {
  // Exibe a imagem 'Feliz'
  display.clearDisplay();
  display.drawBitmap((SCREEN_WIDTH - 64) / 2, 6, emocaofeliz, 64, 56, WHITE);
  display.display();
  delay(2000); // Aguarda 2 segundos

  // Exibe a imagem 'Sol'
  display.clearDisplay();
  display.drawBitmap((SCREEN_WIDTH - 64) / 2, 6, emocaosol, 64, 64, WHITE);
  display.display();
  delay(2000); // Aguarda 2 segundos
}

