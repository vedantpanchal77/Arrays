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


    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (m[j] < m[minIndex]) {
                minIndex = j;
            }
        }

      
        if (minIndex != i) {
            int temp = m[i];
            m[i] = m[minIndex];
            m[minIndex] = temp;
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", m[i]);
    }

    return 0;
}
