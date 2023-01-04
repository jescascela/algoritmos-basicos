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

void bubbleSort(int myArray[5], int n)
{
    int aux;


    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < n - i; j++)
        {
            if(myArray[j] > myArray[j + 1])
            {
                aux = myArray[j];
                myArray[j] = myArray[j + 1];
                myArray[j + 1] = aux;
            }
        }
    }


}

int main()
{
    int myArray[5] = {7, 3, 1, 9, 2};
    int n = sizeof(myArray) / sizeof(int);

    bubbleSort(myArray, n);

    printArray(myArray, n);

    return 0;
}