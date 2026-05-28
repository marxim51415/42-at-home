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

size_t	order_magnitude(int nb)			//next try to see if i can merge these conditions on the same line?
{
	size_t	i;

	i = 1;
	if (nb >= 0)
	{
		while (nb / 10 >= 1)
			i++;
	}
	else
	{
		while (nb / 10 <= -1)
			i++;
	}
	return (i);
}

char	*work_horse(char *result, size_t nb, size_t i)
{
	if (nb >= 10)
		result = work_horse(result, nb / 10, --i);
//	printf("result[i] is %d\n", result[i]);
	result[i] = nb % 10 + 48;
//	printf("then result[i] becomes %d\n", result[i]);
//	printf("at loop end result is %s\n", result);
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	order;

	order = 3;
//	order = order_magnitude(n);
	if (n < 0)
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

//	int j = 0;
//	while (j < 4)
//		printf("%c\n", result[j++]);
	result[order] = 0;
	printf("\n\nat program end result is : %s\n", result);
	return (result);
}

int main()
{
	char *toa = ft_itoa(-568);
	printf("main() result is : %s\n", toa);
	free(toa);
}