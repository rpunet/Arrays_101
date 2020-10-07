bool validMountainArray(int* A, int ASize)
{
    int i;
    
    if (ASize < 3)
        return (false);
    i = 0;
    while (i < ASize - 1)
    {
        if (A[i] < A[i+1])
            i++;
        else
            break;
    }
    if ( i == 0 || i == ASize - 1)
        return (false);
    while (i < ASize - 1)
    {
        if (A[i] > A[i+1])
            i++;
        else
            break;
    }
    if (i == ASize - 1)
        return (true);
    return (false);
}
