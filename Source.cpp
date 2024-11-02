#include <iostream>

using namespace std;
int tong(int a, int b);
{
return a+b;
}
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a,b;
	cout <<"Nhap vao a";
	cin>>a;
	cout<<"Nhap vao b";
	cin>>b;
	cout<<"Tong 2 ab la "<<tong(a,b);
	system("pause");
	return 0;
}