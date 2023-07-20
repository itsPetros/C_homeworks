#include <stdio.h>

int main(){
    int year;
    printf("Enter the year \n");
    scanf("%d", &year);
    
    if (year % 4 == 0){
        printf("This is a leap year\n");
    }
    else{
        printf("This isn't a leap year\n");
    }
    return 0;
}