/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 12:36:48 by aderby            #+#    #+#             */
/*   Updated: 2019/05/01 12:07:15 by aderby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	check_space(char const *s)
{
	unsigned int i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	return (i);
}

char			*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	if (s)
	{
		i = check_space(s);
		if (s[i] == '\0')
			return (ft_strnew(1));
		j = (unsigned int)ft_strlen(s) - 1;
		while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
			j--;
		if (!(str = ft_strsub(s, i, (j - i + 1))))
			return (NULL);
	}
	else
		str = NULL;
	return (str);
}
