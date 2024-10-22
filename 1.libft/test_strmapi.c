#include "libft.h"

// Örnek fonksiyon: ASCII değerini bir artır
char example_function(unsigned int index, char c)
{
    return c + 1; // Her karakterin ASCII değerini bir artır
}

int main()
{
    const char *input_string = "hello";
    char *result;

    result = ft_strmapi(input_string, example_function);

    printf("Sonuç: %s\n", result); // Beklenen çıktı: "ifmmp"
    free(result);                  // Belleği serbest bırak

    return 0;
}