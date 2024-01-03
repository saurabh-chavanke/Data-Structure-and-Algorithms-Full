#include<iostream>
using namespace std;

void printNo(int i,int x)
{
    if(i>x)
    {
        return;
    }
    cout<<i<<" ";
    printNo(i+1,x);

}

int main()
{
    int iNo;

    cout<<"Enter the number : ";
    cin>>iNo;

    printNo(1,iNo);
}
