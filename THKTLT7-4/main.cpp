#include "Ham.h"


int n, m, a[10001][10001], T[10001][10001], Truoc[10001][10001], ans[10001];
int main() {
	cout << "Nhap so dong (m): ";
	cin >> n;
	cout << "Nhap so cot (n): ";
	cin >> m;
	cout << "Nhap gia tri mang 2 chieu a: " << endl;
	for (int i = 1; i <= n; i++) {
		cout << "nhap mang a dong " << i << " :" << endl;
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	find1(a, n, m, T, Truoc);
	findReverse(T, Truoc, n, m, ans);

	for (int i = 1; i <= m; i++)
	{
		cout << "vi tri o xuat phat cot " << i << ": " << ans[m - i + 1] << endl;
	}
	system("pause");
}