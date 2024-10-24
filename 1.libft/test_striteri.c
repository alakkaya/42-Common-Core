#include "libft.h"

void ft_tou(unsigned int i,char *c)
{
    if (*c >= 'a' && *c <= 'z')
    {   
        *c -= 32;
    }
}
int main()
{
    char s[] = "kenan";
    ft_striteri(s,ft_tou);
    printf("%s",s);
}