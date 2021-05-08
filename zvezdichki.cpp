
#include<iostream>
using namespace std;
int main()
{
    int n,space=0,i,j;
    //n - числото, въведено от клавиатурата (брой редове)
    //space - броя на интервалите в текущия ред
    cin>>n;
    for(i=n;i>=1;i--)//обхожда редовете, като в променливата i се отчита броя на *
    {
     for(j=1;j<=space;j++)//извежда space на брой интервали
            cout<<' ';
      for(j=1;j<=i;j++)// извежда i на брой *
        cout<<'*';
        cout<<endl;
      space++;//увеличава броя на интервалите в текущия ред
    }
	return 0;
}
