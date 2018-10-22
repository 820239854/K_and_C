#include <stdio.h>

void swap(int arr[], int p, int q)
{
	int tmp =  arr[p];
	arr[p] = arr[q];
	arr[q] = tmp;
}

void qSort(int arr[], int left, int right)
{
	if(left>=right)
		return;
	swap(arr, left, (left+right)/2);
	int last = left;
	for(int i=left+1; i<=right; ++i)
	{
		if(arr[i]<=arr[left])
			swap(arr, ++last, i);
	}
	swap(arr, left, last);
	qSort(arr, left, last-1);
	qSort(arr, last+1, right);
}

int main(int argc, char const *argv[])
{
	int arr[6] = {4,3,5,2,6,0};
	for (int i = 0; i < 6; ++i)
	{
		printf("%d\n", arr[i]);
	}

	printf("\n");
	// swap(arr,0,5);
	qSort(arr, 0, sizeof(arr)/sizeof(int) - 1);

	for (int i = 0; i < 6; ++i)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}