// 4-Digit 8-Segment Display Pins [digit][segment]

const int display[4][8] = { {22, 23, 24, 25, 26, 27, 28, 29},
                            {30, 31, 32, 33, 34, 35, 36, 37},
                            {38, 39, 40, 41, 42, 43, 44, 45},
                            {46, 47, 48, 49, 50, 51, 52, 53}, };



void setup() {

// 4-Digit 8-Segment Display Outputs

  for (int digit = 0; digit < 4; digit++) {
    for (int segment = 0; segment < 8; segment++) {
      pinMode(display[digit][segment], OUTPUT);
    } 
  }
}



void loop() {

  displayTest();
  delay(1000);
  displayBlank();
  delay(1000);

  displaySafe();
  delay(1000);
  displayBlank();
  delay(1000);

  displayFail();
  delay(1000);
  displayBlank();
  delay(1000);

  for(int i = 0; i < 10000; i++) {
    delay(2);
    displayNumber(i); 
  }

  displayBlank();
  delay(1000);

}



void displayBlank() {
 
// Blank the 4-Digit 8-Segment Display

  for (int digit = 0; digit < 4; digit++) {
    for (int segment = 0; segment < 8; segment++) {
      digitalWrite(display[digit][segment], LOW);
    } 
  }
}



void displayTest() {
 
// Light all elements of the 4-Digit 8-Segment Display

  for (int digit = 0; digit < 4; digit++) {
    for (int segment = 0; segment < 8; segment++) {
      digitalWrite(display[digit][segment], HIGH);
    } 
  }
}



void displaySafe() {
 
  digitalWrite(display[0][0], HIGH);
  digitalWrite(display[0][1], LOW);
  digitalWrite(display[0][2], HIGH);
  digitalWrite(display[0][3], HIGH);
  digitalWrite(display[0][4], LOW);
  digitalWrite(display[0][5], HIGH);
  digitalWrite(display[0][6], HIGH);
  digitalWrite(display[0][7], LOW);

  digitalWrite(display[1][0], HIGH);
  digitalWrite(display[1][1], HIGH);
  digitalWrite(display[1][2], HIGH);
  digitalWrite(display[1][3], LOW);
  digitalWrite(display[1][4], HIGH);
  digitalWrite(display[1][5], HIGH);
  digitalWrite(display[1][6], HIGH);
  digitalWrite(display[1][7], LOW);

  digitalWrite(display[2][0], HIGH);
  digitalWrite(display[2][1], LOW);
  digitalWrite(display[2][2], LOW);
  digitalWrite(display[2][3], LOW);
  digitalWrite(display[2][4], HIGH);
  digitalWrite(display[2][5], HIGH);
  digitalWrite(display[2][6], HIGH);
  digitalWrite(display[2][7], LOW);

  digitalWrite(display[3][0], HIGH);
  digitalWrite(display[3][1], LOW);
  digitalWrite(display[3][2], LOW);
  digitalWrite(display[3][3], HIGH);
  digitalWrite(display[3][4], HIGH);
  digitalWrite(display[3][5], HIGH);
  digitalWrite(display[3][6], HIGH);
  digitalWrite(display[3][7], LOW);

}



void displayFail() {
 
  digitalWrite(display[0][0], HIGH);
  digitalWrite(display[0][1], LOW);
  digitalWrite(display[0][2], LOW);
  digitalWrite(display[0][3], LOW);
  digitalWrite(display[0][4], HIGH);
  digitalWrite(display[0][5], HIGH);
  digitalWrite(display[0][6], HIGH);
  digitalWrite(display[0][7], LOW);

  digitalWrite(display[1][0], HIGH);
  digitalWrite(display[1][1], HIGH);
  digitalWrite(display[1][2], HIGH);
  digitalWrite(display[1][3], LOW);
  digitalWrite(display[1][4], HIGH);
  digitalWrite(display[1][5], HIGH);
  digitalWrite(display[1][6], HIGH);
  digitalWrite(display[1][7], LOW);

  digitalWrite(display[2][0], LOW);
  digitalWrite(display[2][1], LOW);
  digitalWrite(display[2][2], LOW);
  digitalWrite(display[2][3], LOW);
  digitalWrite(display[2][4], HIGH);
  digitalWrite(display[2][5], HIGH);
  digitalWrite(display[2][6], LOW);
  digitalWrite(display[2][7], LOW);

  digitalWrite(display[3][0], LOW);
  digitalWrite(display[3][1], LOW);
  digitalWrite(display[3][2], LOW);
  digitalWrite(display[3][3], HIGH);
  digitalWrite(display[3][4], HIGH);
  digitalWrite(display[3][5], HIGH);
  digitalWrite(display[3][6], LOW);
  digitalWrite(display[3][7], LOW);

}



