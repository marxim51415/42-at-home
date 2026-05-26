/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfont <mfont@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 10:47:01 by mfont             #+#    #+#             */
/*   Updated: 2026/05/04 23:10:20 by mfont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*strr;

	strr = s;
	if (s == NULL)
		return ;
	i = -1;
	while (strr[++i] && i < n)
		strr[i] = 0;
	return ;
}
/*
int main()
{
	char buffer[] = "strAi";
	ft_bzero(buffer, sizeof(char) * 6);
	printf("result is %s\n", buffer);
}*/