#include <stdio.h>
#include <stdbool.h>
#include <time.h>

//Procedure
void ordinatore_maggiore_al_minore(int vet[],int dim);
void ordinatore_minore_al_maggiore(int vet[],int dim);
void carica_automatica(int array[],int dim);
void visualizza_vettore(int vet[],int dim);
void carica_manuale(int array[],int dime);

//Funzioni
int start_info();
int main_menu_info();
int riempimento_vettore_info();
int ordinamento_info();
int cerca(int vet[],int dim,int cercato);
int cerca_numero_presente(int array[],int dime,int cercato);
int cerca_pari(int array[],int dime);
int cerca_dispari(int array[],int dime);
int cerca_minimo(int array[],int dime);
int cerca_massimo(int array[],int dime);

//Ritorno decisioni!

int main()
{
    srand(time(0));
    int dimensione;
    dimensione = start_info();
    int vettore[dimensione];
    int decisione;
    int rempimento;
    int cerca_numero;
    int return_numero;
    do
    {
        decisione = main_menu_info();
        switch (decisione)
        {
        case 1:
        {
            do
            {
                          //Riempimento
                decisione = riempimento_vettore_info();
                if(decisione == 1) //Automatico
                {
                    carica_automatica(vettore,dimensione);
                    visualizza_vettore(vettore,dimensione);
                }
                else if (decisione == 2) //manuale
                {
                    carica_manuale(vettore,dimensione);
                    visualizza_vettore(vettore,dimensione);

                }
                else 
                {
                    printf("Errore input! \n");
                    printf("Inserisci di nuovo la scelta : \n");
                }
            } while (decisione == 1 || decisione == 2); 
        }
        break;
        case 2:
        {
            do
            {
                //Ordinamento 
                decisione = ordinamento_info();
                if(decisione == 1) //---1. Ordinamento vettore (minimo - massimo)---
                {
                    visualizza_vettore(vettore,dimensione);
                    printf("\n");
                    ordinatore_minore_al_maggiore(vettore,dimensione);
                    visualizza_vettore(vettore,dimensione);
 
                }
                else if (decisione == 2) //---2. Ordinamento vettore (massimo - minimo)---
                {
                    visualizza_vettore(vettore,dimensione);
                    printf("\n");
                    ordinatore_maggiore_al_minore(vettore,dimensione);
                    visualizza_vettore(vettore,dimensione);
                }
            } while (decisione == 1 || decisione == 2); 
            //Ordinamento
        }
        break;
        case 3:
        {
            visualizza_vettore(vettore,dimensione);
        }
        break;
        case 4:
        {
            do
            {
                decisione = cerca_menu();
                if(decisione == 1)
                {
                    printf("\n Vettore deve essere ordinato, dal piu piccolo\n");
                    printf("al piu grande!\n");
                    printf("Inserisci numero per cerca \n");
                    scanf("%d",&cerca_numero);
                    return_numero = cerca(vettore,dimensione,cerca_numero);
                    if(return_numero == -1)
                    {
                        printf("\n Numero non trovato; \n");
                    }
                    else
                    {
                        printf("Numero trovato in positione %d \n", return_numero);
                    }
                }
                else if (decisione == 2) 
                {
                    printf("Inserisci numero per cerca \n");
                    scanf("%d",&cerca_numero);
                    return_numero = cerca_numero_presente(vettore,dimensione,cerca_numero);
                    if(return_numero == 0)
                    {
                        printf("\n Numero non trovato! \n");
                    }
                    else
                    {
                        printf("\n E stato trovato il tuo numero %d volte \n",return_numero);
                    }
                }
                else if (decisione == 3) 
                {
                    //Pari
                    return_numero = cerca_pari(vettore,dimensione);
                    printf("\n Nel tuo vettore sono %d numeri pari.\n",return_numero);
                }
                else if (decisione == 4) 
                {
                    // Dispari
                    return_numero = cerca_dispari(vettore,dimensione);
                    printf("\n Nel tuo vettore sono %d numeri dispari.\n",return_numero);
                }
                else if (decisione == 5) 
                {
                    return_numero = cerca_minimo(vettore,dimensione);
                    printf("\n Il numero piu piccolo e %d .\n",return_numero);
                }
                else if (decisione == 6) 
                {
                    return_numero = cerca_massimo(vettore,dimensione);
                    printf("\n Il numero piu grande e %d .\n",return_numero);
                }
            } while (((decisione == 1 || decisione == 2) || (decisione == 3 || decisione == 4)) || (decisione == 5 || decisione == 6)); 
        }
        break;
        default:
            printf("!!!!!!!!!!!!!!!Bye!!!!!!!!!!!!!!!!");
            break;
        }
        
    } while (decisione != 0 );
    
    return 0;
}

