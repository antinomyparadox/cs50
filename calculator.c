#include <cs50.h>
#include <stdio.h>

int main(void)
{
   // Prompt user to x
   long x = get_long("x: ");
   long y = get_long("y: ");
   printf("%li\n" x + y);
}