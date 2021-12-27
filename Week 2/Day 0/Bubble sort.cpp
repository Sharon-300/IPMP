#include<stdio.h>
void bubble(int a[],int n)
{
	int i,j,temp;
	printf("\nThe array at each pause\n");
	
	for (i=0;i<n-1;i++)
	{
		int f=0;//flag to check if any changes made in this iteration
		
		/*each iteration, check adjacent elements and swap if needed*/
		for(j=1;j<n-i;j++)
		{
			if(a[j]<a[j-1])
			{
				temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
				f++;//change f value if swapping is done
			}
		}
		
		//if no changes are made during any iteration, then array is sorted, therefore break
		if(f==0)
		{
			if(i==0) 
			{
				printf("No Sorting required\n");
				break;
			}
			printf("Sorting over!!!\n");
			break;
		}
		
		//printing array at each pass
		printf("[ ");
		for(j=0;j<n;j++)
			printf("%d ",a[j]);
		printf("]\n");
	}
	
	//printing final sorted array
	printf("\nTHE FINAL SORTED ARRAY IS.....\n[ ");
	for(j=0;j<n;j++)
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
	
	bubble(arr,num);//function call
}
