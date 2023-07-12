#include<iostream>

using namespace std;

int main()
{
    float p,c,m,total,per;
    cout<<"enter marks of physics : ";
    cin>>p;
    cout<<"enter marks of chemistry : ";
    cin>>c;
    cout<<"enter marks of maths : ";
    cin>>m;

    total=p+c+m;
    per=total*100/300;

    cout<<"total marks : "<<total;
    cout<<"\npercentage : "<<per;
}