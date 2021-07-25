#include <iostream>
using namespace std;
// you must know proper use of increment and decrement

int main()
{
    int i, j, k, l;
    cin >> i >> j >> k;
    // for i=1 , j=2 , k= 3
    // 1      //3   //2   //4   //3  //5
    l = ++i + ++i + ++j + j++ + k++ + ++k;
    //2               //3          //4

    // i will initiate with given input by user for example value 1
    // and in case of i++ first it will evaluate with 1 and beacause of operator it will increase with 1 becoes 2.
    // now in case of ++1 it will again increase with 1 befour getting into evaluation.

    cout << "Enter respected numbers: ";

    cout << l << endl;
    return 0;
}