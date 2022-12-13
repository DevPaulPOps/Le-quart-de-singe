//
// Created by perig on 12/12/2022.
//

#include "quart_de_singe.h"


char **stockstring(ifstream& fichier, char **tabstr,int& taille)
{
    int i;//pour tester
    char str[MAX_MOT + 1];
    while (fichier >> str)
    {
        char* newWord = new char[ft_strlen(str) + 1];
        ft_strcpy(newWord, str);
        char** newWords = new char*[taille + 1];
        for (int i = 0; i < taille; i++)
            newWords[i] = tabstr[i];
        newWords[taille] = newWord;
        delete[] tabstr;
        tabstr = newWords;
        taille++;
        cout << i << endl;//pour tester
        i++;//pour tester
    }
    fichier.close();
    return tabstr;
}

void detruire(char **tabstr, int& taille)
{
    for (int i = 0; i < taille; i++)//test
        cout << tabstr[i];//<< //endl;//test
    for (int i = 0; i < taille; i++)
        delete[] tabstr[i];
    delete[] tabstr;
}

bool    is_in_the_file(char **tabstr, char *str)
{
    int i;
    i = 0;

    while (**tabstr)
    {
        if (ft_strncmp(str, tabstr[i], ft_strlen(str)) == 0)
        {
            return true;
        }
        i++;
    }
    return false;
}