#include "Ham.h"

int main(){
	float n;
	cout << "Nhap vao so n: ";
	cin >> n;
	while (n <= 0 || floor(n)!=n ){
		cout << "Nhap lai so n vi n phai la so nguyen va lon hon 0"<<endl;
		cout << "Nhap vao so n: ";
		cin >> n;
	}
	
	cout <<"Cau 1: "<<cau_1(n)<<endl;
	cout <<"Cau 2: "<<cau_2(n)<<endl;
	system("pause");
}