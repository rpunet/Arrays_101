
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* A, int ASize, int* returnSize)
{
    int *ret;
    int i;
    int j;
    int k;
    
    ret = malloc(sizeof(int) * ASize);
    *returnSize = ASize;
    i = 0;
    while (i < ASize && A[i] < 0)
        i++;
    j = i - 1;
    k = 0;
    while (i < ASize && j >= 0)
    {
        if (A[i] * A[i] < A[j] * A[j])
            ret[k++] = A[i] * A[i++];
        else
            ret[k++] = A[j] * A[j--];
    }
    while (i < ASize)
        ret[k++] = A[i] * A[i++];
    while (j >= 0)
        ret[k++] = A[j] * A[j--];
    return (ret);
}
