/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <ahillary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 19:34:38 by ahillary          #+#    #+#             */
/*   Updated: 2019/09/16 18:44:17 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*ft_strdup(const char *src)
{
	char	*str;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	str = (char*)malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
