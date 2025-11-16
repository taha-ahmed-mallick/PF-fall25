// Problem Link: https://leetcode.com/problems/merge-sorted-array/

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    for (int i = m; i < nums1Size; i++)
        nums1[i] = nums2[i-m];
    for (int i = 0; i < nums1Size; i++)
        for (int j = 0; j < nums1Size-i-1; j++)
            if (nums1[j] > nums1[j+1]) {
                nums1[j] += nums1[j+1];
                nums1[j+1] = nums1[j] - nums1[j+1];
                nums1[j] -= nums1[j+1];
            }
}