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
  
  // SERIAL COMMAND: CLS16 - "Under the Tree" by Kelly Clarkson
  if (receivedData == "cls1") {
    // Wait for song to begin.
    delay(3150);

    //
    for (a = 0; a < 50; a++) {
      treeleds[5] = CRGB(0, 0, a);
      FastLED.show();
      delay(11);
    }
    for (a = 0; a < 50; a++) {
      treeleds[4] = CRGB(0, 0, a);
      treeleds[6] = CRGB(0, 0, a);
      FastLED.show();
      delay(11);
    }
    for (a = 0; a < 50; a++) {
      treeleds[3] = CRGB(0, 0, a);
      treeleds[7] = CRGB(0, 0, a);
      FastLED.show();
      delay(11);
    }
    for (a = 0; a < 50; a++) {
      treeleds[0] = CRGB(0, 0, a);
      treeleds[2] = CRGB(0, 0, a);
      FastLED.show();
      delay(16);
    }
    for (a = 0; a < 150; a++) {
      treeleds[1] = CRGB(a, 0, 0);
      FastLED.show();
      delay(2);
    }
    for (a = 0; a < 150; a++) {
      treeleds[0] = CRGB(0, a, 0);
      treeleds[2] = CRGB(0, a, 0);
      FastLED.show();
      delay(1);
    }
    for (a = 0; a < 150; a++) {
      treeleds[7] = CRGB(a, 0, 0);
      treeleds[3] = CRGB(a, 0, 0);
      FastLED.show();
      delay(1);
    }
    for (a = 0; a < 150; a++) {
      treeleds[6] = CRGB(0, a, 0);
      treeleds[4] = CRGB(0, a, 0);
      FastLED.show();
      delay(1);
    }
    for (a = 0; a < 100; a++) {
      treeleds[5] = CRGB(a, 0, 0);
      FastLED.show();
      delay(2);
    }

    for (b = 0; b < 12; b++) {
      c = 50;
      treeleds[1] = CRGB(a + c, 0, 0);
      treeleds[0] = CRGB(0, a + c, 0);
      treeleds[2] = CRGB(0, a + c, 0);
      treeleds[7] = CRGB(a + c, 0, 0);
      treeleds[3] = CRGB(a + c, 0, 0);
      treeleds[6] = CRGB(0, a + c, 0);
      treeleds[4] = CRGB(0, a + c, 0);
      treeleds[5] = CRGB(a + c, 0, 0);
      FastLED.show();
      delay(50);
      treeleds[1] = CRGB(a - c, 0, 0);
      treeleds[0] = CRGB(0, a - c, 0);
      treeleds[2] = CRGB(0, a - c, 0);
      treeleds[7] = CRGB(a - c, 0, 0);
      treeleds[3] = CRGB(a - c, 0, 0);
      treeleds[6] = CRGB(0, a - c, 0);
      treeleds[4] = CRGB(0, a - c, 0);
      treeleds[5] = CRGB(a - c, 0, 0);
      FastLED.show();
      delay(50);
    }
    //
    // "You're here.."
    for (b = 5; b >= 0; b--) {
      for (a = 0; a < 5; a++) {
        matrixleds[row[b][a]] = CRGB(255, 0, 0);
      }
      FastLED.show();
      delay(30);
    }

    for (b = 0; b < 2; b++) {
      for (a = 0; a < 6; a++) {
        matrixleds[row[a][0]] = CRGB(0, 255, 0);
        matrixleds[row[a][4]] = CRGB(0, 255, 0);
        FastLED.show();
        delay(20);
      }
      for (a = 0; a < 6; a++) {
        matrixleds[row[a][0]] = CRGB(200, 0, 0);
        matrixleds[row[a][4]] = CRGB(200, 0, 0);
        FastLED.show();
        delay(20);
      }
      delay(60);
      for (a = 6; a >= 0; a--) {
        matrixleds[row[a][1]] = CRGB(0, 255, 0);
        matrixleds[row[a][3]] = CRGB(0, 255, 0);
        FastLED.show();
        delay(20);
      }
      for (a = 6; a >= 0; a--) {
        matrixleds[row[a][1]] = CRGB(200, 0, 0);
        matrixleds[row[a][3]] = CRGB(200, 0, 0);
        FastLED.show();
        delay(20);
      }
      delay(60);
      for (a = 0; a < 6; a++) {
        matrixleds[row[a][2]] = CRGB(0, 255, 0);
        FastLED.show();
        delay(20);
      }
      for (a = 0; a < 6; a++) {
        matrixleds[row[a][2]] = CRGB(200, 0, 0);
        FastLED.show();
        delay(20);
      }
      delay(60);
      for (a = 6; a >= 0; a--) {
        matrixleds[row[a][1]] = CRGB(0, 255, 0);
        matrixleds[row[a][3]] = CRGB(0, 255, 0);
        FastLED.show();
        delay(20);
      }
      for (a = 6; a >= 0; a--) {
        matrixleds[row[a][1]] = CRGB(200, 0, 0);
        matrixleds[row[a][3]] = CRGB(200, 0, 0);
        FastLED.show();
        delay(20);
      }
      delay(60);
    }

    // "Snow is falling..."
    for (a = 0; a < 6; a++) {
      for (b = 0; b < 5; b++) {
        matrixleds[row[a][b]] = CRGB(0, 0, 255);
      }
      FastLED.show();
      delay(20);
    }
    treeleds[1] = CRGB(0, 0, 100);
    FastLED.show();
    delay(20);
    treeleds[0] = CRGB(0, 0, 100);
    treeleds[2] = CRGB(0, 0, 100);
    FastLED.show();
    delay(20);
    treeleds[7] = CRGB(0, 0, 100);
    treeleds[3] = CRGB(0, 0, 100);
    FastLED.show();
    delay(20);
    treeleds[6] = CRGB(0, 0, 100);
    treeleds[4] = CRGB(0, 0, 100);
    FastLED.show();
    delay(20);
    treeleds[5] = CRGB(0, 0, 100);
    FastLED.show();
    delay(20);

    for (a = 0; a < 3; a++) {
      for (b = 255; b > 0; b--) {
        matrixleds[rand() % 30] = CRGB(b, b, 255);
        FastLED.show();
        delay(2);
      }
    }

    // "It just wasn't the same..."
    for (a = 0; a < 6; a++) {
      for (b = 0; b < 5; b++) {
        matrixleds[row[a][b]] = CRGB(100, 100, 0);
      }
      FastLED.show();
      delay(20);
    }
    treeleds[1] = CRGB(100, 100, 0);
    FastLED.show();
    delay(20);
    treeleds[0] = CRGB(100, 100, 0);
    treeleds[2] = CRGB(100, 100, 0);
    FastLED.show();
    delay(20);
    treeleds[7] = CRGB(100, 100, 0);
    treeleds[3] = CRGB(100, 100, 0);
    FastLED.show();
    delay(20);
    treeleds[6] = CRGB(100, 100, 0);
    treeleds[4] = CRGB(100, 100, 0);
    FastLED.show();
    delay(20);
    treeleds[5] = CRGB(100, 100, 0);
    FastLED.show();
    delay(20);
    for (a = 0; a < 3; a++) {
      for (b = 255; b > 0; b--) {
        c = rand() % 30;
        matrixleds[c] = CRGB(b, 50, b);
        FastLED.show();
        delay(2);
      }
      matrixleds[c] = CRGB(100, 100, 0);
      FastLED.show();
      delay(2);
    }

    // "Alone on Christmas day..."
    for (a = 0; a < 6; a++) {
      for (b = 0; b < 5; b++) {
        matrixleds[row[a][b]] = CRGB(50, 100, 50);
      }
      FastLED.show();
      delay(20);
    }
    treeleds[1] = CRGB(50, 100, 50);
    FastLED.show();
    delay(20);
    treeleds[0] = CRGB(50, 100, 50);
    treeleds[2] = CRGB(50, 100, 50);
    FastLED.show();
    delay(20);
    treeleds[7] = CRGB(50, 100, 50);
    treeleds[3] = CRGB(50, 100, 50);
    FastLED.show();
    delay(20);
    treeleds[6] = CRGB(50, 100, 50);
    treeleds[4] = CRGB(50, 100, 50);
    FastLED.show();
    delay(20);
    treeleds[5] = CRGB(50, 100, 50);
    FastLED.show();
    delay(20);
    for (a = 0; a < 3; a++) {
      for (b = 255; b > 0; b--) {
        c = rand() % 30;
        matrixleds[c] = CRGB(50, b, b);
        FastLED.show();
        delay(2);
      }
    }
    matrixleds[c] = CRGB(50, 100, 50);
    FastLED.show();
    delay(2);

    // "Presents, what a beautiful sight..."
    for (a = 0; a < 30; a++) {
      matrixleds[a] = CRGB(0, 0, 0);
      FastLED.show();
    }
    int presents[] = {0, 1, 2, 3, 4, 7, 16, 19, 28, 27, 26, 25, 24, 23, 12, 11}; // 16 items
    int presentsmiddle[] = {9, 15, 14, 13, 21}; // 5 items
    for (a = 0; a < 16; a++) {
      matrixleds[presents[a]] = CRGB(200, 0, 0);
      FastLED.show();
      delay(20);
    }
    for (a = 0; a < 5; a++) {
      matrixleds[presentsmiddle[a]] = CRGB(200, 0, 0);
      FastLED.show();
      delay(20);
    }
    matrixleds[8] = CRGB(100, 100, 100);
    matrixleds[20] = CRGB(100, 100, 100);
    matrixleds[10] = CRGB(100, 100, 100);
    matrixleds[22] = CRGB(100, 100, 100);
    FastLED.show();

    // Present topper.
    matrixleds[17] = CRGB(255, 255, 0);
    FastLED.show();


    for (a = 0; a < 8; a++) {
      // Make tree green.
      treeleds[a] = CRGB::Green;
      FastLED.show();
      delay(15);
    }
    for (c = 0; c < 3; c++) {
      for (a = 0; a < 8; a++) {
        // Chase around yellow LED.
        treeleds[a] = CRGB(50, 50, 0);
        FastLED.show();
        delay(50);
      }
      for (a = 0; a < 8; a++) {
        treeleds[a] = CRGB(0, 255, 0);
        FastLED.show();
        delay(50);
      }
    }


    // "somethingsomething holding me tight..."
    for (a = 0; a < 6; a++) {
      for (b = 0; b < 5; b++) {
        matrixleds[row[a][b]] = CRGB(150, 150, 0);
      }
      FastLED.show();
      delay(10);
    }
    for (c = 0; c < 4; c++) {
      for (d = 0; d < 6; d += 2) {
        for (e = 0; e < 5; e++) matrixleds[row[d][e]] = CRGB(50, 0, 0);
      }
      for (d = 1; d < 6; d += 2) {
        for (e = 0; e < 5; e++) matrixleds[row[d][e]] = CRGB(0, 50, 0);
      }
      for (a = 0; a < 8; a++) {
        // Chase around yellow LED.
        treeleds[a] = CRGB(50, 50, 0);
        FastLED.show();
        delay(50);
      }
      for (d = 0; d < 6; d += 2) {
        for (e = 0; e < 5; e++) matrixleds[row[d][e]] = CRGB(0, 50, 0);
      }
      for (d = 1; d < 6; d += 2) {
        for (e = 0; e < 5; e++) matrixleds[row[d][e]] = CRGB(50, 0, 0);
      }
      for (a = 0; a < 8; a++) {
        treeleds[a] = CRGB(0, 200, 0);
        FastLED.show();
        delay(50);
      }
    }

    // "You're all that I need, underneath the tree tonight..."
    for (c = 0; c < 3; c++) {
      for (d = 0; d < 5; d += 2) {
        for (e = 0; e < 6; e++) matrixleds[row[e][d]] = CRGB(100, 0, 0);
      }
      for (d = 1; d < 5; d += 2) {
        for (e = 0; e < 6; e++) matrixleds[row[e][d]] = CRGB(0, 100, 0);
      }
      for (a = 0; a < 8; a++) {
        // Chase around yellow LED.
        treeleds[a] = CRGB(50, 50, 0);
        FastLED.show();
        delay(50);
      }
      for (d = 0; d < 5; d += 2) {
        for (e = 0; e < 6; e++) matrixleds[row[e][d]] = CRGB(0, 100, 0);
      }
      for (d = 1; d < 5; d += 2) {
        for (e = 0; e < 6; e++) matrixleds[row[e][d]] = CRGB(100, 0, 0);
      }
      for (a = 0; a < 8; a++) {
        treeleds[a] = CRGB(0, 200, 0);
        FastLED.show();
        delay(50);
      }
    }

    for (c = 0; c < 4; c++) {
      for (d = 0; d < 6; d += 2) {
        for (e = 0; e < 5; e++) matrixleds[row[d][e]] = CRGB(255, 0, 0);
      }
      for (d = 1; d < 6; d += 2) {
        for (e = 0; e < 5; e++) matrixleds[row[d][e]] = CRGB(0, 255, 0);
      }
      for (a = 0; a < 8; a++) {
        // Chase around yellow LED.
        treeleds[a] = CRGB(50, 50, 0);
        FastLED.show();
        delay(50);
      }
      for (d = 0; d < 5; d += 2) {
        for (e = 0; e < 5; e++) matrixleds[row[d][e]] = CRGB(0, 255, 0);
      }
      for (d = 1; d < 6; d += 2) {
        for (e = 0; e < 5; e++) matrixleds[row[d][e]] = CRGB(255, 0, 0);
      }
      for (a = 0; a < 8; a++) {
        treeleds[a] = CRGB(0, 200, 0);
        FastLED.show();
        delay(51);
      }
    }

    // "Tonight..."
    for (a = 0; a < 6; a++) {
      for (b = 0; b < 5; b++) {
        matrixleds[row[a][b]] = CRGB(255, 255, 255);
      }
      FastLED.show();
      delay(20);
    }
    treeleds[1] = CRGB(255, 255, 255);
    FastLED.show();
    delay(20);
    treeleds[0] = CRGB(255, 255, 255);
    treeleds[2] = CRGB(255, 255, 255);
    FastLED.show();
    delay(20);
    treeleds[7] = CRGB(255, 255, 255);
    treeleds[3] = CRGB(255, 255, 255);
    FastLED.show();
    delay(20);
    treeleds[6] = CRGB(255, 255, 255);
    treeleds[4] = CRGB(255, 255, 255);
    FastLED.show();
    delay(20);
    treeleds[5] = CRGB(255, 255, 255);
    FastLED.show();
    delay(20);

    for (a = 0; a < 4; a++) {
      for (b = 255; b > 0; b--) {
        matrixleds[rand() % 30] = CRGB(b - 100, b, 25);
        treeleds[rand() % 9] = CRGB(300 - b, 300 - b, 300 - b);
        FastLED.show();
        delay(4);
      }
    }

    for (a = 0; a < 6; a++) {
      for (b = 0; b < 5; b++) {
        matrixleds[row[a][b]] = CRGB(100, 100, 10055);
      }
      FastLED.show();
      delay(20);
    }
    treeleds[1] = CRGB(100, 100, 100);
    FastLED.show();
    delay(20);
    treeleds[0] = CRGB(100, 100, 100);
    treeleds[2] = CRGB(100, 100, 100);
    FastLED.show();
    delay(20);
    treeleds[7] = CRGB(100, 100, 100);
    treeleds[3] = CRGB(100, 100, 100);
    FastLED.show();
    delay(20);
    treeleds[6] = CRGB(100, 100, 100);
    treeleds[4] = CRGB(100, 100, 100);
    FastLED.show();
    delay(20);
    treeleds[5] = CRGB(100, 100, 100);
    FastLED.show();
    delay(20);

    for (b = 255; b > 0; b--) {
      matrixleds[rand() % 30] = CRGB(350 - b, 400 - b, 20);
      treeleds[rand() % 9] = CRGB(290 - b, 300 - b, 300 - b);
      FastLED.show();
      delay(4);
    }
    for (b = 255; b > 0; b--) {
      matrixleds[rand() % 30] = CRGB(300 - b, 300 - b, 15);
      if (b < 50)treeleds[rand() % 9] = CRGB(b, b, b);
      FastLED.show();
      delay(4);
    }
    for (b = 255; b > 0; b--) {
      matrixleds[rand() % 30] = CRGB(300 - b, 300 - b, 15);
      if (b < 50)treeleds[rand() % 9] = CRGB(b, b, b);
      FastLED.show();
      delay(4);
    }
    for (b = 255; b > 0; b--) {
      matrixleds[rand() % 30] = CRGB(300 - b, 300 - b, 0);
      if (b < 30)treeleds[rand() % 9] = CRGB(b, b, b);
      FastLED.show();
      delay(4);
    }

    for (b = 50; b >= 0; b--) {
      for (c = 0; c < 30; c++) matrixleds[c] = CRGB(b, b, b);
      for (d = 0; d < 9; d++) treeleds[d] = CRGB(b, b, b);
      FastLED.show();
      delay(4);
    }

  }


  // END OF MAIN PROGRAM LOOP
}

