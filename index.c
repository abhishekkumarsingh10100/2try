#include <stdio.h>

int main() {
    int n, i, key, found = 0;

    // Accept number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Accept elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Accept number to search
    printf("Enter number to search: ");
    scanf("%d", &key);

    // Linear search
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Number found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    // If not found
    if(found == 0) {
        printf("Number not found in the array\n");
    }

    return 0;
}