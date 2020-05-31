/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <ahillary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:53:39 by ahillary          #+#    #+#             */
/*   Updated: 2019/09/16 18:42:40 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char *ptr;

	ptr = NULL;
	if (size)
	{
		if (!(ptr = (unsigned char*)malloc(size)))
			return (NULL);
		while (size)
			ptr[--size] = 0;
	}
	return ((void*)ptr);
}
