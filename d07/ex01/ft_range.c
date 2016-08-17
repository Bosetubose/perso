#define	abs(x)	((x) < 0 ? -(x) : (x))

char 	*ft_range(int min, int max)
{
	int	tab;
	int i;
	
	if (min < max)
	{
	tab = (int*)malloc(4*(max - abs(min)));	
	i = 0;
	while (min < max)
		tab[i++] = min++;
	}
	else
		*tab = NULL;
	return(tab);
}
