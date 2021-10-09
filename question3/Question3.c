#include <stdio.h>
#include <stdlib.h>


int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
       for (int j = 0; j < c; j++)
       {
           scanf("%d",&arr[i][j]);
       }
       
    }

    printf("The element in 2-D aray are \n");
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
          printf("%d ",arr[i][j]);
        }
    }
printf("\n");
    printf("The Element in 1-D array are \n");
    int n=r*c;
    int store[n+1];
     int k=0;

for (int i = 0; i < r; i++)
    {
        for (int j = 0; j< c; j++)
        {
         store[k++]=arr[i][j];
        }
        
    }
    
for (int i = 0; i <n; i++)
{
    printf("%d ",store[i]);
}
    
    
    return 0;
}