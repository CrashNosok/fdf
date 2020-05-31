/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <ahillary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 20:20:39 by ahillary          #+#    #+#             */
/*   Updated: 2019/09/16 18:44:58 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t num)
{
	size_t i;

	i = 0;
	while (i < num)
	{
		if (!src[i])
			break ;
		dest[i] = src[i];
		i++;
	}
	while (i < num)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
