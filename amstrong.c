#include<stdio.h>
int main(){
int n,r,sum=0,temp;
printf("enter a number:");
scanf("%d",&n);
temp=n;
while(n>0){
    r=n%10;
    sum=sum+r*r*r;
    n=n/10;
}
n=temp;
if(n==sum){
    printf("amstrong number");
}
else{
    printf("not amstrong number");
}
 return 0;
}
