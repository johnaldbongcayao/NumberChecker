#include <stdio.h>
int main(){
    // check if the number if even or odd
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);
    if(number % 2 == 0){
            printf("even number!", number);
    }else{ 
        printf("%d odd number!", number);
    }
    
    return 0;
}