#include<iostream>
using namespace std;
int main()
{
    int i,j,rows;
    cin>>rows;
    for(i=0;i<rows;i++)
    {
        for(j=1;j<=rows-i;j++)
           cout<<"* ";
        cout<<endl;
    }
    return 0;
}
