/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfont <mfont@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 17:26:02 by mfont             #+#    #+#             */
/*   Updated: 2026/05/19 22:53:12 by mfont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*bigdog;
	int		size;
	int		s1_len;
	int		s2_len;

	if (!str1 && !str2)
	{
		bigdog = malloc(1);
		bigdog[0] = 0;
		return (bigdog);
	}
	s1_len = strlen(str1);
	s2_len = strlen(str2);
	size = s1_len + s2_len + 1;
	if (!(bigdog = (char *)malloc(sizeof(char) * size)))
			return (NULL);
	strlcpy(bigdog, str1, s1_len + 1);
	strlcat(bigdog + (s1_len), str2, s2_len + 1);
	bigdog[size] = 0;
	return (bigdog);
}

int main()
{
	char *str1 = "string";
	char *str2 = " to cat";
	char *str3 = ft_strjoin(str1, str2);
	printf("%s\n", str3);
}