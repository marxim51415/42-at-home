/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfont <mfont@learner.42.tech>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 21:08:32 by mfont             #+#    #+#             */
/*   Updated: 2026/04/29 21:55:08 by mfont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *str1, char *str2, int c)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && i < c)
	{
		if (str1[i] < str2[i])
			return (-1);
		else if (str1[i] > str2[i])
			return (1);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	char str1[] = "striAng of chAracters";
	char str2[] = "strinN";
	int c = 6;
	int result = ft_strncmp(str1, str2, c);
	printf("%d\n", result);
}*/
