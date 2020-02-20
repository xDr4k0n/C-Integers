//somma orario
#include <stdio.h>
void input(int *num1, int *num2);
int main()
{
    printf("\t\t<Esercizion Somma minuti> \n");
    printf("Si scriva un programma che, a partire dalle \n");
    printf("ore e minuti dalla prima sessione di lavoro \n");
    printf("e dalle ore e minuti della seconda sessione \n");
    printf("di lavoro, calcoli il numero di ore e minuti\n");
    printf("complessivi \n");
    int num_ore_1;
    int num_minuti_1;
    int num_ore_2;
    int num_minuti_2;
    printf("Inserisci dati della prima sessione : \n");
    input(&num_ore_1,&num_minuti_1);
    printf("Inserisci dati della prima sessione : \n");
    input(&num_ore_2,&num_minuti_2);
    int somma_ore;
    int somma_min;
    somma_ore = num_ore_1 + num_ore_2;
    somma_min = num_minuti_1 + num_minuti_2;
    if(somma_min >59)
    {
        somma_min = somma_min - 60;
        somma_ore = somma_ore + 1;
    }
    printf("\nTotale ore -> %d",somma_ore);
    printf("\nTotale minuti  -> %d",somma_min);
    return 0;
}
void input(int *num1, int *num2)
{
    printf("Inserisci Ore/a : \n");
    scanf("%d", num1);
    printf("Inserisci Minuti/o : \n");
    scanf("%d", num2);
    //printf("\n %d : %d \n",*num1,*num2);test
}