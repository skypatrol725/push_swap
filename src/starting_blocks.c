#include "../includes/push_swap.h"

int     ft_atoi2(const char *str)
{
    int             sign;
    long long int   i;

    i = 0;
    sign = 1;
    while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f' || *str == '\v' || *str == '\r')
        str++;
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    else if (*str == '+')
        str++;
    while (*str)
    {
        if (!ft_isdigit(*str))
            ft_error();
        i = i * 10 + (*str - 48);
        str++;
    }
    if ((sign * i) > 2147483647 || (sign * i) < -2147483648)
        ft_error();
    return (sign * i);
}


t_stack *ft_sub_process(char **argv)
{
    t_stack *a;
    char    **tmp;
    int     i;
    int     j;

    a = NULL;
    i = 0;
    tmp = ft_split(argv[1], 32);
    while (tmp[1])
    {
        j = ft_atoi2(tmp[1]);
        ft_add_back(&a, ft_stack_new(j));
        i++;
    }
    ft_freestr(tmp);
    free(tmp);
    return (a);
}


t_stack *ft_process(int argc, char **argv)
{
    t_stack *a;
    int     i;
    int     j;

    i = 1;
    a = NULL;
    if (argc < 2)
        ft_error();
    if (argc == 2)
        a = ft_sub_process(argv);
    else
    {
        while (i < argc)
        {
            j = ft_atoi2(argv[i]);
            ft_add_back(&a, ft_stack_new(j));
            i++;
        }
    }
    return (a);
}
