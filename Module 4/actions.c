#include <stdio.h>
#include <stdlib.h>
#define TAILLE_MAX 1000 // Tableau de taille 1000
#include <stdbool.h>
#include <conio.h>

typedef struct stockage stockage;
struct stockage{
    int pouls;
    int temps;
};

void transfertdonnees(int n){
    FILE *fichier = NULL;
    char chaine[TAILLE_MAX] = "";
    fichier = fopen("fichier.csv", "r");
    if(fichier == NULL){
        printf("On a du mal a ouvrir le fichier.csv!\n");
    }

    if (fichier != NULL){
        for(int i = 0; i < n ; i++){
            fgets(chaine, TAILLE_MAX, fichier);
            printf("%s", chaine);
        }
    }
    fclose(fichier);
}

void croissantPouls(stockage tabval[], int n)
{
     int valeurtemporaire, i, j;
    for (i=0; i<n; i++){
        for(j=i;j<n; j++){
            if(tabval[j].pouls < tabval[i].pouls){
                valeurtemporaire = tabval[i].pouls;
                tabval[i].pouls = tabval[j].pouls;
                tabval[j].pouls = valeurtemporaire;
            }
        }
    }
}

void croissantTemps(stockage tabval[], int n)
{
    int valeurtemporaire, i, j;
    for (i=0; i<n; i++){
        for(j=i;j<n; j++){
            if(tabval[j].temps < tabval[i].temps){
                valeurtemporaire = tabval[i].temps;
                tabval[i].temps = tabval[j].temps;
                tabval[j].temps = valeurtemporaire;
            }
        }
    }
}

void afficherTemps(stockage tabval[], int n)
{
    int t;
    printf("Saisir un temps :\n");
    scanf("%d", t);
    int j = 0;
    for (int i=0; i<n; i++)
    {
        if(t != tabval[j].temps)
        {
            j++;
        }
        else
        {
            printf(tabval[j].pouls);
            break;
        }
    }
}

void moyennePouls(stockage tabval[], int n)
{
    int inf = 1, sup = 0;
    double temp = 0, moyenne = 0, j = 0;
    printf("\nEntrez l'intervalle dont vous voulez la moyenne\n");
    scanf("%d %d", &inf, &sup);
    if (inf > n || sup > n || inf > sup){
        printf("Votre intervalle est faux !");
    }
    for (int i = inf; i <= sup; i++){
        j++;
        temp = tabval[i].pouls + temp;
    }
    moyenne = temp / j;
    printf("La moyenne des valeurs de pouls entre la %d eme valeur et la %d eme valeur est %lf",inf,sup,moyenne);
}

void minPouls(stockage tabval[], int n)
{
    int valeurpoulstemporaire,valeurmstemporaire, i, j;
    for (i=0; i<n; i++){
        for(j=i;j<n; j++){
            if(tabval[j].pouls < tabval[i].pouls){
                valeurpoulstemporaire = tabval[i].pouls;
                valeurmstemporaire = tabval[i].temps;
                tabval[i].pouls = tabval[j].pouls;
                tabval[i].temps = tabval[j].temps;
                tabval[j].pouls = valeurpoulstemporaire;
                tabval[j].temps = valeurmstemporaire;
            }
        }
    }
        printf("La valeur minimale du pouls est %d qui est atteinte apres %d unite de temps\n", tabval[0].pouls,tabval[0].temps);
}


void maxPouls(stockage tabval[], int n)
{
    int maxpouls = 0, maxmsofpouls = 0;
    for (int i = 0; i < n; i++){
        if (tabval[i].pouls < tabval[i+1].pouls){
            maxpouls = tabval[i+1].pouls;
            maxmsofpouls = tabval[i+1].temps;
            tabval[i] = tabval[i+1];
        }
        else if (tabval[i].pouls > tabval[i+1].pouls){
            maxpouls = tabval[i].pouls;
            maxmsofpouls = tabval[i].temps;
            tabval[i+1]=tabval[i];
        }
    }
    printf("La valeur maximale de pouls est de %d qui est atteiente apres %d unite de temps",maxpouls,maxmsofpouls);
}

