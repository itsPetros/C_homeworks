#include <stdio.h>

int main() {
    int length;
    printf("Enter the length \n");
    scanf("%d", &length);

    char arr[length*2];
    for (int i = 0; i < (length*2); i+= 2){
        arr[i] = '*';
        arr[i+1] = ' ';
    }
    arr[length*2] = '\0';  
    printf("%s \n", arr);
    
    char arr2[length*2];
    for (int j = 1; j < (length * 2 - 2); j++){
        arr2[0] = '*';
        arr2[j] = ' ';
    }
    arr2[length*2 - 2] = '*';
    arr2[length*2 - 1] = '\0';  

    while (length > 0){
        printf("%s \n", arr2);
        length-= 2;
    }

    printf("%s \n", arr);
    
    return 0;
}