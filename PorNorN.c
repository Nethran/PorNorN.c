#include <stdio.h>
#include <conio.h>
void main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    if(number > 0)
    {
        printf("POSITIVE NO");
    }
    else if(number < 0)
    {
        printf("NEGATIVE NO");
    }
    else
    {
        printf("ZERO NO");
    }

    getch();
}
