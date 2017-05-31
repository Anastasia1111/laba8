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
	printf ("%d",RE(sum, date));
    
    
}


