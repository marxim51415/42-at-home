/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfont <mfont@learner.42.tech>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 21:08:32 by mfont             #+#    #+#             */
/*   Updated: 2026/04/27 22:16:40 by mfont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != c)
		i++;
	return (&str[i]);
}
/*
#include <stdio.h>

int main()
{
	char buffer[] = "strAing of chAracters";
	int c = 65;
	char *result = ft_strchr(buffer, c);
	printf("%s\n", result);
}*/
