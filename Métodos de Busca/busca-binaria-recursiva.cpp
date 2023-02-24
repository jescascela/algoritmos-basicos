#include <iostream>

using namespace std;

int binarySearch(int myArray[], int begin, int end, int n)
{
    int middle;

    // Condição de parada quando elemento não está no array
    if(begin > end)
    {
        return -1;
    }

    middle = (begin + end) / 2;

    // Condição de parada quando o elemento está no meio
    if(myArray[middle] == n)
    {
        return middle;
    }

    // Se o elemento é maior, ignora a metade da esquerda
    if(n > myArray[middle])
    {
        return binarySearch(myArray, middle + 1, end, n);
    }

    // Se o elemento é menor, ignora a metade da direita
    return binarySearch(myArray, begin, middle - 1, n);
}

int main()
{
    int myArray[5] = {1, 5, 17, 32, 99};
    int arraySize = sizeof(myArray) / sizeof(int);
    int ret;
    int n;

    cout << "Digite um numero: ";
    cin >> n;

    ret = binarySearch(myArray, 0, arraySize, n);

    if(ret == -1)
    {
        cout << "O elemento nao esta no array." << endl;
    }
    else
    {
        cout << "O elemento esta na posicao " << ret + 1 << " do array." << endl;
    }
    return 0;
}