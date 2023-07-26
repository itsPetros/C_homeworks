#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

int main() {
    char input[100]; 
    char digits[100]; 
    int digitCount = 0; 

    printf("Enter a string: ");
    scanf("%s", input);

    for (int i = 0; input[i] != '\0'; i++) {
        if (isdigit(input[i])) {
            digits[digitCount] = input[i];
            digitCount++;
        }
    }
    digits[digitCount] = '\0';
    int result = atoi(digits);

    printf("%d\n", result);

    return 0;
}