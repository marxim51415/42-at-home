/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfont <maxime.font@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 16:08:58 by mfont             #+#    #+#             */
/*   Updated: 2026/04/25 17:13:39 by mfont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int arg)
{
	if (arg >= 0 && arg <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int main(int argc, char **argv)
{	 
	if (ft_isalpha(argv[argc - 1][0]) == 1)
		printf("arg is char\n");
	else
		printf("arg no is char\n");
}*/
