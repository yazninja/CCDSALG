#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "GenerateData.c"
#include "cpu-time.c"
#include "Bubble.c"
#include "Insertion.c"
#include "Merge.c"
#include "Quick.c"
#include "Selection.c"
#include "Shell.c"

#define REPEAT 10

int main()
{
    int n;
    printf("Enter the n of Array to sort: ");
    scanf("%d", &n);
    clock_t start_t, end_t;
    int A[n];
    int r, avg, sum;
    long int ctr[REPEAT], met[REPEAT];

    // Bubble Sort
    start_t = clock();
    printf("Starting Bubble Sort on %d integers, time = %ld\n", n, start_t);
    for(r=0; r < REPEAT; r++)
    {
        GenerateData(A, n);
        start_t = clock();
        ctr[r] = Bubble(A, n);
        end_t = clock();
        met[r] = (end_t - start_t);
        printf("Pass %d, Counter = %ld, MET = %ld\n", r+1, ctr[r], met[r]);
    }
    sum=0;
    for(r=0; r < REPEAT; r++)
        sum+=met[r];
    printf("Average MET: %lf\n", (double) sum/REPEAT);
    sum=0;
    for(r=0; r < REPEAT; r++)
        sum+=ctr[r];
    printf("Average Counter: %lf\n", (double) sum/REPEAT);




    // Insertion Sort
    printf("\nStarting Insertion Sort on %d integers, time = %ld\n", n, start_t);
    for(r=0; r < REPEAT; r++)
    {
        GenerateData(A, n);
        start_t = clock();
        ctr[r] = Insertion(A, n);
        end_t = clock();
        met[r] = (end_t - start_t);
        printf("Pass %d, Counter = %ld, MET = %ld\n", r+1, ctr[r], met[r]);
    }
    sum=0;
    for(r=0; r < REPEAT; r++)
        sum+=met[r];
    printf("Average MET: %lf\n", (double) sum/REPEAT);
    sum=0;
    for(r=0; r < REPEAT; r++)
        sum+=ctr[r];
    printf("Average Counter: %lf\n", (double) sum/REPEAT);


    // // Merge Sort
    // printf("\nStarting Merge Sort on %d integers, time = %ld\n", n, start_t);
    // for(r=0; r < REPEAT; r++)
    // {
    //     ctr = 0;
    //     GenerateData(A, n);
    //     start_t = clock();
    //     ctr += mergeSort(A, 0, n-1, &ctr);
    //     end_t = clock();
    //     printf("Pass %d, Counter = %ld, MET = %ld\n", r+1, ctr, (end_t - start_t));
    // }

    // // Quick Sort
    // printf("\nStarting Quick Sort on %d integers, time = %ld\n", n, start_t);
    // for(r=0; r < REPEAT; r++)
    // {
    //     GenerateData(A, n);
    //     start_t = clock();
    //     ctr = Quick(A, n);
    //     end_t = clock();
    //     printf("Pass %d, Counter = %ld, MET = %ld\n", r+1, ctr, (end_t - start_t));
    // }

    // Selection Sort
    printf("\nStarting Selection Sort on %d integers, time = %ld\n", n, start_t);
    for(r=0; r < REPEAT; r++)
    {
        GenerateData(A, n);
        start_t = clock();
        ctr[r] = Selection(A, n);
        end_t = clock();
        met[r] = (end_t - start_t);
        printf("Pass %d, Counter = %ld, MET = %ld\n", r+1, ctr[r], met[r]);
    }
    sum=0;
    for(r=0; r < REPEAT; r++)
        sum+=met[r];
    printf("Average MET: %lf\n", (double) sum/REPEAT);
    sum=0;
    for(r=0; r < REPEAT; r++)
        sum+=ctr[r];
    printf("Average Counter: %lf\n", (double) sum/REPEAT);

    // Shell Sort
    printf("\nStarting Shell Sort on %d integers, time = %ld\n", n, start_t);
    for(r=0; r < REPEAT; r++)
    {
        GenerateData(A, n);
        start_t = clock();
        ctr[r] = Shell(A, n);
        end_t = clock();
        met[r] = (end_t - start_t);
        printf("Pass %d, Counter = %ld, MET = %ld\n", r+1, ctr[r], met[r]);
    }
    sum=0;
    for(r=0; r < REPEAT; r++)
        sum+=met[r];
    printf("Average MET: %lf\n", (double) sum/REPEAT);
    sum=0;
    for(r=0; r < REPEAT; r++)
        sum+=ctr[r];
    printf("Average Counter: %lf\n", (double) sum/REPEAT);
    
        return 0;
}
