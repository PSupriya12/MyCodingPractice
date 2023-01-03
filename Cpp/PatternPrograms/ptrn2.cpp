#include<iostream>
using namespace std;
int main()
{
    int i=0,j,n;
    cout<<"Enter number of rows/columns:";
    cin>>n;
    while(i<n)
    {
        j=0;
        while(j<n)
        {
            cout<<n-j;
            j++;
        }
        cout<<endl;
        i++;
    }
}