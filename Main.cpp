#include<iostream>
using namespace std;
#include "Dec.h"

int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    int op;
    cout<<"Enter which operation you want to use(1 = add,2 = subtraction,3 = Multiplication,4 = divide,5 = mod ) :";
    cin>>op;
    cout<<"Output :";

    switch (op)
    {
    case 1:
    cout<<add(a,b);
        break;
    case 2:
    cout<<sub(a,b);
        break;
    case 3:
    cout<<mul(a,b);
        break;
    case 4:
    cout<<divide(a,b);
        break;
    case 5:
    cout<<mod(a,b);
        break;
    }
    return 0;

}