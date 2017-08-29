#include<stdio.h>
int main()
{
char c;
printf("enter the letter");
scanf("%c", &c);
if((c>='a' && c<='z')||(c>='A' && c<='Z'))
printf("entered letter is an alphabet",c);
else
printf("entered letter is not an alphabet",c);
return 0;
}

