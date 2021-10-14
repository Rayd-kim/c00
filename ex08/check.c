#include<unistd.h>
void	ft_putchar(char c, int n)
{
	write(1, &c, n);
}
int	main()
{
	int n;
	n = 5;
ft_putchar( '1', n+1);
ft_putchar( '2', n-1);
ft_putchar( '3', n-2);
ft_putchar( '4', n-3);
ft_putchar( '5', n+5);
ft_putchar( '6', n+4);
ft_putchar( '7', n+3);
ft_putchar( '8', n+2);
ft_putchar( '9', n+1);
return 0;
}

