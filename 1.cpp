#include <conio.h>
#include <stdio.h>
 
int a = 0; // Bien Global a
 
void Display();
 
int main()
{
    Display();
    printf("\na = %d", a);
    getch();
}
void Display()
{
    for(a = 0; a < 3; a++)
        printf("\na = %d", a);
}