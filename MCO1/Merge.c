/* C program for Merge Sort */
//https://www.geeksforgeeks.org/merge-sort/
 
// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r, int *ctr)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    (*ctr)++;
    (*ctr)++;
    (*ctr)++;
    /* create temp arrays */
    int L[n1], R[n2];
    (*ctr)++;
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        {
        (*ctr)++;
        L[i] = arr[l + i];
        (*ctr)++;
        }
    (*ctr)++;
    for (j = 0; j < n2; j++)
        {
        (*ctr)++;
        R[j] = arr[m + 1 + j];
        (*ctr)++;
        }
    (*ctr)++;
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    (*ctr)++;
    (*ctr)++;
    (*ctr)++;
    while (i < n1 && j < n2) {
        (*ctr)++;
        if (L[i] <= R[j]) {
            (*ctr)++;
            arr[k] = L[i];
            (*ctr)++;
            i++;
            (*ctr)++;
        }
        else {
            (*ctr)++;
            arr[k] = R[j];
            (*ctr)++;
            j++;
            (*ctr)++;
        }
        k++;
        (*ctr)++;
    }
    (*ctr)++;
 
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        (*ctr)++;
        arr[k] = L[i];
        (*ctr)++;
        i++;
        (*ctr)++;
        k++;
        (*ctr)++;
    }
    (*ctr)++;
 
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        (*ctr)++;
        arr[k] = R[j];
        (*ctr)++;
        j++;
        (*ctr)++;
        k++;
        (*ctr)++;
    }
    (*ctr)++;
}
 
/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r, int * ctr)
{

    if (l < r) {
        (*ctr)++;
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;
        (*ctr)++;
        // Sort first and second halves
        mergeSort(arr, l, m, &ctr);
        (*ctr)++;
        mergeSort(arr, m + 1, r, &ctr);
        (*ctr)++;
 
        merge(arr, l, m, r, &ctr);
        (*ctr)++;
    }   
    (*ctr)++;
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
