/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfont <mfont@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 18:49:18 by mfont             #+#    #+#             */
/*   Updated: 2026/05/19 22:53:23 by mfont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>
//#include <libft.h>

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!str || start > strlen(str))
	{
		sub = malloc(1);
		sub[0] = 0;
		return (sub);
	}
	sub = malloc(len + 1);
	if (sub == 0)
		return (NULL);
	while (str[start + i] && i < len)
	{
		sub[i] = str[start + i];
		i++; 
	}
	sub[i] = 0;
	return (sub);
}

