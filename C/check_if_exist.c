bool checkIfExist(int* arr, int arrSize)
{
    int i,j = 0;
    while (i < arrSize)
    {
        j = i + 1;
        while (j < arrSize)
        {
            if (arr[j] == arr[i] * 2 || (arr[i] % 2 == 0 && arr[j] == arr[i] / 2))
                return (true);
            j++;
        }
        i++;
    }
    return (false);
}

/*
//_--------------------ONE PASS hash table solution------------------_
bool checkIfExist(int* arr, int arrSize)
{
    int hash[2001];
    int i;
    
    i = 0;
    while (i < 2001)
        hash[i++] = 0;
    i = 0;
    while (i < arrSize)
    {
        if ((arr[i] * 2 >= -1000 && arr[i] * 2 <= 1000 && hash[(arr[i]) * 2 + 1000]) || (arr[i] % 2 == 0 && hash[arr[i] / 2 + 1000]))
            return (true);
        hash[arr[i] + 1000] = 1;
        i++;
    }
    return (false);
}
*/
