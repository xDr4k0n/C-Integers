#include <stdio.h>

int main()
{
    const int lines = 10;
    const int line_long = 10;
    int tabella[lines][line_long];
    int i;
    int j;
    printf("| Riga |  Colonna  | Input\n");
    for (  i=0  ;  i<lines  ;  i++  )
    {

        for (  j=0  ;  j<lines  ;  j++  )
        {
            printf("| [%02d] |   [%02d] ->   ",i+1,j+1);
            scanf("%d", &tabella[i][j]);
            //printf("\n");
        }

    }
    printf("Caricamento e andato a buon fine! \n");
    printf("Riga | Colonna | Valore \n");
    for (  i=0  ;  i<lines  ;  i++  )
    {
        for (  j=0  ;  j<lines  ;  j++  )
        {
            printf("[%02d] |-> [%02d] |-> [%02d] \n",i+1,j+1,tabella[i][j]);
        }
    }
    return 0;
}