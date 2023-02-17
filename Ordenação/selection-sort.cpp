#include <iostream>

using namespace std;

void selectionSort(int myArray[], int n)
{
    int min; // Armazena o índice menor elemento
    int aux; // Variável auxiliar

    for(int i = 0; i < n - 1; i++)
    {
        min = i;
        for(int j = i + 1; j < n; j++)
        {
            if(myArray[j] < myArray[min])
            {
                min = j;
            }
        }

        if(min != i)
        {
            aux = myArray[i];
            myArray[i] = myArray[min];
            myArray[min] = aux;
        }
    }
}

void printArray(int myArray[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << myArray[i] << " ";
    }

    cout << endl;
}

int main()
{
    int myArray[5] = {7, 3, 1, 9, 2};
    int n = sizeof(myArray) / sizeof(int);

    selectionSort(myArray, n);
    printArray(myArray, n);

    return 0;
}