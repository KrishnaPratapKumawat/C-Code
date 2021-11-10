#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguess=1;
    srand(time(0));
    number = rand()%100+1;// Genrate A Random number between 1 and 100
   // printf("The Number is %d",number);
    //keep running the loop uitl number is gussed
    do{
         printf("Guess the number between 1 to  100\n");
         scanf("%d",&guess);
         if(guess>number)
             {         printf("Lower Number please !\n");
             }
             else if(guess<number)
             {
                  printf("Higher Number please !\n");
             }
             else
             {
                 printf("You guessed it in %d attempts\n",nguess);
             }
        nguess++;
    }while(guess!=number);
    
    return 0;
}