/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <ahillary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 17:44:05 by ahillary          #+#    #+#             */
/*   Updated: 2019/09/19 13:33:33 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	size_t			i;
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	if ((!(dest || src)) || dest == src)
		return (NULL);
	i = 0;
	dest_ptr = (unsigned char*)dest;
	src_ptr = (unsigned char*)src;
	while (i < count)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest_ptr);
}
