#include<iostream>
using namespace std;
int main()
{
    int row;
    cin>>row;
    for(int i =1 ; i<=row; i++)
    {
        int space = row-i;
        for(int j = 1; j<=space; j++)
        {
            cout<<" ";
        }
        int value = 2*i-1;
        for(int j =1 ; j<=value; j++)
        {
            cout<<"*";
        }
        
        cout<<"\n";
    }
     for(int i =row ; i>=1; i--)
    {
        int space = row-i;
        for(int j = 1; j<=space; j++)
        {
            cout<<" ";
        }
        int value = 2*i-1;
        for(int j =1 ; j<=value; j++)
        {
            cout<<"*";
        }
        
        cout<<"\n";
    }
    return 0;
}