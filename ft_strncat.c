/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakovsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 13:24:08 by omakovsk          #+#    #+#             */
/*   Updated: 2017/11/03 15:55:37 by omakovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	if (n != 0)
	{
		while (s1[i] != '\0')
			i++;
		while (n > 0)
		{
			if (*s2 != '\0')
			{
				s1[i] = *s2++;
				i++;
			}
			n--;
		}
		s1[i] = '\0';
	}
	return (s1);
}