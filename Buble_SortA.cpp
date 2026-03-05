#include <iostream>
#include <string>
using namespace std;

int arr[20]; 
int n;

void input()
{
    int d;
    while (true)
    {
        cout << "Masukan banyaknya elemen pada array :";
        cin >> n;
        if (n <= 20)
            break;
        else
        {
            COUT << "\nArray dapat mempunyai maksimal 20 elemen. \n";
        }
    }
}
cout << endl;
cout << "====================" << endl;
cout << "Masukan Elemen Array" << endl;
cout << "====================" << endl;

for (int i = 0; i < n; i++)
