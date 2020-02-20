//Antonio Lamanna
#include<stdio.h>
#include<math.h>

float somma(float add1, float add2);
float moltiplicazione(float fat1, float fat2);
float sottrazione(float min, float sottr);
float divisione(float div, float divis);


int main () 
{
	float num1, num2, risTotSomma, risTotProd, risTotDiff;
	
		printf("inserisci il primo numero:\t");
		scanf("%f",&num1);
		printf("inserisci il secondo numero:\t");
		scanf("%f",&num2); 
		risTotSomma = somma(num1, num2);
		printf("\nla somma e' %0.0f",risTotSomma);
		
		risTotProd = moltiplicazione(num1, num2);
		printf("\nil prodotto e' %0.0f",risTotProd);
		
		risTotDiff = sottrazione(num1, num2);
		printf("\nla differenza e' %0.0f",risTotDiff);
		
		divisione(num1, num2);	   
	   
   return 0;
}

float somma(float add1, float add2)
{
	float totSomma;
		totSomma = add1 + add2;
		
	return totSomma;	
}

float moltiplicazione(float fat1, float fat2)
{
	int i;
	float totProd;
	for (i=0; i<fat2; i++)
	{
		totProd = somma(totProd, fat1);
	}
			
	return totProd;	
}

float sottrazione(float min, float sottr)
{
	float totDiff;
		totDiff = min - sottr;
		
	return totDiff;	
}

float divisione(float div, float divis)
{
	int i;
	
	while(div>=divis)
	{
		div = div - divis;
		i = i + 1;
	}
	printf("\nil quoziente e' %d", i);
	printf("\nil resto e' %d", div);
}






