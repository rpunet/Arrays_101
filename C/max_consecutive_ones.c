int findMaxConsecutiveOnes(int* nums, int numsSize)
{
    int i;
    int count;
    int max;
    
    i = 0;
    count = 0;
    max = 0;
    while (i < numsSize)
    {
        if (nums[i] == 1)
        {
            count++;
            max = count > max ? count : max;
        }
        if (nums[i] == 0)
            count = 0;
        i++;
    }
    return (max);
}
