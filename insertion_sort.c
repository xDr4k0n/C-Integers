#include <stdio.h>
#include <time.h> 

void info();
void carica_automatica(int array[],int dim);
void visualizza_vettore(int tavola[],int dim);
void insertion_sort_processo(int tavola[],int dim);


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
    insertion_sort_processo(array,dim);
    printf("Vettore ordinato :\n");
    visualizza_vettore(array,dim);
    printf("----------------------------------------------------\n");
    return 0;
}
void insertion_sort_processo(int tavola[],int dim)
{
    int i;
    int back;
    int posto;
    int temp;
    int aiuto;
    for( i=0 ; i < dim ; i++)
    {
        temp = tavola[i];
        posto = i;
        if( temp > tavola[i+1])
        {
            aiuto = tavola[i];
            tavola[i] = tavola[i+1];
            tavola[i+1] = aiuto;
            for (back = (i+1); (back > 0 && back !=0); back-- )
            {
                if(tavola[back-1] > tavola[back])
                {
                    aiuto = tavola[back];
                    tavola[back] = tavola[back-1];
                    tavola[back-1] = aiuto;
                }
            }

           

        }

    }
}
void info()
{
    printf("    Inserendo dei numeri a caso, questo programma gli mettera in ordine \n");
    printf("usando il mettodo, 'Insertion sort'\n");
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
