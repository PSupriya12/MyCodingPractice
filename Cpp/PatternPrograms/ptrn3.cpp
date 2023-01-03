#include<iostream>
using namespace std;
int main()
{
    int i=1,j,n,cnt=1;
    cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<cnt;
            cnt++;
            j++;
        }
        cout<<endl;
        i++;
    }
}