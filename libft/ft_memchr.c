/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfont <mfont@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 21:07:27 by mfont             #+#    #+#             */
/*   Updated: 2026/05/19 22:53:21 by mfont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *ptr, int ch, size_t count)
{
	char			*str;
	long unsigned	i;

	str = (char *)ptr;
	i = 0;
	while (str[i] != ch && i < count)
		i++;
	if (str[i] == 0 || i == count)
		return (NULL);
	return (&str[i]);
}


int main()
{
	char str[] = "ABCDEFG";
	int chars[] = {'D', 'd', 65, 70};
	size_t i = -1;

	while (++i < sizeof chars / (sizeof chars[0]))
	{
		int c = chars[i];
		char *whole_pt = ft_memchr(str, c, strlen(str));
		whole_pt ? printf ("character '%c'(%d) found: %s\n", c, c, whole_pt)
			: printf ("character '%c'(%i) not found\n", c, c);
	}
	return (0);
}