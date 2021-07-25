#include <iostream>
using namespace std;

int main()
{
    int i;
    cin >> i;
    // for i = 1
    //1   //3
    i = ++i + i++;
    //2
    cout << i << endl;
    return 0;
}