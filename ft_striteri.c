/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfont <mfont@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 22:41:08 by mfont             #+#    #+#             */
/*   Updated: 2026/05/31 23:11:40 by mfont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
		printf("letter : %c and i : %ld\n", s[i], i);
	}
	return ;
}

void	ft_thrrupper(unsigned int i, char *arg)
{
	char doesntmatter = *arg;
	if ((i / 3 == 0) && doesntmatter >= 97 && doesntmatter <= 122)
	{
//		printf("letter : %c and i : %d\n", doesntmatter, i);
		*arg -= 32;
	}
	else
		return ;
	return ;
}

int main()
{
	char *str = "leetay latuparita ulus aria los balu netoreel";
	ft_striteri(str, ft_thrrupper);
	printf("is this thing still on? %s\n", str);
}