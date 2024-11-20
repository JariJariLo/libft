/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crjarill <crjarill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:55:13 by crjarill          #+#    #+#             */
/*   Updated: 2024/11/10 11:27:29 by crjarill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dsize;
	size_t	ssize;
	size_t	res;

	dsize = ft_strlen(dest);
	ssize = ft_strlen(src);
	res = dsize + ssize;
	if (n == 0)
		return (ssize);
	if (dsize >= n)
		return (ssize + n);
	dest += dsize;
	n -= dsize;
	if (ssize >= n)
		ssize = n - 1;
	ft_memcpy(dest, src, ssize);
	dest[ssize] = '\0';
	return (res);
}
