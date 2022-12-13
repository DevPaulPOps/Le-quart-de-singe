//
// Created by perig on 13/12/2022.
//

#include "ft_string.h"

char	*ft_strcpy(char *dest, char *src)
{
    int	i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int     ft_strlen(char *str)
{
    int	nbchar;

    nbchar = 0;
    while (*str++)
        nbchar++;
    return (nbchar);
}

int	ft_strcmp(char *s1, char *s2)
{
    int	i;

    i = 0;
    while (s1[i] && s1[i] == s2[i])
    {
        s1++;
        s2++;
    }
    return (s1[i] - s2[i]);
}

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


int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int	i;

    i = 0;
    if (n == 0)
        return (0);
    while (s1[i] && s1[i] == s2[i] && i < n -1)
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

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