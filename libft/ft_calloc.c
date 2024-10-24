#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
    char	*tmp;

    tmp = malloc(nmemb * size);
    if (!tmp)
        return (NULL);

    ft_memset(tmp, 0, nmemb * size);
    return (tmp);
}
