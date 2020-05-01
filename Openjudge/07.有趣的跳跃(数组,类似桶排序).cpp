#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	//默认桶为0 
	int a[3001] = {0},start = 0,end = 0,n = 0;
	cin >> n >> start;
	for(int i = 1;i < n;i++){
		cin >> end;
		a[abs(start - end)] += 1; //标记为1 
		start = end;
	}
	//最多有n-1个桶 参考植树的间隙 
	//从1遍历到n-1个数 若全部被标记则是 
	for(int i = 1;i < n;i++){
		if(a[i] != 1){
			cout << "Not jolly";
			return 0;
		}
	}
	cout << "jolly";
	return 0;
}
