/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 17:21:50 by xamartin          #+#    #+#             */
/*   Updated: 2017/11/06 17:26:21 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int mem;

	if (nb < 0 || nb > 13)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
		mem = ft_recursive_factorial(nb - 1);
	return (mem * nb);
}
