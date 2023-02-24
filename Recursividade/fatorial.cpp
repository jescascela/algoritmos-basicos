#include <iostream>

using namespace std;

int fat(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }

    return n * fat(n - 1);
}

int main()
{
    int n;

    cout << "Digite um numero: ";
    cin >> n;

    cout << "O fatorial de " << n << " e igual a " << fat(n) << endl;

    return 0;
}