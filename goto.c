#include<stdio.h>

int main(){

    int x = 1;

    start:
    x++;

    if (x<10){
        printf("The value of x inside the goto statement is %d \n \n",x);printf("The value of x inside the goto statement is %d \n \n",x);
        goto start;
        printf("The value of x inside the goto statement is %d \n \n",x);
    }

    printf("After goto statement is %d \n",x);

    return -1;
}