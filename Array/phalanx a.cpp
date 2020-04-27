#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;int num[n + 1][n + 1]; //防越界(实际上变量不能充当下标) 
	int count = n / 2 == 0 ? n / 2 : n / 2 +1; //根据奇偶性判断圈数 
	for(int i = 1; i <= count; i++) { //需要"填充"多少次 ，先观察常量关系后观察变量关系,最后结合得出每行打印次数 
		for(int k = i; k <= n-i+1; k++) { //每次有几行 
			for(int j = i; j <= n-i+1; j++) {	//每次有几列 
				num[k][j] = i;	//因为该方阵为正方形故行列数循环次数相等 
			}
		}
	}
	//打印 
	for(int a = 1; a <= n; a++) {
		for(int b = 1; b < n; b++) {
			cout << num[a][b] << " "; //打印每行 
		}
		cout << num[a][n] <<endl; //打印每列 
	}
}
