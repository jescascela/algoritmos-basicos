#include <iostream>

using namespace std;

int linearSearch(int myArray[], int n, int value)
{
    for(int i = 0; i < n; i++)
    {
        if(myArray[i] == value)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int myArray[5] = {7, 3, 1, 9, 2};
    int n = sizeof(myArray) / sizeof(int);
    int value;
    int ret;

    cout << "Digite o numero que sera buscado: ";
    cin >> value;

    ret = linearSearch(myArray, n, value);

    if(ret == -1)
    {
        cout << "Numero nao encontrado no array" << endl;
    }
    else
    {
        cout << "Numero encontrado na posicao " << ret + 1 << endl;
    }
    
    return 0;
}