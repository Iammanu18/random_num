
#include<stdio.h>
#include<stdlib.h>//to generate the random number
#include<time.h>//for time function (to remove warning)


int main(){
    int number , guess , nguesses=1;
    srand(time(0));// for initialization
    number = rand()%100 + 1;//generate random number between 1 to 100
    //printf("The number is %d\n", number);
    //keep running the loop untill the number is guessed
    
    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower number please!\n");
        }
        else if(guess<number){
            printf("Higher number please!\n");
        }
        else{
            printf("You guessed it in %d attempts\n", nguesses);
        }
        nguesses++;
   
    }while(guess!=number);
    return 0;
}
