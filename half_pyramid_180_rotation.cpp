#include<iostream>
using namespace std;
int main()
{
    int row;
    cin>>row;
    for(int i =1 ; i<=row; i++)
    {
        int space = row-i;
        for(int j = 1;j<=space; j++)
        {
            cout<<" ";
        }
        for(int j = 1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}