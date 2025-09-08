#include <stdio.h>

int main() {
    int n;
   printf("enter number of elements: ");
   scanf("%d",&n);
   int m[n];
    for (int i = 0; i < n; i++)
   {
    printf("enter element: ");
    scanf("%d",&m[i]);
    
   }
  int temp;
   for (int i = 0; i < n-1; i++)
   {
    for (int j = 0; j < n-i-1; j++)
    {
        if (m[j]>m[j+1])
        {
           temp=m[j];
           m[j]=m[j+1];
           m[j+1]=temp;
        }
        
    }
    
   }
   

 for (int i = 0; i < n; i++)
   {
    printf("%d",m[i]);
    
   }
    return 0;
}