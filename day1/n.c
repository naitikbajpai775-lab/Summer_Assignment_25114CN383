#include<stdio.h>
int main(){
    int p,r,t;
    printf("enter the priciple:");
    scanf("%d",&p);
    printf("enter the rate:");
    scanf("%d",&r);
    printf("enter the time:");
    scanf("%d",&t);
     int SI = (p*r*t)/100;
     printf("The simple interest for given values is:%d", SI );






return 0;
}