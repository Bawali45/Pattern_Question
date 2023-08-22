#include<iostream>
using namespace std;
int main()
{
    int row;
    cin>>row;
    for(int i =1; i<=row; i++)
    {
        for(int j = row; j>=i; j--)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
return 0;
}