/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 11:16:24 by tblochet          #+#    #+#             */
/*   Updated: 2018/09/03 11:36:13 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int nb)
{
	int n[2];

	n[0] = nb / 10;
	n[1] = nb % 10;
	ft_putchar(n[0]+48);
	ft_putchar(n[1]+48);
}

int			main(void)
{
	ft_putnbr(101);
	return (0);
}
