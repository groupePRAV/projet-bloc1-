#ifndef DONNEES_H_INCLUDED
#define DONNEES_H_INCLUDED
#include "donnees.c"

int compteurLigne(FILE* fichier);
int donnees(stockage tabval[],FILE* fichier, int n);
int ecriture(stockage tabval[],FILE* doc, int n);
int ecritureLanvers(stockage tabval[],FILE* doc, int n);

#endif // DONNEES_H_INCLUDED
