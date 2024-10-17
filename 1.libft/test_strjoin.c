#include "libft.h" // Include the libft header

int main()
{
    char *s1 = "Hello";
    char *s2 = " World!";

    char *joined_str = ft_strjoin(s1, s2); // Call ft_strjoin

    if (joined_str == NULL)
    {
        printf("Error: ft_strjoin failed to allocate memory.\n");
        return 1;
    }

    printf("Joined string: %s\n", joined_str); // Print the result

    free(joined_str); // Free the allocated memory (important!)

    return 0;
}