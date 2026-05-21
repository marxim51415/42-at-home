/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfont <mfont@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 04:14:42 by mfont             #+#    #+#             */
/*   Updated: 2026/05/04 23:10:16 by mfont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	long unsigned	i;
	char			*strr;

	if (str == NULL)
		return (NULL);
	strr = str;
	i = -1;
	while (strr[++i] && i < n)
		strr[i] = c;
	return (str);
}
/*
int main()
{
	char buffer[] = "strAi";
	int c = 90;
	char *result = ft_memset(buffer, c, sizeof(char) * 6);
	printf("result is %s\n", result);
}*/