#include <stdio.h>

void intToBinary(int num, char binaryStr[]) {
    int mask = 1 << 31;
    for (int i = 0; i < 32; i++) {
        binaryStr[i] = (num & mask) ? '1' : '0';
        mask >>= 1;
    }
    binaryStr[32] = '\0';
}

int binaryToInt(const char binaryStr[]) {
    int num = 0;
    for (int i = 0; i < 32; i++) {
        num <<= 1;
        num += (binaryStr[i] - '0');
    }
    return num;
}

int main() {
    int inputNumber, modifiedNumber;
    char binaryStr[33];

    printf("Enter an integer: ");
    scanf("%d", &inputNumber);

    intToBinary(inputNumber, binaryStr);

    if (binaryStr[31 - 5] == '0') {
        binaryStr[31 - 5] = '1';

        modifiedNumber = binaryToInt(binaryStr);
        printf("Modified number: %d\n", modifiedNumber);
    } else {
        printf("The 5th bit is already 1.\n");
    }

    return 0;
}



