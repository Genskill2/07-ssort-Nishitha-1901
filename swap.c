#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

void swap_max(int arr[],int l, int n)
{
  int max=arr[n];int temp=0;
  for (int i=n+1 ; i <= l ;i++)
  {
    if (arr[i]>max)
    {
      temp=max;
      max=arr[i];
      arr[i]=temp;
    }
  }
}

void ssort (int arr[], int l)
{
  for (int i=0;i<l ;i++)
  {
    swap_max(arr ,l ,i);
  }
}
