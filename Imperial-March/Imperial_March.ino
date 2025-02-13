const int c = 208;    // Antes: 233
const int d = 233;    // Antes: 262
const int e = 262;    // Antes: 294
const int f = 277;    // Antes: 311
const int g = 311;    // Antes: 349
const int gS = 330;   // Antes: 370
const int a = 349;    // Antes: 392
const int aS = 370;   // Antes: 415
const int b = 392;    // Antes: 440
const int cH = 415;   // Antes: 466
const int cSH = 440;  // Antes: 494
const int dH = 466;   // Antes: 523
const int dSH = 494;  // Antes: 554
const int eH = 523;   // Antes: 587
const int fH = 554;   // Antes: 622
const int fSH = 587;  // Antes: 659
const int gH = 622;   // Antes: 698
const int gSH = 659;  // Antes: 740
const int aH = 698;   // Antes: 784




const int buzzerPin = 9; // Digital Pin 8
const int ledPin1 = 12;  // Digital Pin 12
const int ledPin2 = 13;  // Digital Pin 13 Built In Led can Change it if you want

int counter = 0;

void setup()
{
  //Setup pin modes
  pinMode(buzzerPin, OUTPUT); // Digital Pin 8
  pinMode(ledPin1, OUTPUT);  // Digital Pin 12
  pinMode(ledPin2, OUTPUT); // Digital Pin 13 Built In Led can Change it if you want
}

void loop()
{

  //Play first section
  firstSection();

  //Play second section
  secondSection();

  //Variant 1
  beep(f, 250);  
  beep(gS, 500);  
  beep(f, 350);  
  beep(a, 125);
  beep(cH, 500);
  beep(a, 375);  
  beep(cH, 125);
  beep(eH, 650);

  delay(500);

  //Repeat second section
  secondSection();

  //Variant 2
  beep(f, 250);  
  beep(gS, 500);  
  beep(f, 375);  
  beep(cH, 125);
  beep(a, 500);  
  beep(f, 375);  
  beep(cH, 125);
  beep(a, 650);  

  delay(650);
}

void beep(int note, int duration)
{
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);

  //Play different LED depending on value of 'counter'
  if(counter % 2 == 0)
  {
    digitalWrite(ledPin1, HIGH);
    delay(duration);
    digitalWrite(ledPin1, LOW);
  }else
  {
    digitalWrite(ledPin2, HIGH);
    delay(duration);
    digitalWrite(ledPin2, LOW);
  }

  //Stop tone on buzzerPin
  noTone(buzzerPin);

  delay(50);

  //Increment counter
  counter++;
}

void firstSection()
{
  beep(a, 500);
  beep(a, 500);    
  beep(a, 500);
  beep(f, 350);
  beep(cH, 150);  
  beep(a, 500);
  beep(f, 350);
  beep(cH, 150);
  beep(a, 650);

  delay(500);

  beep(eH, 500);
  beep(eH, 500);
  beep(eH, 500);  
  beep(fH, 350);
  beep(cH, 150);
  beep(gS, 500);
  beep(f, 350);
  beep(cH, 150);
  beep(a, 650);

  delay(500);
}

void secondSection()
{
  beep(aH, 500);
  beep(a, 300);
  beep(a, 150);
  beep(aH, 500);
  beep(gSH, 325);
  beep(gH, 175);
  beep(fSH, 125);
  beep(fH, 125);    
  beep(fSH, 250);

  delay(325);

  beep(aS, 250);
  beep(dSH, 500);
  beep(dH, 325);  
  beep(cSH, 175);  
  beep(cH, 125);  
  beep(b, 125);  
  beep(cH, 250);  

  delay(350);
}