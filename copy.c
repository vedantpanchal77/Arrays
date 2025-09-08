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
  
   int a[n];
    
   for (int i = 0; i < n; i++)
   {
       a[i]=m[i];
    }
    for (int i = 0; i < n; i++)
    {
       printf("%d: ",a[i]);
    }
    
   
    
    
   }
    
   
  
  


