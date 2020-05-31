/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <ahillary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:45:22 by ahillary          #+#    #+#             */
/*   Updated: 2019/09/21 14:45:19 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] &&
		s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (s1[i] < 0 && s2[i] < 0)
		return ((-s1[i]) - (-s2[i]));
	else if (s2[i] < 0)
		return (-1);
	else if (s1[i] < 0)
		return (1);
	else
		return (s1[i] - s2[i]);
}
