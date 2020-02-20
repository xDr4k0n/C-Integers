#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> 
#include <time.h> 

//Funzioni
int menu_2();
int mediatore_risultato(int array[],int di);
int mediatore_resto(int array[],int d);
int sommatore(int array[],int dime);
bool decisione_continuare();


//Prototipi
void menu();
void carica_automatica(int array[],int dim);
void carica_manuale(int array[],int dime);
void somma_2_vettori(int vettore1[],int vettore2[],int dim,int risultati[]);
void media_2_vettori(int vettore1[],int vettore2[],int dim,int risultati[]);
void visualizza_vettore(int vet[],int dim);
void media_2_vettori_resti(int vettore1[],int vettore2[],int dim,int risultati[]);
void visualizza_vettore_con_resto(int vet[],int vet_r[],int dim);

int main()
{
    int numeri[10];
    int numeri2[10];
    int usura_vettore[10];
    int usura_vettore2[10];
    int dimensione = 10;
    int i;
    int somma = 0;
    int minore = 0, maggiore = 600;
    int risposta; 
    int risultato = 0;
    int risultato1 = 0;
    bool continua = true;
    //int usura1;
    //int usura2;
    char caso;
    srand(time(0));
    do
    {

    
    menu();
    scanf("%c", &caso);
    switch (caso) 
    {
   	    case '1':
   	    {
                risposta = menu_2();
                if(risposta == 0)
                {
                    //0 -caricamento vettore automatico
                    carica_automatica(numeri,dimensione);
                    risultato = sommatore(numeri,dimensione);
                    printf("Somma : %d", risultato);
                    continua = decisione_continuare();
                }
                else
                {
                    //1 -caricamento vettore manuale
                    carica_manuale(numeri,dimensione);
                    risultato = sommatore(numeri,dimensione);
                    printf("Somma : %d", risultato);
                    continua = decisione_continuare();
                }
   	    	break;
            }
 	    case '2':
            { 
                risposta = menu_2();
                //0 -caricamento vettore automatico
                if(risposta == 0)
                {
                    //0 -caricamento vettore automatico
                    carica_automatica(numeri,dimensione);
                    risultato = mediatore_risultato(numeri,dimensione);
                    risultato1 = mediatore_resto(numeri,dimensione);
                    printf("Media : %d.%d", risultato,risultato1);
                    continua = decisione_continuare();
                }
                else
                {
                    //1 -caricamento vettore manuale
                    carica_manuale(numeri,dimensione);
                    risultato = mediatore_risultato(numeri,dimensione);
                    risultato1 = mediatore_resto(numeri,dimensione);
                    printf("Media : %d.%d", risultato,risultato1);
                    continua = decisione_continuare();
                }
   	    	break;
            }
        case '3':
            {
                risposta = menu_2();
                //0 -caricamento vettore automatico
                if(risposta == 0)
                {
                    //0 -caricamento vettore automatico
                    carica_automatica(numeri,dimensione);
                    carica_automatica(numeri2,dimensione);
                    somma_2_vettori(numeri,numeri2,dimensione,usura_vettore);
                    printf("\nLa somma del tuo vettore e : \n");
                    visualizza_vettore(usura_vettore,dimensione);
                    continua = decisione_continuare();

                }
                else
                {
                    //1 -caricamento vettore manuale
                    carica_manuale(numeri,dimensione);
                    carica_manuale(numeri2,dimensione);
                    somma_2_vettori(numeri,numeri2,dimensione,usura_vettore);
                    printf("\nLa somma del tuo vettore e : \n");
                    visualizza_vettore(usura_vettore,dimensione);
                    continua = decisione_continuare();
                }
        
   	    	break;
            }
        case '4':
            {
                risposta = menu_2();
                //0 -caricamento vettore automatico
                if(risposta == 0)
                {
                    //0 -caricamento vettore automatico
                    carica_automatica(numeri,dimensione);
                    carica_automatica(numeri2,dimensione);
                    media_2_vettori(numeri,numeri2,dimensione,usura_vettore);
                    media_2_vettori_resti(numeri,numeri2,dimensione,usura_vettore2);
                    printf("\nLa Media del tuo vettore e : \n");
                    visualizza_vettore_con_resto(usura_vettore,usura_vettore2,dimensione);
                    continua = decisione_continuare();

                }
                else
                {
                    //1 -caricamento vettore manuale
                    carica_manuale(numeri,dimensione);
                    carica_manuale(numeri2,dimensione);
                    media_2_vettori(numeri,numeri2,dimensione,usura_vettore);
                    printf("\nLa media del tuo vettore e : \n");
                    visualizza_vettore_con_resto(usura_vettore,usura_vettore2,dimensione);
                    continua = decisione_continuare();
                }
   	    	break;
            }
	}
    } while (continua == true);

    return 0;
}

