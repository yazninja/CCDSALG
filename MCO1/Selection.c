// C program for implementation of selection sort
//https://www.geeksforgeeks.org/selection-sort/

void swap(int *xp, int *yp, long long int *ctr)
{
    (*ctr)++;
    int temp = *xp;
    (*ctr)++;
    *xp = *yp;
    (*ctr)++;
    *yp = temp;
    (*ctr)++;
}
 
long long int Selection(int arr[], int n)
{
    int i, j, min_idx;
    long long int ctr =0;
    ctr++;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        ctr++;
        // Find the minimum element in unsorted array
        min_idx = i;
        ctr++;
        for (j = i+1; j < n; j++)
        {
          ctr++;
          if (arr[j] < arr[min_idx])
          {
            ctr++;
            min_idx = j;
            ctr++;
          }
            ctr++;
        }
        ctr++;
 
        // Swap the found minimum element with the first element

        swap(&arr[min_idx], &arr[i], &ctr);
    }

    return ctr;
}
 

// // Driver program to test above functions
// int main()
// {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     selectionSort(arr, n);
//     printf("Sorted array: \n");
//     printArray(arr, n);
//     return 0;
// }
