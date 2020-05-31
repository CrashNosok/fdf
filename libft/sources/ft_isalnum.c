/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <ahillary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:46:55 by ahillary          #+#    #+#             */
/*   Updated: 2019/09/19 13:36:49 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int ch)
{
	if (ch < 0 || ch > 255)
		return (0);
	else if (((unsigned char)ch >= '0' && (unsigned char)ch <= '9') ||
			((unsigned char)ch >= 'A' && (unsigned char)ch <= 'Z') ||
			((unsigned char)ch >= 'a' && (unsigned char)ch <= 'z'))
		return (1);
	else
		return (0);
}
