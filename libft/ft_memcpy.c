/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfont <mfont@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 10:58:40 by mfont             #+#    #+#             */
/*   Updated: 2026/05/04 23:10:19 by mfont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	long unsigned	i;
	const char		*srcc;
	char			*destt;

	if (src == NULL)
		return (NULL);
	srcc = src;
	destt = dest;
	i = -1;
	while (srcc[++i] && i < n)
		destt[i] = srcc[i];
	return (dest);
}
/*
int main()
{
	char buffer[] = "strAi";
	char dest[] = "";
	char *result = ft_memcpy(dest, buffer, sizeof(char) * 6);
	printf("result is %s\n", result);
}*/