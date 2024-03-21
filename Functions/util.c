#include<stdio.h>
#include<stdbool.h>
#include "util.h"
/*Input Array Only Interger*/
int InputArray(int arr[]){
    printf("Enter Interger Number One by One:-\n");
    for(int  i=0;i<=(sizeof(arr)/sizeof(arr[0]));i++){
        printf("Enter %d element\n",i);
        scanf("%d",&arr[i]);
    }
}
/*Print Array*/
void PrintArr(int arr[]){
    for(long i=0;i<=(sizeof(arr)/sizeof(arr[0]));i++){
        printf("%d,",arr[i]);
    }
}

/*Find Prime Number */
int isprime(int x)
{
    if (x <= 1)
    {
        return (x>1);
    }
    if (x % 2 == 0 || x % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i < x; i += 6)
    {
        if (x % i == 0 || x%(i+2)==0)
        {
            return false;
        }
        
    }
    return true;
}
/*Rever a interger*/

int rev(int num){
    int reverse=0;
   if(num){
      reverse=reverse*10+(num%10);
      rev(num/10);
   }
   else
      return reverse;
}