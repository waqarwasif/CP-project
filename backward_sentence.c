#include <stdio.h>
#include <conio.h>

void printback(void)
{
    char ch = getche();
    if (ch != '\r')
    {
        printback();
        printf("%c", ch);
    }
    else{printf("\n");}
}

int main()
{
    printf("Enter a sentence (press enter to end the program): ");
    printback();
    printf("\n"); 
    return 0;
}
