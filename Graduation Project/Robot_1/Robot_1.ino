const int moteurGaucheA = 5;
const int moteurGaucheR = 6;
const int moteurDroitA = 11;
const int moteurDroitR = 10;

char valSerie;

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(moteurGaucheA, OUTPUT);
  pinMode(moteurGaucheR, OUTPUT);
  pinMode(moteurDroitA, OUTPUT);
  pinMode(moteurDroitR, OUTPUT);
}

void avancer()
{
  digitalWrite(moteurGaucheA, HIGH);
  digitalWrite(moteurGaucheR, LOW);
  digitalWrite(moteurDroitA, HIGH);
  digitalWrite(moteurDroitR, LOW);
  delay(1000);
}

void gauche()
{
  digitalWrite(moteurGaucheA, LOW);
  digitalWrite(moteurGaucheR, LOW);
  digitalWrite(moteurDroitA, HIGH);
  digitalWrite(moteurDroitR, LOW);
  delay(1000);
}
void droite()
{
  digitalWrite(moteurGaucheA, HIGH);
  digitalWrite(moteurGaucheR, LOW);
  digitalWrite(moteurDroitA, LOW);
  digitalWrite(moteurDroitR, LOW);
  delay(1000);
}
void reculer()
{
  digitalWrite(moteurGaucheA, LOW);
  digitalWrite(moteurGaucheR, HIGH);
  digitalWrite(moteurDroitA, LOW);
  digitalWrite(moteurDroitR, HIGH);
  delay(1000);
}
void arreter()
{
  digitalWrite(moteurGaucheA, LOW);
  digitalWrite(moteurGaucheR,LOW );
  digitalWrite(moteurDroitA, LOW);
  digitalWrite(moteurDroitR, LOW);
  delay(2000);
}
void pivoterGauche()
{
  digitalWrite(moteurGaucheA, LOW);
  digitalWrite(moteurGaucheR, HIGH);
  digitalWrite(moteurDroitA, HIGH);
  digitalWrite(moteurDroitR, LOW);
  
}
void pivoterDroite()
{
  digitalWrite(moteurGaucheA, HIGH);
  digitalWrite(moteurGaucheR, LOW);
  digitalWrite(moteurDroitA, LOW);
  digitalWrite(moteurDroitR, HIGH);
  delay(500);
}

void loop()
{
  // put your main code here, to run repeatedly:
  if(Serial.available())
  valSerie = Serial.read();

  if(valSerie == 'a')
  avancer();
  else if(valSerie == 'z')
  gauche();
  else if(valSerie == 'r')
  reculer();
  else if(valSerie == 'x')
  droite();
  else if(valSerie == 'k')
  arreter();
  else if(valSerie == 'g')
  pivoterGauche();
  else if(valSerie == 'd')
  pivoterDroite();
}
