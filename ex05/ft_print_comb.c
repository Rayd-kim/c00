#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	abc(void)
{
	
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	ft_putchar(',');
	ft_putchar(' ');
}
void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	b = 49;
	c = 50;
	while(a <= 55)
	{
		
		while(b <=56)
		{
			while(c <= 57)
			{
				abc();
				c++;
			}
			b++;
			c = b+1;

		}
		a++;
		b = a+1;
		c = b+1;
	}
}
