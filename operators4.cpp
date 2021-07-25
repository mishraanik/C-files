#include <iostream>
using namespace std;

int main()
{
    int i, j, k;
    // for i =1 and j =2
    cin >> i >> j;
    //2    //3   //2  //4
    k = ++i + ++j + i++ + ++j;

    cout << k << endl;
    return 0;
}
