/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <ahillary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:50:17 by ahillary          #+#    #+#             */
/*   Updated: 2019/09/18 21:06:23 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *ptr;

	if (!(ptr = (char*)malloc(size + 1)))
		return (NULL);
	ft_memset(ptr, 0, size + 1);
	return (ptr);
}
