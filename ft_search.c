/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 15:56:02 by aderby            #+#    #+#             */
/*   Updated: 2019/05/01 10:37:16 by aderby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	pattern_string_hash(int *hash, char *pattern, char *string, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		PAT_HASH = (BASE * PAT_HASH + pattern[i]) % PRI;
		STR_HASH = (BASE * STR_HASH + string[i]) % PRI;
		i++;
	}
}

static int	hash_loop(int i, int *hash, int len)
{
	while (++i < len)
		HASH = (HASH * BASE) % PRI;
	return (HASH);
}

int			ft_search(char *s, char *pattern, int *len, int *hash)
{
	int	iter[2];

	I = 0;
	HASH = hash_loop(0, hash, PAT_LEN);
	pattern_string_hash(hash, pattern, s, PAT_LEN);
	while (I <= STR_LEN - PAT_LEN)
	{
		if (PAT_HASH == STR_HASH)
		{
			J = 0;
			while (++J <= PAT_LEN)
				if (s[I + J - 1] != pattern[J - 1])
					break ;
			if (J - 1 == PAT_LEN)
				return (I + 1);
		}
		if (I < STR_LEN - PAT_LEN)
		{
			STR_HASH = (BASE * (STR_HASH - s[I] * HASH) + s[I + PAT_LEN]) % PRI;
			if (STR_HASH < 0)
				STR_HASH = (STR_HASH + PRI);
		}
		I++;
	}
	return (0);
}
