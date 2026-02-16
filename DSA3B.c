#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n - 1];

    // Input n-1 elements
    for(int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate expected sum
    int expectedSum = n * (n + 1) / 2;

    // Calculate actual sum
    int actualSum = 0;
    for(int i = 0; i < n - 1; i++) {
        actualSum += arr[i];
    }

    // Missing number
    int missing = expectedSum - actualSum;

    printf("%d", missing);

    return 0;
}
