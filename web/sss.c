#include<stdio.h>

int mass(int gav){
    if (gav<0)
    {
        //exit("Not possible")
        /* code */
    }
    printf("%4d\n",gav);
   return gav*mass(gav+1);
    
}


int main(){
    mass(5);
}