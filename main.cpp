
#include "lib/quart_de_singe.h"



int main(int argc, char *argv[])
{
    presentation();
    PARTIE partie;
    partie.nbrjoueur = ft_strlen(argv[1]);
    partie.tailletableau = 5;
    partie.fichiertaille = 0;
    ifstream dict("test.txt");
    if (!dict)
    {
        cerr << "Le fichier est pas ouvert\n";
        return -1;
    }
    stockstring(dict, partie.monfichier, partie.fichiertaille);
    allouerJoueurs(partie);
    delete[] partie.joueur;
    return 0;
}



void playgame(PARTIE partie, )
{
    char lettre;

    while (!is_in_the_file(partie.monfichier, partie.tabmot))
    {

    }
}









/*char *test(char *str, char **tabstr)
{
    int i;
    while (!is_in_the_file(tabstr,str))
    {
        cin >> str[i];
        switch (str[i])
        {
            case '!':
                //instruction
                break;
            case '?':
                //instruction
                break;
            case 'a' ... 'z':
                str[i] -= 32;
                break;
            default:
                break;
        }
        i++;
    }
    return str;
}
 void affiche()
{
    cout << "Le joueur, " << " (le mot) " << '>' << endl;
}

 */