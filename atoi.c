#include <stdio.h>

int atoi (char * str)
{
	if (!str[0])
		return 0;
	
	int sign = 0, i = 1, result = 0;
	if (str[0] == '-')
		sign = -1;
	else if (str[0] == '+')
		sign = 1;
	if (sign == 0)
	{
		sign = 1;
		i = 0;
	}
	while (str[i])
	{
		if (str[i] <= '0' || str[i] >= '9')
			return 0;
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return sign * result;
}

int main (void)
{
	char * str = "-12323";
	printf ("Integer: %d\n", atoi (str));
	return 0;
}
