#ifndef __TIC_TAC_TOE_H__
#define __TIC_TAC_TOE_H__

    void afficher_plateau(char **valeurMorpion);

    int choisir_case(char **valeurMorpion);

    int ligne(char **valeurMorpion, int a, int b, int c, char symbole);

    int verifier_victoire(char **valeurMorpion, char symbole);

    int plateau_plein(char **valeurMorpion);

    void tour_ordinateur(char **valeurMorpion);

#endif
