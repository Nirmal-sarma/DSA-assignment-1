#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void bubbleSort(long long int arr[],long long int n){
for (long long int i = 0; i <n-1; i++)//bubble sorting
    {
       for (long long int j = 0; j<n-i-1;j++)
       {
           if(arr[j]>arr[j+1])
           {
               long long int temp;
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
           }
       }
       
    }
    
    for (long long int i = 0; i < n; i++)
    {
       printf("%lld ",arr[i]);
    }
}

void swap(long long int *xp, long long int *yp)
{
    long long int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void selectionSort(long long int arr[], long long int n)
{
    long long int i, j, min_idx;
 
    
    for (i = 0; i < n-1; i++)
    {
        
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
 
        
           swap(&arr[min_idx], &arr[i]);    
    }

    for (long long int i = 0; i < n; i++)
    {
      printf("%lld ",arr[i]);
    }
    
}



 int main(){
    long long int n;
    scanf("%lld",&n);
    long long int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i]=i;
    }
    
clock_t start,end;
long int t;
start=clock();
selectionSort(arr,n);
end=clock();
t=start-end;
printf("\n");
printf("total time elapse for selection sort:%lf\n",(double)t/(double)CLOCKS_PER_SEC);
printf("\n");
clock_t start2,end2;

long int t2;
start2=clock();
bubbleSort(arr,n);
end2=clock();
t=start2-end2;
printf("\n");
printf("total time elapse for  bubblesort:%lf\n",(double)t2/(double)CLOCKS_PER_SEC);
printf("\n");

    return 0;
}



