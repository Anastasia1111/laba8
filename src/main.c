#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
#include "deposit.h"

int main()
{
	
    int date, sum;
    
    setlocale(LC_ALL, "rus"); 
 
		printf("Введите размер вклада. Минимальный размер 10 000р. ");
   		 scanf("%d",&sum);
   		 printf("Введите количество дней");
  		  scanf("%d",&date);
	printf ("%d",RE(sum, date));
    
    
}


