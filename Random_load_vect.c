#include <stdio.h>
#include<time.h>
//Procedure 
void caricamento_vettore(int vet[], int dim);
void visualiza_vettore(int vet[], int dim);
void ribaltamento_vettore(int vet[], int dim);
void carica_automatica(int vet[], int dim);
//Funzioni
int dimensione_vettore();
int cerca_numero(int vet[], int dim);
int main_menu();


int main() {
	int dimensione;
	dimensione=dimensione_vettore();//Decisione quanto grande vuoi vettore che lo salva dentro a una variabile dimensione
	
	int vettore[dimensione];
	int decisione;
	int risposta_carica;
	int trovato;
	do
	{
		decisione = 4;
		decisione=main_menu();//Menu+risposta
		switch(decisione)
		{
		    case 1:
			{
			do{
				risposta_carica=menu_carica();
				if(risposta_carica==1){
					carica_automatica(vettore,dimensione);
				}
				else if(risposta_carica==2){
					caricamento_vettore(vettore,dimensione);
				}
			}while(risposta_carica==1||risposta_carica==2);
			break;
			}
			
			case 2:
			{
				//Visualiza
				visualiza_vettore(vettore,dimensione);
				break;
				
			}
			case 3:
			{
					//Ribalta vettore
					ribaltamento_vettore(vettore,dimensione);
					break;
			}	
			case 4:
			{
					//Cerca numero
					trovato=cerca_numero(vettore,dimensione);
					if(trovato==0){
						printf("Numero non trovato\n");
					}
					else if(trovato!=0){
						printf("Numero trovato %d volte\n", trovato);
					}
					break;
			}
		
				default:
					break;
		}
		
	}while(decisione!=0);
	
	
	return 0;
}

int main_menu(){
	int risposta;
	printf("1--Carica vettore\n");
	printf("        Auto       \n");
	printf("        Manuale     \n");
	printf("2--Visualiza vettore\n");
	printf("3--Ribaltamento vettore\n");
	printf("4--Cerca numero\n");
	printf("0--Esci\n");
	scanf("%d", &risposta);
	return risposta;
}

int menu_carica(){
	int risposta;
	printf("1--Automatico\n");
	printf("2--Manuale\n");
	printf("3--Esci\n");
	scanf("%d", &risposta);
	return risposta;
}
void carica_automatica(int vet[], int dim){
	int i;
	for(i=0;i<dim;i++){
		vet[i]=(rand()%100);
	}
	printf("Caricamento completo\n");
	
}

void visualiza_vettore(int vet[], int dim){
	int i;
	for(i=0;i<dim;i++){
		printf("%d) - %d \n",i+1, vet[i]);
	}
	
}

void caricamento_vettore(int vet[], int dim){
	int i;
	for(i=0;i<dim;i++){
		printf("Inserisci numero\n");
		scanf("%d", &vet[i]);
	}
}

void ribaltamento_vettore(int vet[], int dim){
	int dimfinale;
	int m,i;
	int ris;
	dimfinale=dim/2;
			m=dim-1;
				for(i=0;i<dimfinale;i++){
					ris=vet[m];
					vet[m]=vet[i];
					vet[i]=ris;
					m=m-1;
					
}

}

int cerca_numero(int vet[], int dim)
{
	int cercato;
	int trovato = 0;
	int m,i;
	printf("Che numero vuoi cercare?");
	scanf("%d", &cercato);
	for(i=0;i<dim;i++)
	{
		if(vet[i]==cercato)
		{
			trovato = trovato + 1;
		}
	}
	return trovato;
		
}

int dimensione_vettore(){
	int grandeza;
	printf("Quanto grande vuoi che sia il vettore?\n");
	scanf("%d", &grandeza);
	return grandeza;
}
