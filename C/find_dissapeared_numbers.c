/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize)
{   
    int i;
    int j;
    int count;
    int *ret;
    
    i = 0;
    count = 0;
    while (i < numsSize)
    {
        if (nums[abs(nums[i]) - 1] > 0)
        {
            nums[abs(nums[i]) - 1] *= -1;
            count++;
        }
        i++;
    }
    i = 0;
    j = 0;
    ret = malloc(sizeof(int) * (numsSize - count));
    while (i < numsSize)
    {
        if (nums[i] > 0)
            ret[j++] = i + 1;            
        i++;
    }
    *returnSize = j;
    return (ret); 
}
