#include "coeur.h"
#include "param.h"

void setup()
{
    pinMode(led1,OUTPUT);
    pinMode(led2,OUTPUT);
    pinMode(led3,OUTPUT);
    pinMode(led4,OUTPUT);
    pinMode(led5,OUTPUT);
    pinMode(led6,OUTPUT);
    pinMode(led7,OUTPUT);
    pinMode(led8,OUTPUT);
    pinMode(led9,OUTPUT);
    pinMode(led10,OUTPUT);
}

void loop() {
  switch(choix){
    case 1: chenille();
    break;
    case 2: deuxSurDeux();
    break;
    case 3: troisSurTrois();
    break;
    case 4: clignotant();
    break;
    default: defaut();
    }
}
