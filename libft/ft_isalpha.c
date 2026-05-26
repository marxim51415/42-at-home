/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfont <maxime.font@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 16:08:58 by mfont             #+#    #+#             */
/*   Updated: 2026/04/25 17:01:38 by mfont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int arg)
{
	if ((arg >= 65 && arg <= 90) || (arg >= 97 && arg <= 122))
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
