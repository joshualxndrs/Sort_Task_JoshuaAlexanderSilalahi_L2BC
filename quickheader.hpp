#include <iostream>
using namespace std;

// Swapping 2 elements
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// Creating positions for elements to be swapped
int partition(int arr[], int bottom, int top)
{
    int pvt = arr[top];   // pivot
    int i = (bottom - 1); // Index of smaller element and indicates the right position of pivot found so far

    for (int j = bottom; j <= top - 1; j++)
    {
        // Conditional if elements is smaller than the pivot
        if (arr[j] < pvt)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[top]);
    return (i + 1);
}

void quickSort(int arr[], int bottom, int top)
{
    if (bottom < top)
    {
        // Partition index
        int pi = partition(arr, bottom, top);

        // Sort elements separately
        // partition and after partition
        quickSort(arr, bottom, pi - 1);
        quickSort(arr, pi + 1, top);
    }
}

void PrintArray(int arr[], int size)
{
    // displays the array elements
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << "\t";
}

int binarySearch(int arr[], int x, int bottom, int top)
{

    // continues until the pointers low and high meet each other
    while (bottom <= top)
    {
        int mid = bottom + (top - bottom) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            bottom = mid + 1;

        else
            top = mid - 1;
    }

    return -1;
}