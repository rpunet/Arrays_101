/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* replaceElements(int* arr, int arrSize, int* returnSize)
{
    int i;
    int max;
    int max_current;
    
    i = arrSize - 1;
    max = arr[i];
    i--;
    
    while (i >= 0)
    {
        
        max_current = arr[i] > max ? arr[i] : max;
        arr[i] = max;
        max = max_current;
        i--;
    }
    arr[arrSize - 1] = -1;
    *returnSize = arrSize;
    return (arr);
}
