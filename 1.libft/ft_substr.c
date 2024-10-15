
#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    // memmove ile farkı?
    size_t i;

    i = 0;
    // overlap varsa 2 bellek alanı çakışırsa undefined davranış
    if (dst == NULL && src == NULL)
        return (NULL);

    while (i < n)
    {
        ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return (dst);
}
size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_strdup(const char *s1)
{
    size_t len = ft_strlen(s1) + 1;
    void *new = malloc(len);

    if (new == NULL)
        return (NULL);
    return (char *)ft_memcpy(new, s1, len);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;

    i = 0;
    if (s[i] == '\0')
        return (NULL);

    if (start > len)
        return ft_strdup(" ");

    substr = malloc((len + 1) * sizeof(char));
    while (s[i + start] && i < len)
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return (substr);
}

int main()
{
    char *s = "akkaya";
    printf("%s", ft_substr(s, 2, 2));

    return 0;
}