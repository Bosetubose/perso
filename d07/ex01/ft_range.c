char 	*ft_range(int min, int max)
{
	int	tab;
	int i;
	
	if (min > max)
		return (0);
	tab = (int*)malloc(4*(max - min));	
	i = 0;
	while (min < max)
		tab[i++] = min++;
	return(tab);
}
