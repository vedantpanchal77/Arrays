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

    int x;
    printf("Enter element to remove: ");
    scanf("%d", &x);

    int i, j;
    for (i = 0; i < n; i++) {
        if (m[i] == x) {
            for (j = i; j < n - 1; j++) {
                m[j] = m[j + 1];
            }
            n--; 
            i--; 
        }
    }

    printf("Array after removing %d:\n", x);
    for (i = 0; i < n; i++) {
        printf("%d ", m[i]);
    }

    return 0;
}
