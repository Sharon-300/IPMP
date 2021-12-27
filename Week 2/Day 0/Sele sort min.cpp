#include<stdio.h>
void selection(int a[],int n)
{
	printf("\nThe array at each pause\n");
	int min,i,j,temp,k=0,index;
	for (i=1;i<n;i++)
	{
		min=a[n-1];//set rightmost element as min
		index=n-1;//Note the index of min in index
		
		/*for each kth iteration find minimum element from the kth element,
		the elements before k will be sorted at each kth pause*/
		for (j=k;j<n;j++)
		{
			if (a[j]<min)
			{
				min=a[j];//find minimum element and store it in min
				index=j;//Note the index of min in index
		    }
		}
		
		/*swap the minimum element with the element at k-th position,
		for every k-th iteration*/
		temp=a[k];
		a[k]=min;
		a[index]=temp;
		
		//printing how the array looks at each pause
		printf("[ ");
		for(int j=0;j<n;j++)
			printf("%d ",a[j]);
		printf("]\n");
		k++;
	}
	
	//printing the sorted array after n-1 iterations
	printf("\nTHE FINAL SORTED ARRAY IS.....\n[ ");
	for(int j=0;j<n;j++)
		printf("%d ",a[j]);
	printf("]");
}
main()
{
	int num;//length of array
	printf("Number of elements in array: ");
	scanf("%d",&num);//array length input
	
	int arr[num];//declaration of array
	
	printf("Enter the elements one by one:\n");
	for(int i=0;i<num;i++)
		scanf("%d",&arr[i]);//array input
	
	/*printing given array*/	
	printf("Your array is [ ");
	for(int j=0;j<num;j++)
		printf("%d ",arr[j]);
	printf("]\n");
	
	selection(arr,num);//function call
}
