/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <ahillary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:50:54 by ahillary          #+#    #+#             */
/*   Updated: 2019/09/17 21:04:26 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	int			i;
	int			j;
	int			size;

	i = 0;
	size = ft_strlen(str1) - ft_strlen(str2);
	if (size < 0)
		return (NULL);
	while (i < (size + 1))
	{
		j = 0;
		while ((str1[i] == str2[j]) && str2[j])
		{
			i++;
			j++;
		}
		if (str2[j] == '\0')
			return ((char*)(str1 + i - ft_strlen(str2)));
		i -= j - 1;
	}
	return (NULL);
}
