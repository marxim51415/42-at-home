/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfont <maxime.font@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 16:08:58 by mfont             #+#    #+#             */
/*   Updated: 2026/04/27 20:24:28 by mfont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int arg)
{
	if (arg >= 97 && arg <= 122)
		return (arg - 32);
	else
		return (arg);
}
/*
#include <stdio.h>

int main(int argc, char **argv)
{	 
	printf("%c\n", ft_toupper(122));//argv[argc - 1][0]));
}*/
