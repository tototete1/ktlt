#include "Ham.h"
int n, m, w[10001], T[10001][10001];

int main(){
	cout << "Nhap so luong(n) mon hang: ";
	cin >> n;
	cout << "Nhap khoi luong(m) cua balo: ";
	cin >> m;
	for (int i = 1; i <= n; i++)
	{
		cout << "Nhap khoi luong mon hang " << i << ":";
		cin >> w[i];
	}
	Balo(n, m, w, T);
	cout <<"Tong khoi luong lon nhat cac mon hang duoc chon: "<< T[n][m]<<endl;
	system("pause");
}