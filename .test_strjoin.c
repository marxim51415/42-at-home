#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char *s1, char *s2)
{
	char	*newstr;
	int		s1_len;
	int		s2_len;

	if (!(s1) && !(s2))
		return (NULL);
	else if (!(s1) || !(s2))
		return (!(s1) ? strdup(s2) : strdup(s1));
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if (!(newstr = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1))))
		return (NULL);
	strlcpy(newstr, s1, s1_len + 1);
	strlcat(newstr + (s1_len), s2, s2_len + 1);
	return (newstr);
}
/*
int main()
{
	char *str1 = "string";
	char *str2 = " to cat";
	char *str3 = ft_strjoin(str1, str2);
	printf("%s\n", str3);
	free(str3);
}*/