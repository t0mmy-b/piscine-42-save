/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 11:08:44 by tblochet          #+#    #+#             */
/*   Updated: 2018/09/06 12:20:27 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int root;
	int root_found;
	int output;
	
	if (!(nb % 2 == 0))
		return (0);
	root = 1;
	root_found = 0;
	while ((root <= (nb / 2)) && (!(root_found == 1)))
	{
		    output = root * root;
			if (output == nb)
				root_found = 1;
			root++;
	}
	if (output){
		    return (root - 1);
	}
	else {
		    return 0;
	}
}
