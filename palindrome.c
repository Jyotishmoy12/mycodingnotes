#include<stdio.h>
int main(){
int n,r,ans=0,temp;
printf("enter a number:");
scanf("%d",&n);
temp=n;
while(n!=0){
    r=n%10;
    ans=(ans*10)+r;
    n=n/10;
   
}
n=temp;
if(n==ans){
    printf("palindrome number");
}
else{
    printf("not palindrome number");
}
return 0;
}
