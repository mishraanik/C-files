//Switch statement for robot to say hello in different language
#include<iostream>
using namespace std;

int main ()
{
    char button;
    cout<<"Input a character ; ";
    cin>>button;
    if(button == 'a')
    {
        cout << "Hello"<<endl;
    }
    else if(button=='b')
    {
        cout<<"Namastey"<<endl;
    }
    else if(button =='c')
    {
        cout<<"Hola"<<endl;
    }
    else if(button=='d')
    {
        cout<<"Salute"<<endl;
    }
    else if(button == 'e')
    {
        cout<<"Ciao"<<endl; 
    }
    else{
        cout<<"I am strill learning more: "<<endl;
    }
    return 0;

}