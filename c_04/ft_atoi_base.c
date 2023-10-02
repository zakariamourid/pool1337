int    ft_pow(int nbr, int power)
{
    int    i;
    int    r;

    i = 0;
    r = 1;
    while (i < power)
    {
        r = r * nbr;
        i++;
    }
    return (r);
}
int    ft_find_index(char c, char *str)
{
    int    i;
    int    index;

    index = -1;
    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return i;
        i++;
    }
    return (index);
}
int    ft_strlen(char *str,char *base)
{
    int    i;

    i = 0;
    while (ft_find_index(str[i],base) != -1 && str[i])
        i++;
    return (i);
}
int is_valid(char *base)
{
    int    i;
    i = 0;

    while (base[i])
    {
        if ((base[i] == '-' || base[i] == '+') || base[i] <= 32
            || base[i] == 127)
            return (0);
        i++;
    }
    return (1);
}

int    ft_atoi_base(char *str, char *base)
{
    int    r;
    int    i;
    int    base_len;
    int    str_len;
    int    signe;

    r = 0;
    i = 0;
    base_len = 0;
    signe = 1;
    while (*str == ' ')
        str++;
    while (*str == '-' || *str == '+')
    {
        if (*str++ == '-')
            signe = signe * -1;
    }
    while(base[base_len])
      base_len++;
    str_len = ft_strlen(str,base) -1 ;
    printf("str [r] = '%d'", str_len);
    if(is_valid(base))
    {
    while ((ft_find_index(str[i],base) != -1))
	{
        r = r + ((ft_find_index(str[i], base)) * ft_pow(base_len, str_len));
    printf("index = '%d' power = %d\n", ft_find_index(str[i],base),ft_pow(base_len,str_len));
	str_len--;
	i++;
	}
    }
    return (r * signe);
}
/*int    main(int ac ,char **av)
{
    printf("putnbr = '%d'", ft_atoi_base( av[1],av[2]));
    return (0);
} */
