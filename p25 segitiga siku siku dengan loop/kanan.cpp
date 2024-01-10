#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Masukan Nilai n : ";
    cin >> n;

    cout << "Segi Tiga Siku Atas Kanan" << endl;
    for (int i = 1; i <= n; ++i)
    {
        for (int k = n - 1; k >= i; --k)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Segi Tiga Siku Atas Bawah" << endl;
    for (int i = 1; i <= n; ++i)
    {
        for (int k = 1; k < i; ++k)
        {
            cout << " ";
        }
        for (int j = n; j >= i; --j)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
