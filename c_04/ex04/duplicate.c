#include <unistd.h>
int	main(int ac ,char **av)
{
	int	i = 0;
	int count =0;
	int j ;
	char *str= av[1];
	while(str[i])
	{
		j= i+1;
		while(str[j])
		{
			if(str[i] == str[j])
			{
				count = 1 ;
			}
			j++;
		}	
		i++;

	}
	count += 48;
	write(1,&count ,1);
	return 0;
}
