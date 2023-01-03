#include<iostream>
using namespace std;
int main()
{
    int i=1,j,n,cnt=1;
    cout<<"Enter no of rows:";
    cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            cout<<cnt;
            cnt++;
            j++;
        }
        cout<<"\n";
        i++;
    }
}