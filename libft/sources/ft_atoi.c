/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <ahillary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:46:27 by ahillary          #+#    #+#             */
/*   Updated: 2019/09/21 14:18:14 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int						i;
	int						sign;
	unsigned long long int	nu;

	i = 0;
	sign = 1;
	nu = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		if (nu >= 9223372036854775807 && sign == -1)
			return (0);
		else if (nu > 9223372036854775807 && sign == 1)
			return (-1);
		nu = nu * 10 + (str[i++] - '0');
	}
	return (nu * sign);
}
