#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
 srand(time(0));
 int izborcomp=rand()%3;
 int potrebitelskiizbor;
 cout<<"Enter a number between 0 and 2"<<endl;
 cout<<"Scissor is 0,rock is 1 and paper is 2"<<endl;
 cin>>potrebitelskiizbor;
 if (izborcomp==potrebitelskiizbor) {
    cout<<"Equality!"<<endl;

}else if (potrebitelskiizbor==0 && izborcomp==2 || potrebitelskiizbor==1 && izborcomp==0|| potrebitelskiizbor==2 && izborcomp==1)
{
    cout<<"You win!"<<endl;
}
 else cout<<"You loose!"<<endl;







return 0;
}
