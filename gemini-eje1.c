#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//Intensity scanner of glucose
int main () {
    int levels[5];
    float suma = 0;
    int mayor = 0, estado;


    printf("\n>>> WELCOME <<<\n");
    printf("\n--- Scanner of Glucose Levels ---\n");

//Fill the array

    for (int i= 0; i < 5; i ++) {

        do {
        printf("\nEnter glucose level of the patient: ");
        // Input validation
        estado = scanf("%d", &levels[i]);//Evaluation status of input: 1 or 0
        if (estado == 0) {
            printf("\nError, invalid input. Try again.\n");
            while(getchar() != '\n');
        getche();
        system("cls");
        printf("\n--- Scanner of Glucose Levels ---\n");
         for(int j = 0; j < i; j++) {
            printf("Glucose level: %d\n\n", levels[j]);
         }
        } else if (levels[i] < 10 || levels[i] > 400) { //Evaluation of value input
            printf("\nError, out of range data. Try again.\n");
            while(getchar() != '\n');
        getche();
        system("cls");
        printf("\n--- Scanner of Glucose Levels ---\n");
        //Mini for cycle for the history of levels
        for(int j = 0; j < i; j++) {
            printf("Glucose level: %d\n\n", levels[j]);
        }
        }
        }while(estado != 1 || levels[i] < 10 || levels[i] > 400);

        suma += levels[i]; //Accumulator for the average
        if (levels[i] > mayor) //Saved the highest level
            mayor = levels[i];
    }

//Show the results
    printf("\n>>> RESULTS: <<<\n");
    printf("\nThe highest level is: %d\n", mayor);
    printf("\nThe total average is: %.2f\n", suma / 5);



getche();
return 0;
}
