#include <iostream>

void swap(int* arr, int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void insertionSort(int* arr, int n)
{
	int i = 1;
	while (i < n)
	{
		int j = i;
		while ((j > 0) && (arr[j - 1] > arr[j]))
		{
			swap(arr, j - 1, j);
			j--;
		}

		// print the current status of the array
		if ((i + 1) != n)
		{
			std::cout << "The first " << i + 1 << " elements are sorted.\n";
		}
		else
		{
			std::cout << "The whole array is sorted.\n";
		}
		for (int k = 0; k < n; k++)
		{
			std::cout << arr[k] << " ";
		}
		std::cout << "\n";	

		i++;
	}
}

int main(int argc, char** argv)
{
    int arr[] = {4, 1, 2, 6, 8, 7, 11, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Unsorted array:\n";
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    insertionSort(arr, n);

    std::cout << "Sorted array:\n";

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    return 0;
}