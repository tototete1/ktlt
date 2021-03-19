#include "Ham.h"

using namespace std;
int main(){
	int n, a[10001], L[10001],Truoc[10001];
	cout << "Nhap so phan tu n: ";
	cin >> n;
	cout << "Nhap mang a" << endl;
	for (int i = 1; i <= n; i++){
		cout << "Nhap phan tu a[ " << i - 1 << " ]: ";
		cin >> a[i];
	}


	findArrChildMax(n, a,L,Truoc);


	int res = L[1];
	int id = 1;
	for (int i = 1; i <= n; i++)
	{
		if (res < L[i])
		{
			res = L[i];
			id = i;
		}
	}
	int m = Truoc[id];
	int b[10001], k = 0;
	b[++k] = a[id];
	while (m != 0){
		b[++k] = a[m];
		m = Truoc[m];
	}
	cout <<"Do dai day con khong giam dai nhat : "<< res<<endl;
	cout << "Cac phan tu cua day con: ";
	for (int i = k; i > 0; i--) cout << b[i] << " ";
	cout << endl;
	system("pause");
}