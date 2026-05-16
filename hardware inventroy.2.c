#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//Hardware inventory simulator (Diagnostic module)


int main () {
    int compnt[4];
    float suma = 0, promedio = 0;
    int estado, est2;
    char opc;

    do{

    printf("\n>>> WELCOME <<<\n");
    printf("\n--- HARDWARE INVENTORY ---\n");

//Fill the array

    for (int i= 0; i < 4; i ++) {

        do {
        printf("\n---- Components of MOTHERBOARD ----\n");
        printf("\n1. CPU\n");
        printf("\n2. RAM\n");
        printf("\n3. GPU\n");
        printf("\n4. CACHE\n");
        //array
        printf("\nEnter performance of component [%d]: ", i + 1);
        // Input validation
        estado = scanf("%d", &compnt[i]);//Evaluation status of input: 1 or 0
        if (estado == 0) {
            printf("\nError, invalid input. Try again.\n");
            while(getchar() != '\n');
        getche();
        system("cls");

        printf("\n---- Components of MOTHERBOARD ----\n");
         for(int j = 0; j < i; j++) {
            printf("\nESTATUS PERFORMANCE [%d]: %d\n\n", j + 1, compnt[j]);
         }
        } else if (compnt[i] < 1 || compnt[i] > 100) { //Evaluation of value input
            printf("\nError, out of range data (1 - 100). Try again.\n");
            while(getchar() != '\n');
        getche();
        system("cls");

        printf("\n---- Components of MOTHERBOARD ----\n");
        //Mini for cycle for the history of components data
        for(int j = 0; j < i; j++) {
            printf("\nESTATUS PERFORMANCE [%d]: %d\n\n", j + 1, compnt[j]);
        }
        }
        }while(estado != 1 || compnt[i] < 1 || compnt[i] > 100);

        suma += compnt[i]; //Accumulator for the average

    }
    promedio = suma / 4;
    system("pause");
    system("cls");

    printf("AVERAGE OF HARDWARE GLOBAL HEALTH INDEX: %.2f\n", promedio);
    if (promedio > 80) {
            printf("\nSTATUS: Optimal for KERNEL execution.\n");
        } else if (promedio >= 50 && promedio <=80 ) {
            printf("\nSTATUS: Risk for KERNEL execution. Latent phase.\n");
        } else {
            printf("\nSTATUS: Hardware FAILED. Change the components.\n");
        }
do {
        printf("\n\nWould you like to evaluate another motherboard? (s/n): ");
        est2 = scanf(" %c", &opc);
        if (est2 == 0) {
            printf("\nInvalid input. Try again.");
            while(getchar() != '\n');
        }else if(opc != 'n' && opc != 'N' && opc != 's' && opc != 'S') {
            printf("\nInvalid answer. Try again.");
            while(getchar() != '\n');
        }
} while(est2 != 1 || (opc != 'n' && opc != 'N' && opc != 's' && opc != 'S'));

    } while(opc == 's' || opc == 'S');

    printf("End of program. Press any key to finish...");

getche();
return 0;
}




