// ABCabc012$ * +/

#include <stdio.h>
#include <conio.h>
int main()
{
    printf("Character | ASCII/ Integer Value\n");
    printf("   A      | \t%d\n", 'A');
    printf("   B      | \t%d\n", 'B');
    printf("   C      | \t%d\n", 'C');
    printf("   a      | \t%d\n", 'a');
    printf("   b      | \t%d\n", 'b');
    printf("   c      | \t%d\n", 'c');
    printf("   0      | \t%d\n", '0');
    printf("   1      | \t%d\n", '1');
    printf("   2      | \t%d\n", '2');
    printf("   $      | \t%d\n", '$');
    printf("   *      | \t%d\n", '*');
    printf("   +      | \t%d\n", '+');
    printf("   /      | \t%d\n", '/');
    printf("  ' '     | \t%d\n", ' '); // for blank character
    char ch;
    printf("Enter a character: ");
    ch = getche();
    printf("\nInteger value of %c is %d\n", ch, ch);
    
    return 0;
}