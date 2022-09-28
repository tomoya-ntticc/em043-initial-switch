#define SWITCHPIN  (2)
#define LEDPIN     (3)
#define SHORTPIN   (5)
#define ALINEPIN   (6)
#define BLINEPIN   (7)
#define DATAPIN   (10)  // 74HC595のDSへ
#define LATCHPIN  (11)  // 74HC595のST_CPへ
#define CLOCKPIN  (12)  // 74HC595のSH_CPへ

bool isReverse;
bool state;
int bit;
int delayTime;

void bitShift( int dataPin, int clockPin, int bit, unsigned long val, bool isReverse)
{
  if (isReverse){
    for( int i = 0; i < bit; i++ )
    {
      digitalWrite(dataPin, !!(val & (1L << i)));

      digitalWrite(clockPin, HIGH);
      digitalWrite(clockPin, LOW);
    }
  } else {
    for( int i = bit; i >= 0; i-- )
    {
      digitalWrite(dataPin, !!(val & (1L << i)));

      digitalWrite(clockPin, HIGH);
      digitalWrite(clockPin, LOW);
    }
  }
}

void setup()
{
  pinMode(SWITCHPIN, INPUT);
  pinMode(LEDPIN, OUTPUT);
  pinMode(SHORTPIN, OUTPUT);
  pinMode(ALINEPIN, OUTPUT);
  pinMode(BLINEPIN, OUTPUT);
  pinMode(DATAPIN, OUTPUT);
  pinMode(LATCHPIN, OUTPUT);
  pinMode(CLOCKPIN, OUTPUT);
  isReverse = 0;
  state = 0;
  bit = 24;
  delayTime = 50;
}

void loop()
{
  isReverse = digitalRead(SWITCHPIN);
  if(state != isReverse) {
    digitalWrite(ALINEPIN, LOW);
    digitalWrite(BLINEPIN, LOW);

    digitalWrite(LEDPIN, isReverse);

    for( int i = 0; i < bit + 1; i++ ) {
      digitalWrite(LATCHPIN, LOW);    // 送信中はLATCHPINをLOWに

      // シフト演算を使って点灯するLEDを選択しています
      bitShift( DATAPIN, CLOCKPIN, bit, 1L << i, isReverse);

      digitalWrite(LATCHPIN, HIGH);   // 送信後はLATCHPINをHIGHに戻す

      delay(delayTime);
    }

    digitalWrite(SHORTPIN, HIGH);
    delay(delayTime);
    digitalWrite(SHORTPIN, LOW);
    delay(delayTime);

    digitalWrite(ALINEPIN, HIGH);
    digitalWrite(BLINEPIN, HIGH);
    state = isReverse;
  }
}
