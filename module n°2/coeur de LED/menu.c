#include <stdlib.h>
#include <stdio.h>
#include "generationCode.h"

void menu()
{
    int choix;
    printf("Quel est votre choix ?\n");
    printf("1 = Chenille\n");
    printf("2 = Une led sur deux\n");
    printf("3 = Une led sur trois\n");
    printf("4 = clignotant\n");
    printf("0 = eteindre les leds\n");
    scanf("%d", &choix);
    generationCode(choix);
}
