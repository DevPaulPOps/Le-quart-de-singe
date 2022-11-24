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