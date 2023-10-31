#include <stdio.h>

int main() {
    int num, reversedNum = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

   
    if (num >= 100 && num <= 999) {
     
        reversedNum += (num % 10) * 100;
        num /= 10;
        reversedNum += (num % 10) * 10;
        num /= 10;
        reversedNum += num;
        printf("Reversed number: %d\n", reversedNum);
    } else {
        printf("Please enter a 3-digit number.\n");
    }

    return 0;
}
