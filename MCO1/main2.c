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

#define REPEAT 10

int main()
{
     

    int n;
    printf("Enter the n of Array to sort: ");
    scanf("%d", &n);
    int A[n];
    int r;
    long long ctr[REPEAT];
    long seconds, nanoseconds;
    double sumCPU, sumCOUNT,elapsed[REPEAT];
    // Start measuring time
    struct timespec begin, end;

    // Bubble Sort
    sumCPU=0;
    sumCOUNT=0;
    printf("Starting Bubble Sort on %d integers\n", n);
    for(r=0; r < REPEAT; r++)
    {
        
        GenerateData(A, n); // Generate Random Data to sort

        clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &begin); // Begin CPU timer
        ctr[r] = Bubble(A, n); // sort array
        clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end); // End CPU timer
        seconds = end.tv_sec - begin.tv_sec;
        nanoseconds = end.tv_nsec - begin.tv_nsec;
        elapsed[r] = seconds + nanoseconds*1e-9;
        elapsed[r] = elapsed[r] * 1000; // multiply seconds by 1000 to get milliseconds
        sumCPU += elapsed[r];
        sumCOUNT += ctr[r];
        printf("Pass %d, Counter = %lld, CPU Time = %lf\n", r+1, ctr[r], elapsed[r]); 
    }   
    printf("\nAverage CPU Time (miliseconds): %lf\n", sumCPU/ REPEAT);
    printf("Average Counter: %lf\n\n", sumCOUNT/ REPEAT);

    // Insertion Sort
    sumCPU=0;
    sumCOUNT=0;
    printf("Starting Insertion Sort on %d integers\n", n);
    for(r=0; r < REPEAT; r++)
    {
        
        GenerateData(A, n); // Generate Random Data to sort

        clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &begin); // Begin CPU timer
        ctr[r] = Insertion(A, n); // sort array
        clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end); // End CPU timer
        seconds = end.tv_sec - begin.tv_sec;
        nanoseconds = end.tv_nsec - begin.tv_nsec;
        elapsed[r] = seconds + nanoseconds*1e-9;
        elapsed[r] = elapsed[r] * 1000; // multiply seconds by 1000 to get milliseconds
        sumCPU += elapsed[r];
        sumCOUNT += ctr[r];
        printf("Pass %d, Counter = %lld, CPU Time = %lf\n", r+1, ctr[r], elapsed[r]); 
    }   
    printf("\nAverage CPU Time (miliseconds): %lf\n", sumCPU/ REPEAT);
    printf("Average Counter: %lf\n\n", sumCOUNT/ REPEAT);

    
    // Merge Sort
    sumCPU=0;
    sumCOUNT=0;
    printf("Starting Merge Sort on %d integers\n", n);
    for(r=0; r < REPEAT; r++)
    {
        GenerateData(A, n); // Generate Random Data to sort
        clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &begin); // Begin CPU timer
        ctr[r] = 0;
        
        ctr[r] = mergeSort(A, 0, n-1); // sort array
        // printf("This is ctr in main: %lld\n", ctr[r]);
        clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end); // End CPU timer
        seconds = end.tv_sec - begin.tv_sec;
        nanoseconds = end.tv_nsec - begin.tv_nsec;
        elapsed[r] = seconds + nanoseconds*1e-9;
        elapsed[r] = elapsed[r] * 1000; // multiply seconds by 1000 to get milliseconds
        sumCPU += elapsed[r];
        sumCOUNT += ctr[r];
        printf("Pass %d, Counter = %lld, CPU Time = %lf\n", r+1, ctr[r], elapsed[r]); 
    }   
    printf("\nAverage CPU Time (miliseconds): %lf\n", sumCPU/ REPEAT);
    printf("Average Counter: %lf\n\n", sumCOUNT/ REPEAT);

    // Quick Sort
    sumCPU=0;
    sumCOUNT=0;
    printf("Starting Quick Sort on %d integers\n", n);
    for(r=0; r < REPEAT; r++)
    {
        GenerateData(A, n); // Generate Random Data to sort
        clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &begin); // Begin CPU timer
        ctr[r] = 0;
        
        ctr[r] = Quick(A, 0, n-1); // sort array
        clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end); // End CPU timer
        seconds = end.tv_sec - begin.tv_sec;
        nanoseconds = end.tv_nsec - begin.tv_nsec;
        elapsed[r] = seconds + nanoseconds*1e-9;
        elapsed[r] = elapsed[r] * 1000; // multiply seconds by 1000 to get milliseconds
        sumCPU += elapsed[r];
        sumCOUNT += ctr[r];
        printf("Pass %d, Counter = %lld, CPU Time = %lf\n", r+1, ctr[r], elapsed[r]); 
    }   
    printf("\nAverage CPU Time (miliseconds): %lf\n", sumCPU/ REPEAT);
    printf("Average Counter: %lf\n\n", sumCOUNT/ REPEAT);
    
    // Selection Sort
    sumCPU=0;
    sumCOUNT=0;
    printf("Starting Selection Sort on %d integers\n", n);
    for(r=0; r < REPEAT; r++)
    {
        
        GenerateData(A, n); // Generate Random Data to sort

        clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &begin); // Begin CPU timer
        ctr[r] = Selection(A, n); // sort array
        clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end); // End CPU timer
        seconds = end.tv_sec - begin.tv_sec;
        nanoseconds = end.tv_nsec - begin.tv_nsec;
        elapsed[r] = seconds + nanoseconds*1e-9;
        elapsed[r] = elapsed[r] * 1000; // multiply seconds by 1000 to get milliseconds
        sumCPU += elapsed[r];
        sumCOUNT += ctr[r];
        printf("Pass %d, Counter = %lld, CPU Time = %lf\n", r+1, ctr[r], elapsed[r]); 
    }   
    printf("\nAverage CPU Time (miliseconds): %lf\n", sumCPU/ REPEAT);
    printf("Average Counter: %lf\n\n", sumCOUNT/ REPEAT);

    // Shell Sort
    sumCPU=0;
    sumCOUNT=0;
    printf("Starting Shell Sort on %d integers\n", n);
    for(r=0; r < REPEAT; r++)
    {
        
        GenerateData(A, n); // Generate Random Data to sort

        clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &begin); // Begin CPU timer
        ctr[r] = Shell(A, n); // sort array
        clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end); // End CPU timer
        seconds = end.tv_sec - begin.tv_sec;
        nanoseconds = end.tv_nsec - begin.tv_nsec;
        elapsed[r] = seconds + nanoseconds*1e-9;
        elapsed[r] = elapsed[r] * 1000; // multiply seconds by 1000 to get milliseconds
        sumCPU += elapsed[r];
        sumCOUNT += ctr[r];
        printf("Pass %d, Counter = %lld, CPU Time = %lf\n", r+1, ctr[r], elapsed[r]); 
    }   
    printf("\nAverage CPU Time (miliseconds): %lf\n", sumCPU/ REPEAT);
    printf("Average Counter: %lf\n\n", sumCOUNT/ REPEAT);

    return 0;


}
