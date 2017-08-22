#include <stdio.h>
#include <conio.h>
void main()
{
char AAA;
printf("enter the letter AAA= ");
scanf("%c" , &AAA);
if(AAA == 'a' || AAA == 'e' || AAA == 'i' || AAA == 'o' || AAA == 'u' || AAA == 'A' || AAA == 'E' || AAA == 'I' || AAA == 'O' || AAA == 'U')
{
printf("%c is a vowel",AAA);
}
else
{
printf("%c is consonant",AAA);
}
getch();
}