int cerca_menu()
{
    int decisione;
    printf("-----------------------------------------------\n");
    printf("-----------------   Cerca   -------------------\n");
    printf("---                Optioni                  ---\n");
    printf("---1) Positione 'Un numero se esistente'    ---\n");
    printf("---2) Positioni 'Se esistente,e volte pres.'---\n");
    printf("---3)           Cerca Pari                  ---\n");
    printf("---4)           Cerca Dispari               ---\n");
    printf("---5)              Minimo                   ---\n");
    printf("---6)              Massimo                  ---\n");
    printf("-----------------------------------------------\n");
    printf("---9)Back                                   ---\n");
    printf("---0)Exit                                   ---\n");
    printf("-----------------------------------------------\n");
    scanf("%d",&decisione);
    return decisione;
}



int ordinamento_info()
{
    int decisione;
    printf("-----------------------------------------------\n");
    printf("-----------------Ordinamento-------------------\n");
    printf("---                Optioni                  ---\n");
    printf("---1. Ordinamento vettore (minimo - massimo)---\n");
    printf("---2. Ordinamento vettore (massimo - minimo)---\n");
    printf("---            3 = Indietro                 ---\n");
    printf("-----------------------------------------------\n");
    scanf("%d",&decisione);
    return decisione;
}

int riempimento_vettore_info()
{  
    int decisione;
    printf("-----------------------------------------------\n");
    printf("--------------Riempimento vettore--------------\n");
    printf("---                Optioni                  ---\n");
    printf("---       1 = Riempimento automatico        ---\n");
    printf("---        2 = Riempimento manuale          ---\n");
    printf("---            3 = Indietro                 ---\n");
    printf("-----------------------------------------------\n");
    scanf("%d",&decisione);
    return decisione;
}

int main_menu_info()
{
    int decisione;
    printf("-----------------------------------------------\n");
    printf("------------------Main menu--------------------\n");
    printf("---1)            Riempimento                ---\n");
    printf("---2)            Ordinamento                ---\n");
    printf("---                  -Min maggiore          ---\n");
    printf("---                    (Bubble sort)        ---\n");
    printf("---                  -Maggiore minore       ---\n");
    printf("---                    (Bubble sort)        ---\n");
    printf("---3)           Visualizza Vettore          ---\n");
    printf("---4)            Cerca Numero               ---\n");
    printf("---                 -Risultato: Positione(1)---\n");
    printf("---                 -Risultato: Positioni   ---\n");
    printf("---                 -Pari (totale)          ---\n");
    printf("---                 -Dispari (totale)       ---\n");
    printf("---                 -Minimo                 ---\n");
    printf("---                 -Massimo                ---\n");
    printf("-----------------------------------------------\n");
    printf("---0)                 EXIT                  ---\n");
    printf("-----------------------------------------------\n");
    scanf("%d",&decisione);
    return decisione;
}

int start_info()
{
    int input_dimensione;
    printf("-----------------------------------------------------------\n");
    printf("--------------------------Start----------------------------\n");
    printf("---   Programma si basa sul 'vettore', per con tinuare, ---\n");
    printf("---inserisci greandezza del vettore prima di entrare nel---\n");
    printf("---main menu del prog.                                  ---\n");
    printf("-----------------------------------------------------------\n");
    printf("---      Quanto vuoi che sia grande il tuo vettore?      --\n");
    printf("-----------------------------------------------------------\n");
    printf("Inserisci grandezza vettore(array) :");
    scanf("%d",&input_dimensione);
    printf("\n");
    //Verifica input?   input_dimensione = check_input(input_dimensione);
    return input_dimensione;
}

