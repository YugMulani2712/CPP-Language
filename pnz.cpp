#include <iostream>

using namespace std;

int main(){

    int a;
    cout<<"enter the value of a : ";
    cin>>a;

    if(a>0)
    {
        cout<<"value is positive\n";
    }
    else
    {
        if(a<0)
        {
            cout<<"value is nagative";
        }
        else
        {
            cout<<"value is zero";
        }
    }
}