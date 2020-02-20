#include <stdio.h> 

int main()
{
    int vettore[10];
    int array[10];
    int somma[10];
    int dimensione = 10;
    int i; 
    printf("-----------------------------------------------\n");
    printf("Somma tra due vettori!\n");
    printf("-----------------------------------------------\n");
    printf("Inserisci numeri del primo vettore:\n");
    printf("-----------------------------------------------\n");
	for (i = 0; i < dimensione; i++)
    {
        printf("Inserisci numero : \n");
        scanf("%d", &vettore[i]);
    }
    printf("-----------------------------------------------\n");
    printf("Inserisci numeri del secondo vettore:\n");
    printf("-----------------------------------------------\n");
	for (i = 0; i < dimensione; i++)
    {
        printf("Inserisci numero : \n");
        scanf("%d", &array[i]);
    }
    printf("-----------------------------------------------\n");
    printf("Risultati: \n");
    printf("-----------------------------------------------\n");
    for (i = 0; i < dimensione; i++)
    {
        somma[i] = array[i] + vettore[i];
        printf("%d) %d + %d = %d \n" , i+1, vettore[i], array[i], somma[i]);
    }
    
    return 0;
}
