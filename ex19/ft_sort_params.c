/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:37:59 by xamartin          #+#    #+#             */
/*   Updated: 2017/11/07 15:57:11 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

char		ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while (*str1 != '\0' && *str2 != '\0')
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	if (str1 != '\0')
		return (str1[i]);
	if (str2 != '\0')
		return (-str2[i]);
	return (0);
}

void		ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int			main(int argc, char *argv[])
{
	int		i;
	int		j;

	i = 1;
	while (i < argc - 1)
	{
		j = 0;
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			ft_swap(&argv[i], &argv[i + 1]);
			i = 1;
		}
		else
			i++;
	}
	i = 1;
	while (argv[i] != '\0')
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
