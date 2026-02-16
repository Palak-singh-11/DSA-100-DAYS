#include <stdio.h>

int main() {
    int m, n;

    scanf("%d", &m);
    scanf("%d", &n);

    int nums1[m + n];
    int nums2[n];

    // Input first m elements of nums1
    for(int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    // Fill remaining positions with 0 (optional, just for clarity)
    for(int i = m; i < m + n; i++) {
        nums1[i] = 0;
    }

    // Input nums2 elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]()
