/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 18:44:26 by aderby            #+#    #+#             */
/*   Updated: 2019/04/29 18:52:09 by aderby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*str;

	str = dst;
	while (*src && len > 0)
	{
		*str = *src;
		src++;
		str++;
		len--;
	}
	if (len > 0)
		ft_bzero(str, len);
	return (dst);
}
