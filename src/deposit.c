#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "deposit.h" 

const double A[2][4]={{-0.1,0.02,0.06,0.12},{-0.1,0.03,0.08,0.15}};

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

int RE(int sum, int date)
{ 
	int i,j;
	float dep,per;
	if (sum <= 100000) i = 0;
        else i = 1;
    if (date < 31) j = 0;
        else if (and(date, 30, 121)) j = 1;
        else if (and(date, 120, 241)) j = 2;
        else j = 3;
    per = (A[i][j] * date) / 365;
    dep = sum * (1 + per);
    if((checksum(sum)&&checkdate(date))) { return dep;}
	else return 666;
}
