#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number;
    srand(time(0));
    number = rand()%100+1;// Genrate A Random number between 1 and 100
    printf("The Number is %d",number);
    //keep running the loop uitl number is gussed
    return 0;
}