#include<iostream>
using namespace std;
int main()
{
  int row,column;
  cout<<"Enter the number of the row"<<endl;
  cin>>row;
  //cout<<"Enter the number of the column"<<endl;
   //cin>>column;
//   for(int i = 1; i<=row; i++)
//   {
//     for(int j = 1; i<=row; j++)
//     {
//         cout<<j<<endl;
//     }
//   }
int i = 1; 
while(i<=row)
{
    int j = 1;
    while(j<=row)
    {
        cout<<j<<" ";
        j++;
    }
    cout<<endl;
    i++;
}
  return 0; 
}

