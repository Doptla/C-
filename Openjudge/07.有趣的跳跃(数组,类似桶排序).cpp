#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	//Ĭ��ͰΪ0 
	int a[3001] = {0},start = 0,end = 0,n = 0;
	cin >> n >> start;
	for(int i = 1;i < n;i++){
		cin >> end;
		a[abs(start - end)] += 1; //���Ϊ1 
		start = end;
	}
	//�����n-1��Ͱ �ο�ֲ���ļ�϶ 
	//��1������n-1���� ��ȫ����������� 
	for(int i = 1;i < n;i++){
		if(a[i] != 1){
			cout << "Not jolly";
			return 0;
		}
	}
	cout << "jolly";
	return 0;
}
