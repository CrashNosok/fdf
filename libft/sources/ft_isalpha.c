/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <ahillary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:47:05 by ahillary          #+#    #+#             */
/*   Updated: 2019/09/19 13:36:41 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int ch)
{
	if (ch < 0 || ch > 255)
		return (0);
	else if (((unsigned char)ch >= 'A' && (unsigned char)ch <= 'Z') ||
	((unsigned char)ch >= 'a' && (unsigned char)ch <= 'z'))
		return (1);
	else
		return (0);
}
