#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    int lottery=rand()%900+100;
    cout<<"Enter a three-digit number"<<endl;
    int personchoice;
    cin>>personchoice;
    cout<<"lottery choice "<<lottery<<endl;
    if (lottery==personchoice) {cout<<"You win 10 000 dollars"<<endl; return 0;}
    int digit1,digit2,digit3,digit1l,digit2l,digit3l;
    digit1=personchoice%10;
    digit2=personchoice/10%10;
    digit3=personchoice/100%10;
    digit2l=lottery/10%10;
    digit1l=lottery%10;
    digit3l=lottery/100%10;
    if ((digit1==digit1l || digit1==digit2l || digit1==digit3l) && (digit2==digit1l || digit2==digit2l || digit3==digit3l) && (digit3==digit1l || digit3==digit2l || digit3==digit3l))

      {


        cout<<"You win 3000 dollars"<<endl;}
    else if (digit1==digit1l || digit1==digit2l || digit1==digit3l || digit2==digit1l || digit2==digit2l || digit2==digit3l || digit3==digit1l || digit3==digit2l || digit3==digit3l)
     {
     cout<<"You win 1000 dollars"<<endl;}
    else cout<<"You don't win anything"<<endl;













return 0;
}
