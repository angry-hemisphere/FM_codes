/*#include<stdio.h>
void main()
{
    int integer;
    char string[100];
    char character;
    double decimal;
    printf("input an integer:");
    scanf("%d",&integer);
    printf("input a string:");
    fgets(string,100,stdin);
    printf("input a character:");
    scanf("%c",&character);
    printf("input a decimal:");
    scanf("%lf",&decimal);
    printf("the entered \ninteger:%d \nstring:%s \ncharacter:%c \ndecimal:%lf",integer,string,character,decimal);
}*/
#include<stdio.h>
void main()
{
    int integer;
    char string[100];
    char character;
    double decimal;
    printf("enter integer,string,character and decimal:");
    scanf("%d %s %c %lf",&integer,&string,&character,&decimal);
    printf("the entered \ninteger:%d \nstring:%s \ncharacter:%c \ndecimal:%lf",integer,string,character,decimal);
}
