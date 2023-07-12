#include <stdio.h>

int main()
{
    char a;

    printf("Enter the letter \n");
    scanf("%c", &a);

   if ((a >= 'A' && a <='Z') || (a >= 'a' && a <= 'z')){
        switch (a)
        {
        case 'A':
        case 'a':
        case 'I':
        case 'i':
        case 'E':
        case 'e':
        case 'O':
        case 'o':
        case 'W':
        case 'w':
        case 'Y':
        case 'y':
        case 'U':
        case 'u':
            printf("The letter is wowel \n");
            break;

        default:
            printf("The letter is consonant \n");
        }
   }
   else
    {
        printf("You didn't enter a letter! \n");
    }

return 0;
}
