#include <stdio.h>
#include <string.h>
int main(){
    // check if the number if even or odd
     int number;
     char choice[10];
    do{   
    printf("Enter any number: ");
    scanf("%d", &number);
    if(number % 2 == 0){
        printf("%d even number!", number);
    }else{ 
        printf("%d odd number!", number);
    }
    printf("\nDo you want to cheack another number? (Y/N: )");
    scanf("%s", &choice);

    }while(strcmp(choice, "yes") == 0);
    printf("Thank you for using the program!");
    
    return 0;
}