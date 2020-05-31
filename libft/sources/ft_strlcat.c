/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <ahillary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 21:10:19 by ahillary          #+#    #+#             */
/*   Updated: 2019/09/21 15:13:48 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t num)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (dest[len] && len < num)
		len++;
	i = len;
	while (src[len - i] && len + 1 < num)
	{
		dest[len] = src[len - i];
		len++;
	}
	if (i < num)
		dest[len] = '\0';
	return (i + ft_strlen(src));
}
