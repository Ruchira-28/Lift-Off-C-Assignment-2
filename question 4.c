#include <stdio.h>
int main()
{
	int arr[20],n,i,large,small;
	printf("Enter the no of elements:\n");
	scanf("%d",&n);
	
	printf("Enter the elements:\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	large=small=arr[0];
	for(i=0;i<n;i++)
	{
		if(large<arr[i])
		large=arr[i];
		
		if(small>arr[i])
		small=arr[i];	
	}
	printf("The largest element is:%d \n",large);
	printf("The smallest element is:%d \n",small);
	
	return 0;
}
