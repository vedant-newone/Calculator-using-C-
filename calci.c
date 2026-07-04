#include <stdio.h>

int main()
{
    // 1. We only need variables for the two numbers and the user's choice
    int a, b, choice;
    
    // 2. Get the two numbers from the user
    printf("enter a number a: ");
    scanf("%d", &a);
    
    printf("enter a number b: ");
    scanf("%d", &b);
    
    // 3. Show the menu so the user knows what numbers to press
    
    printf("1. Sum (+)\n");
    printf("2. Multiplication (*)\n");
    printf("3. Division (/)\n");
    printf("4. Subtraction (-)\n");
    printf("What did you choose? : ");
    scanf("%d", &choice);
    
    // 4. Check the choice and do the math
    if (choice == 1)
       printf("Result: %d\n", a + b);
    
    else if (choice == 2)
       printf("Result: %d\n", a * b);

    else if (choice == 3)
       printf("Result: %d\n", a / b);

    else if (choice == 4)
       printf("Result: %d\n", a - b);

    else 
       printf("invalid choice\n");

    return 0;
}