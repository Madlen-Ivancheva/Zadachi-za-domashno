
#include<iostream>
using namespace std;
int main()
{
    int l;
    cin>>l;
    for(int i = l;i >= 1; i--)
    {
        for(int j=i;j>=1;j--)
            cout<<j<<' ';
        for(int j=2;j<=i;j++)
            cout<<j<<' ';
        cout<<endl;
    }
	return 0;
}
