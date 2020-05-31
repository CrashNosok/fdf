/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <ahillary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 20:23:52 by ahillary          #+#    #+#             */
/*   Updated: 2019/09/19 13:39:45 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	len = ft_strlen(s);
	if (!len--)
		return (ft_strnew(0));
	while ((s[len] == ' ' || s[len] == '\n' || s[len] == '\t') && len)
		len--;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && len)
		i++;
	if (!len)
		return (ft_strnew(0));
	if (!(str = (char*)malloc(sizeof(*str) * (len - i + 2))))
		return (NULL);
	while (i <= len)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
