#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "deposit.h" 

int and(int z, int x, int y)
{
    return ((z > x) && (z < y));
}

int checksum(int s)
{
	if (s < 10000)
		{
			printf("Ошибка!\n");
			return 0;
		}
		return 1;
}

int checkdate(int d)
{
	if ((d < 0) || (d > 365))
    {
        printf("Ошибка!\n");
        return 0;
    }
    return 1;
}

