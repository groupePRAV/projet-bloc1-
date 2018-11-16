#include <stdio.h>
#include <stdlib.h>
#include "actions.h"
#include "donnees.h"
#include "menu.h"

int main()
{
    FILE *fichier = NULL;
    FILE *doc = NULL;
    struct stockage tabval[3000];
    fichier = fopen("fichier.csv", "r");
    doc = fopen("retour.csv", "w");
    int n = 0, choixMenu = 0;
    n = compteurLigne(fichier);
    affichageMenu(tabval, choixMenu, n, fichier, doc);
    donnees(tabval,fichier, n);
    ecriture(tabval,doc, n);
}
