 #include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t	len)
{
	char	*to;
	char	*from;

	to = (char *)dst;
	from = (char *)src;
	size_t	i;

	i = 0;
	if (to < from)
	{
		ft_memcpy(to, from, len);
	}
	else if (to > from)
	{	
		while (len > 0)
		{
			to[len - 1] = from[len -1];
			len --;
		}
	}
	return (to);
}
