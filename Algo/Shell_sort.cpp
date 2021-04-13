// Shell sort in C++

//Pseudo code
// shellSort(array, size)
//   for gaps i <- size/2n down to 1
//     for each gaps "i" in array
//         sort all the elements at gaps "i"
// end shellSort

#include <iostream>
using namespace std;

// Shell sort
void shellsort(int array[], int n)
{
    // Rearrange elements at each n/2, n/4, n/8, ... intervals
    for (int gaps = n / 2; gaps > 0; gaps /= 2)
    {
        for (int i = gaps; i < n; i += 1)
        {
            int temp = array[i];
            int j;
            for (j = i; j >= gaps && array[j - gaps] > temp; j -= gaps)
            {
                array[j] = array[j - gaps];
            }
            array[j] = temp;
        }
    }
}

// Print an array
void printarray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

// Driver Code
int main()
{
    int data[] = {9, 8, 3, 7, 5, 6, 4, 1};
    int size = sizeof(data) / sizeof(data[0]);
    shellsort(data, size);
    cout << "Sorted array: \n";
    printarray(data, size);
}