#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
{
	return a - b;
}
int tich(int a, int b); {
	return a * b;
}
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a,b;
	cout <<"Nhap vao a,b";
	cin>>a;
	cin>>b;
	cout<<"Hieu 2 ab la "<<hieu(a,b);
	cout<<"Tich 2 ab la "<<tich(a,b);
	system("pause");
	return 0;
}