// Versão iterativa da busca binaria
#include <iostream>

using namespace std;

int binarySearch(int myArray[], int begin, int end, int n)
{
    int middle;

    while(begin <= end)
    {
        middle = (begin + end) / 2;

        // Verifica se o número buscado é o elemento do meio
        if(myArray[middle] == n)
        {
            return middle;
        }

        // Se o elemento é maior, ignora a metade da esquerda
        if(n > myArray[middle])
        {
            begin = middle + 1;
        }
        // Se o elemento é menor, ignora a metade da direita
        else
        {   
            end = middle - 1;
        }
    }

    return -1; // Elemento não está no array
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