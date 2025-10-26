#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
		unsigned int	nb;

			if (n < 0)
					{
								ft_putchar_fd('-', fd);
										nb = -n;
											}
				else
							nb = n;
					if (nb < 10)
								ft_putchar_fd(nb + '0', fd);
						else
								{
											ft_putnbr_fd(nb / 10, fd);
													ft_putchar_fd(nb % 10 + '0', fd);
														}
}
/*
 * #include <stdio.h>
 *
 * int main(void) 
 * {
 * 	ft_putnbr_fd(-2147483648, 1);
 * 		return 0;
 * 		}
 * 		*/
