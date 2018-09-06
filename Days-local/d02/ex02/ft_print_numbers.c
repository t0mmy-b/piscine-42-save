/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 11:41:56 by tblochet          #+#    #+#             */
/*   Updated: 2018/08/31 11:52:10 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	ascii_code;

	ascii_code = 48;
	while (ascii_code <= 57)
	{
		ft_putchar(ascii_code);
		ascii_code++;
	}
	return ;
}
