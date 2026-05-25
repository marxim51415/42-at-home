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
	while (trimmit && set)
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

size_t	start_trim(char const *s1, char const *set, size_t i)
{
	size_t	j;

	j = 0;
	while (s1 && set)
	{
		if (s1[i] != set[j])
			j++;
		if (s1[i] == set[j])
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
	while (s1)
	{
		trimmed[j++] = s1[i++];
	}
	end_trim(trimmed, set, i);
	return (trimmed);
}

int main()
{
	char *trimmit = " this has been a good day tt";
	char *set = " t";
//	char *trimmed = 
	printf("%s\n", ft_strtrim(trimmit, set));
}