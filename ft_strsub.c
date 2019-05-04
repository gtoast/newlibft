/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 15:54:08 by aderby            #+#    #+#             */
/*   Updated: 2017/06/09 03:28:38 by aderby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;

	if (s)
	{
		str = ft_strnew(len);
		if (!str)
			return (NULL);
		while (start--)
			s++;
		ft_strncpy(str, s, len);
		str[len] = '\0';
	}
	else
		str = NULL;
	return (str);
}
