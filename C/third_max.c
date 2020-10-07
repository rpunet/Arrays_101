int thirdMax(int* nums, int numsSize)
{
    int i;
    int max, max2, max3;
    int flag3;
    
    flag3 = 0;    
    if (numsSize == 0)
        return (-INFINITY);
    i = 0;
    max = nums[i];
    while (i < numsSize)
    {
        max = max > nums[i] ? max : nums[i];
        i++;
    }
    if (numsSize < 3)
        return (max);
    i = 0;
    max2 = INT_MIN;
    while (i < numsSize)
    {
        if (nums[i] != max)
            max2 = max2 > nums[i] ? max2 : nums[i];
        i++;
    }
    i = 0;
    max3 = INT_MIN;
    while (i < numsSize)
    {
        if (nums[i] != max && nums[i] != max2)
        {
            max3 = max3 > nums[i] ? max3 : nums[i];
            flag3 = 3;
        }
        i++;
    }
    if (flag3 == 3)
        return (max3);
    return (max);
}
