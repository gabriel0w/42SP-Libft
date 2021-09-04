/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo <gbelo-so@student.42sp.org.br>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 22:03:06 by gbelo             #+#    #+#             */
/*   Updated: 2021/09/03 13:27:33 by gbelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	count_h;
	size_t	count_n;

	count_h = 0;
	count_n = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (haystack[count_h] != '\0' && count_h <= len)
	{
		while (haystack[count_h] == needle[count_n] && count_h <= len)
		{
			if (needle[count_n + 1] == '\0' || count_n == len)
				return ((char *)haystack + (count_h - count_n));
			count_h++;
			count_n++;
		}
		count_h -= count_n;
		count_h++;
		count_n = 0;
	}
	return (0);
}
