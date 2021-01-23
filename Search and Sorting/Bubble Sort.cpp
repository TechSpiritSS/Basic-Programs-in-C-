#include <iostream>
using namespace std;

void bubbleSort(int array[], int size)
{
    // run loops two times: one for walking throught the array and the other for comparison
    for (int step = 0; step < size - 1; ++step) 
    {
        for (int i = 0; i < size - step - 1; ++i) 
        {
            // To sort in descending order, change > to < in this line.
            if (array[i] > array[i + 1]) 
            {
                // swap if greater is at the rear position
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}
// function to print the array
void printArray(int array[], int size) 
{
    for (int i = 0; i < size; ++i) 
    {
        cout << " " << array[i];
    }
    cout << endl;
}

int main() 
{
    int data[] = {-2, 45, 0, 11, -9};
    int size = sizeof(data) / sizeof(data[0]);
    bubbleSort(data, size);
    cout << "Sorted Array in Ascending Order:\n";
    printArray(data, size);
}