#include <stdio.h>

int main() {
    int contatore=1;
    int numero=0;

    if (numero % 2 == 0)
        printf("Il numero è pari");

    //Iterazioni DEFINITE
    while(contatore <= 10){
        printf("Contatore while: %d\n",contatore);
        //contatore = contatore +1;
        contatore++;
    }
    printf("Ho finito.\n\n");

    //ITERAZIONE DEFINITA CON FOR
    for (int i = 1; i<=10; i++){
        printf("Contatore for: %d\n",i);
    }
    printf("Ho finito.\n\n");

    //ITERAZIONI NON DEFINITE
    printf("Inserisci il numero: \n");
    scanf("%d",&numero);
    while(numero != 0){
        printf("Inserisci il numero: \n");
        scanf("%d",&numero);
    }
    printf("Ho finito.\n\n");

    //ITERAZIONI NON DEFINITE CON DO - WHILE
    do{
        printf("Inserisci il numero: \n");
        scanf("%d",&numero);
    }
    while (numero !=0);
    printf("Ho finito.\n\n");


}
