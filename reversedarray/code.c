#include <stdio.h>
#include <string.h>

int main(){
    char string[100];
    printf("Enter a string \n");
    scanf("%s", string);
    int left = 0;
    int right = strlen(string)- 1;
    while(left < right){
        char temp = string[left];
        string[left] = string[right];
        string[right] = temp;
       
       left++;
       right--;
    }
    printf("%s \n", string);


    return 0;
}