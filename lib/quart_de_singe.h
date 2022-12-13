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
char    **stockstring(ifstream& fichier, char *str, char **tabstr,int& taille);
void    detruire(char **str, int& taille);
bool    is_in_the_file(char **tabstr, char *str);

#endif //NEW_QUART_DE_SINGE_H
