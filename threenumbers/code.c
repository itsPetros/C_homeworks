#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    printf("Enter the first number \n");
    scanf("%d", &a);
    printf("Enter the second number \n");
    scanf("%d", &b);
    printf("Enter the third number \n");
    scanf("%d", &c);

    if(a == b){
        if (c > a){
            printf("%d \n", c);
        }
        else{
            printf("%d \n", a);
        }
    }
    else if (b == c){
        if(a > b){
            printf("%d \n", a);
        }
        else{
            printf("%d \n", b);
        }
    }
    else if (a == c){
        if (b > a){
            printf("%d \n", b);
        }
        else{
            printf("%d \n", a);
        }
    }
    else{
        printf("Ooops....\n");
    }
    return 0;
}
