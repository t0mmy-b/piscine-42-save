/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 11:07:51 by tblochet          #+#    #+#             */
/*   Updated: 2018/09/05 12:01:21 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_iterative_power(int nb, int power)
{
	int i;

	if (power < 0)
		return (0);
	else
	{
		i = nb;
		while (power != 1)
		{
			nb = i * nb;
			power--;
		}
		return (nb);
	}
}
