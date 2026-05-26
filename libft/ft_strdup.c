/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfont <mfont@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 18:29:43 by mfont             #+#    #+#             */
/*   Updated: 2026/05/19 22:53:16 by mfont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *str1)
{
	char	*str2;
	int		i;

	i = 0;
	while (str1[i])
		i++;
	str2 = malloc(i);
	if (str2 == 0)
		return (NULL);
	i = 0;
	while (str1[i])
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = 0;
	return (str2);
}
/*
int main()
{
	char *string = "string to copy m8";
	char *stringg = ft_strdup(string);
	printf("%s\n", stringg);
	free(stringg);
}*/