#include<iostream>
using namespace std;
int main()
{
    char op;
    float num1,num2,result;
    char choice;
    do
    {
        cout<<"Enter your operator(+,-,*,/)"<<endl;
        cin>>op;
        cout<<"Enter 2 numbers"<<endl;
        cin>>num1 >>num2;
        if(op=='+')
        {
            result=num1+num2;
        }
        else if(op=='-')
        {
            result=num1-num2;
        }
        else if(op=='*')
        {
            result=num1-num2;
        }
        else if(op=='/')
        {
            if(num2!=0)
            {
                result=num1/num2;
            }
            else
            {
                cout<<"error for Number 2 is 0";
            }
        }
        else
        {
            cout<<"invalid operator";
        }
        cout<<"Your result is"<<result<<endl;
        cout<<"Do want to continue?(Y/N)"<<endl;
        cin>>choice;


    }
    while(choice=='y'||choice=='Y');
}
