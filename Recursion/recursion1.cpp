#include<iostream>
using namespace std;

void printNTimes(int i,int n)
{
    if(i>n)
        return ;
    printNTimes(i+1,n);
    cout<<"Saurabh Chavanke"<<endl;
}

int main()
{
    int iNo;
    cout<<"Enter the number : ";
    cin>>iNo;

    printNTimes(1,iNo);

}