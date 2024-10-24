#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*tmp;
	size_t				i;

	i = 0;
	tmp = (const unsigned char *)s;
	while (i < n)
	{
		if (*tmp == (unsigned char)c)
		{
			return ((void *)tmp);
		}
		tmp++;
		i++;
	}
	return (NULL);
}