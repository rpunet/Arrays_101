/*
//------------------- comparing with a new sorted array----------------------

void    ft_swap(int *a, int *b)
{
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}

int heightChecker(int* h, int hsize)
{
    int i;
    int j;
    int hr[hsize];
    int count;
    
    i = 0;
    while (i < hsize)
    {
        hr[i] = h[i];
        i++;
    }
    i = 0;
    j = 0;
    while (i < hsize)
    {
        j = i + 1;
        while (j < hsize)
        {
            if (h[j] < h[i])
                ft_swap(&h[j], &h[i]);
            j++;
        }
        i++;
    }
    i = 0;
    count = 0;
    while (i < hsize)
    {
        if (hr[i] != h[i])
            count++;
        i++;
    }
    return (count);
}
*/

//--------------no sorting but creating a hashmap of size 100 since we know height[i] is contained----------
//check if the current student in heights array is actually the expected student that can be identified as hash array’s first non-zero element.

int heightChecker(int* h, int hsize)
{
    int hash[101];
    int i;
    int j;
    int count;
    
    i = 0;
    while (i < 101)
        hash[i++] = 0;
    i = 0;
    while (i < hsize)
        hash[h[i++]]++;
    i = 0;
    j = 0;
    count = 0;
    while (i < hsize)
    {
        while (hash[j] == 0)
            j++;
        if (j != h[i])
            count++;
        hash[j]--;
        i++;
        j = 0;
    } 
    return (count);
}
