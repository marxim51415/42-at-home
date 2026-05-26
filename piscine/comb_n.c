#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int n = atoi(argv[argc - 1]);
	int tab[10];
	int i = -1;

	while (++i < n)
		tab[i] = i;
	while (1)
	{
		i = -1;
		while (++i < n)
			write(1, &"0123456789"[tab[i]], 1);
		if (tab[0] == 10 - n)
			return (0);
		write(1, ", ", 2);
		i = n - 1;
		while (tab[i] == 9 - (n - 1 - i))
			i--;
		tab[i]++;
		while (++i < n)
			tab[i] = tab[i - 1] + 1;
	}
}
