#include "Ham.h"

int cau_1(int n){
	if (n == 0){
		return 0;
	}
	return n + cau_1(n - 1);
}

int cau_2(int n){
	if (n == 0)
	{
		return 0;
	}
	return n*n + cau_2(n - 1);
}

float cau_3(int n){
	if (n == 0){
		return 0;
	}
	return float(1.0/n) + cau_3(n - 1);
}
float cau_4(int n){
	if (n == 0) return 0;
	return float(1.0 / (2 * n)) + cau_4(n - 1);
}
float cau_5(int n){
	if (n == 0) return 1;
	return float(1.0 / (2 * n + 1)) + cau_5(n - 1);
}
float cau_6(int n){
	if (n == 0) return 0;
	return float(1.0 / (n*(n + 1))) + cau_6(n - 1);
}

float cau_7(int n){
	if (n == 0) return 0;
	return float(n / (n + 1)*1.0) + cau_7(n - 1);
}

float cau_8(int n){
	if (n == -1) return 0;
	return float((2 * n + 1) / (2 * n + 2)*1.0) + cau_8(n - 1);
}

long long int cau_9(int n){
	if (n == 0) return 1;
	return n*cau_9(n - 1);
}

long long int cau_11(int n){
	if (n == 0) return 0;
	return cau_9(n - 1)*n + cau_11(n - 1);
}