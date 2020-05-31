/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <ahillary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:49:53 by ahillary          #+#    #+#             */
/*   Updated: 2019/09/16 18:44:20 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	char	*ptr1;
	char	*ptr2;

	ptr1 = (char*)s1;
	ptr2 = (char*)s2;
	if (s1 && s2)
	{
		if (ft_strcmp(ptr1, ptr2) == 0)
			return (1);
		else
			return (0);
	}
	return (0);
}
