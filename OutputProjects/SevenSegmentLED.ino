//(C) Pradeep Loganthan
//http://pradeeploganathan.com

//   G F + A B
//   | | | | |   -> pins and segments they control
//   ---------
//  F|   A   |B
//   |---G---|   -> segments
//  E|   D   |C
//   ---------
//   | | | | |   -> pins and segments they control
//   E D + C DP

// Segments that make each number when lit:
// 0 => ABCDEF
// 1 => BC
// 2 => ABDEG
// 3 => ABCDG
// 4 => BCFG
// 5 => ACDFG
// 6 => ACDEFG
// 7 => ABC
// 8 => ABCDEFG
// 9 => ABCDFG


//int b=6, a=7, f=12, g=7, dp=8, c=5, d=4, e=11;
int b=4, a=5, f=6, g=7, dp=10, c=11, d=12, e=13;

void setup()
{
  pinMode(b, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);

}
void loop()
{
  while(true)
  {
    zero();
    delay(1250);
    one();
    delay(1250);
    two();
    delay(1250);
    three();
    delay(1250);
    four();
    delay(1250);
    five();
    delay(1250);
    six();
    delay(1250);
    seven();
    delay(1250);
    eight();
    delay(1250);
    nine();
    delay(1250);
  }
}

void zero()  //Writes a #0 on the display 0 => ABCDEF
{
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
}
void one()  //Writes a #1 on the display 1 => BC
{
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, HIGH);
}
void two()  //Writes a #2 on the display 2 => ABDEG
{
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(dp, HIGH);
}
void three()  //Writes a #3 on the display 3 => ABCDG
{
   digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(dp, HIGH);
}
void four()  //Writes a #4 on the display 4 => BCFG
{
 digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp, HIGH);
}
void five()  //Writes a #5 on the display 5 => ACDFG
{
 digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp, HIGH);
}
void six()  //Writes a #6 on the display 6 => ACDEFG
{
 digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp, HIGH);
}
void seven()  //Writes a #7 on the display 7 => ABC
{
 digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, HIGH);
}
void eight()  //Writes a #8 on the display 8 => ABCDEFG
{
 digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp, LOW);
}
void nine()  //Writes a #9 on the display 9 => ABCDFG
{
   digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp, HIGH);

}

