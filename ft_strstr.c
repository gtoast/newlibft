/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 18:17:25 by aderby            #+#    #+#             */
/*   Updated: 2019/05/01 10:54:52 by aderby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*str;
	int		i;
	int		len[2];
	int		hash[3];

	len[0] = ft_strlen(needle);
	len[1] = ft_strlen(haystack);
	PAT_HASH = 0;
	STR_HASH = 0;
	HASH = 1;
	str = (char *)haystack;
	if (!needle)
		return (str);
	if ((i = ft_search((char *)haystack, (char *)needle, len, hash)))
		return (str + i - 1);
	return (NULL);
}
