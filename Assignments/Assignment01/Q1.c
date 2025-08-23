/*
Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members day, month, year. Implement the following functions.
void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);

*/

#include <stdio.h>

struct Date{
    int day;
    int month;
    int year;
};

int menuList(){
    int choice;
    printf("Choices \n");
    printf("1.initDate\n"); 
    printf("2.printDateOnConsole\n");
    printf("3.acceptDateFromConsole\n");

    printf("Enter your choice : "); 
    scanf("%d",&choice); 

    return choice; 
}

void initDate(struct Date* ptrDate){         //choice - 1
    printf("Your Initialized Date is : 06/10/2002 \n");
    
}

void printDateOnConsole(struct Date* ptrDate){  //choice - 2
    printf("Your Date is : ");

    printf("%d", ptrDate->day);
    printf("/");

    printf("%d", ptrDate->month);
    printf("/");

    printf("%d", ptrDate->year);
    printf("\n");
    
}

void acceptDateFromConsole(struct Date* ptrDate){  //choice - 3
    printf("Enter Day: ");
    scanf("%d", &ptrDate->day);

    printf("Enter Month: ");
    scanf("%d", &ptrDate->month);

    printf("Enter Year: ");
    scanf("%d", &ptrDate->year);

    printf("\n");

    printf("Your Date is: ");
    printf("%d" , ptrDate->day);
    printf("/");
    printf("%d",  ptrDate->month);
    printf("/");
    printf("%d",  ptrDate->year);
    printf("\n");

}


int main(){
    int choice;
    struct Date d1;

    while((choice = menuList()) != 0){
        if(choice == 1){
            initDate(&d1);
        }

        else if(choice == 2){
            printDateOnConsole(&d1);
        }

        else if(choice == 3){
            acceptDateFromConsole(&d1);
        }

        else{
            printf("Exiting the Program.........");
            break;
        }
    }

    return 0;
}