#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "deposit.h" 

const double A[2][4]={{0.9,1.02,1.06,1.12},{0.9,1.03,1.08,1.15}};

int and(int z, int x, int y)
{
    return ((z > x) && (z < y));
}

int checksum(int s)
{
	if (s < 10000)
		{
			return 0;
		}
		return 1;
}

int checkdate(int d)
{
	if ((d < 0) || (d > 365))
    {
        return 0;
    }
    return 1;
}

int RE(int sum, int date)
{ 
	int i,j;
	float dep;
	if (sum < 100000) i = 0;
        else i = 1;
    if (date < 31) j = 0;
        else if (and(date, 30, 121)) j = 1;
        else if (and(date, 120, 241)) j = 2;
        else j = 3;
    dep = (A[i][j] * sum);
    if((checksum(sum)&&checkdate(date))) { return dep;}
	else return 666;
}
