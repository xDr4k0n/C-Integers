#include <stdio.h>
#include <time.h> 

void info();
void carica_automatica(int array[],int dim);
void visualizza_vettore(int tavola[],int dim);
void selection_sort_processo(int tavola[],int dim);


int main()
{
    int array[9];
    int dim;
    dim = 9;
    srand(time(0));
    info();
    printf("\n----------------------------------------------------\n");
    printf("Vettore vuoto o memoria sporca:\n");
    visualizza_vettore(array,dim);
    printf("----------------------------------------------------");
    carica_automatica(array,dim);
    printf("\n----------------------------------------------------\n");
    visualizza_vettore(array,dim);
    printf("----------------------------------------------------\n");
    selection_sort_processo(array,dim);
    printf("Vettore ordinato :\n");
    visualizza_vettore(array,dim);
    printf("----------------------------------------------------\n");
    return 0;
}
void selection_sort_processo(int tavola[],int dim)
{
    int i;
    int cerca;
    int pozitione_minore=0;
    int aiuto;
    int minore;
    int secchio;
    for(i = 0; i < dim; i++)
    {
    	secchio = tavola[i];
        for(cerca = i+1; cerca < (dim+1) ; cerca++)
        {
        	if(secchio > tavola[cerca])
        	{
        		pozitione_minore = cerca;
        		secchio = tavola[cerca];
			}
        }
        if(secchio != tavola[i])
        {
            aiuto = tavola[i];
            tavola[i] = tavola[pozitione_minore];
            tavola[pozitione_minore] = aiuto;
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
