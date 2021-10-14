#include<unistd.h>
void	ft_putchar(char c, int n)
{
	write(1, &c, n);
}
int	main()
{
	ft_putchar( '9', 5);
	return 0;
}

