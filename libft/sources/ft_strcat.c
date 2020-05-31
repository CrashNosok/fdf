/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <ahillary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 20:27:51 by ahillary          #+#    #+#             */
/*   Updated: 2019/09/16 18:43:46 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	ptr = (char*)dest;
	i = ft_strlen(dest);
	j = 0;
	while (src[j])
	{
		ptr[i] = src[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
