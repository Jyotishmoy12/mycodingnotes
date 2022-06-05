#include<stdio.h>
int main(){
int i,l,u,x;
printf("enter two numbers:");
scanf("%d",&l);
scanf("%d",&u);
for(x=l; x<u; x++){
    for(i=2; i<x;i++)
        if(x%i==0)
        break;
    if(i==x)
    printf("%d",x);
}



    return 0;
}
