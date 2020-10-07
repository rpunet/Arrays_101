void moveZeroes(int* nums, int numsSize)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (i < numsSize)
    {
        if (nums[i] != 0)
            nums[j++] = nums[i];
        i++;
    }
    while (j < numsSize)
        nums[j++] = 0;     
}
