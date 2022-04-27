#include <iostream>
#include "./quickheader.hpp"

int main()
{
    // Inserting array of choice (using ints or numbers only)
    int arr[] = {10, 11, 5, 2, 7, 9, 3, 1, 8, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Printing the inputted array
    cout << "Unsorted Array:" << endl;
    PrintArray(arr, n);
    cout << endl;

    // Arranging and Printing the sorted array using quicksort
    quickSort(arr, 0, n - 1);
    cout << "\nQuick-Sorted Array:" << endl;
    PrintArray(arr, n);
    cout << endl;

    // Initiating Binary Search
    int x = 8;
    int result = binarySearch(arr, x, 0, n - 1);
    if (result == -1)
        printf("\nElement is not found in this Array");
    else
        printf("\nElement is found at index %d", result + 1);

    return 0;
}