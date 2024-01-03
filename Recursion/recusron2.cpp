#include<iostream>
using namespace std;

int i=0;
int sum=0;
long printSum(int n)
{
    if(i>n)
    {
        return sum;
    }
    sum=sum+i;
    i++;
    cout<<i<<endl;
    sum=printSum(n);
    cout<<"***********"<<endl;
    cout<<sum<<endl;
    return sum;
}

int main()
{
    int iNo,sum;

    cout<<"Enter the number : ";
    cin>>iNo;

    cout<<printSum(iNo);
}