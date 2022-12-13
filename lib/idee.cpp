/*
#include "head.h"

char	*ft_strupcase(char *str)
{
    int	up;

    up = 0;
    while (str[up] != '\0')
    {
        if (str[up] >= 'a' && str[up] <= 'z')
            str[up] -= 32;
        up++;
    }
    return (str);
}

char *addchar(char *str, char c)
{
    int i;
    i = ft_strlen(str);
    str[i] = c;
    return (str);
}

int	ft_strlen(char *str)
{
    int	nbchar;

    nbchar = 0;
    while (*str++)
        nbchar++;
    return (nbchar);
}

void initialiser(unsigned int taille) // Initialise
{

}

void creation()
{
//    new;
}
void detruire() // Supprimer le tableau dynamique
{
//    delete [] ;
}

int quelargument(char *argv, int index)// Pour la partie où on doit afficher 1H 2H 3R 4H
{
    return argv[index];
}

//j'ai la fonction strstr qui recherche une occurence entre un string
char	*ft_strstr(char *str, char *to_find)
{
    int	i;
    int	j;

    i = 0;
    j = 0;
    if (to_find[j] == '\0')
        return (&str[i]);
    while (str[i])
    {
        if (str[i] == to_find[j])
        {
            while (to_find[j] && str[i + j] == to_find[j])
                j++;
            if (to_find[j] == '\0')
                return (&str[i]);
            j = 0;
        }
        i++;
    }
    return (0);
}


*/
