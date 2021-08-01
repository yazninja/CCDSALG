#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "GenerateData.c"

#include "Bubble.c"
#include "Insertion.c"
#include "Merge.c"
#include "Quick.c"
#include "Selection.c"
#include "Shell.c"

#define SIZE 1024
#define REPEAT 10

void copyArray(int Source[], int Dest[])
{
    int i;
    for(i=0; i < SIZE; i++)
        Dest[i] = Source[i];
}

int main()
{
    clock_t start_t, end_t;
    int A[SIZE];
    int r;
    long int ctr=0;
    // Bubble Sort
    start_t = clock();
    printf("Starting Bubble Sort on %d integers, time = %ld\n", SIZE, start_t);
    for(r=0; r < REPEAT; r++)
    {
        GenerateData(A, SIZE);
        start_t = clock();
        ctr = Bubble(A, SIZE);
        end_t = clock();
        printf("Pass %d, Counter = %ld, MET = %ld\n", r+1, ctr, (end_t - start_t));
    }

    // Insertion Sort
    printf("\nStarting Insertion Sort on %d integers, time = %ld\n", SIZE, start_t);
    for(r=0; r < REPEAT; r++)
    {
        GenerateData(A, SIZE);
        start_t = clock();
        ctr = Insertion(A, SIZE);
        end_t = clock();
        printf("Pass %d, Counter = %ld, MET = %ld\n", r+1, ctr, (end_t - start_t));
    }

    // Merge Sort
    printf("\nStarting Merge Sort on %d integers, time = %ld\n", SIZE, start_t);
    for(r=0; r < REPEAT; r++)
    {
        ctr = 0;
        GenerateData(A, SIZE);
        start_t = clock();
        mergeSort(A, 0, SIZE-1, &ctr);
        end_t = clock();
        printf("Pass %d, Counter = %ld, MET = %ld\n", r+1, ctr, (end_t - start_t));
    }

    // Selection Sort
    printf("\nStarting Selection Sort on %d integers, time = %ld\n", SIZE, start_t);
    for(r=0; r < REPEAT; r++)
    {
        GenerateData(A, SIZE);
        start_t = clock();
        ctr = Selection(A, SIZE);
        end_t = clock();
        printf("Pass %d, Counter = %ld, MET = %ld\n", r+1, ctr, (end_t - start_t));
    }

    // Shell Sort
    printf("\nStarting Shell Sort on %d integers, time = %ld\n", SIZE, start_t);
    for(r=0; r < REPEAT; r++)
    {
        GenerateData(A, SIZE);
        start_t = clock();
        ctr = Shell(A, SIZE);
        end_t = clock();
        printf("Pass %d, Counter = %ld, MET = %ld\n", r+1, ctr, (end_t - start_t));
    }
    
        return 0;
}
