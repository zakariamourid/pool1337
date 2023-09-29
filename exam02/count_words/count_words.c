#include <stdio.h>
int main(int ac ,char **av)
{
	int i =0;
	int count = 0;
	while(av[1][i])
	{
		if(av[1][i] != ' ')
		{
			count++;
			while(av[1][i] != ' ' && av[1][i])
			{
				i++;
			}
		}
		else{
			i++;
		}
	}
	printf("count =%d",count);
}
