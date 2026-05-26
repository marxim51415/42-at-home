/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfont <mfont@learner.42.tech>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 21:08:32 by mfont             #+#    #+#             */
/*   Updated: 2026/05/02 22:58:53 by mfont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcat(char *dest, char *src, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] && i < size - 1)
		i++;
	while (src[j] && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = 0;
	return (i + 1);
}
/*
#include <stdio.h>

int	main()
{
	char dest[] = "chAracters";
	char smolstr[] = "- in /iBiza!!";
	size_t c = sizeof(dest) + sizeof(smolstr);
	ft_strlcat(dest, smolstr, c);
	printf("string goes ::: %s\n", dest);
}*/