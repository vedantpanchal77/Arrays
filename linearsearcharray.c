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
  
   int a,found=0;
    printf("enter element looking for: ");
   scanf("%d",&a);
   for (int i = 1; i <= n; i++)
   {
    if (m[i]==a)
    {
        printf("contains ");
        found=1;
        break;
    }
    
   }
   
  if (!found)
  {
     printf(" doesnt contains ");
  }
  


    return 0;
}