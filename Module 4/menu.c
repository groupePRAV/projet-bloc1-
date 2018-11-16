#include <stdio.h>
#include <stdlib.h>
#include "actions.h"
#include "donnees.h"
#include "menu.h"


int affichageMenu(stockage tabval[], int choixMenu, int n, FILE* fichier, FILE* doc)
{
     printf("---Menu---\n");
     printf("1.Afficher les donnees dans l'ordre du fichier.csv\n");
     printf("2.Afficher les donnees en ordre croissant selon le pouls\n");
     printf("3.Afficher les donnees en ordre croissant selon le temps\n");
     printf("4.Afficher les donnees en ordre décroissant selon le pouls\n");
     printf("5.Afficher les donnees en ordre décroissant selon le temps\n");
     printf("6.Rechercher et afficher les donnees pour un temps particulier\n");
     printf("7.Afficher la moyenne de pouls dans une plage de temps donnée\n");
     printf("8.Afficher le nombre de lignes de donnees actuellement en memoire\n");
     printf("9.Rechercher et afficher le min de pouls (avec le temps associe) \n");
     printf("10.Rechercher et afficher le max de pouls (avec le temps associe) \n");
     printf("11.Quitter l application \n");
     scanf("%d", &choixMenu);

     printf("\n");
     switch(choixMenu)
    {
                     case 1:
                          transfertdonnees(n);
                          break;
                     case 2:
                          donnees(tabval,fichier, n);
                          croissantPouls(tabval, n);
                          ecriture(tabval,doc, n);
                          break;
                     case 3:
                          donnees(tabval,fichier, n);
                          croissantTemps(tabval, n);
                          ecriture(tabval,doc, n);
                          break;
                     case 4:
                          donnees(tabval,fichier, n);
                          croissantPouls(tabval, n);
                          ecritureLanvers(tabval, doc, n);
                          break;
                     case 5:
                          donnees(tabval,fichier, n);
                          croissantTemps(tabval, n);
                          ecritureLanvers(tabval, doc, n);
                          break;
                     case 6:
                          donnees(tabval,fichier, n);
                          afficherTemps(tabval, n);
                          break;
                     case 7:
                          donnees(tabval,fichier, n);
                          moyennePouls(tabval, n);
                          break;
                     case 8:
                          printf("Le nombre de ligne est %d\n", n);
                          break;
                     case 9:
                          donnees(tabval,fichier, n);
                          minPouls(tabval, n);
                          break;
                     case 10:
                          donnees(tabval,fichier, n);
                          maxPouls(tabval, n);
                          break;
                     case 11:
                          printf("A bientot!\n");
                          break;
                     default:
                             printf("error 404");
                             break;
    }

  system("PAUSE");
  return 0;
}
