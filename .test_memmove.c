/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .test_memmove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfont <mfont@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 17:38:55 by mfont             #+#    #+#             */
/*   Updated: 2026/05/04 23:10:11 by mfont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memmove(void *dest_str, const void *src_str, size_t n)
{
	long unsigned	i;
	const char		*src;
	char			*dest;
	char			*temp;

	temp = "";
	if (src_str == NULL)
		return (NULL);
	src = src_str;
	dest = dest_str;
	i = -1;
	while (src[++i] && i < n)
		temp[i] = src[i];
	i = -1;
	while (temp[++i] && i < n)
		dest[i] = temp[i];
	return (dest_str);
}

int main()
{
	char buffer[] = "strAi";
	char dest[6] = "     ";
	char *result = ft_memmove(dest, buffer, sizeof(char) * 6);
	printf("result is %s\n", dest);
}