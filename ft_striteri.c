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

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
//		printf("letter : %c and i : %ld\n", s[i], i);
	}
	return ;
}

void	ft_thrrupper(unsigned int i, char *arg)
{
//	char doesntmatter = &arg;
//	doesntmatter = &arg;
	printf("test %u and arg %c\n", i, *arg);

	// SO. it would appear the compiler is doing some weird stuff with the pointer,
	// because when I try to save it in a variable, it doesnt work. I can only use
	// the pointer directly. I have no idea why, but it is what it is. I will just
	// have to deal with it.

	// lmfao at this pre saved comment
	// the predictive text function in this app is unbelievable
	// so I meant to say it appears that I'm not able to change the value at the
	// address pointed to by the pointer
	// when i try it just seg faults
	// however I can store the value in a variable and use that no problem
	// bit annoying though because the exercise requires void returning functions

	// so what do I do? 

	// Bah. I'm sure there's multiple stack overflow threads that cover this
	// I'll just google it tomorrow and take the loss in the meantime.
	// or try to think of a function that could be interesting to use in this exercise?
	// what about a function that takes the index and the char, and if the index is even
	// it makes the char uppercase, and if it's odd it makes it lowercase?
	// That would be pretty cool. I'll try that.

	// motherfucker that's pretty much exactly what I had in mind
	// only whatever changes I make to the original string created in main() will not carry
	// over from one function to the next. which still seems wild idk it doesn't feel right
	// I'm missing something
	// . . . . . .
	// bah. learning right

	// let's just go get that beauty sleep for now. la nuit est de bon conseil

	// I can't believe I got off the balcony thinking I could just keep
	// staring at the moon again later, it's not that cloudy,
	// blahblahblah
	// and now it's all covered up
	// I keep falling for the same shit again and again

	if (*arg >= 97 && *arg <= 122)
	{
//		printf("works in loop n°%u\n", i);
		*arg -= 32;
		i++;
	}
	printf("now arg is %c\n", *arg);
	return ;
}

int main()
{
	char str[] = "leetay latuparita ulus aria los balu netoreel";
//	printf("is this thing on? %s\n", str);
	ft_striteri(str, ft_thrrupper);
	printf("is this thing still on? %s\n", str);
}