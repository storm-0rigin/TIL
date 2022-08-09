#include <stdio.h>

int prime(int nb){
	int i;
	i = 2;
	if (nb < 2)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(){
	int a, n, i, half;
	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		scanf("%d", &a);
		half = a / 2;
		while (half <= a)
		{
			if (prime(half) == 1)
			{
				if (prime(a - half) == 1)
				break;
			}
			half++;
		}
		printf("%d %d\n", a - half, half);
		i++;
	}
}