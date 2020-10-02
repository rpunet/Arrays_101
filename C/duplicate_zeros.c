void duplicateZeros(int* arr, int arrSize)
{
    int zeros;
    int i;
    int j;
    
    zeros = 0;
    i = 0;
    while (i < arrSize - 1 - zeros)
    {
        if (arr[i] == 0)
            zeros += 1;
        i++;
    }
    j = arrSize - 1;
    if (arrSize - zeros - i == 1)
        arr[j--] = arr[i];
    i--;    
    while (i >= 0)
    {
        arr[j] = arr[i];
        j--;
        if (arr[i] == 0)
            arr[j--] = arr[i];
        i--;
    }
    return (arr);   
}
