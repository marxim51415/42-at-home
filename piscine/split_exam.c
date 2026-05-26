#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char **ft_split(char *str)
{
	char **tab = malloc(1024);
	int i = 0;
	int j = 0;
	int k = 0;

//	printf("I'm here\n");

	while (str[i])		//list separators in this condition
	{
		if (str[i] > 47)
		{
			tab[j] = malloc(1024);
			while (str[i] && (str[i] > 47))		//also here
				tab[j][k++] = str[i++];
			tab[j][k] = '\0';
			write(1, tab[j], k);
			write(1, &"\n", 1);
			j++;
			k = 0;
		}
		else
			i++;
	}
	tab[j] = 0;
//	j = -1;
//	while (tab[++j])
//        	printf("%s\n", tab[j]);
	return (tab);
}

int main(int argc, char **argv)
{					//modified a bit to take any input directly from the command line
	int i = 0;
	int j = 0;			//but not so much that it stops looking like what I wrote at the exam
	char **tab = malloc(1024);

	while (++i < argc)
	{
		tab = ft_split(argv[i]);
//		printf("%s\n", argv[i]);
//		while (tab[++j])
//			printf("%s\n", tab[j]);
	}
}
