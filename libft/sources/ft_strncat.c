/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <ahillary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 21:01:40 by ahillary          #+#    #+#             */
/*   Updated: 2019/09/16 18:44:53 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	ptr = dest;
	i = ft_strlen(dest);
	j = 0;
	while (src[j] && j < n)
	{
		ptr[i] = src[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
