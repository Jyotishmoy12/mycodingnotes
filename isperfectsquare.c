#include<stdio.h>
int isperfectsquare(int x){
    int i;
    scanf("%d",&x);
    for(i=0;i<=x;i++){
        if(x==i*i){
            return 1;
        }
    }
    return 0;
}
int main(){
int a;
printf("enter the element:");
printf("%d",isperfectsquare(a));
return 0;
}
