#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];

    // Input elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int k = 0;  // Position for next non-zero element

    // Move non-zero elements forward
    for(int i = 0; i < n; i++) {
        if(nums[i] != 0) {
            nums[k] = nums[i];
            k++;
        }
    }

    // Fill remaining positions with 0
    while(k < n) {
        nums[k] = 0;
        k++;
    }

    // Print updated array
    for(int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
