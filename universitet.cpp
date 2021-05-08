#include<iostream>
using namespace std;
int main()
{
    int basicPrize=10000;
    cout<<"Price at the begining"<<" "<<basicPrize<<endl;
    for(int i=2;i<=10;i++)
    {
        basicPrize+=(basicPrize/100)*6;
        cout<<basicPrize<<endl;
    }
    int sum=0;
     for(int i=1;i<=4;i++)
    {
        basicPrize+=(basicPrize/100)*6;
        sum+=basicPrize;
    }
    cout<<sum<<endl;
	return 0;
}
