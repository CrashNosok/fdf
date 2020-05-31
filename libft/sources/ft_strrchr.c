/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <ahillary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:50:45 by ahillary          #+#    #+#             */
/*   Updated: 2019/09/17 20:39:55 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int symbol)
{
	int		i;
	int		flag;

	i = 0;
	flag = -1;
	if (symbol < 0 || symbol > 255)
		return (NULL);
	if ((unsigned char)symbol == '\0')
		return ((char*)(src + ft_strlen(src)));
	while (src[i])
	{
		if (src[i] == (unsigned char)symbol)
			flag = i;
		i++;
	}
	if (flag >= 0)
		return ((char*)(src + flag));
	return (NULL);
}
