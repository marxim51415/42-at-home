/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfont <mfont@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 19:24:46 by mfont             #+#    #+#             */
/*   Updated: 2026/05/29 00:10:05 by mfont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t	order_magnitude(int nb)
{
	size_t	i;

	i = 0;
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*work_horse(char *result, size_t nb, size_t i)
{
	if (nb >= 10)
		result = work_horse(result, nb / 10, i - 1);
	result[i] = nb % 10 + 48;
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	order;

	order = order_magnitude(n);
	if (n <= 0)
		order++;
	result = malloc(order + 1);
	if (!result)
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	result = work_horse(result, n, order - 1);
	result[order] = 0;
	return (result);
}

int main()
{
	char *toa = ft_itoa(3000);
	printf("main() result is : %s\n", toa);
	free(toa);
}