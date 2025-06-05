/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlxtest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-boec <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 21:03:34 by siebe             #+#    #+#             */
/*   Updated: 2025/06/05 21:26:59 by siebe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "minilibx-linux/mlx.h"

#define MALLOC_ERROR	1
#define WIDTH		400
#define HEIGHT		400



int main(void)
{
	void	*mlx_connection;
	void	*mlx_window; //malloced ook weer

	mlx_connection = mlx_init(); //mlx-inti mallocd maar freed niet
	if (mlx_connection == NULL)
		return (0);
	mlx_window = mlx_new_window(mlx_connection, WIDTH, HEIGHT, "ja je moe wa testen he");
	if (mlx_window == NULL)
	{
		mlx_destroy_display(mlx_connection);
		free(mlx_connection);
		return (MALLOC_ERROR);
	}
	mlx_loop(mlx_connection);
	mlx_destroy_window(mlx_connection, mlx_window);
	mlx_destroy_display(mlx_connection);
	free(mlx_connection);
}
