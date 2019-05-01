/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 15:35:56 by aderby            #+#    #+#             */
/*   Updated: 2019/05/01 12:18:27 by aderby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dstptr;
	unsigned char	*srcptr;

	dstptr = (unsigned char *)dst;
	srcptr = (unsigned char *)src;
	while (n > 0)
	{
		*dstptr = *srcptr;
		if (*srcptr == (unsigned char)c)
			return (dstptr + 1);
		dstptr++;
		srcptr++;
		n--;
	}
	return (NULL);
}
