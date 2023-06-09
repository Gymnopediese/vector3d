/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_tocol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 22:28:21 by albaud            #+#    #+#             */
/*   Updated: 2022/12/16 15:34:12 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_v3.h"

int	v_tocol(const t_v3 *a)
{
	int	rgb;

	if (a->x >= 255.0)
		rgb = 255;
	else
		rgb = a->x;
	if (a->y >= 255.0)
		rgb = (rgb << 8) + 255;
	else
		rgb = (rgb << 8) + a->y;
	if (a->z >= 255.0)
		rgb = (rgb << 8) + 255;
	else
		rgb = (rgb << 8) + a->z;
	return (rgb);
}
