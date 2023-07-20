#include <stdio.h>
int main(){
    int num1; int num2; int div = 0; 
    printf("Enter the first number \n");
    scanf("%d", &num1);
    printf("Enter the second number \n");
    scanf("%d", &num2);
    for(int i = 1; i <= num1 && i <= num2; ++i){
        if (num1 % i == 0 && num2 % i == 0){
            div = i;
        }
    }
        printf("%d is gcd \n", div);
    return 0;
}