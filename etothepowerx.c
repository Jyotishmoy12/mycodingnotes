#include<stdio.h>
int main(){
float power;
printf("Enter the power of e\n:");
scanf("%d",&power);	
int acc=30;
float ans=1;
float temp=1;
int i;
for(i=1;i<acc;i++){
temp=(temp*power)/i;
ans=ans+temp;
}	
printf("%f",ans);	
return 0;
}
