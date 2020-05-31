/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <ahillary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:21:34 by ahillary          #+#    #+#             */
/*   Updated: 2019/09/19 13:34:46 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int ch, size_t count)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;
	size_t			i;

	i = 0;
	dest_ptr = (unsigned char*)dest;
	src_ptr = (unsigned char*)src;
	if ((!(dest || src)) || dest == src)
		return (NULL);
	while (src_ptr[i] != (unsigned char)ch && i < count)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	if (src_ptr[i] == (unsigned char)ch && i < count)
	{
		dest_ptr[i] = src_ptr[i];
		return (dest + i + 1);
	}
	else
		return (NULL);
}
