#include <stdio.h>
#include <stdlib.h>
#include "tic-tac-toe.h"



    void afficher_plateau(char **valeurMorpion)
    {
        printf(" %s |  %s  | %s \n", valeurMorpion[0], valeurMorpion[1], valeurMorpion[2]);
        printf("---------------\n");
        printf(" %s |  %s  | %s \n", valeurMorpion[3], valeurMorpion[4], valeurMorpion[5]);
        printf("---------------\n");
        printf(" %s |  %s  | %s \n", valeurMorpion[6], valeurMorpion[7], valeurMorpion[8]);
        printf("\n");
    }



    int choisir_case(char **valeurMorpion)
    {
        char saisie[100];
        char *chiffres = "012345678";
        int user = -1;
        int i;

        while (user == -1)
        {
            printf("choisissez une case entre 0 et 8 : \n");
            scanf("%s", saisie);

            i = 0;
            while (chiffres[i] != '\0')
            {
                if (saisie[0] == chiffres[i] && saisie[1] == '\0')
                {
                    user = i;
                }
                i = i + 1;
            }

            if (user == -1)
            {
                printf("cette case n'existe pas !\n");
            }

            else if (valeurMorpion[user][0] != ' ')
            {
                printf("case deja prise !\n");
                user = -1;
            }
        }

        return (user);
    }



    int ligne(char **valeurMorpion, int a, int b, int c, char symbole)
    {
        if (valeurMorpion[a][0] == symbole && valeurMorpion[b][0] == symbole && valeurMorpion[c][0] == symbole)
        {
            return (1);
        }
        return (0);
    }



    int verifier_victoire(char **valeurMorpion, char symbole)
    {
        int result = 0;

        
        if (ligne(valeurMorpion, 0, 1, 2, symbole) == 1)
        {
            result = 1;
        }
        if (ligne(valeurMorpion, 3, 4, 5, symbole) == 1)
        {
            result = 1;
        }
        if (ligne(valeurMorpion, 6, 7, 8, symbole) == 1)
        {
            result = 1;
        }

    
        if (ligne(valeurMorpion, 0, 3, 6, symbole) == 1)
        {
            result = 1;
        }
        if (ligne(valeurMorpion, 1, 4, 7, symbole) == 1)
        {
            result = 1;
        }
        if (ligne(valeurMorpion, 2, 5, 8, symbole) == 1)
        {
            result = 1;
        }

        
        if (ligne(valeurMorpion, 0, 4, 8, symbole) == 1)
        {
            result = 1;
        }
        if (ligne(valeurMorpion, 2, 4, 6, symbole) == 1)
        {
            result = 1;
        }

        return (result);
    }



    int plateau_plein(char **valeurMorpion)
    {
        int i = 0;
        int count = 0;

        while (i < 9)
        {
            if (valeurMorpion[i][0] != ' ')
            {
                count = count + 1;
            }
            i = i + 1;
        }

        if (count == 9)
        {
            return (1);
        }
        return (0);
    }



    void tour_ordinateur(char **valeurMorpion)
    {
        int i = 0;

        while (valeurMorpion[i][0] != ' ')
        {
            i = i + 1;
        }

        valeurMorpion[i] = "O";
    }
