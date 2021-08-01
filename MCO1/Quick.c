//Quick sort
//https://beginnersbook.com/2015/02/quicksort-program-in-c/

void quicksort(int number[25],int first,int last, int ctr){
   int i, j, pivot, temp;
   ctr++;

   if(first<last){
      ctr++;
      pivot=first;
      ctr++;
      i=first;
      ctr++;
      j=last;
      ctr++;

      while(i<j){
         ctr++;
         while(number[i]<=number[pivot]&&i<last)
            {
            ctr++;
            i++;
            ctr++;
            }
            ctr++;
         while(number[j]>number[pivot])
            {
            ctr++;
            j--;
            ctr++;
            }
            ctr++;
         if(i<j){
            ctr++;
            temp=number[i];
            ctr++;
            number[i]=number[j];
            ctr++;
            number[j]=temp;
            ctr++;
         }
         ctr++;
      }
      ctr++;

      temp=number[pivot];
      ctr++;
      number[pivot]=number[j];
      ctr++;
      number[j]=temp;
      ctr++;
      quicksort(number,first,j-1, ctr);
      ctr++;
      quicksort(number,j+1,last, ctr);
      ctr++;

   }
}

// int main(){
//    int i, count, number[25];

//    printf("How many elements are u going to enter?: ");
//    scanf("%d",&count);

//    printf("Enter %d elements: ", count);
//    for(i=0;i<count;i++)
//       scanf("%d",&number[i]);

//    quicksort(number,0,count-1);

//    printf("Order of Sorted elements: ");
//    for(i=0;i<count;i++)
//       printf(" %d",number[i]);

//    return 0;
// }
