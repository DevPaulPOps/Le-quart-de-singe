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
