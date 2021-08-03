/* C program for Merge Sort */
//https://www.geeksforgeeks.org/merge-sort/
 
// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]

static long long int merge(int arr[], int l, int m, int r)
{
    long long int ctr2 = 0;
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    /* create temp arrays */
    int L[n1], R[n2];

    ctr2+=2;
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
    {
        L[i] = arr[l + i];
        ctr2+=2;
    }
    ctr2++;
    for (j = 0; j < n2; j++)
        {
        R[j] = arr[m + 1 + j];
        ctr2+=2;
        }
    ctr2++;
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    ctr2+=3;
    while (i < n1 && j < n2) {
        ctr2++;
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
            ctr2++;
        }
        else {
            arr[k++] = R[j++];
            ctr2++;
        }
    }
    ctr2++;
 
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        arr[k++] = L[i++];
        ctr2+=2;
    }
    ctr2++;
 
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        arr[k++] = R[j++];
        ctr2+=2;
    }
    ctr2++;
    return ctr2;
}
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
 
/* l is for left index and r is right index of the
sub-array of arr to be sorted */
static long long int mergeSort(int arr[], int l, int r)
{
    long long int ctr = 0;
    if (l < r) {
        ctr++;
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;
        ctr++;
        // Sort first and second halves  
        ctr+= mergeSort(arr, l, m);
        ctr+= mergeSort(arr, m + 1, r);
        ctr+= merge(arr, l, m, r);
        ctr++;
    }
    ctr++;

    return ctr;
}


 
/* Driver code */
// int main()
// {
//     int arr[] = { 12, 11, 13, 5, 6, 7 };
//     int arr_size = sizeof(arr) / sizeof(arr[0]);
 
//     printf("Given array is \n");
//     printArray(arr, arr_size);
 
//     mergeSort(arr, 0, arr_size - 1);
 
//     printf("\nSorted array is \n");
//     printArray(arr, arr_size);
//     return 0;
// }
