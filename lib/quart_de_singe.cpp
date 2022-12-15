//
// Created by perig on 12/12/2022.
//

#include "quart_de_singe.h"


void    stockstring(ifstream& fichier, char **tabstr,unsigned int& taille)
{
    //int i;//pour tester
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
        //cout << i << endl;//pour tester
        //i++;//pour tester
    }
    fichier.close();
}

void allouerJoueurs(PARTIE& partie)
{
    partie.joueur = new JOUEUR[partie.nbrjoueur];
}

void allouerTableau(PARTIE& partie)
{
    partie.tabmot = new char[partie.tailletableau];
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
            return true;
        i++;
    }
    return false;
}

bool    rechercheDichotomique(char** tabstr, int taille, char* str)
{

    int debut = 0;
    int fin = taille - 1;
    int milieu, cmp;
    while (debut <= fin)
    {
        milieu = (debut + fin) / 2;
        cmp = ft_strcmp(tabstr[milieu], str);
        if (cmp == 0)
            return true;
        else if (cmp > 0)
            fin = milieu - 1;
        else
            debut = milieu + 1;
    }
    return false;
}

void presentation()
{
    system("color 3");
    cout << "   _                               _         _            _                  " << endl;
    cout << "  | | ___    __ _ _   _  __ _ _ __| |_    __| | ___   ___(_)_ __   __ _  ___ " << endl;
    cout << "  | |/ _ \\  / _` | | | |/ _` | '__| __|  / _` |/ _ \\ / __| | '_ \\ / _` |/ _ \\" << endl;
    cout << "  | |  __/ | (_| | |_| | (_| | |  | |_  | (_| |  __/ \\__ \\ | | | | (_| |  __/" << endl;
    cout << "  |_|\\___|  \\__, |\\__,_|\\__,_|_|   \\__|  \\__,_|\\___| |___/_|_| |_|\\__, |\\___|" << endl;
    cout << "               |_|                                                |___/       \n\n" << endl;
    system("color c");
    cout << "\t   Bienvenue sur le jeu le quart de singe voici les regles : \n" << endl;
    cout << "  Chaque joueur doit chacun son tour ecrire UNE lettre pour former un mot." << endl;
    cout << "\tCelui qui forme un mot de plus de 2 lettres prend 1/4 de singe" << endl;
    cout << "\t  Si vous doutez sur le mot que pense votre adversaire precedent fait (?)" << endl;
    cout << "\t\tSi vous souhaitez abandonne la manche faite (!)" << endl;
    cout << endl;
    system("color 0");
}