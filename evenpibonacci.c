#include<stdio.h>
int fib(long n){
  if(n<2)
  return 0;

long ef1=0,ef2=2;
long sum=ef1+ef2;

while(ef2<n){
	long ef3=4*(ef1+ef2);
	if(ef3>n)
	break;
	ef1=ef2;
	ef2=ef3;
	sum+=ef2;
}

return  sum;
}

int main(){
printf("\n sum= %l \n",fib(4000000));}
