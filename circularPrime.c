#include<stdio.h>
#include "Functions/util.h"
#include<math.h>
#include<stdbool.h>
int count(int x){
    if (x==0){
        return 0;
    }
    return 1+count(x/10);
}
int fac(int x){
    if (x<=1){
        return 1;
    }
    return x*fac(x-1);
}
bool circularPrime(int x){
    if (count(x)<=1)
    {
        printf("Circular Prime not possible\n");
    }
    int combo[fac(x)]; //int n=count-1;
    int div=pow(10,count(x)-1);
    combo[0]=x;
    for (int i = 1; i < fac(x); i++)
    {
        /* code */
        combo[i]=(x%div)+(x/div);
    }
    for (int  i = 1; i < fac(x); i++)
    {
        if (!isprime(combo[i]))
        {
            return false;
            break;
        }
    }  
    return true; 
}

int main(){
    printf("All circular prime between 1-1000:-\n");
    for (int  i = 0; i < 1001; i++)
    {
        /* code */if(circularPrime(1193)){
        printf("%d,",i);
        }
    }
    
    
}