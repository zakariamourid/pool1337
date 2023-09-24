#include <unistd.h>

int	main(int ac, char **av)
{
	int		i;
	int		count;
	int		j;
	char	*str;

	i = 0;
	count = 0;
	str = av[1];
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
			{
				count = 1;
			}
			j++;
		}
		i++;
	}
	count += 48;
	write(1, &count, 1);
	return (0);
}
