/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_listener.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:03:56 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/06/10 00:25:25 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

/*-------------------------*/
/*  Handles event actions  */
/*-------------------------*/
void	action_listener(void *param)
{
	t_fractal	*f;

	f = param;
	mlx_close_hook(f->mlx, &close_hook, f);
	mlx_resize_hook(f->mlx, &resize_hook, f);
	mlx_scroll_hook(f->mlx, &scroll_hook, f);
	mlx_cursor_hook(f->mlx, &cursor_hook, f);
	mlx_key_hook(f->mlx, &key_hook, f);
}
