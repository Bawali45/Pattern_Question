#include<iostream>
using namespace std;
int main()
{
  int row;
  cin>>row;
  int c = 1; 
  for(int i = 0; i<=row; i++)
  {
    int space = row-i;
    for(int j = 1; j<=space; j++)
    {
       cout<<" ";
    }
    for(int j =0; j<=i; j++)
    {
        
        if(i==0 || j==0)
        {
           c=1;
        }
        else{
             c = c*(i-j+1)/j;
        }
        cout<<c<<" ";
    }
    cout<<"\n";
  }
   return 0;
}