#include <stdio.h>
#include <time.h> 

void info();
void carica_automatica(int array[],int dim);
void visualizza_vettore(int tavola[],int dim);
void bubble_sort_processo(int tavola[],int dim);


int main()
{
    srand(time(0));
    int array[9];
    int dim;
    dim = 9;
    info();
    printf("\n----------------------------------------------------\n");
    printf("Vettore vuoto o memoria sporca:\n");
    visualizza_vettore(array,dim);
    printf("----------------------------------------------------");
    carica_automatica(array,dim);
    printf("\n----------------------------------------------------\n");
    visualizza_vettore(array,dim);
    printf("----------------------------------------------------\n");
    bubble_sort_processo(array,dim);
    printf("Vettore ordinato :\n");
    visualizza_vettore(array,dim);
    printf("----------------------------------------------------\n");
    return 0;
}
void bubble_sort_processo(int tavola[],int dim)
{
    int aiuto;
    int i=0;
    int m;
    int k;
    int g;
    for( k=0 ; k < dim ; k++)
    {
        i = k;
        for( m=8 ; i<=m ; m-- )
        {
            if(tavola[m] > tavola[m+1])
            {
                aiuto = tavola[m];
                tavola[m] = tavola[m+1];
                tavola[m+1] = aiuto;
            }
        }
    }
}
void info()
{
    printf("    Inserendo dei numeri a caso, questo programma gli mettera in ordine \n");
    printf("usando il mettodo, 'Bubble sort'\n");
}
void carica_automatica(int array[],int dim)
{
    printf("\nCaricamento---->");
    int i;
    for (i = 0; i < dim; i++)
    { 

        array[i] = (rand() % 50);
    } 
}
void visualizza_vettore(int tavola[],int dim)
{
    int location_manager;
    for (location_manager=0;location_manager <= dim; location_manager++)
    {
        printf("%d) NR : %d \n", location_manager+1 , tavola[location_manager]);
    }
}

