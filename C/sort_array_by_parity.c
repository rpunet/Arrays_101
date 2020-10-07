/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//-_--------IN PLACE solution--------------------

void    ft_swap(int *a, int *b)
{
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}

int* sortArrayByParity(int* A, int ASize, int* returnSize)
{
    int i;
    int end;
    
    i = 0;
    end = ASize - 1;
    while (i < ASize && i < end)
    {
        if (A[i] & 1 == 1)
        {
            ft_swap(&A[end], &A[i]);
            end--;
        }
        else
            i++; 
    }
    *returnSize = ASize;
    return (A);
    
}
      
/*
int* sortArrayByParity(int* A, int ASize, int* returnSize)
{
    int i;
    int j;
    int x;
    int *ret;
    
    ret = malloc(sizeof(int) * ASize);
    
    *returnSize = ASize;
    x = ASize - 1;
    i = 0;
    j = 0;
    while (i < ASize)
    {
        if ((A[i] % 2) == 0)
            ret[j++] = A[i];
        else 
            ret[x--] = A[i];
        i++;        
    }
    return (ret);
}
*/
