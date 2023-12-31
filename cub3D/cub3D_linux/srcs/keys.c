/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoiffie <lcoiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 01:30:29 by lcoiffie          #+#    #+#             */
/*   Updated: 2020/04/10 01:31:31 by lcoiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
**	keys :
** - 53 : esc
** - 13 : w
** - 1 : s
** - 0 : a
** - 2 : d
** - 123 : left arrow
** - 124 : right arrow
*/

int		hit_key(int key, t_data *data)
{
	if (key == ESC)
		closing(data);
	if (key == UP)
		data->move.up = 1;
	if (key == DOWN)
		data->move.down = 1;
	if (key == LEFT)
		data->move.left = 1;
	if (key == RIGHT)
		data->move.right = 1;
	if (key == ARROW_LEFT)
		data->move.rot_l = 1;
	if (key == ARROW_RIGHT)
		data->move.rot_r = 1;
	return (0);
}

/*
**	keys :
** - 13 : w
** - 1 : s
** - 0 : a
** - 2 : d
** - 123 : left arrow
** - 124 : right arrow
*/

int		release_key(int key, t_data *data)
{
	if (key == UP)
		data->move.up = 0;
	if (key == DOWN)
		data->move.down = 0;
	if (key == LEFT)
		data->move.left = 0;
	if (key == RIGHT)
		data->move.right = 0;
	if (key == ARROW_LEFT)
		data->move.rot_l = 0;
	if (key == ARROW_RIGHT)
		data->move.rot_r = 0;
	return (0);
}
