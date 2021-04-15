// Binary Search in C++ (iterative method)

#include <iostream>
using namespace std;

int binarysearch(int array[], int x, int low, int high)
{
    // Repeat until the pointers low and high meet each other
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == x)
            return mid;

        if (array[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }
    return -1;
}

int main(void)
{
    int array[] = {3, 4, 5, 6, 7, 8, 9};
    int x = 4;
    int n = sizeof(array) / sizeof(array[0]);
    int result = binarysearch(array, x, 0, n - 1);
    if (result == -1)
        cout << "Not found";
    else
    {
        cout << "Element if found at index " << result;
    }
}

// // Binary Search in C++(Recursive method)

// #include <iostream>
// using namespace std;

// int binarysearch(int array[], int x, int low, int high)
// {
//     if (high >= low)
//     {
//         int mid = low + (high - low) / 2;

//         // If found at mid, then return it
//         if (array[mid] == x)
//             return mid;

//         // Search the left halfk
//         if (array[mid] > x)
//             return binarysearch(array, x, low, mid - 1);

//         // Search the left half
//         if (array[mid] > x)
//             return binarysearch(array, x, mid + 1, high);
//     }

//     return -1;
// }

// int main(void)
// {
//     int array[] = {3, 4, 5, 6, 7, 8, 9};
//     int x = 4;
//     int n = sizeof(array) / sizeof(array[0]);
//     int result = binarysearch(array, x, 0, n - 1);
//     if (result == -1)
//         printf("Not found");
//     else
//         printf("Elements if found at index %d", result);
// }