/*
int removeElement(int* nums, int numsSize, int val)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (i < numsSize)
    {
        if (nums[i] != val)
        {
            nums[j] = nums[i];
            j++;
        }
        i++;
    }
    return (j);
}
*/


int removeElement(int* nums, int numsSize, int val)
{
    int end;
    int i;
    
    end = numsSize;
    i = 0;
    while (i < end)
    {
        if (nums[i] == val)
        {
            nums[i] = nums[end - 1];
            end--;
        }
        else
            i++;
    }
    return (end);
}
