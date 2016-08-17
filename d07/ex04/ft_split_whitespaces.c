#define	checkspace_forward
{
	(((src[i] == ' ') || (src[i] == 9) || (src[i] == '\n'))
	&& ((src[i + 1] != ' ') || (src[i + 1] != 9) || (src[i + 1] != '\n')))
}

#define checkspace_backward
{
	(((src[i] == ' ') || (src[i] == 9) || (src[i] == '\n'))	
	&& ((src[i - 1] != ' ') || (src[i - 1] != 9) || (src[i - 1] != '\n')))
}

int	counter(char *src)
{
	int w;
	int i;
	
	i = 0;
	w = 1;
	while (src[i])
	{
  		if checkspace_forward
  			w++;
  		i++;
  	}
  	return (w);
}
void	writer(char **srr, int i, int j, int w)
{
	while (w < i)
	{
		dest[j][w] = src[i];
		w++;	
	}
  	dest[j][w] = 0;
}
char	**worker(char *src, char **dest)
{
	int i;
	int j;
	int w;
	
	i = 0;
  	j = 0;
  	w = 0;
  	while (src[i])
  	{	
  		if checkspace_backward
  		{
  			dest[j] = (char*)malloc(i - w);
  			writer(dest, i, j, w);
  			j++;
  		}
  	if checkspace_forward
  		w = i + 1;
  	i++;
  	}
  	return (dest);
}
char    **ft_split_whitespaces(char *src)
{
	char	**dest;
	
	dest = (char**)malloc(words_counter(src));
	return (worker(src, dest));
}
  
  	
  	
