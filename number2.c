#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(0));
    int randomchoice = rand() %3;
    char  choice;

   // prompt user to enter their choice 
    printf("Enter your choice (s for stone, k for knife, p for paper)\n");    scanf(" %c", &choice );

    // display the computers choice
    printf("Computer's choice: \n");
    if (randomchoice ==0 ) {
        printf("stone \n");
    }
    else if (randomchoice == 1) {
        printf("knife \n");
    }
    else {
        printf("paper \n");
    }

    // check for the choices
    if (choice == 's') {
        if (randomchoice== 0){
            printf("It is a draw!!");
        }
        else if (randomchoice == 1) {
            printf("You lost!");
        }
        else { 
            printf("You won!!");
        }
    }
    else if (choice == 'k')  {
        if (randomchoice == 0) {
            printf("You won!!");
        }  
        else if (randomchoice == 1){
            printf("It is a draw!1 \n");
        }
        else {
            printf("You lost!!");
        }
    }
    else if (choice == 'p') {
        if (randomchoice == 0) {
            printf("You won!\n");
        }
        else if (randomchoice == 1) {
            printf("You lost!!\n");
        }
        else {
            printf(" It is a draw !!");
        }

    }
    else {
        printf("Invalid input !!!");
    }

return 0;


}