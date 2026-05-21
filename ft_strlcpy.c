/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfont <mfont@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 21:08:32 by mfont             #+#    #+#             */
/*   Updated: 2026/05/16 22:36:32 by mfont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;

	i = -1;
	while (src[++i] && i < size - 1)
		dest[i] = src[i];
	dest[i] = 0;
	while (++i < size)
		dest[i] = 0;
	return (i - 1);
}
/*
int main()
{
	char bigstr[] = "striAng of chAracters";
	char smolstr[strlen(bigstr)];
	int c = strlen(bigstr);
	int result = ft_strlcpy(smolstr, bigstr, c);
	printf("%d\n%s\n%ld\n", result, smolstr, strlen(smolstr));
}*/