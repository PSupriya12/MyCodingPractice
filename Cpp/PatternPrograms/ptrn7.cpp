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
        int cnt=i;
        while(j<=i)
        {
            cout<<cnt;
            cnt++;
            j++;
        }
        cout<<endl;
        i++;
    }
}