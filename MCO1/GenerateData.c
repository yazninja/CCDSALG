void GenerateData(int A[], int n)
{
    int i;
    for (i=0; i < n; i++)
    {
        A[i] = rand() % 1000000; // random number between 0 - 999,999
    }
}