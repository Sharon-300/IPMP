#include <stdio.h>

int partition(int array[], int low, int high) 
{
  
  int pivot = array[high];//rightmost
  
  int i = (low - 1);// pointer for greater element

  for (int j = low; j < high; j++)// traverse each element of the array compare them with the pivot
   
  {
    if (array[j] <= pivot) 
	{  
      i++;

      int t = array[i];//swap
  	  array[i]= array[j];
  	  array[j]= t;
    }
  }

  // swap the pivot element with the greater element at i
  int t = array[i+1];
  array[i+1]= array[high];
  array[high]= t;
  
  return (i + 1);// return the partition point
}

void quickSort(int array[], int low, int high) 
{
	if (low < high) 
	{
	  int pi = partition(array, low, high);//pivot
    
      quickSort(array, low, pi - 1);//send left of pivot to function
      quickSort(array, pi + 1, high);//right
    }
}

main() 
{
	int n,i;
    printf("Number of elements of array:  ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter each integer: \n");
    for (i = 0; i <n; i++)
        scanf("%d",&arr[i]);
    quickSort(arr, 0, n - 1);
  
    printf("\nSorted array is\n");
    for (i = 0; i <n; i++)
        printf("%d ",arr[i]);
}
