/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 12:15:13 by tblochet          #+#    #+#             */
/*   Updated: 2018/09/03 17:29:33 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	disp(int n0, int n1, int n2)
{
	ft_putchar(n0);
	ft_putchar(n1);
	ft_putchar(n2);
	if (n0 != 55)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int n0;
	int n1;
	int n2;

	n0 = 48;
	n1 = 49;
	n2 = 50;
	while (n0 <= 57)
	{
		if (n1 > n0 && n2 > n1)
		{
			disp(n0, n1, n2);
		}
		if (n2++ >= 57)
		{
			n2 = 48;
			n1++;
		}
		if (n1 >= 58)
		{
			n1 = 48;
			n0++;
		}
	}
}
