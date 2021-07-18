//Switch statement for basic calculator functions
#include<iostream>
using namespace std;

int main ()
{
    int n1,n2;
    cout<<"Input 2 numbers : ";
    cin>>n1>>n2;

    char op;
    cout<<" choose operator : ";
    cin>>op;

    switch (op)

{
    case '+' :
    cout<<"n1 + n2"<<endl;
    break;

    case '-' :
    cout<<"n1 - n2"<<endl;
    break;
    
    case '*' :
    cout<<"n1 * n2"<<endl;
    break;

    case '%' :
    cout<<"n1 % n2"<<endl;
    break;
    
    default : 
    cout <<" Error operation"<<endl;
    break ;
    
}

return 0;
}