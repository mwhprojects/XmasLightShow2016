#include "FastLED.h"
#define LED_TYPE    WS2812B
#define COLOR_ORDER GRB
CRGB treeleds[9];
CRGB matrixleds[30];
uint8_t gHue = 0;
int row[][5] = {
  {5, 6, 17, 18, 29},
  {4, 7, 16, 19, 28},
  {3, 8, 15, 20, 27},
  {2, 9, 14, 21, 26},
  {1, 10, 13, 22, 25},
  {0, 11, 12, 23, 24}
};

String receivedData;

// Global variables for random use.
int a, b, c, d, e, f, i;

void setup() {
  FastLED.addLeds<LED_TYPE, A4, COLOR_ORDER>(treeleds, 9).setCorrection(TypicalLEDStrip);
  FastLED.addLeds<LED_TYPE, A5, COLOR_ORDER>(matrixleds, 30).setCorrection(TypicalLEDStrip);
  FastLED.clear();
  FastLED.show();

  Serial.begin(9600);
}

void loop() {
  // Get serial command from VB program when it comes in.
  while (Serial.available() > 0) {
    receivedData = Serial.readString();
  }
  // SERIAL COMMAND: Pattern stop.
  if (receivedData == "stop") {
    FastLED.clear();
    FastLED.show();
  }


  // SERIAL COMMAND: CLS16 - "Wizards in Winter" by Trans Siberian Orchestra
  if (receivedData == "cls2") {
    // Wait for song to begin.
    delay(1150);

    int stageloopmatrix[] = {0, 1, 2, 3, 4, 5, 6, 17, 18, 29, 28, 27, 26, 25, 24}; // 15 items
    int stagelooptree[] = {2, 3, 4, 5, 6, 7, 0, 1, 8}; // 9 items
    for (a = 0; a < 15; a++) {
      if (a % 1 == 0)matrixleds[stageloopmatrix[a]] = CRGB(150, 0, 0);
      if (a % 2 == 0)matrixleds[stageloopmatrix[a]] = CRGB(0, 150, 0);
      if (a % 3 == 0)matrixleds[stageloopmatrix[a]] = CRGB(0, 0, 150);
      FastLED.show();
      delay(220);
    }
    for (a = 0; a < 8; a++) {
      if (a % 1 == 0)treeleds[stagelooptree[a]] = CRGB(150, 0, 0);
      if (a % 2 == 0)treeleds[stagelooptree[a]] = CRGB(0, 150, 0);
      if (a % 3 == 0)treeleds[stagelooptree[a]] = CRGB(0, 0, 150);
      FastLED.show();
      delay(220);
    }

    treeleds[5] = CRGB(50, 50, 0);
    FastLED.show();
    delay(200);
    treeleds[4] = CRGB(50, 50, 0);
    FastLED.show();
    delay(190);
    treeleds[6] = CRGB(50, 50, 0);
    FastLED.show();
    delay(200);
    treeleds[3] = CRGB(50, 50, 0);
    FastLED.show();
    delay(190);
    treeleds[7] = CRGB(50, 50, 0);
    FastLED.show();
    delay(200);
    treeleds[0] = CRGB(50, 50, 0);
    FastLED.show();
    delay(190);
    treeleds[2] = CRGB(50, 50, 0);
    treeleds[1] = CRGB(50, 50, 0);
    FastLED.show();
    delay(220);

    //
    for (a = 50; a < 250; a++) {
      for (b = 0; b < 8; b++) treeleds[b] = CRGB(a, a, 0);
      FastLED.show();
      delay(1);
    }
    for (a = 250; a > 50; a--) {
      for (b = 0; b < 8; b++) treeleds[b] = CRGB(250, a, 0);
      FastLED.show();
      delay(3);
    }
    for (a = 50; a < 250; a++) {
      for (b = 0; b < 8; b++) treeleds[b] = CRGB(250 - a, a, a);
      FastLED.show();
      delay(2);
    }
    for (a = 250; a > 50; a--) {
      for (b = 0; b < 8; b++) treeleds[b] = CRGB(0, a, a);
      FastLED.show();
      delay(3);
    }
    for (a = 50; a < 250; a++) {
      for (b = 0; b < 8; b++) treeleds[b] = CRGB(a, 50, a);
      FastLED.show();
      delay(2);
    }
    for (a = 250; a > 50; a--) {
      for (b = 0; b < 8; b++) treeleds[b] = CRGB(0, a, 250 - a);
      FastLED.show();
      delay(3);
    }

    for (a = 175; a > 0; a--) {
      for (b = 0; b < 8; b++) treeleds[b] = CRGB(a, a, a);
      FastLED.show();
      delay(1);
    }

    //
    delay(150);
    matrixleds[0] = CRGB(0, 0, 0);
    matrixleds[24] = CRGB(0, 0, 0);
    FastLED.show();
    delay(220);
    matrixleds[1] = CRGB(0, 0, 0);
    matrixleds[25] = CRGB(0, 0, 0);
    FastLED.show();
    delay(220);
    matrixleds[2] = CRGB(0, 0, 0);
    matrixleds[26] = CRGB(0, 0, 0);
    FastLED.show();
    delay(220);
    matrixleds[3] = CRGB(0, 0, 0);
    matrixleds[27] = CRGB(0, 0, 0);
    FastLED.show();
    delay(220);
    matrixleds[4] = CRGB(0, 0, 0);
    matrixleds[28] = CRGB(0, 0, 0);
    FastLED.show();
    delay(220);
    matrixleds[5] = CRGB(0, 0, 0);
    matrixleds[29] = CRGB(0, 0, 0);
    FastLED.show();
    //delay(220);
    matrixleds[6] = CRGB(0, 0, 0);
    matrixleds[17] = CRGB(0, 0, 0);
    matrixleds[18] = CRGB(0, 0, 0);
    FastLED.show();
    delay(250);

    // 0:14
    for (a = 255; a > 100; a--) {
      for (b = 0; b < 30; b++)matrixleds[b] = CRGB(a, 0, 0);
      FastLED.show();
      delayMicroseconds(1);
    }
    for (a = 255; a > 100; a--) {
      for (b = 0; b < 9; b++)treeleds[b] = CRGB(a, 0, 0);
      FastLED.show();
      delayMicroseconds(1);
    }
    for (a = 255; a > 100; a--) {
      for (b = 0; b < 30; b++)matrixleds[b] = CRGB(0, a, 0);
      FastLED.show();
      delayMicroseconds(1);
    }
    for (a = 255; a > 100; a--) {
      for (b = 0; b < 9; b++)treeleds[b] = CRGB(0, a, 0);
      FastLED.show();
      delayMicroseconds(1);
    }
    for (a = 255; a > 100; a--) {
      for (b = 0; b < 30; b++)matrixleds[b] = CRGB(0, 0, a);
      FastLED.show();
      delayMicroseconds(1);
    }
    for (a = 255; a > 100; a--) {
      for (b = 0; b < 9; b++)treeleds[b] = CRGB(0, 0, a);
      FastLED.show();
      delayMicroseconds(1);
    }
    for (a = 255; a > 100; a--) {
      for (b = 0; b < 30; b++)matrixleds[b] = CRGB(a, a, 0);
      FastLED.show();
      delayMicroseconds(1);
    }
    for (a = 255; a > 100; a--) {
      for (b = 0; b < 9; b++)treeleds[b] = CRGB(a, a, 0);
      FastLED.show();
      delayMicroseconds(1);
    }
    for (a = 255; a > 100; a--) {
      for (b = 0; b < 30; b++)matrixleds[b] = CRGB(a, 0, a);
      FastLED.show();
      delayMicroseconds(1);
    }
    for (a = 255; a > 100; a--) {
      for (b = 0; b < 9; b++)treeleds[b] = CRGB(a, 0, a);
      FastLED.show();
      delayMicroseconds(1);
    }
    for (a = 255; a > 100; a--) {
      for (b = 0; b < 30; b++)matrixleds[b] = CRGB(0, a, a);
      FastLED.show();
      delayMicroseconds(1);
    }
    for (a = 255; a > 100; a--) {
      for (b = 0; b < 9; b++)treeleds[b] = CRGB(0, a, a);
      FastLED.show();
      delayMicroseconds(1);
    }
    for (a = 150; a > 0; a--) {
      for (b = 0; b < 30; b++)matrixleds[b] = CRGB(0, 0, a);
      for (b = 0; b < 9; b++)treeleds[b] = CRGB(0, 0, a);
      FastLED.show();
      delayMicroseconds(1);
    }

    //
    delay(150);
    for (a = 0; a < 5; a++) matrixleds[row[5][a]] = CRGB(0, 0, 150);
    FastLED.show();
    delay(150);
    for (a = 0; a < 5; a++) matrixleds[row[4][a]] = CRGB(0, 150, 0);
    FastLED.show();
    delay(150);
    for (a = 0; a < 5; a++) matrixleds[row[3][a]] = CRGB(150, 0, 0);
    FastLED.show();
    delay(150);
    for (a = 0; a < 5; a++) matrixleds[row[2][a]] = CRGB(0, 0, 150);
    FastLED.show();
    delay(150);
    for (a = 0; a < 5; a++) matrixleds[row[1][a]] = CRGB(0, 150, 0);
    FastLED.show();
    delay(150);
    for (a = 0; a < 5; a++) matrixleds[row[0][a]] = CRGB(150, 0, 0);
    FastLED.show();
    delay(350);

    //
    for (a = 255; a > 100; a--) {
      for (b = 0; b < 5; b++) matrixleds[row[0][b]] = CRGB(a, 0, 0);
      FastLED.show();
      delayMicroseconds(1);
    }
    for (a = 255; a > 100; a--) {
      for (b = 0; b < 9; b++)treeleds[b] = CRGB(a, 0, 0);
      FastLED.show();
      delayMicroseconds(1);
    }
    for (a = 255; a > 100; a--) {
      for (b = 0; b < 5; b++) matrixleds[row[1][b]] = CRGB(0, a, 0);
      FastLED.show();
      delayMicroseconds(1);
    }
    for (a = 255; a > 100; a--) {
      for (b = 0; b < 9; b++)treeleds[b] = CRGB(0, a, 0);
      FastLED.show();
      delayMicroseconds(1);
    }
    for (a = 255; a > 100; a--) {
      for (b = 0; b < 5; b++) matrixleds[row[2][b]] = CRGB(0, 0, a);
      FastLED.show();
      delayMicroseconds(1);
    }
    for (a = 255; a > 100; a--) {
      for (b = 0; b < 9; b++)treeleds[b] = CRGB(0, 0, a);
      FastLED.show();
      delayMicroseconds(1);
    }
    for (a = 255; a > 100; a--) {
      for (b = 0; b < 5; b++) matrixleds[row[3][b]] = CRGB(a, 0, 0);
      FastLED.show();
      delayMicroseconds(1);
    }
    for (a = 255; a > 100; a--) {
      for (b = 0; b < 9; b++)treeleds[b] = CRGB(a, 0, 0);
      FastLED.show();
      delayMicroseconds(1);
    }
    for (a = 255; a > 100; a--) {
      for (b = 0; b < 5; b++) matrixleds[row[4][b]] = CRGB(0, a, 0);
      FastLED.show();
      delayMicroseconds(1);
    }
    for (a = 255; a > 100; a--) {
      for (b = 0; b < 9; b++)treeleds[b] = CRGB(0, a, 0);
      FastLED.show();
      delayMicroseconds(1);
    }
    for (a = 255; a > 100; a--) {
      for (b = 0; b < 5; b++) matrixleds[row[5][b]] = CRGB(0, 0, a);
      FastLED.show();
      delayMicroseconds(1);
    }
    for (a = 255; a > 100; a--) {
      for (b = 0; b < 9; b++)treeleds[b] = CRGB(0, 0, a);
      FastLED.show();
      delayMicroseconds(1);
    }
    for (a = 150; a > 0; a--) {
      for (b = 0; b < 30; b++)matrixleds[b] = CRGB(a, a, a);
      for (b = 0; b < 9; b++)treeleds[b] = CRGB(a, a, a);
      FastLED.show();
      delayMicroseconds(1);
    }

    //
    delay(250);
    treeleds[6] = CRGB(175, 0, 0);
    FastLED.show();
    delay(250);
    treeleds[4] = CRGB(175, 0, 0);
    FastLED.show();
    delay(250);
    treeleds[1] = CRGB(175, 0, 0);
    FastLED.show();
    delay(250);
    treeleds[2] = CRGB(175, 0, 0);
    FastLED.show();
    delay(250);
    treeleds[5] = CRGB(175, 0, 0);
    FastLED.show();
    delay(250);
    for (a = 0; a < 30; a++)matrixleds[a] = CRGB(255, 0, 0);
    for (a = 0; a < 9; a++)treeleds[a] = CRGB(255, 0, 0);
    FastLED.show();
    delay(3);
    for (a = 0; a < 30; a++)matrixleds[a] = CRGB(0, 0, 0);
    for (a = 0; a < 9; a++)treeleds[a] = CRGB(0, 0, 0);
    FastLED.show();
    delay(350);

    treeleds[6] = CRGB(175, 0, 170);
    FastLED.show();
    delay(250);
    treeleds[4] = CRGB(175, 0, 170);
    FastLED.show();
    delay(250);
    treeleds[1] = CRGB(175, 0, 170);
    FastLED.show();
    delay(250);
    treeleds[2] = CRGB(175, 0, 170);
    FastLED.show();
    delay(250);
    treeleds[5] = CRGB(175, 0, 170);
    FastLED.show();

    delay(250);
    for (a = 0; a < 30; a++)matrixleds[a] = CRGB(255, 0, 255);
    for (a = 0; a < 9; a++)treeleds[a] = CRGB(255, 0, 255);
    FastLED.show();
    delay(3);
    for (a = 0; a < 30; a++)matrixleds[a] = CRGB(0, 0, 0);
    for (a = 0; a < 9; a++)treeleds[a] = CRGB(0, 0, 0);
    FastLED.show();
    delay(350);
    //

    for (a = 0; a < 30; a++)matrixleds[a] = CRGB(255, 255, 0);
    for (a = 0; a < 9; a++)treeleds[a] = CRGB(255, 255, 0);
    FastLED.show();
    delay(5);
    for (a = 0; a < 30; a++)matrixleds[a] = CRGB(0, 0, 0);
    for (a = 0; a < 9; a++)treeleds[a] = CRGB(0, 0, 0);
    FastLED.show();
    delay(250);
    for (a = 0; a < 30; a++)matrixleds[a] = CRGB(0, 255, 0);
    for (a = 0; a < 9; a++)treeleds[a] = CRGB(0, 255, 0);
    FastLED.show();
    delay(5);
    for (a = 0; a < 30; a++)matrixleds[a] = CRGB(0, 0, 0);
    for (a = 0; a < 9; a++)treeleds[a] = CRGB(0, 0, 0);
    FastLED.show();
    delay(775);

    for (b = 0; b < 6; b++)matrixleds[row[b][0]] = CRGB(112, 128, 144);
    FastLED.show();
    delay(250);
    for (b = 0; b < 6; b++)matrixleds[row[b][4]] = CRGB(112, 128, 144);
    FastLED.show();
    delay(250);
    for (b = 0; b < 6; b++)matrixleds[row[b][1]] = CRGB(112, 128, 144);
    FastLED.show();
    delay(350);
    for (b = 0; b < 6; b++)matrixleds[row[b][3]] = CRGB(112, 128, 144);
    FastLED.show();
    delay(350);
    for (b = 0; b < 6; b++)matrixleds[row[b][2]] = CRGB(112, 128, 144);
    FastLED.show();
    delay(350);

    //
    CRGB col;
    for (c = 0; c < 19; c++) {
      if (c == 0)col = CRGB(255, 0, 0);
      if (c == 1)col = CRGB(255, 128, 0);
      if (c == 2)col = CRGB(255, 255, 0);
      if (c == 3)col = CRGB(128, 255, 0);
      if (c == 4)col = CRGB(0, 255, 0);
      if (c == 5)col = CRGB(0, 255, 128);
      if (c == 6)col = CRGB(0, 255, 255);
      if (c == 7)col = CRGB(0, 128, 255);
      if (c == 8)col = CRGB(0, 0, 255);
      if (c == 9)col = CRGB(127, 0, 255);
      if (c == 10)col = CRGB(255, 0, 255);
      if (c == 11)col = CRGB(255, 0, 128);
      if (c == 12)col = CRGB(255, 0, 0);
      if (c == 13)col = CRGB(255, 128, 0);
      if (c == 14)col = CRGB(255, 255, 0);
      if (c == 15)col = CRGB(128, 255, 0);
      if (c == 16)col = CRGB(0, 255, 0);
      if (c == 17)col = CRGB(0, 255, 128);
      if (c == 18)col = CRGB(0, 255, 255);

      treeleds[5] = col;
      FastLED.show();
      delay(25);
      treeleds[6] = col ;
      treeleds[4] = col ;
      FastLED.show();
      delay(25);
      treeleds[3] = col;
      treeleds[7] = col ;
      FastLED.show();
      delay(25);
      treeleds[0] = col ;
      treeleds[2] = col ;
      FastLED.show();
      delay(25);
      treeleds[1] = col ;
      FastLED.show();
      delay(25);
      for (b = 0; b < 5; b++)matrixleds[row[5][b]] = col ;
      FastLED.show();
      delay(25);
      for (b = 0; b < 5; b++)matrixleds[row[4][b]] = col ;
      FastLED.show();
      delay(25);
      for (b = 0; b < 5; b++)matrixleds[row[3][b]] = col ;
      FastLED.show();
      delay(25);
      for (b = 0; b < 5; b++)matrixleds[row[2][b]] = col ;
      FastLED.show();
      delay(25);
      for (b = 0; b < 5; b++)matrixleds[row[1][b]] = col ;
      FastLED.show();
      delay(25);
      for (b = 0; b < 5; b++)matrixleds[row[0][b]] = col ;
      FastLED.show();
    }

    for (a = 200; a >= 0; a -= 5) {
      for (b = 0; b < 30; b++)matrixleds[b] = CRGB(a, a, a) ;
      for (b = 0; b < 9; b++)treeleds[b] = CRGB(a, a, a) ;
      FastLED.show();
      delay(1);
    }

    //
    delay(200);
    for (a = 0; a <= 5; a++) {
      matrixleds[a] = CRGB(0, 100, 0);
      FastLED.show();
      delay(250);
    }

    for (d = 0; d < 2; d++) {
      for (c = 0; c < 15; c++) {
        if (c == 0)col = CRGB(255, 0, 0);
        if (c == 1)col = CRGB(255, 128, 0);
        if (c == 2)col = CRGB(255, 255, 0);
        if (c == 3)col = CRGB(128, 255, 0);
        if (c == 4)col = CRGB(0, 255, 0);
        if (c == 5)col = CRGB(0, 255, 128);
        if (c == 6)col = CRGB(0, 255, 255);
        if (c == 7)col = CRGB(0, 128, 255);
        if (c == 8)col = CRGB(0, 0, 255);
        if (c == 9)col = CRGB(127, 0, 255);
        if (c == 10)col = CRGB(255, 0, 255);
        if (c == 11)col = CRGB(255, 0, 128);
        if (c == 12)col = CRGB(255, 0, 0);
        if (c == 13)col = CRGB(255, 128, 0);
        if (c == 14)col = CRGB(255, 255, 0);

        treeleds[7] = col;
        for (b = 0; b < 6; b++)matrixleds[row[b][0]] = col ;
        FastLED.show();
        delay(30);
        treeleds[6] = col ;
        treeleds[0] = col ;
        for (b = 0; b < 6; b++)matrixleds[row[b][1]] = col ;
        FastLED.show();
        delay(30);
        treeleds[1] = col;
        treeleds[5] = col ;
        for (b = 0; b < 6; b++)matrixleds[row[b][2]] = col ;
        FastLED.show();
        delay(30);
        treeleds[4] = col ;
        treeleds[2] = col ;
        for (b = 0; b < 6; b++)matrixleds[row[b][3]] = col ;
        FastLED.show();
        delay(30);
        treeleds[3] = col ;
        for (b = 0; b < 6; b++)matrixleds[row[b][4]] = col ;
        FastLED.show();
        delay(30);
      }
    }

    for (a = 200; a >= 0; a -= 5) {
      for (b = 0; b < 30; b++)matrixleds[b] = CRGB(a, a, a) ;
      for (b = 0; b < 9; b++)treeleds[b] = CRGB(a, a, a) ;
      FastLED.show();
      delay(1);
    }

    //
    for (a = 0; a < 16; a++) {
      b = rand() % 5;
      matrixleds[row[0][b]] = CRGB(255, 0, 0);
      FastLED.show();
      delay(20);
      matrixleds[row[0][b]] = CRGB(0, 0, 0);
      FastLED.show();
    }
    for (a = 0; a < 16; a++) {
      b = rand() % 5;
      matrixleds[row[1][b]] = CRGB(255, 0, 0);
      matrixleds[row[2][b]] = CRGB(255, 0, 0);
      FastLED.show();
      delay(20);
      matrixleds[row[1][b]] = CRGB(0, 0, 0);
      matrixleds[row[2][b]] = CRGB(0, 0, 0);
      FastLED.show();
    }
    for (a = 0; a < 16; a++) {
      b = rand() % 5;
      matrixleds[row[3][b]] = CRGB(255, 0, 0);
      matrixleds[row[4][b]] = CRGB(255, 0, 0);
      FastLED.show();
      delay(20);
      matrixleds[row[3][b]] = CRGB(0, 0, 0);
      matrixleds[row[4][b]] = CRGB(0, 0, 0);
      FastLED.show();
    }
    for (a = 0; a < 16; a++) {
      b = rand() % 5;
      matrixleds[row[5][b]] = CRGB(255, 0, 0);
      FastLED.show();
      delay(20);
      matrixleds[row[5][b]] = CRGB(0, 0, 0);
      FastLED.show();
    }
    for (b = 0; b < 9; b++) treeleds[b] = CRGB(0, 255, 0);
    FastLED.show();
    delay(15);
    for (b = 0; b < 9; b++) treeleds[b] = CRGB(0, 0, 0);
    FastLED.show();
    delay(250);

    for (a = 0; a < 16; a++) {
      b = rand() % 5;
      matrixleds[row[0][b]] = CRGB(0, 255, 0);
      FastLED.show();
      delay(15);
      matrixleds[row[0][b]] = CRGB(0, 0, 0);
      FastLED.show();
    }
    for (a = 0; a < 16; a++) {
      b = rand() % 5;
      matrixleds[row[1][b]] = CRGB(0, 255, 0);
      matrixleds[row[2][b]] = CRGB(0, 255, 0);
      FastLED.show();
      delay(15);
      matrixleds[row[1][b]] = CRGB(0, 0, 0);
      matrixleds[row[2][b]] = CRGB(0, 0, 0);
      FastLED.show();
    }
    for (a = 0; a < 16; a++) {
      b = rand() % 5;
      matrixleds[row[3][b]] = CRGB(0, 255, 0);
      matrixleds[row[4][b]] = CRGB(0, 255, 0);
      FastLED.show();
      delay(15);
      matrixleds[row[3][b]] = CRGB(0, 0, 0);
      matrixleds[row[4][b]] = CRGB(0, 0, 0);
      FastLED.show();
    }
    for (a = 0; a < 16; a++) {
      b = rand() % 5;
      matrixleds[row[5][b]] = CRGB(0, 255, 0);
      FastLED.show();
      delay(15);
      matrixleds[row[5][b]] = CRGB(0, 0, 0);
      FastLED.show();
    }
    for (b = 0; b < 9; b++) treeleds[b] = CRGB(0, 0, 255);
    FastLED.show();
    delay(15);
    for (b = 0; b < 9; b++) treeleds[b] = CRGB(0, 0, 0);
    FastLED.show();
    delay(250);

    for (a = 0; a < 16; a++) {
      b = rand() % 5;
      matrixleds[row[0][b]] = CRGB(0, 0, 255);
      c = rand() % 8;
      treeleds[c] = CRGB(0, 0, 50);
      FastLED.show();
      delay(20);
      matrixleds[row[0][b]] = CRGB(0, 0, 0);
      treeleds[c] = CRGB(0, 0, 0);
      FastLED.show();
    }
    for (a = 0; a < 16; a++) {
      b = rand() % 5;
      matrixleds[row[0][b]] = CRGB(0, 0, 255);
      matrixleds[row[1][b]] = CRGB(0, 0, 255);
      matrixleds[row[2][b]] = CRGB(0, 0, 25);
      c = rand() % 8;
      treeleds[c] = CRGB(0, 0, 50);
      FastLED.show();
      delay(20);
      matrixleds[row[0][b]] = CRGB(0, 0, 0);
      matrixleds[row[1][b]] = CRGB(0, 0, 0);
      matrixleds[row[2][b]] = CRGB(0, 0, 0);
      treeleds[c] = CRGB(0, 0, 0);
      FastLED.show();
    }
    for (a = 0; a < 16; a++) {
      b = rand() % 5;
      matrixleds[row[0][b]] = CRGB(0, 0, 255);
      matrixleds[row[1][b]] = CRGB(0, 0, 255);
      matrixleds[row[2][b]] = CRGB(0, 0, 25);
      matrixleds[row[3][b]] = CRGB(0, 0, 255);
      matrixleds[row[4][b]] = CRGB(0, 0, 255);
      c = rand() % 8;
      treeleds[c] = CRGB(0, 0, 50);
      FastLED.show();
      delay(20);
      matrixleds[row[0][b]] = CRGB(0, 0, 0);
      matrixleds[row[1][b]] = CRGB(0, 0, 0);
      matrixleds[row[2][b]] = CRGB(0, 0, 0);
      matrixleds[row[3][b]] = CRGB(0, 0, 0);
      matrixleds[row[4][b]] = CRGB(0, 0, 0);
      treeleds[c] = CRGB(0, 0, 0);
      FastLED.show();
    }
    for (a = 0; a < 16; a++) {
      b = rand() % 5;
      matrixleds[row[0][b]] = CRGB(0, 0, 255);
      matrixleds[row[1][b]] = CRGB(0, 0, 255);
      matrixleds[row[2][b]] = CRGB(0, 0, 25);
      matrixleds[row[3][b]] = CRGB(0, 0, 255);
      matrixleds[row[4][b]] = CRGB(0, 0, 255);
      matrixleds[row[5][b]] = CRGB(0, 0, 255);
      c = rand() % 8;
      treeleds[c] = CRGB(0, 0, 50);
      FastLED.show();
      delay(20);
      matrixleds[row[0][b]] = CRGB(0, 0, 0);
      matrixleds[row[1][b]] = CRGB(0, 0, 0);
      matrixleds[row[2][b]] = CRGB(0, 0, 0);
      matrixleds[row[3][b]] = CRGB(0, 0, 0);
      matrixleds[row[4][b]] = CRGB(0, 0, 0);
      matrixleds[row[5][b]] = CRGB(0, 0, 0);
      treeleds[c] = CRGB(0, 0, 0);
      FastLED.show();
    }
    for (a = 0; a < 20; a++) {
      b = rand() % 5;
      matrixleds[row[0][b]] = CRGB(rand() % 150, rand() % 150, rand() % 150);
      matrixleds[row[1][b]] = CRGB(rand() % 150, rand() % 150, rand() % 150);
      matrixleds[row[2][b]] = CRGB(rand() % 150, rand() % 150, rand() % 150);
      matrixleds[row[3][b]] = CRGB(rand() % 150, rand() % 150, rand() % 150);
      matrixleds[row[4][b]] = CRGB(rand() % 150, rand() % 150, rand() % 150);
      matrixleds[row[5][b]] = CRGB(rand() % 150, rand() % 150, rand() % 150);
      c = rand() % 8;
      treeleds[c] = CRGB(rand() % 150, rand() % 150, rand() % 150);
      FastLED.show();
      delay(25);
      matrixleds[row[0][b]] = CRGB(0, 0, 0);
      matrixleds[row[1][b]] = CRGB(0, 0, 0);
      matrixleds[row[2][b]] = CRGB(0, 0, 0);
      matrixleds[row[3][b]] = CRGB(0, 0, 0);
      matrixleds[row[4][b]] = CRGB(0, 0, 0);
      matrixleds[row[5][b]] = CRGB(0, 0, 0);
      treeleds[c] = CRGB(0, 0, 0);
      FastLED.show();
    }
    for (a = 0; a < 30; a++) {
      b = rand() % 5;
      matrixleds[row[0][b]] = CRGB(rand() % 150, rand() % 150, rand() % 150);
      matrixleds[row[1][b]] = CRGB(rand() % 150, rand() % 150, rand() % 150);
      matrixleds[row[2][b]] = CRGB(rand() % 150, rand() % 150, rand() % 150);
      matrixleds[row[3][b]] = CRGB(rand() % 150, rand() % 150, rand() % 150);
      matrixleds[row[4][b]] = CRGB(rand() % 150, rand() % 150, rand() % 150);
      matrixleds[row[5][b]] = CRGB(rand() % 150, rand() % 150, rand() % 150);
      c = rand() % 8;
      d = rand() % 8;
      e = rand() % 8;
      treeleds[c] = CRGB(rand() % 250, rand() % 250, rand() % 250);
      treeleds[d] = CRGB(rand() % 250, rand() % 250, rand() % 250);
      treeleds[e] = CRGB(rand() % 250, rand() % 250, rand() % 250);
      FastLED.show();
      delay(25);
      matrixleds[row[0][b]] = CRGB(0, 0, 0);
      matrixleds[row[1][b]] = CRGB(0, 0, 0);
      matrixleds[row[2][b]] = CRGB(0, 0, 0);
      matrixleds[row[3][b]] = CRGB(0, 0, 0);
      matrixleds[row[4][b]] = CRGB(0, 0, 0);
      matrixleds[row[5][b]] = CRGB(0, 0, 0);
      treeleds[c] = CRGB(0, 0, 0);
      treeleds[d] = CRGB(0, 0, 0);
      treeleds[e] = CRGB(0, 0, 0);
      FastLED.show();
    }

    //1
    for (a = 0; a < 30; a++) matrixleds[a] = CRGB(0, 0, 0);
    for (a = 0; a < 9; a++) treeleds[a] = CRGB(0, 0, 0);
    FastLED.show();
    for (d = 0; d < 2; d++) {
      for (c = 0; c < 15; c++) {
        if (c == 0)col = CRGB(255, 0, 0);
        if (c == 1)col = CRGB(255, 128, 0);
        if (c == 2)col = CRGB(255, 255, 0);
        if (c == 3)col = CRGB(0, 0, 0);
        if (c == 4)col = CRGB(0, 255, 0);
        if (c == 5)col = CRGB(0, 255, 128);
        if (c == 6)col = CRGB(0, 255, 255);
        if (c == 7)col = CRGB(0, 0, 0);
        if (c == 8)col = CRGB(0, 0, 255);
        if (c == 9)col = CRGB(127, 0, 255);
        if (c == 10)col = CRGB(255, 0, 255);
        if (c == 11)col = CRGB(0, 0, 0);
        if (c == 12)col = CRGB(255, 0, 0);
        if (c == 13)col = CRGB(255, 128, 0);
        if (c == 14)col = CRGB(255, 255, 0);

        treeleds[7] = col;
        for (b = 0; b < 6; b++)matrixleds[row[b][0]] = col ;
        FastLED.show();
        delay(20);
        treeleds[6] = col ;
        treeleds[0] = col ;
        for (b = 0; b < 6; b++)matrixleds[row[b][1]] = col ;
        FastLED.show();
        delay(20);
        treeleds[1] = col;
        treeleds[5] = col ;
        for (b = 0; b < 6; b++)matrixleds[row[b][2]] = col ;
        FastLED.show();
        delay(20);
        treeleds[4] = col ;
        treeleds[2] = col ;
        for (b = 0; b < 6; b++)matrixleds[row[b][3]] = col ;
        FastLED.show();
        delay(20);
        treeleds[3] = col ;
        for (b = 0; b < 6; b++)matrixleds[row[b][4]] = col ;
        FastLED.show();
        delay(20);
      }
    }

    //2
    for (d = 0; d < 3; d++) {
      for (c = 0; c < 13; c++) {
        if (c == 0)col = CRGB(255, 0, 0);
        if (c == 1)col = CRGB(255, 128, 0);
        if (c == 2)col = CRGB(255, 255, 0);
        if (c == 3)col = CRGB(0, 0, 0);
        if (c == 4)col = CRGB(0, 255, 0);
        if (c == 5)col = CRGB(0, 255, 128);
        if (c == 6)col = CRGB(0, 255, 255);
        if (c == 7)col = CRGB(0, 0, 0);
        if (c == 8)col = CRGB(0, 0, 255);
        if (c == 9)col = CRGB(127, 0, 255);
        if (c == 10)col = CRGB(255, 0, 255);
        if (c == 11)col = CRGB(0, 0, 0);
        if (c == 12)col = CRGB(255, 0, 0);
        if (c == 13)col = CRGB(255, 128, 0);
        if (c == 14)col = CRGB(255, 255, 0);

        treeleds[3] = col;
        for (b = 0; b < 6; b++)matrixleds[row[b][4]] = col ;
        FastLED.show();
        delay(15);
        treeleds[2] = col ;
        treeleds[4] = col ;
        for (b = 0; b < 6; b++)matrixleds[row[b][3]] = col ;
        FastLED.show();
        delay(15);
        treeleds[1] = col;
        treeleds[5] = col ;
        for (b = 0; b < 6; b++)matrixleds[row[b][2]] = col ;
        FastLED.show();
        delay(15);
        treeleds[0] = col ;
        treeleds[6] = col ;
        for (b = 0; b < 6; b++)matrixleds[row[b][1]] = col ;
        FastLED.show();
        delay(15);
        treeleds[7] = col ;
        for (b = 0; b < 6; b++)matrixleds[row[b][0]] = col ;
        FastLED.show();
        delay(15);
      }
    }

    //4
    int hypno1[] = {15, 14}; // 2 items
    int hypno2[] = {7, 16, 19, 20, 21, 22, 13, 10, 9, 8}; //10 items
    int hypno3[] = {5, 6, 17, 18, 29, 28, 27, 26, 25, 24, 23, 12, 11, 0, 1, 2, 3, 4}; //18 items
    for (b = 0; b < 2; b++) {
      for (c = 0; c < 6; c++) {
        if (c == 0)col = CRGB(255, 0, 0);
        if (c == 1)col = CRGB(128, 255, 0);
        if (c == 2)col = CRGB(0, 255, 0);
        if (c == 3)col = CRGB(0, 128, 255);
        if (c == 4)col = CRGB(0, 0, 255);
        if (c == 5)col = CRGB(255, 0, 128);
        if (c == 6)col = CRGB(255, 255, 0);
        for (a = 0; a < 2; a++)matrixleds[hypno1[a]] = col;
        treeleds[1] = col;
        treeleds[2] = col;
        FastLED.show();
        delay(75);
        for (a = 0; a < 2; a++)matrixleds[hypno1[a]] = CRGB(0, 0, 0);
        treeleds[1] = CRGB(0, 0, 0);
        treeleds[2] = CRGB(0, 0, 0);
        treeleds[3] = col;
        treeleds[4] = col;
        for (a = 0; a < 10; a++)matrixleds[hypno2[a]] = col;
        FastLED.show();
        delay(75);
        treeleds[3] = CRGB(0, 0, 0);
        treeleds[4] = CRGB(0, 0, 0);
        treeleds[5] = col;
        treeleds[6] = col;
        for (a = 0; a < 10; a++)matrixleds[hypno2[a]] = CRGB(0, 0, 0);
        for (a = 0; a < 18; a++)matrixleds[hypno3[a]] = col;
        FastLED.show();
        delay(75);
        treeleds[6] = CRGB(0, 0, 0);
        treeleds[5] = CRGB(0, 0, 0);
        treeleds[0] = col;
        treeleds[7] = col;
        for (a = 0; a < 18; a++)matrixleds[hypno3[a]] = CRGB(0, 0, 0);
        FastLED.show();
        delay(75);
        treeleds[0] = CRGB(0, 0, 0);
        treeleds[7] = CRGB(0, 0, 0);
        delay(15);
      }
    }

    //
    for (b = 0; b < 2; b++) {
      for (c = 0; c < 12; c++) {
        if (c == 0)col = CRGB(255, 0, 0);
        if (c == 1)col = CRGB(128, 255, 0);
        if (c == 2)col = CRGB(0, 255, 0);
        if (c == 3)col = CRGB(0, 128, 255);
        if (c == 4)col = CRGB(0, 0, 255);
        if (c == 5)col = CRGB(255, 0, 128);
        if (c == 6)col = CRGB(255, 255, 0);
        for (a = 0; a < 2; a++)matrixleds[hypno1[a]] = col;
        treeleds[1] = col;
        treeleds[2] = col;
        FastLED.show();
        delay(40);
        for (a = 0; a < 2; a++)matrixleds[hypno1[a]] = CRGB(0, 0, 0);
        treeleds[1] = CRGB(0, 0, 0);
        treeleds[2] = CRGB(0, 0, 0);
        treeleds[3] = col;
        treeleds[4] = col;
        for (a = 0; a < 10; a++)matrixleds[hypno2[a]] = col;
        FastLED.show();
        delay(40);
        treeleds[3] = CRGB(0, 0, 0);
        treeleds[4] = CRGB(0, 0, 0);
        treeleds[5] = col;
        treeleds[6] = col;
        for (a = 0; a < 10; a++)matrixleds[hypno2[a]] = CRGB(0, 0, 0);
        for (a = 0; a < 18; a++)matrixleds[hypno3[a]] = col;
        FastLED.show();
        delay(40);
        treeleds[6] = CRGB(0, 0, 0);
        treeleds[5] = CRGB(0, 0, 0);
        treeleds[0] = col;
        treeleds[7] = col;
        for (a = 0; a < 18; a++)matrixleds[hypno3[a]] = CRGB(0, 0, 0);
        FastLED.show();
        delay(40);
        treeleds[0] = CRGB(0, 0, 0);
        treeleds[7] = CRGB(0, 0, 0);
        delay(15);
      }
    }

    //
    for (b = 0; b < 6; b++) {
      for (c = 0; c < 12; c++) {
        if (c == 0)col = CRGB(255, 0, 0);
        if (c == 1)col = CRGB(128, 255, 0);
        if (c == 2)col = CRGB(0, 255, 0);
        if (c == 3)col = CRGB(0, 128, 255);
        if (c == 4)col = CRGB(0, 0, 255);
        if (c == 5)col = CRGB(255, 0, 128);
        if (c == 6)col = CRGB(255, 255, 0);
        for (a = 0; a < 2; a++)matrixleds[hypno1[a]] = col;
        treeleds[1] = col;
        treeleds[2] = col;
        FastLED.show();
        delay(25);
        for (a = 0; a < 2; a++)matrixleds[hypno1[a]] = CRGB(0, 0, 0);
        treeleds[1] = CRGB(0, 0, 0);
        treeleds[2] = CRGB(0, 0, 0);
        treeleds[3] = col;
        treeleds[4] = col;
        for (a = 0; a < 10; a++)matrixleds[hypno2[a]] = col;
        FastLED.show();
        delay(25);
        treeleds[3] = CRGB(0, 0, 0);
        treeleds[4] = CRGB(0, 0, 0);
        treeleds[5] = col;
        treeleds[6] = col;
        for (a = 0; a < 10; a++)matrixleds[hypno2[a]] = CRGB(0, 0, 0);
        for (a = 0; a < 18; a++)matrixleds[hypno3[a]] = col;
        FastLED.show();
        delay(25);
        treeleds[6] = CRGB(0, 0, 0);
        treeleds[5] = CRGB(0, 0, 0);
        treeleds[0] = col;
        treeleds[7] = col;
        for (a = 0; a < 18; a++)matrixleds[hypno3[a]] = CRGB(0, 0, 0);
        FastLED.show();
        delay(25);
        treeleds[0] = CRGB(0, 0, 0);
        treeleds[7] = CRGB(0, 0, 0);
        delay(10);
      }
    }

    //
    for (c = 0; c < 8; c++) {
      if (c == 0)col = CRGB(255, 0, 0);
      if (c == 1)col = CRGB(128, 255, 0);
      if (c == 2)col = CRGB(0, 255, 0);
      if (c == 3)col = CRGB(0, 128, 255);
      if (c == 4)col = CRGB(0, 0, 255);
      if (c == 5)col = CRGB(255, 0, 128);
      if (c == 6)col = CRGB(255, 255, 0);
      if (c == 7)col = CRGB(0, 255, 0);
      if (c == 8)col = CRGB(0, 128, 255);
      for (a = 0; a < 6; a++) {
        for (b = 0; b < 5; b++) {
          matrixleds[row[a][b]] = col;
        }
        FastLED.show();
        delay(15);
      }
      treeleds[1] = col;
      FastLED.show();
      delay(15);
      treeleds[0] = col;
      treeleds[2] = col;
      FastLED.show();
      delay(15);
      treeleds[7] = col;
      treeleds[3] = col;
      FastLED.show();
      delay(15);
      treeleds[6] = col;
      treeleds[4] = col;
      FastLED.show();
      delay(15);
      treeleds[5] = col;
      FastLED.show();
      //delay(600);
      for (d = 0; d < 60; d++) {
        e = rand() % 9;
        treeleds[e] = CRGB(0, 0, 0);
        FastLED.show();
        delay(6);
        treeleds[e] = col;
        FastLED.show();
      }
    }

    col = CRGB(205, 20, 128);
    for (a = 0; a < 6; a++) {
      for (b = 0; b < 5; b++) {
        matrixleds[row[a][b]] = col;
      }
      FastLED.show();
      delay(15);
    }
    treeleds[1] = col;
    FastLED.show();
    delay(15);
    treeleds[0] = col;
    treeleds[2] = col;
    FastLED.show();
    delay(15);
    treeleds[7] = col;
    treeleds[3] = col;
    FastLED.show();
    delay(15);
    treeleds[6] = col;
    treeleds[4] = col;
    FastLED.show();
    delay(15);
    treeleds[5] = col;
    FastLED.show();

    for (a = 0; a < 26; a++) {
      for (b = 255; b >= 0; b = b - 5) {
        matrixleds[rand() % 30] = CRGB(b, b, b);
        treeleds[rand() % 9] = CRGB(b, b, b);
        FastLED.show();
        delay(1);
      }
    }

    // end
    for (b = 0; b < 9; b++)treeleds[b] = CRGB(255, 255, 255);
    for (b = 0; b < 30; b++)matrixleds[b] = CRGB(255, 255, 255);
    FastLED.show();
    delay(15);
    for (b = 0; b < 9; b++)treeleds[b] = CRGB(0, 0, 0);
    for (b = 0; b < 30; b++)matrixleds[b] = CRGB(0, 0, 0);
    FastLED.show();
    delay(2000);



  }
  // END OF CLS2


  // END OF MAIN PROGRAM LOOP
}

