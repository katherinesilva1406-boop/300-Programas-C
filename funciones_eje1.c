#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//CALCULATOR USING FUNCTIONS

//Prototypes
float inputNum ();
int mostarMenu();
float calculator(float a, float b, int opc);


int main () {
    float num1, num2;
    int operation;

printf("<<< WELCOME TO THE BEST CALCULATOR >>>\n\n");

operation = mostarMenu();

system("cls");

 num1= inputNum();
 num2= inputNum();

 system("cls");
 printf("-----------------------------\n");
 calculator(num1, num2, operation);

printf("\n\n\n---------   DONE   ---------\n");
getche();
return 0;
}



//Operation list with user election

int mostarMenu () {
int opc, estado;

printf("1.ADDITION.\n2.SUBSTRACTION.\n3.MULTIPLICATION.\n4.DIVISION.");

do{
printf("\n\nEnter an option (1 - 4): ");

estado = scanf("%d", &opc);
if (estado != 1) {
    printf("Invalid option, please try again with a number.\n");
    while(getchar() != '\n');
    system("pause");
    system("cls");
} else if(opc < 1 || opc > 4) {
    printf("Invalid option, please try again (1-4).\n");
    while(getchar() != '\n');
     system("pause");
    system("cls");
}
} while(estado != 1 || opc < 1 || opc > 4);

return opc;
}

//Numbers inputs for the user

float inputNum() {
float num;
int estado;

do{
printf("\nEnter a number: ");
estado = scanf("%f", &num);
if(estado != 1) {
    printf("\nInvalid input, try again.\n");
    while (getchar() != '\n');
system("pause");
system("cls");
}
} while(estado != 1);

return num;
}

//Calculator
float calculator(float a, float b, int opc) {

switch(opc){
case 1:
printf("\nRESULT OF [%.2f] + [%.2f] = %.2f", a, b, a+b);
break;
case 2:
printf("\nRESULT OF [%.2f] - [%.2f] = %.2f", a, b, a-b);
break;
case 3:
printf("\nRESULT OF [%.2f] x [%.2f] = %.2f", a, b, a*b);
break;
case 4:
printf("\nRESULT OF [%.2f] / [%.2f] = %.2f", a, b, a/b);
break;
}

}
