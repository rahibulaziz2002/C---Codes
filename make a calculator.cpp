#include <iostream>
using namespace std;
int main()
{
    char operation;
    double num1,num2,result;
    cout<<"Enter an Operator"<<endl;
    cin>>operation;
    cout<<"Enter 2 numbers"<<endl;
    cin>>num1>>num2;
    switch(operation)
    {
        case'+':result=num1+num2;
        break;
        case'-':result=num1-num2;
        break;
        case'*':result=num1*num2;
        break;
        case'/':
            if(num2!=0)
            {
                result=num1/num2;
            }
            else if(num2==0)
            {
                cout<<"Error"<<endl;
            }
            break;
        default:
            cout<<"Invalid Operator"<<endl;

    }
    cout<<"result is "<<result<<endl;
}
