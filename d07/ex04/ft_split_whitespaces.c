#define	condition_de_separation 
{
	((src[i] == ' ') || (src[i] == 9) || (src[i] == '\n'))
	&& ((src[i + 1] != ' ') || (src[i + 1] != 9) || (src[i + 1] != '\n'))
}

int		ct_words(char *src)
{
	int word_ct;
	int i;
	
	i = 0;
	word_ct = 1;
	while (src[i])
	{
  		if condition_de_separation
  			word_ct++;
  		i++;
  	}
}

char	**store(char **src, int size, int word)
{
	src[word] = (char*malloc(size));
}
char    **ft_split_whitespaces(char *src)
{
	int 	i;
	int 	word_ct;
	int 	j;
	char	**dest;
	
	word_ct = ct_words(str);
	dest = (char*)malloc(word_ct);
  	i = 0;
  	j = 0;
  	word_ct = 0;
  	while (src[i])
  	{	
  		if ((src[i] == ' ') || (src[i] == 9) || (src[i] == '\n'))
  		{	
  			while (w <= i)
  			{
  			dest[j][w] = src[w]
  			w++;
  			}
  			j++;
  		}
  	i++;
  	}
  	
  	
  	
  	
