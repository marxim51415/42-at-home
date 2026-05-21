/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .test.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfont <mfont@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 21:08:32 by mfont             #+#    #+#             */
/*   Updated: 2026/05/04 04:15:15 by mfont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strlcat(char *dest, char *src, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] && i < size - 1)
		i++;
	while (src[j] && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = 0;
	printf("%s\n", dest);
	return(dest);
}

int main()
{
	char dest[] = "chAracters";
	char smolstr[] = " in /iBiza!!";
	int c = sizeof(dest) + sizeof(smolstr);
	char *result = ft_strlcat(dest, smolstr, c);
	printf("%s\n%s\n", result, dest);
}

//SO my question is in this program the output is a bunch of mumbo jumbo, different characters at each execution,
//specifically after the first character of smolstr[] has been appended to dest[] even though dest[] is looking as intended while inside the ft_strlcat function, as per my test printf.
//what's wrong with my main()?
