/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <ahillary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 20:09:40 by ahillary          #+#    #+#             */
/*   Updated: 2019/09/19 13:43:27 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	new_len;
	char	*new_str;

	if (!s1 || !s2)
		return (NULL);
	new_len = ft_strlen(s1) + ft_strlen(s2);
	if (!(new_str = (char*)malloc(sizeof(*new_str) * (new_len + 1))))
		return (NULL);
	ft_strcpy(new_str, s1);
	ft_strcat(new_str, s2);
	return (new_str);
}
