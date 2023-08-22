#include<iostream>
using namespace std;
int main()
{
    int row,column;
    cin>>row>>column;
    int i =1;
    int count = 1;
    while(i<=row)
    {
        int j = 1;
        while(j<=column)
        {
         cout<<count<<" ";
         count++;
         j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}