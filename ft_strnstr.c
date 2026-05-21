/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfont <mfont@learner.42.tech>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 21:08:32 by mfont             #+#    #+#             */
/*   Updated: 2026/04/29 23:56:29 by mfont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(char *haystack, char *needle, int c)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (haystack[++i] && needle[j] && i < c)
	{
		if (needle[j] == haystack[i])
		{
			while (needle[++j] == haystack[++i])
			{
			}
			if (needle[j] == 0)
				return (&haystack[i - j]);
			j = 0;
		}
	}
	return (NULL);
}
/*
#include <stdio.h>

int main()
{
	char bigstr[] = "striAng of chAracters";
	char smolstr[] = "c A";
	int c = 16;
	char *result = ft_strnstr(bigstr, smolstr, c);
	printf("%s\n", result);
}*/
