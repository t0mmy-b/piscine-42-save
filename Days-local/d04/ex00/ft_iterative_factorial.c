/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 13:29:36 by tblochet          #+#    #+#             */
/*   Updated: 2018/09/04 16:33:54 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_iterative_factorial(int nb)
{
	int i;
	int tmp;

	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else if (nb == 1 || nb == 0)
	{
		return (1);
	}
	else
	{
		i = 1;
		tmp = nb;
		while (i < nb && i > 0)
		{
			tmp = tmp * (nb - i);
			i++;
		}
		return (tmp);
	}
}
