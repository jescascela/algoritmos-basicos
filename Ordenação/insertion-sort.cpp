#include <iostream>

using namespace std;

void printArray(int myArray[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << myArray[i] << " ";
    }
    cout << endl;
}

void insertionSort(int myArray[], int n)
{
    int key;
    int j;

    // O array só tem um elemento, então já está ordenado
    if(n == 1)
    {
        return;
    }

    for(int i = 1; i < n; i++)
    {
        key = myArray[i];
        j = i - 1;

        while(j >= 0 && myArray[j] > key)
        {
            myArray[j + 1] = myArray[j];
            j = j - 1;
        }

        myArray[j + 1] = key;
    }
}

int main()
{
    int myArray[5] = {7, 3, 1, 9, 2};
    int n = sizeof(myArray) / sizeof(int);

    insertionSort(myArray, n);

    printArray(myArray, n);

    return 0;
}