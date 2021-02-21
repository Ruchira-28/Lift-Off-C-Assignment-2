#include <stdio.h>
int main()
{
	int i,n,e=0,ep=0;
	printf("Enter the no of elements:");
	scanf("%d",&n);
	int arr[10];
	printf("Enter elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		e+=arr[i];
		if((i+1)%2==0)
		ep+=arr[i];
	}
	printf("Sum of even elements:%d \n",e);
	printf("Sum of even position elements:%d \n",ep);
	return 0;
}
