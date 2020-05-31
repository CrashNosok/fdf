/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <ahillary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 20:46:02 by ahillary          #+#    #+#             */
/*   Updated: 2019/09/19 14:51:39 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	t_btree *temp;

	if (!root)
		return ;
	temp = root;
	applyf(temp->item);
	btree_apply_prefix(temp->left, applyf);
	btree_apply_prefix(temp->right, applyf);
}
