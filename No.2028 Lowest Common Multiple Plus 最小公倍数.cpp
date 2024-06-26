/**
	No.2028 Lowest Common Multiple Plus
	求n个数的最小公倍数
	
	Input:输入包含多个测试实例，每个测试实例的开始是一个正整数n，然后是n个正整数
	Output:为每组测试数据输出它们的最小公倍数，每个测试实例的输出占一行。你可以假设最后的输出是一个32位的整数
	
	Sample Input:
		2 4 6
		3 2 5 7
		
	Sample Output:
		12
		70
		
**/
# include<iostream>
# include<algorithm> 
using namespace std;

int GCD(int a, int b) { //最大公约数 
	return b==0?a:GCD(b,a%b);
} 
int LCM(int unsigned a,int unsigned b) { //最小公倍数 
	return (a*b)/GCD(a,b); //int在运算中会隐式转化为 unsigned int类型 
}
int main() {
	int n;
	while(cin >> n && n) {
		int res;
		cin >> res;
		for(int i=1; i<n; i++) {
			int u;
			cin >> u;
			res = LCM(u, res);
		}
		cout << res << endl;
	}
	return 0;
}
