#include <iostream>
#include "./quickheader.hpp"

int main()
{
    // Inserting array of choice (using ints or numbers only)
    int arr[50], n, i;
    cout << "How many elements would you like to insert? ";
    cin >> n;
    cout << "\nEnter elements (Press enter after each elements): " << endl;
    for (i = 0; i < n; i++)
        cin >> arr[i];

    // Initiating Binary Search
    int x;
    cout << "What element would you like to get? ";
    cin >> x;

    cout << "=============================================" << endl;
    // Printing the inputted array
    cout << "Unsorted Array:" << endl;
    PrintArray(arr, n);
    cout << endl;

    // Arranging and Printing the sorted array using quicksort
    quickSort(arr, 0, n - 1);
    cout << "\nQuick-Sorted Array:" << endl;
    PrintArray(arr, n);
    cout << endl;

    // Printing Binary Search
    int result = binarySearch(arr, x, 0, n - 1);
    if (result == -1)
        printf("\nElement is not found in this Array");
    else
        printf("\nElement is found at index %d", result + 1);

    return 0;
}