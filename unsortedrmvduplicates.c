#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int m[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &m[i]);
    }

    int a[n];  
    int j = 0; 

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int k = 0; k < i; k++) {  //Check only before current element
            if (m[i] == m[k]) {
                isDuplicate = 1;
                break;
            }
        }
        if (isDuplicate == 0) {
            a[j] = m[i];
            j++;
        }
    }

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < j; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
