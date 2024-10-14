
#include "libft.h"

void *ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}

void *ft_calloc(size_t count, size_t size)
{
	size_t total_size;
	void *ptr;

	total_size = count * size;
	ptr = malloc(total_size);

	if (ptr)
		ft_bzero(ptr, total_size);

	return (ptr);
}

//! incele main