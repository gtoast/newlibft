/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 22:24:36 by aderby            #+#    #+#             */
/*   Updated: 2019/05/04 00:17:35 by aderby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	char *ptr1;
	char	*ptr2;
	ptr1 = (char *)s1;
	ptr2 = (char *)s2;
	while (*ptr1)
	{
		if (*ptr1 != *ptr2)
			return ((unsigned char)*ptr1 - (unsigned char)*ptr2);
		ptr1++;
		ptr2++;
	}
	return ((unsigned char)*ptr1 - (unsigned char)*ptr2);
}

