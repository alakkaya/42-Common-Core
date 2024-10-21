#include "libft.h"
int main()
{
    char *s = "hello world this is a test";
    char c = 'w';
    char **result;
    int i;

    // ft_split fonksiyonunu çağır
    result = ft_split(s, c);

    // Sonuç dizisini yazdır
    i = 0;
    while (result[i] != NULL)
    {
        printf("%s\n", result[i]);
        i++;
    }

    // Belleği serbest bırak
    i = 0;
    while (result[i] != NULL)
    {
        free(result[i]);
        i++;
    }
    free(result);

    return 0;
}