#include "Ham.h"
#include <algorithm>

void find1(int a[][10001], int n, int m, int T[][10001], int Truoc[][10001]) {
	for (int i = 1; i <= n; i++) {
		T[i][1] = a[i][1];
		Truoc[i][1] = 0;
	}
	for (int j = 2; j <= m; j++) {
		for (int i = 1; i <= n; i++) {
			if (i == 1) {
				if (T[i][j - 1] > T[i + 1][j - 1]) {
					T[i][j] = T[i][j - 1] + a[i][j];
					Truoc[i][j] = i;
				}
				else {
					T[i][j] = T[i + 1][j - 1] + a[i][j];
					Truoc[i][j] = i + 1;
				}
			}
			if (i == n) {
				if (T[i][j - 1] > T[i - 1][j - 1]) {
					T[i][j] = T[i][j - 1] + a[i][j];
					Truoc[i][j] = i;
				}
				else {
					T[i][j] = T[i - 1][j - 1] + a[i][j];
					Truoc[i][j] = i - 1;
				}
			}
			if (i != 1 && i != n) {
				if (T[i][j - 1] > T[i - 1][j - 1]) {
					if (T[i][j - 1] > T[i + 1][j - 1]) {
						T[i][j] = T[i][j - 1] + a[i][j];
						Truoc[i][j] = i;
					}
					else {
						T[i][j] = T[i + 1][j - 1] + a[i][j];
						Truoc[i][j] = i + 1;
					}
				}
				if (T[i - 1][j - 1] > T[i][j - 1]) {
					if (T[i - 1][j - 1] > T[i + 1][j - 1])
					{
						T[i][j] = T[i - 1][j - 1] + a[i][j];
						Truoc[i][j] = i - 1;
					}
					else {
						T[i][j] = T[i + 1][j - 1] + a[i][j];
						Truoc[i][j] = i + 1;
					}
				}
				if (T[i + 1][j - 1] > T[i][j - 1])
				{
					if (T[i + 1][j - 1] > T[i - 1][j - 1]) {
						T[i][j] = T[i + 1][j - 1] + a[i][j];
						Truoc[i][j] = i + 1;
					}
					else {
						T[i][j] = T[i - 1][j - 1] + a[i][j];
						Truoc[i][j] = i - 1;
					}
				}
				if (T[i][j - 1] > T[i + 1][j - 1]) {
					if (T[i][j - 1] > T[i - 1][j - 1]) {
						T[i][j] = T[i][j - 1] + a[i][j];
						Truoc[i][j] = i;
					}
					else {
						T[i][j] = T[i - 1][j - 1] + a[i][j];
						Truoc[i][j] = i - 1;
					}
				}

			}
		}
	}
}

void  findReverse(int T[][10001], int Truoc[][10001], int n, int m, int ans[]) {
	int x = T[1][m];
	int id = 1;
	for (int i = 2; i <= n; i++) {
		if (T[i][m] > x) {
			x = T[i][m];
			id = i;
		}
	}
	int j = m;
	int m1 = Truoc[id][j];
	ans[1] = id;
	id = 2;
	ans[id] = m1;

	while (j != 2) {
		j--;
		m1 = Truoc[m][j];
		ans[++id] = m1;
	}
}