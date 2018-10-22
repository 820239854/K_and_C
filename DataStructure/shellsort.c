#include <stdio.h>

void shellSort(int arr[], int size)
{
	for(int gap=size/2; gap>0; gap/=2)
	{
		for(int i=gap; i<size; ++i)
		{
			for(int j=i-gap; j>=0 && arr[j]>arr[j+gap]; j-=gap)
			{
				int tmp = arr[j];
				arr[j] = arr[j+gap];
				arr[j+gap] = tmp;
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	int arr[6] = {4,3,5,2,6,0};
	for (int i = 0; i < 6; ++i)
	{
		printf("%d\n", arr[i]);
	}

	printf("\n");
	shellSort(arr, 6);

	for (int i = 0; i < 6; ++i)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}