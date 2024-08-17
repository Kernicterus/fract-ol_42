/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nledent <nledent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:05:20 by nledent           #+#    #+#             */
/*   Updated: 2024/01/12 17:07:59 by nledent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_bonus.h"

void	ft_exit(t_display *ptr)
{
	mlx_destroy_image(ptr->mlx_ptr, ptr->img_data.img);
	mlx_destroy_window(ptr->mlx_ptr, ptr->win_ptr);
	mlx_destroy_display(ptr->mlx_ptr);
	free(ptr->mlx_ptr);
	exit(2);
}
