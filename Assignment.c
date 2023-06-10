#include<stdio.h>
int main()
{
    //1. Write a C Program to Print whether a number is  Divisible by 3 and 5.
    /*int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    if(a%3==0 && a%5==0){
        printf("Yes\n ",a);
    }
    else{
       printf("No\n",a);
    }*/

    //2.  check the leap year.
    /*int year;
    printf("Enter a leap:\n");
    scanf("%d",&year);
    if ((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0)))
    {
        printf("%d is a leap year",year\n);
    }
    else{
        printf("%d is not a leap year",year);
    }*/

    //3. Find out if a letter is a vowel or not.
    char c;
    printf("Enter an alphabet:\n");
    scanf("%c",&c);
    if (c == 'A'|| c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        printf("Vowel\n");
    }
    else{
        printf("Consonant");
    }
    return 0;
}
