#include <stdio.h>

int     ft_is_prime(int nb)
{
    int i;
    
    if (nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0 || nb % 7 == 0)
    {
        if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
            return (1);
        else
            return (0);
    }
    i = 3;
    while (nb % i != 0)
    {
        if (i > nb)
            break;
        i += 2;
    }
    if (i == nb)
        return (1);
    else
        return (0);
}

int main()
{
    printf("%d\n",ft_is_prime(421));
    return 0;
}
