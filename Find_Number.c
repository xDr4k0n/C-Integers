#include <stdio.h> 
#include <stdbool.h>
void cerca_numero(int array[],int dim,int search);
int main()
{
    int vettore[10];
    int dimensione = 10;
    int i; 
    int somma = 0;
    int numero;
	for (i = 0; i < dimensione; i++)
    {
        printf("Inserisci numero : \n");
        scanf("%d", &vettore[i]);
    }
    printf("Inserisci il numero che vuoi cercare : ");
    scanf("%d", &numero);
    cerca_numero(vettore,dimensione,numero);


    return 0;
}
void cerca_numero(int array[],int dim,int search)
{
    int contatore;
    bool trovato = false;
    int posizione;
    do
    {
        if(array[contatore] == search)
        {
            trovato = true;
            posizione = contatore;
            printf("Ho trovato il tuo numero '%d' nella posizione %d . ", search, posizione);
        }
        contatore++;
    } while (contatore < dim && trovato != true);
}




//trova numero
