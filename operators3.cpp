#include <iostream>
using namespace std;

int main()
{
    int i, j, k, l;
    cin >> i >> j >> k;
    //1   //3   //2   //4  //3    //5   //3   //3
    l = i++ + ++i + j++ + ++j + k++ + ++k + --i + k--;

    cout << l << endl;
    return 0;
}