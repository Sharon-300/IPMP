#include <stdio.h>
#include <stdlib.h>
void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;//left array size
	int n2 = r - m;//right array size

	int L[n1], R[n2];//declaration of left and right array
	
	//Copy elements into L and R
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	i = 0;
	j = 0;
	k = l;
	
	//Compare elements and update in arr
	while (i < n1 && j < n2) 
	{
		if (L[i] <= R[j]) 
		{
			arr[k] = L[i];
			i++;
		}
		else 
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	//Copy the remaining elements of L[]
	while (i < n1) 
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	//Copy the remaining elements of R[]
	while (j < n2) 
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int l, int r)
{
	if (l < r)
	{
		int m = (l + r)/ 2;

		// Sort first and second halves
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}

int main()
{
	int n,i;
    printf("Number of elements of array:  ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter each integer: \n");
    for (i = 0; i <n; i++)
        scanf("%d",&arr[i]);
	mergeSort(arr, 0, n-1);

	printf("\nSorted array is\n");
    for (i = 0; i <n; i++)
        printf("%d ",arr[i]);
	return 0;
}

