#include <iostream>
#include "ArrayTest.h"

using namespace std;

void arrayIndexTest() 
{
    const int len = 10;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Length of array: " << sizeof(arr) / sizeof(int) << endl;
    for (int i = 0; i < len; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    cout << "Outside of length of array, it could be anything -> Make sure you use index inside array" << endl;
    for (int i = len; i < len + 10; i++)
    {
        cout << "arr["<< i <<"] = " << arr[i] << endl;
    }
}

void arrayInitializationTest()
{
    // 1. Normal init with default values
    int arr0[5];
    cout << "1. Default init, values can be anything" << endl;
    printArray(arr0, 0, 9);

    // 2. Init with full length values
    int arr1[5] = {1, 2, 3, 4, 5};
    cout << "2. Init with values (full length)" << endl;
    printArray(arr1, 0, 4);

    // 3. Init with fewer values than array length, missing values will be default (default of int is 0)
    int arr2[5] = {1, 2, 3};
    cout << "3. Init with Length = 5 and 3 values" << endl;
    printArray(arr2, 0, 4);

    // 4. COMPILE ERROR: Can't init more values than array length
    // int arr3[5] = {1, 2, 3, 4, 5, 6};
    // cout << "4. Init with Length = 5 and 6 values" << endl;
    // printArray(arr3, 0, 4);

    // 5. Init array with all values are 0
    int arr4[10] = {0}; // all elements of array will be 0
    int arr5[10] = {1}; // only arr5[0] = 1 and the rest will be 0 (default value of int) -- case 3
    cout << "5. Init array with all element are 0" << endl;
    printArray(arr4, 0, 9);
    cout << "arr5[10] = {1}: Only arr5[0] = 1, the rest will be default value (default of int is 0)" << endl;
    printArray(arr5, 0, 9);
}

void printArray(int arr[], int low, int high)
{
    cout << "[ ";
    for (int i = low; i < high; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << arr[high] << " ]" <<endl;
}
