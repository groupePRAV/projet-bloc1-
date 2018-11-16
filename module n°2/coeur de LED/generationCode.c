#include <stdio.h>
#include <stdlib.h>
#include "generationCode.h"

int generationCode(int choix)
{
    FILE *fichier = NULL;

    fichier = fopen("C:\\Users\\pierr\\Desktop\\module n°2\\coeur\\param.h", "w+");
    if (fichier != NULL)
    {
        fprintf(fichier, "#define choix %d", choix);
        fclose(fichier);
    }

    return 0;
}
