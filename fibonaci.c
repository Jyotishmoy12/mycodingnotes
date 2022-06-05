#include<stdio.h>
int main(){

int N,i, a=-1, b=1, c;
printf("enter a number:");
scanf("%d",&N);
for(i=0;i<N;i++){
    c=a+b;
    printf("%d", c);
    a=b;
    b=c;
}
    return 0;
}
