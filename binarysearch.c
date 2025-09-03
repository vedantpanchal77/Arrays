#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements (sorted): ");
    scanf("%d", &n);

    int m[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &m[i]);
    }

    int a;
    printf("Enter element to search: ");
    scanf("%d", &a);

    int low = 0, high = n - 1;
    int found = 0;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (m[mid] == a) {
            printf("Element %d found at index %d\n", a, mid);
            found = 1;
            break;
        } else if (m[mid] < a) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", a);
    }

    return 0;
}
