#include <stdio.h>
#include <stdlib.h>

void selectionSort(int [], int);

void main()
{
	int arr[100], i, size;
	
	printf("Enter the number of elements: ");
	scanf("%d", &size);
	
	printf("Enter the elements of the array:\n");
	for (i = 0; i < size; i++)
	{
		printf("Enter element %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	selectionSort(arr, size);
}

void selectionSort(int arr[], int size)
{
	int min, i, j, k, temp, comp = 0, tot_comp = 0, swaps = 0, tot_swaps = 0;
	
	for (i = 0; i < size; i++)
	{
		min = i;

		comp = 0;
		swaps = 0;

		for (j = i + 1; j <= size; j ++)
		{
			comp++;
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;

			swaps++;
		}
		
		printf("The array after pass %d:\n", i + 1);
		for (k = 0; k < size; k++)
		{
			printf("%d\t", arr[k]);
		}
		printf("Comparisions made: %d\t", comp);
		printf("Swaps made: %d\n", swaps);
		
		tot_comp += comp;
		tot_swaps += swaps;
	}
	
	printf("\n");

	printf("The sorted array is:\n");
	for (i = 0; i < size; i++)
	{
		printf("%d\t", arr[i]);
	}

	printf("\n");
	printf("Total comparisons made: %d", tot_comp);
	printf("\nTotal swaps made: %d", tot_swaps);
	
	printf("\n");
}
