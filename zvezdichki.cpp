
#include<iostream>
using namespace std;
int main()
{
    int n,space=0,i,j;
    //n - �������, �������� �� ������������ (���� ������)
    //space - ���� �� ����������� � ������� ���
    cin>>n;
    for(i=n;i>=1;i--)//������� ��������, ���� � ������������ i �� ������ ���� �� *
    {
     for(j=1;j<=space;j++)//������� space �� ���� ���������
            cout<<' ';
      for(j=1;j<=i;j++)// ������� i �� ���� *
        cout<<'*';
        cout<<endl;
      space++;//��������� ���� �� ����������� � ������� ���
    }
	return 0;
}
