// C Program for counting sort
// https://www.geeksforgeeks.org/bubble-sort/

long int Bubble(int array[], int n) // n = size of aray 
{
  int ctr=0, c, d, swap;
  for (c = 0 ; c < n - 1; c++)
  {
    ctr++;
    for (d = 0 ; d < n - c - 1; d++)
    {
      ctr++;
      if (array[d] > array[d+1]) /* For decreasing order use '<' instead of '>' */
      {
        ctr++;
        swap       = array[d];
        ctr++;
        array[d]   = array[d+1];
        ctr++;
        array[d+1] = swap;
        ctr++;
      }
      ctr++;
    }
    ctr++;
  }
  ctr++;

  return ctr;
}
