/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfont <mfont@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 22:44:30 by mfont             #+#    #+#             */
/*   Updated: 2026/05/16 22:12:44 by mfont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void	*ft_calloc(size_t num, size_t size)
{
	size_t	total;
	char	*roomba;
	size_t	i;

	total = num * size;
	if (__SIZE_MAX__ / num < size)
		return (NULL);
	roomba = malloc(total);
	if (roomba == 0)
		return (NULL);
	i = 0;
	while (i < total)
	{
		roomba[i] = 0;
		i++;
	}
	return (roomba);
}
/*
int main()
{
	char *rhombo = "rtfm";
	printf("%s\n", rhombo);
	rhombo = ft_calloc(5, 1);
	printf("%d\n", rhombo[4]);
	free(rhombo);
}*/