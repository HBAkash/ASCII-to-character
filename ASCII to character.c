//write a program that will read ASCII value and display equivalent character
#include<stdio.h>
#include<conio.h>
int main()
{
    int digit;

    printf("Enter a ASCII digit: ");
    scanf("%d",&digit);

    printf("The equivalent character of the ASCII code is %d = %c", digit,digit);
    getch();
}
