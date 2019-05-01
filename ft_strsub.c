/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 12:05:25 by aderby            #+#    #+#             */
/*   Updated: 2019/05/01 14:01:34 by aderby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	char	*str;

	ptr = (char *)s + start;
	if (!(str = ft_strnew(len)))
		return (NULL);
	if (!(str = ft_strncpy(str, ptr, len)))
		return (NULL);
	return (str);
}
