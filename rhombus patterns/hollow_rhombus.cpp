#include<iostream>
using namespace std;
int main()
{
    int i,j,rows;
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=2*rows-1;j++)
        {
            
            if(j>=rows-i+1 && j<=rows-i+rows)
            {
                if(i==1 || i==rows)
                cout<<"* ";
                else if(i+j==rows+1 || i+j==2*rows)
                cout<<"* ";
                else
                cout<<"  ";
            }
            else
            cout<<"  ";
        }
        cout<<endl;
    }
}
