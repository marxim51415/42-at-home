/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfont <mfont@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 21:07:43 by mfont             #+#    #+#             */
/*   Updated: 2026/05/13 22:40:20 by mfont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t count)
{
	char			*strr1;
	char			*strr2;
	long unsigned	i;

	strr1 = (char *)str1;
	strr2 = (char *)str2;
	i = 0;
	while (strr1[i] && strr2[i] && i < count)
	{
		if (strr1[i] < strr2[i])
			return (-1);
		else if (strr1[i] > strr2[i])
			return (1);
		i++;
	}
	return (0);
}

/*
int main()
{
	char str[] = "ABCDEFG";
	char chars[] = "ABCDEF5";

	int whole_pt = ft_memcmp(str, chars, strlen(str) + 1);
	if (whole_pt == 0)
		printf ("strings are identical\n");
	if (whole_pt == 1)
		printf ("%s > %s high diff\n", str, chars);
	if (whole_pt == -1)
		printf ("%s > %s high diff\n", chars, str);
	return (0);
}*/