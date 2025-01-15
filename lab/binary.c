#include <stdio.h>

void printBinary(int number) {
   
    if (number < 0) {
        printf("Please enter a non-negative integer.\n");
        return;
    }

   
    if (number == 0) {
        printf("0\n");
        return;
    }

    int binary[32];
    int index = 0;

  
    while (number > 0) {
        binary[index] = number % 2;
        number = number / 2;       
        index++;
    }

    
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int num;

   
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    printf("Binary representation of %d is: ", num);
    printBinary(num);

    return 0;
}
