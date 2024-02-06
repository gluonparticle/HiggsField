#include <stdio.h>
int sum(int *a) ;
int factorial(int);
int GCD(int,int);

int sum(int *a){
    return *a+=200;
}


int factorial(int a){
    int i,factorial=1;
    for (i=1;i<=a;i++)
    factorial*=i;
    return factorial;
}

int GCD(int a,int b){
    if(a%b==0)
    return b;

    else
    return GCD(b,a%b);
}














void main(){
    int a=50,b=20,x;
    x=GCD(a,b);
    printf("GCD IS %d \n",x);
    printf("GCD IS %d",&x);

}