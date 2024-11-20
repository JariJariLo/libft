/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crjarill <crjarill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:55:13 by crjarill          #+#    #+#             */
/*   Updated: 2024/11/10 11:24:26 by crjarill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	const unsigned char	*src_ptr;
	unsigned char		*dest_ptr;

	src_ptr = (const unsigned char *)src;
	dest_ptr = (unsigned char *)dest;
	if (dest_ptr < src_ptr || src_ptr + count <= dest_ptr)
	{
		return (ft_memcpy(dest, src, count));
	}
	if (dest_ptr > src_ptr)
	{
		src_ptr += count;
		dest_ptr += count;
		while (count--)
		{
			*--dest_ptr = *--src_ptr;
		}
	}
	return (dest);
}
