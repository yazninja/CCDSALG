//Quick sort
//https://beginnersbook.com/2015/02/quicksort-program-in-c/

static long long int Quick(int number[],int first,int last){
   long long int ctr = 0;
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;
      ctr+=4;

      while(i<j){
          ctr++;
         while(number[i]<=number[pivot]&&i<last)
            {
            ctr+=2;
            i++;
            }
            ctr++;
         while(number[j]>number[pivot])
            {
            ctr+=2;
            j--;
            }
            ctr++;
         if(i<j){

            temp=number[i];

            number[i]=number[j];

            number[j]=temp;
            ctr+=4;
         }
      ctr++;
      }


      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      ctr+=4;

      Quick(number,first,j-1);
      Quick(number,j+1,last);
    // printf("This is ctr: %lld\n", ctr);
   
   }
    ctr++;
   return ctr;
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
