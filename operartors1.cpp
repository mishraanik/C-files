#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    b = a++;
    //2    //6
    b = a++ + ++a;

    cout << b << endl;
    return 0;
}