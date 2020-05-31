/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <ahillary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:37:24 by ahillary          #+#    #+#             */
/*   Updated: 2019/09/16 18:42:50 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int val, size_t num)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char*)src;
	while (i < num)
	{
		if (ptr[i] == (unsigned char)val)
			return ((void*)src + i);
		i++;
	}
	return (NULL);
}
