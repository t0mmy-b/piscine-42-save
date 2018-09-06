/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 13:51:15 by tblochet          #+#    #+#             */
/*   Updated: 2018/09/05 10:17:58 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_recursive_factorial(int nb)
{
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
		return(nb * (ft_recursive_factorial(nb-1)));
	}
}
