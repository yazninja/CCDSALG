// Shell Sort in c
// https://www.educba.com/shell-sort-c/
int Shell(int A[], int n) 
{
    int gap, i, ctr=0;
    for (gap = n / 2; gap > 0; gap /= 2) 
    {
        ctr++;
        for ( i = gap; i < n; i += 1) 
        {
            ctr++;
            int temp = A[i];
            ctr++;
            int j;
            for (j = i; j >= gap && A[j - gap] > temp; j -= gap) 
            {
                ctr++;
                A[j] = A[j - gap];
                ctr++;
            }
            A[j] = temp;
            ctr++;
        }
        ctr++;
    }
    ctr++;
}