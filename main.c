#include <stdio.h>
#include <stdlib.h>
#include "tic-tac-toe.h"

void effacer_ecran()
{
    if (system("clear") != 0)
    {
        printf("\n");
    }
}

int main(void)
{
    char *valeurMorpion[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
    int user;
    int fin = 0;

    effacer_ecran();
    afficher_plateau(valeurMorpion);

    while (fin == 0)
    {
        user = choisir_case(valeurMorpion);
        valeurMorpion[user] = "X";

        if (verifier_victoire(valeurMorpion, 'X') == 1)
        {
            fin = 1;
        }

        else if (plateau_plein(valeurMorpion) == 1)
        {
            fin = 2;
        }

        else
        {
            tour_ordinateur(valeurMorpion);

            if (verifier_victoire(valeurMorpion, 'O') == 1)
            {
                fin = 3;
            }
        }

        effacer_ecran();
        afficher_plateau(valeurMorpion);
    }

    if (fin == 1)
    {
        printf("vous avez gagne !\n");
    }

    else if (fin == 2)
    {
        printf("match nul !\n");
    }

    else
    {
        printf("l'ordinateur a gagne !\n");
    }

    return 0;
}