bool decisione_continuare()
{
    int risp;
    bool conditione_ritorno;
    printf("\n         Optioni");
    printf("\nInserisci 1 per continuare.");
    printf("\nInserisci 2 per uscire.");
    scanf("%d", &risp);
    if (risp == 1)
    {
        conditione_ritorno = true;
    }
    else
    {
        conditione_ritorno = false;
    }
    return conditione_ritorno;
}


void visualizza_vettore_con_resto(int vet[],int vet_r[],int dim)
{
    int i;
    for (i=0;i<dim;i++)
    {
        printf("%d) NR : %d.%d \n", i+1, vet[i],vet_r[i]);
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
//somma 2 vettori
void somma_2_vettori(int vettore1[],int vettore2[],int dim,int risultati[])
{
    int i;
    for (i=0;i<dim;i++)
    {
        risultati[i] = vettore1[i] + vettore2[i];
    }
}
// media 2 vettori
void media_2_vettori(int vettore1[],int vettore2[],int dim,int risultati[])
{
    int i;
    for (i=0;i<dim;i++)
    {
        risultati[i] = (vettore1[i] + vettore2[i]) /2 ;
    }
}
void media_2_vettori_resti(int vettore1[],int vettore2[],int dim,int risultati[])
{
    int i;
    for (i=0;i<dim;i++)
    {
        risultati[i] = ((vettore1[i] + vettore2[i]) % 2) ;
    }
}



//1 - mediatore
int mediatore_risultato(int array[],int di)
{
    int i;
    int utilita;
    int ritorno;
    for (i = 0; i < di; i++)
    {
        utilita = utilita + array[i];
    }
    ritorno = utilita / di;
    return ritorno;
}
int mediatore_resto(int array[],int d)
{
    int i;
    int utilita = 0;
    int ritorno = 0;
    for (i = 0; i < d; i++)
    {
        utilita = utilita + array[i];
    }
    ritorno = (utilita % d);
    return ritorno;
}


//1 - somma
int sommatore(int array[],int dime)
{
    int i;
    int utilita = 0;
    for (i = 0; i < dime; i++)
    {
        utilita = utilita + array[i];
    }
    return utilita;
}


//1 -caricamento vettore manuale
void carica_manuale(int array[],int dime)
{
    int i;
    for (i = 0; i < dime; i++)
    {
        printf("\n Inserisci numero : ");
        scanf("%d", &array[i]);
    }
}

//0 -caricamento vettore automatico
void carica_automatica(int array[],int dim)
{
    printf("\nCaricamento---->\n");
    int i;
    for (i = 0; i < dim; i++)
    { 

        array[i] = (rand() % 600);
        printf("%d) NR : %d \n", i+1, array[i]);
    } 
}

//Decisione tipo caricamento
int menu_2()
{
    bool input_check_ok = true;
    int decisione;
    printf("Hai scelto 1!\n");
    printf("----------------------------------------------------------------------------\n");
    printf("Inserisci 0 per caricamento automatico(del vettore).\n");
    printf("Inserisci 1 per caricamento manuale(del vettore).\n");
    printf("----------------------------------------------------------------------------\n");
    do 
    {
        printf("Inserisci decisione(numero):\n");
        scanf("%d", &decisione);
        if(decisione != 1 && decisione != 0)
        {
            printf("Error input, re-inserisci decisione !\n");
            input_check_ok = true;
        }
        else
        {
            input_check_ok = false;
        }
        
    }while(input_check_ok == true);
    
    return decisione;
}
void menu()
{
    printf("----------------------------------------------------------------------------\n");
    printf("-               Programma che prova i famosi vettori!                      -\n");
    printf("----------------------------------------------------------------------------\n");
    printf("            News , che anche il auto inserimento dei numeri.\n");
    printf("                  Inserisci scelta in base ai numeri!\n");
    printf("\t\t\t            Menu\n");
    printf("1) Sommare un vettore.\n");
    printf("2) Media di un vettore.\n");
    printf("3) Sommare di due vettori tra di loro(Positione con positione).\n");
    printf("4) Media di due vettori tra di loro(Positione con positione).\n");
    printf("----------------------------------------------------------------------------\n");
}

