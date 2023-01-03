#include<iostream>
using namespace std;
int main()
{
    int n,i=1,j;
    cout<<"Enter number:";
    cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<j;
            j++;
        }
        cout<<"\n";
        i++;
    }
}
