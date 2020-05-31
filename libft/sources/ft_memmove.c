/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <ahillary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:20:41 by ahillary          #+#    #+#             */
/*   Updated: 2019/09/16 18:54:54 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	dest_ptr = (unsigned char*)dest;
	src_ptr = (unsigned char*)src;
	if (dest_ptr == src_ptr)
		return (dest);
	else if (src_ptr < dest_ptr)
	{
		src_ptr = (unsigned char*)src + num - 1;
		dest_ptr = dest + num - 1;
		while (num--)
			*dest_ptr-- = *src_ptr--;
	}
	else
	{
		while (num--)
			*dest_ptr++ = *src_ptr++;
	}
	return (dest);
}
