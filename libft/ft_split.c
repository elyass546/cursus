#include "libft.h"

static int    ft_count_words(const char    *s, char    c)
{
    int    i;
    int    j;

    i = 0;
    j = 0;
    while (s[i] != '\0')
    {
        if (s[i] != c)
        {
            while (s[i] != c && s[i] != '\0')
                i++;
            j++;
            i--;
        }
        i++;
    }
    return (j);
}

char	*ft_strndup(const char *s, int n)
{
	char *str;
	int i;

	i = 0;
	str = (char *)ft_calloc(sizeof(char), (n + 1));
	if (!str)
		return (NULL);
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		a;
    int		i;
    int		j;
	char	**str;

	if (s == NULL)
		return (NULL);
	str = ft_calloc(sizeof(char *), ft_count_words(s, c));
	if (!str)
		return (NULL);
	i = 0;
	a = 0;
	while (s[i] && a < ft_count_words(s, c))
    {
        if (s[i] != c)
        {    
            j = i;
            while (s[j] != c && s[j] != '\0')
                j++;
            str[a] = ft_strndup (&s[i], (j - i));
            i = j - 1;
            a++;
        }
        i++;
    }
	str[a] = NULL;
	return (str);
}
