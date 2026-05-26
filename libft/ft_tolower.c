/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfont <maxime.font@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 16:08:58 by mfont             #+#    #+#             */
/*   Updated: 2026/04/27 20:26:07 by mfont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int arg)
{
	if (arg >= 65 && arg <= 90)
		return (arg + 32);
	else
		return (arg);
}
/*
#include <stdio.h>

int main(int argc, char **argv)
{	 
	printf("%c\n", ft_toupper(122));//argv[argc - 1][0]));
}*/
