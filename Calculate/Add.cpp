#include<iostream>
#include<string>
#define maxn 10000
using namespace std;
int a[maxn],b[maxn],c[maxn];
int main(){
	string A,B; //数据过大会导致溢出故采用字符串的形式储存 
	cin >> A >> B;
	int len = max(A.length(),B.length()); //判断位数较长的一个作为遍历的依据. 
	for(int i = A.length() - 1,j = 1;i >= 0 ;i--,j++) a[j] = A[i] - '0'; //将字符串最后一位(个位)存入整形数组的第一位以此类推 
	for(int i = B.length() - 1,j = 1;i >= 0 ;i--,j++) b[j] = B[i] - '0';
	//将ab数组的数字进行处理后按个位....排序并进位 
	for(int i = 1;i <= len;i++){
		c[i] += a[i] + b[i]; //注意是自加！！！！！！！！！！！！,因为上一位要进位 bug1
		c[i + 1] = c[i] / 10; //模拟进位 
		c[i] %= 10;
	}
	//注意判断进位情况！注意判断进位的顺序,请在处理后进位; bug2
	if(c[len + 1]){
		len++;
	}
	//打印数组得出和,注意:因为第一位为个位所以需要倒过来打印 bug3
	for(int i = len;i > 0;i--){
		cout << c[i];
	}
}
