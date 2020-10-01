int findNumbers(int* nums, int numsSize)
{
    int digits;
    int count;
    int i;
    
    digits = 1;
    count = 0;
    i = 0;
    while (i < numsSize)
    {
        while (nums[i] >= 10)
        {
            nums[i] /= 10;
            digits++;
        }
        if (digits % 2 == 0)
            count++;
        digits = 1;
        i++;
    }
    return (count);
}
