#include <stdio.h>

int main()
{   

    int a;
    int b;
    printf("Enter the first number \n");
    scanf("%d", &a);
    printf("Enter the second number \n");
    scanf("%d", &b);
    if ((a >= 48 && a <= 57) || (b >= 48 && b <= 57)) {
        if (a > b) {
            printf("%d is the biggest \n", a);
        }
        else{
            printf("%d is the biggest \n", b);
        }
    }
    else{
        printf("Invalid digit \n");    
        }

    return 0;
}
