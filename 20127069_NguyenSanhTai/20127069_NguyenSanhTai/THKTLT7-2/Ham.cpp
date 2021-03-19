#include "Ham.h"
#include <algorithm>
void Balo(int n,int m,int w[],int T[][10001]){
	for (int i = 1; i <= n; i++){
		for (int j = 0; j <= m; j++){
			if (j < w[i]){
				T[i][j] = T[i - 1][j];
			}
			else{
				T[i][j] = max(T[i - 1][j], T[i - 1][j - w[i]]+w[i]);
			}
		}
	}
}