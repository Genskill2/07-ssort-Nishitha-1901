#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

void swap_max(int arr[],int l, int n)
{
  int max=arr[n];int temp=n;
  for (int i=n+1 ; i <= l ;i++)
  {
    if (arr[i]>max)
    {
      temp=i;
      max=arr[i];
      
    }
  }
  arr[temp]=arr[n];
  arr[n]=max;
}

void ssort (int arr[], int l)
{
  for (int i=0;i<l ;i++)
  {
    swap_max(arr ,l ,i);
  }
}
