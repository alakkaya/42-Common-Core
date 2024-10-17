#include "libft.h"

int main()
{
    char const *s1 = "Ali Akkayc   ";
    char const *set = "c";

    printf("%s\n", ft_strtrim(s1, set));

    return 0;
}