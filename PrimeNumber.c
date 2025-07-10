#include<stdio.h>
int main(){
  int num,isprime=1,i;
  printf("enter a number");
  scanf("%d",&num);
  if(num<=0){
    isprime=0;
  }
  else{
    for(i=2;i<=num/2;i++){
      if(num%i==0){
        isprime=0;
        break;
      }
    }
  }
  if(isprime==0){
    printf("not a prime number");
  }
  else{
    printf("prime number");
  }
        
  
  return 0;
}
