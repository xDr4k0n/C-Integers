#include <stdio.h> 

int main()
{
    int vettore[10];
    int array[10];
    int somma[10];
    int dimensione = 10;
    int media;
    int resto;
    int i; 
    printf("-----------------------------------------------\n");
    printf("Media tra due vettori!\n");
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
        media = (array[i] + vettore[i])/ 2;
        resto = (array[i] + vettore[i])% 2;
        printf("%d) (%d + %d):2 = %d.%d \n" , i+1, vettore[i], array[i], media, resto);
    }
    
    return 0;
}
