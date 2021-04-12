// Heap sort in C++
#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{ // Find largest among root, left child and right child
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;
    // where n denotes last element

    if (right < n && arr[right] > arr[largest])
        largest = right;

    // swap and continue heapifying if root is not largest
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

// main function to do heap sort
void heapsort(int arr[], int n)
{
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    // Heap sort
    for (int i = n - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);

        // Heapify root element to get highest element at root again
        heapify(arr, i, 0);
    }
}

// print an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

// Driver code
int main()
{
    int arr[] = {1, 12, 9, 5, 6, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    heapsort(arr, n);

    cout << "Sorted array is \n";
    printArray(arr, n);
}