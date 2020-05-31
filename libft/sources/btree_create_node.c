/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <ahillary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 19:06:16 by ahillary          #+#    #+#             */
/*   Updated: 2019/09/19 14:51:46 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *temp;

	temp = malloc(sizeof(t_btree));
	if (temp)
	{
		temp->left = NULL;
		temp->right = NULL;
		temp->item = item;
	}
	return (temp);
}
