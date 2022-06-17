#include<iostream>
using namespace std;
int main ()
{
    float a,b,c,d,e,r;
    cout<<"total driven per day:";
    cin>>a;
    cout<<"petrol cost per liter";
    cin>>b;
    cout<<"per liter for average kilometer";
    cin>>c;
    cout<<"per day parking fees:";
    cin>>d;
    cout<<" per day tolls:";
    cin>>e;
    r=(a/c)*b+d+e;
    cout<<"total driving cost";
    return 0;
}
