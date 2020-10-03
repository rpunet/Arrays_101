void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
    int i;
    int j;
    int len;
    
    i = m - 1;
    j = n - 1;
    len = nums1Size - 1;
    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
            nums1[len--] = nums1[i--];
        else
            nums1[len--] = nums2[j--];
    }
    while (i >= 0)
        nums1[len--] = nums1[i--];
    while (j >= 0)
        nums1[len--] = nums2[j--];
}
