#include<iostream>
using namespace std;
int main()
{
    int i=1,j,n;
    cout<<"Enter no of rows:";
    cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}