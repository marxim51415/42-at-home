/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfont <mfont@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 22:25:06 by mfont             #+#    #+#             */
/*   Updated: 2026/05/25 23:51:04 by mfont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	end_trim(char *trimmit, char const *set, size_t i)
{
	size_t	j;

	j = 0;
	while (set[j])
	{
		if (trimmit[i] != set[j])
			j++;
		if (trimmit[i] == set[j])
		{
			trimmit[i] = 0;
			i--;
			j = 0;
		}
	}
	return ;
}

size_t	start_trim(char const *st1, char const *set, size_t i)
{
	size_t	j;

	j = 0;
	while (set[j])
	{
		
		if (set[j] != st1[i])
			j++;
		else if (set[j] == st1[i])
		{
			i++;
			j = 0;
		}
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	i;
	size_t	j;

	trimmed = malloc(strlen(s1) + 1);
	if (!s1 || !trimmed)
		return (NULL);
	i = 0;
	j = 0;
	i = start_trim(s1, set, i);
	while (s1[i])
	{
		trimmed[j++] = s1[i++];
	}
	trimmed[j] = 0;
	end_trim(trimmed, set, j - 1);
	return (trimmed);
}

int main()
{
	char *trimmit = " d dthis has been a good day dd";
	char *set = " d";
	char *trimmed = ft_strtrim(trimmit, set);
	printf("googoogoogoogogoogogoo....\n-%s-\n-%s-\n", trimmit, trimmed);
	free(trimmed);
	return (0);
}