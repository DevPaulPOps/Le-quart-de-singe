//
// Created by perig on 12/12/2022.
//

#ifndef NEW_QUART_DE_SINGE_H
#define NEW_QUART_DE_SINGE_H

#include <iostream>
#include <fstream>
#include <cassert>
#include "ft_string.h"
using namespace std;

enum {
    MIN_MOT = 2,
    MAX_MOT = 26,
    MAX_SCORE = 1,
};

typedef struct
{
    double score;
    unsigned int numjoueur;
}JOUEUR;

typedef struct
{
    unsigned int nbrjoueur;
    char *tabmot;
    unsigned int tailletableau;
    char *tabmotaverif;
    char **monfichier;
    unsigned int fichiertaille;
    JOUEUR *joueur;
}PARTIE;

void    stockstring(ifstream& fichier, char **tabstr,unsigned int& taille);
void    detruire(char **str, int& taille);
bool    is_in_the_file(char **tabstr, char *str);
bool    rechercheDichotomique(char** tabstr, int taille, char* str);
void    presentation();
void allouerJoueurs(PARTIE& partie);
void allouerTableau(PARTIE& partie);
#endif //NEW_QUART_DE_SINGE_H
