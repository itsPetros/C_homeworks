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

    if(((a == b) != c)  || ((a == c) != b) || ((b == c) != a)) { 
        if ((c > a  || c > b)    )  {
            printf("%d", c);
        }
        else if (b  > a || b > c ) {
            printf("%d", b);
        }
        else if (a > c || a > b ) {
            printf("%d", a);
        }
    }
    else{
        printf("Ooops....");
    }
    return 0;
}