void displayDigit(int digit, int number) {

  switch(number){

    case 0:
      digitalWrite(display[digit][0], HIGH);
      digitalWrite(display[digit][1], HIGH);
      digitalWrite(display[digit][2], HIGH);
      digitalWrite(display[digit][3], HIGH);
      digitalWrite(display[digit][4], HIGH);
      digitalWrite(display[digit][5], HIGH);
      digitalWrite(display[digit][6], LOW);
      digitalWrite(display[digit][7], LOW);
      break;

    case 1:
      digitalWrite(display[digit][0], LOW);
      digitalWrite(display[digit][1], HIGH);
      digitalWrite(display[digit][2], HIGH);
      digitalWrite(display[digit][3], LOW);
      digitalWrite(display[digit][4], LOW);
      digitalWrite(display[digit][5], LOW);
      digitalWrite(display[digit][6], LOW);
      digitalWrite(display[digit][7], LOW);
      break;

    case 2:
      digitalWrite(display[digit][0], HIGH);
      digitalWrite(display[digit][1], HIGH);
      digitalWrite(display[digit][2], LOW);
      digitalWrite(display[digit][3], HIGH);
      digitalWrite(display[digit][4], HIGH);
      digitalWrite(display[digit][5], LOW);
      digitalWrite(display[digit][6], HIGH);
      digitalWrite(display[digit][7], LOW);
      break;

    case 3:
      digitalWrite(display[digit][0], HIGH);
      digitalWrite(display[digit][1], HIGH);
      digitalWrite(display[digit][2], HIGH);
      digitalWrite(display[digit][3], HIGH);
      digitalWrite(display[digit][4], LOW);
      digitalWrite(display[digit][5], LOW);
      digitalWrite(display[digit][6], HIGH);
      digitalWrite(display[digit][7], LOW);
      break;

    case 4:
      digitalWrite(display[digit][0], LOW);
      digitalWrite(display[digit][1], HIGH);
      digitalWrite(display[digit][2], HIGH);
      digitalWrite(display[digit][3], LOW);
      digitalWrite(display[digit][4], LOW);
      digitalWrite(display[digit][5], HIGH);
      digitalWrite(display[digit][6], HIGH);
      digitalWrite(display[digit][7], LOW);
      break;

    case 5:
      digitalWrite(display[digit][0], HIGH);
      digitalWrite(display[digit][1], LOW);
      digitalWrite(display[digit][2], HIGH);
      digitalWrite(display[digit][3], HIGH);
      digitalWrite(display[digit][4], LOW);
      digitalWrite(display[digit][5], HIGH);
      digitalWrite(display[digit][6], HIGH);
      digitalWrite(display[digit][7], LOW);
      break;

    case 6:
      digitalWrite(display[digit][0], HIGH);
      digitalWrite(display[digit][1], LOW);
      digitalWrite(display[digit][2], HIGH);
      digitalWrite(display[digit][3], HIGH);
      digitalWrite(display[digit][4], HIGH);
      digitalWrite(display[digit][5], HIGH);
      digitalWrite(display[digit][6], HIGH);
      digitalWrite(display[digit][7], LOW);
      break;

    case 7:
      digitalWrite(display[digit][0], HIGH);
      digitalWrite(display[digit][1], HIGH);
      digitalWrite(display[digit][2], HIGH);
      digitalWrite(display[digit][3], LOW);
      digitalWrite(display[digit][4], LOW);
      digitalWrite(display[digit][5], LOW);
      digitalWrite(display[digit][6], LOW);
      digitalWrite(display[digit][7], LOW);
      break;

    case 8:
      digitalWrite(display[digit][0], HIGH);
      digitalWrite(display[digit][1], HIGH);
      digitalWrite(display[digit][2], HIGH);
      digitalWrite(display[digit][3], HIGH);
      digitalWrite(display[digit][4], HIGH);
      digitalWrite(display[digit][5], HIGH);
      digitalWrite(display[digit][6], HIGH);
      digitalWrite(display[digit][7], LOW);
      break;

    case 9:
      digitalWrite(display[digit][0], HIGH);
      digitalWrite(display[digit][1], HIGH);
      digitalWrite(display[digit][2], HIGH);
      digitalWrite(display[digit][3], HIGH);
      digitalWrite(display[digit][4], LOW);
      digitalWrite(display[digit][5], HIGH);
      digitalWrite(display[digit][6], HIGH);
      digitalWrite(display[digit][7], LOW);
      break;

  }

}



void displayNumber(int number) {
 
  displayDigit(3, number % 10);
  number /= 10;

  displayDigit(2, number % 10);
  number /= 10;

  displayDigit(1, number % 10);
  number /= 10;

  displayDigit(0, number % 10);

}
