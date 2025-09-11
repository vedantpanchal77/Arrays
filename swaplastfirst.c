#include <stdio.h>

int main() {
    int n;
   printf("enter number of elements: ");
   scanf("%d",&n);
   int m[n];
    for (int i = 1; i <= n; i++)
   {
    printf("enter element: ");
    scanf("%d",&m[i]);
    
   }
  
   int a[n],temp;
    for (int i = 1; i <= n; i++)
   {
    a[i]=m[i];
    
   }
   temp=a[1];
   a[1]=a[n];
   a[n]=temp;

 for (int i = 1; i <= n; i++)
   {
    printf("%d",a[i]);
    
   }
    return 0;
}