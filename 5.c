
#include <stdio.h>

int main() {
    int num, i, Prime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);
    for (i = 2; i <= num / 2; i++) 
     {
        if (num % i == 0) 
         {
            Prime = 0;
            
         }
     }

    
    if (Prime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
   