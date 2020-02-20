#include <stdio.h> 

int main()
{
    int vettore[10];
    int dimensione = 10;
    int i; 
    int somma = 0;
	for (i = 0; i < dimensione; i++)
    {
        printf("Inserisci numero : \n");
        scanf("%d", &vettore[i]);
        somma =somma + vettore[i];
    }
    printf("La media dei tuoi numeri e : %d.%d \n", (somma/dimensione),(somma%dimensione));


    return 0;
}
