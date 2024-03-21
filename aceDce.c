#include<stdio.h>
void printArr(int arr[],int c){
    
    for(long i=0;i<=c;i++){
        printf("%d,",arr[i]);
    }
}
int fillarray(int arr[],int c){
    printf("Enter Interger Number One by One:-\n");
    
   
    for(long i=0;i<=c;i++){
        printf("Enter %d element\n",i);
        scanf("%d",&arr[i]);
    }
}

int ace(int arr[],int size){
 
    for (int j = 0; j < size; j++)
    {
        for (int i = 0; i < size-j; i++)
        {
            if (arr[i]>arr[i+1])
        {
            int t=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=t;
        }
        }
    
    }
}
int dce(int arr[],int count){ 
    for (int j = 0; j < count; j++)
    {
       for (int  i = 0; i < count; i++)
       {
        if (arr[i]<arr[i+1])
        {
           int t=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=t;
        }
       }   
    }
}
int main(){
    int n=0;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int arr[n]={};
    int half=n/2;
    fillarray(arr,n);
    ace(arr,half);
    dce(arr+half,n-half);
    printArr(arr,n);

}