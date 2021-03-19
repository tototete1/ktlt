#include "Ham.h"

using namespace std;
void findArrChildMax(int n, int a[],int L[],int Truoc[]){
	int jmax;
	L[0] = 0;
	for (int i = 1; i <= n; i++){
		jmax = 0;
		for (int j = 1; j < i; j++){
			if (a[j] <= a[i]){
				if (L[j]>L[jmax]){
					jmax = j;
				}
			}
		}
		L[i] = L[jmax] +1;
		Truoc[i] = jmax;
	}
}
