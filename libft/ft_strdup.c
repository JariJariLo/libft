/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crjarill <crjarill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:55:13 by crjarill          #+#    #+#             */
/*   Updated: 2024/11/10 11:26:57 by crjarill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int len(const char *str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}*/

char	*ft_strdup(const char *s1)
{
	char	*duplicate;
	size_t	len;

	len = ft_strlen(s1) + 1;
	duplicate = (char *)malloc(len * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	ft_memcpy(duplicate, s1, len);
	return (duplicate);
}

/*int main() {
    char *duplicated = ft_strdup("felipe");
    if (duplicated) {
        printf("%s\n", duplicated);
        free(duplicated); // Libera la memoria asignada
    } else {
        printf("Fallo en la asignación de memoria\n");
    }
    return 0;
}
*/