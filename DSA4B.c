#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];

    // Input array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int val;
    scanf("%d", &val);

    int k = 0;  // Count of elements not equal to val

    for(int i = 0; i < n; i++) {
        if(nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }

    // Print first k elements
    for(int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }

    // Return k (for understanding purpose we print it)
    printf("\n%d", k);

    return 0;
}
