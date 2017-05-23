#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
#include "deposit.h"

const double A[2][4]={{-0.1,0.02,0.06,0.12},{-0.1,0.03,0.08,0.15}};



int main()
{
	
    int i, j, date, sum;
    double dep, per;
    setlocale(LC_ALL, "rus"); 
    printf("Введите размер вклада. Минимальный размер 10 000р. ");
    scanf("%d",&sum);
    printf("Введите количество дней");
    scanf("%d",&date);
    

    if (sum <= 100000) i = 0;
        else i = 1;
    if (date < 31) j = 0;
        else if (and(date, 30, 121)) j = 1;
        else if (and(date, 120, 241)) j = 2;
        else j = 3;
    per = (A[i][j] * date) / 365;
    dep = sum * (1 + per);
    if((checksum(sum)&&checkdate(date))) printf("Депозит = %0.0f\n", dep);
	//else return 666;
    
}


