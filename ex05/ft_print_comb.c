/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Antoine <antoine@notstudent.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 22:43:20 by Antoine           #+#    #+#             */
/*   Updated: 2022/03/13 01:07:33 by Antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int		u;
	int		d;
	int		c;

	u = 47;
	while (u++ <= 56)
	{
		d = u;
		while (d++ <= 56)
		{
			c = d;
			while (c++ <= 56)
			{
				ft_putchar(u);
				ft_putchar(d);
				ft_putchar(c);
				if (u != 55)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}		
	}
}
