#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
    char a;
    while (true)
    {
        cout << "Apakah anda ingin melempar dadu?(y/n) : ";
        cin >> a;
        
        if (a == 'y'){
            cout << 1 + (rand() % 6 ) << endl;
        } else if (a == 'n'){
            break;
        } else {
            cout << "Warning : Masukan y/n\n";
        }
    }
    
}