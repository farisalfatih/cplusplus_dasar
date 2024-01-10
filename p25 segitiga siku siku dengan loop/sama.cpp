#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Masukan Nilai n : ";
    cin >> n;

    cout << "Segi Tiga Sama Sisi Atas" << endl;
    for (int i = 1; i <= n; ++i)
    {
        for (int k = n ; k > i; --k)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i -1) ; ++j)
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
        for (int j = n; j >= (i * 2 - n); --j)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Belah Ketupat" << endl;
    for (int i = 1; i <= n; ++i)    {
        for (int k = n ; k > i; --k)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i -1) ; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 2; i <= n; ++i)
    {
        for (int k = 1; k < i; ++k)
        {
            cout << " ";
        }
        for (int j = n; j >= (i * 2 - n); --j)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
