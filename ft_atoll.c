/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 08:47:22 by aderby            #+#    #+#             */
/*   Updated: 2019/05/01 12:26:22 by aderby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_check_space(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
			i++;
		else
			return (i);
	}
	return (i);
}

static int	ft_check_neg(int i, const char *str)
{
	if (str[i] == '-')
		return (-1);
	return (1);
}

long long	ft_atoll(const char *str)
{
	int			i;
	long long	res;
	int			isneg;

	res = 0;
	i = ft_check_space(str);
	isneg = ft_check_neg(i, str);
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + str[i] - '0';
			i++;
		}
		else
			break ;
	}
	return (res * isneg);
}