void ordinatore_maggiore_al_minore(int vet[],int dim)
{
    int primo;
    int secondo;
    int usura = -1;
    int usura2 = 1;
    for (primo = dim; primo > usura; primo--)
    { 
        for (secondo = dim; secondo > primo; secondo--)
        {
            if(vet[primo] < vet[secondo])
            {
                usura2 = vet[secondo];
                vet[secondo] = vet[primo];
                vet[primo] = usura2;
            }
        }
    } 
}

void ordinatore_minore_al_maggiore(int vet[],int dim)
{
    int primo;
    int secondo;
    int usura = 0;
    int temp;
    int m;
    for (primo = 0; primo < dim; primo++)
    { 
        for (secondo = 0; secondo <dim; secondo++)
        {
            if(vet[primo] < vet[secondo])
            {
                usura = vet[secondo];
                vet[secondo] = vet[primo];
                vet[primo] = usura;
            }
        }
    } 
}
void carica_automatica(int array[],int dim)
{
    printf("\nCaricamento---->\n");
    int i;
    for (i = 0; i < dim; i++)
    { 

        array[i] = (rand() % 500);
    } 
}
void visualizza_vettore(int vet[],int dim)
{
    int i;
    for (i=0;i<dim;i++)
    {
        printf("%d) NR : %d \n", i+1, vet[i]);
    }
}
void carica_manuale(int array[],int dime)
{
    int i;
    for (i = 0; i < dime; i++)
    {
        printf("\n Inserisci numero : ");
        scanf("%d", &array[i]);
    }
}
int cerca(int vet[],int dim,int cercato)
{
    int pos;
    int i;
    pos = dim / 2;
    if(vet[pos]==cercato) 
    {
        return pos;
    }
    else if (vet[pos] > cercato)
    {
       for(i = -1; i < pos; pos--)
       {
           if(vet[pos] == cercato)
           {
               return (pos+1);
           }
       }
       return -1;

    }
    else if (vet[pos] < cercato)
    {
       for(i = pos; i < (dim+1); i++)
       {
           if(vet[i] == cercato)
           {
               return (i+1);
           }
       }
        return -1;
    }  
}
int cerca_numero_presente(int array[],int dime,int cercato)
{
    int i;
    int conta_trovato = 0;
    for (i=0; i < dime; i++)
    {
        if (array[i] == cercato)
        {
            conta_trovato = conta_trovato + 1;
        }
    }
    return conta_trovato;
}

int cerca_pari(int array[],int dime)
{
    int i;
    int conta_trovato = 0;
    int aiuto;
    for (i=0; i < dime; i++)
    {
        aiuto = (array[i] % 2);
        if (aiuto == 0)
        {
            conta_trovato = conta_trovato + 1;
        }
    }
    return conta_trovato;
}
int cerca_dispari(int array[],int dime)
{
    int i;
    int conta_trovato = 0;
    int aiuto;
    for (i=0; i < dime; i++)
    {
        aiuto = (array[i] % 2);
        if (aiuto != 0)
        {
            conta_trovato = conta_trovato + 1;
        }
    }
    return conta_trovato;
}

int cerca_minimo(int array[],int dime)
{
    int minimo;
    int i = 0;
    minimo = array[i];
    for (i=0; i < dime; i++)
    {
        if (minimo > array[i])
        {
            minimo = array[i];
        }
    }
    return minimo;
}
int cerca_massimo(int array[],int dime)
{
    int minimo;
    int i = 0;
    minimo = array[i];
    for (i=0; i < dime; i++)
    {
        if (minimo < array[i])
        {
            minimo = array[i];
        }
    }
    return minimo;
}