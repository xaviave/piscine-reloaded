/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:48:52 by xamartin          #+#    #+#             */
/*   Updated: 2017/11/07 14:01:22 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	out;
	int i;

	out = nb;
	i = 1;
	if (nb < 0 || nb > 13)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while ((nb - 1) > i)
	{
		out = out * (nb - i);
		i++;
	}
	return (out);
}
