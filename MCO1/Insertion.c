// C program for insertion sort
//https://www.geeksforgeeks.org/insertion-sort/
 
/* Function to sort an array using insertion sort*/
long long int Insertion(int arr[], int n)
{
    long long int ctr = 0;
    int i, key, j;
    ctr++;

    for (i = 1; i < n; i++) {
        ctr++;
        key = arr[i];
        ctr++;
        j = i - 1;
        ctr++;
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            ctr++;
            arr[j + 1] = arr[j];
            ctr++;
            j = j - 1;
            ctr++;
        }
        ctr++;
        arr[j + 1] = key;
        ctr++;
    }
    return ctr;
}
 

