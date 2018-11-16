#include <stdio.h>
#include <stdlib.h>
#define TAILLE_MAX 1000 // Tableau de taille 1000

int compteurLigne(FILE* fichier){
    int i ;
    int nbrLignes = 0;
    while((i = fgetc(fichier)) != EOF)
    {
        if(i=='\n'){
            nbrLignes++;
        }
    }
    rewind(fichier);
    return (nbrLignes);
}

int donnees(stockage tabval[],FILE* fichier, int n)
{
    fichier = fopen("fichier.csv", "r");
    n = compteurLigne(fichier);
    if (fichier != NULL){
        for(int i =0;i<n;i++){
            fscanf(fichier,"%d", tabval[i].pouls);
            fscanf(fichier,"%d\n", tabval[i].temps);
        }
        fclose(fichier);
    }
    return 0;
}

int ecriture(stockage tabval[],FILE* doc, int n)
{
    doc = fopen("retour.csv", "w");
    if (doc != NULL){
        for(int i =0;i<n;i++){
            fprintf(doc,"%d", tabval[i].pouls);
            fprintf(doc,"%d\n", tabval[i].temps);
        }
        fclose(doc);
    }
    return 0;
}

int ecritureLanvers(stockage tabval[],FILE* doc, int n)
{
   doc = fopen("retour.csv", "w");
    if (doc != NULL){
        for(int i=n;i>0;i--){
            fprintf(doc,"%d", tabval[i].pouls);
            fprintf(doc,"%d\n", tabval[i].temps);
        }
        fclose(doc);
    }
    return 0;
}

