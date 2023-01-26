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
