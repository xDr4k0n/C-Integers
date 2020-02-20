//equazione di secondo grado
#include <stdio.h>
int main()
{
    printf("\t\tEsercizio");
    printf("Data l'equazione : \n ax+b=0 \n");
    printf("Con a e b inseriti da tastiera,determinare\n");
    printf("valore di x che risolve l'equazione. \n");
    int a;
    int b;
    int x;
    printf("Inserisci il valore di a : ");
    scanf("%d,\n",&a);
    printf("Inserisci il valore di a : ",&b);
    scanf("%d,\n",&b);
    x = (-b) / a;
    printf("\nRisultato dell equazione e : %d", x);




    return 0;
}
