#include <stdio.h>
 
int main(){
    int loop,number;
    int prime=1;

    while(printf("Enter Number : ")&& scanf("%d",&number)){
      if(number<0)break;
      if(number==1||number==0){
        printf("%d Number is not prime number\n",number);
        continue;
        }

  for(loop = 2; loop < number; loop++){
    if((number % loop) == 0){
      prime=0;
      }
  }

  if(prime==1){
    printf("%d is prime number\n",number);
   for(int i=1;i<=15;i++){
      printf("%d * %d = %d\n",number,i,number*i);
    }
  }
  else if(prime==0)
  printf("%d is not prime number\n",number);
  prime = 1;     
    }
    return 0;
}