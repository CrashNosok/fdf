/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <ahillary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:49:31 by ahillary          #+#    #+#             */
/*   Updated: 2019/09/16 18:44:48 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ptr;
	size_t	len;
	size_t	i;

	if (s && f)
	{
		i = 0;
		len = ft_strlen((char*)s);
		ptr = (char*)malloc(len * sizeof(*ptr) + 1);
		if (!ptr)
			return (NULL);
		while (s[i])
		{
			ptr[i] = f(s[i]);
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	return (NULL);
}
