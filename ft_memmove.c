/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 16:41:31 by aderby            #+#    #+#             */
/*   Updated: 2019/07/29 19:42:30 by cimara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstptr;
	unsigned char	*srcptr;
	size_t			i;

	i = 0;
	dstptr = (unsigned char *)dst;
	srcptr = (unsigned char *)src;
	if (dstptr > srcptr)
	{
		while (i < len)
		{
			dstptr[len - 1] = srcptr[len - 1];
			len--;
		}
		return (dst);
	}
	else
	{
		while (i < len)
		{
			dstptr[i] = srcptr[i];
			i++;
		}
		return (dst);
	}
}
