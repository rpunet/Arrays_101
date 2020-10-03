int removeDuplicates(int* nums, int numsSize)
{
    int i;
    int j;
    
    if (numsSize == 0)
        return (0);
    i = 0;
    j = 0;
    while (i < numsSize)
    {
        if (nums[i] != nums[j])
            j++;
        nums[j] = nums[i];
        i++;
    }
    return (j + 1);
}
