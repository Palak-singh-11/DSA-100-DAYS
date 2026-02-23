#include <stdio.h>

int intersect(int nums1[], int n1, int nums2[], int n2, int result[]) {
    int freq[1001] = {0};  // Assuming elements are in range 0–1000
    int k = 0;

    // Count frequency of nums1
    for (int i = 0; i < n1; i++) {
        freq[nums1[i]]++;
    }

    // Find intersection
    for (int i = 0; i < n2; i++) {
        if (freq[nums2[i]] > 0) {
            result[k++] = nums2[i];
            freq[nums2[i]]--;
        }
    }

    return k; // size of intersection array
}

int main() {
    int nums1[] = {1, 2, 2, 1};
    int nums2[] = {2, 2};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    int n2 = sizeof(nums2) / sizeof(nums2[0]);

    int result[100];
    int size = intersect(nums1, n1, nums2, n2, result);

    printf("Intersection: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
