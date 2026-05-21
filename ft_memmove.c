/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfont <mfont@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 20:41:18 by mfont             #+#    #+#             */
/*   Updated: 2026/05/13 21:54:39 by mfont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memmove(void *dest_str, const void *src_str, size_t n)
{
	long unsigned	i;
	const char		*src;
	char			*dest;
	char			temp[100];

	if (src_str == NULL)
		return (NULL);
	src = src_str;
	dest = dest_str;
	i = -1;
	while (src[++i] && i < n)
		temp[i] = src[i];
	i = -1;
	while (temp[++i] && i < n)
		dest[i] = temp[i];
	dest[i] = 0;
	return (dest_str);
}
/*
int main()
{
	char buffer[] = "strAimg";
	char dest[] = "incorrect";
	char *result = ft_memmove(dest, buffer, sizeof(char) * 8);
	printf("\nresult is %s\n\n", dest);
}*/