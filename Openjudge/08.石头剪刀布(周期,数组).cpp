#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	//周期数组,周期,总循环次数,计数器 
	int A[101],B[101],N,NA,NB,wina = 0,winb = 0;
	cin >> N >> NA >> NB;
	//建议从0不然去余操作会很麻烦 
	for(int i = 0;i < NA;i++){
		cin >> A[i];
	}
	for(int i = 0;i < NB;i++){
		cin >> B[i];
	}
	//周期判断可采用取余 
	for(int i = 0;i < N;i++){
//		if(A[i%NA] == 0 && B[i%NB] == 2) wina++;
//		else if(A[i%NA] == 0 && B[i%NB] == 5) winb++;
//		else if(A[i%NA] == 0 && B[i%NB] == 2) wina++;
//		else if(A[i%NA] == 2 && B[i%NB] == 0) winb++;
//		else if(A[i%NA] == 2 && B[i%NB] == 5) wina++;
//		else if(A[i%NA] == 5 && B[i%NB] == 0) wina++;
//		else if(A[i%NA] == 5 && B[i%NB] == 2) winb++;
//		else continue;
		//建议采用||可减少代码量 
	}
	if(wina > winb) cout << "A";
	else if(wina < winb) cout << "B";
	else cout << "draw";
}
