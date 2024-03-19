/***
	No.2086 A1 = ? （错误解法） 
	有如下方程：Ai = (Ai-1 + Ai+1)/2 - Ci (i = 1, 2, 3, .... n).
	若给出A0, An+1, 和 C1, C2, .....Cn.
	请编程计算A1 = ?
	
	Input:输入包括多个测试实例。
		对于每个实例，首先是一个正整数n,(n <= 3000); 然后是2个数a0, an+1.接下来的n行每行有一个数ci(i = 1, ....n);
		输入以文件结束符结束。
	Output:对于每个测试实例，用一行输出所求得的a1(保留2位小数).
	
	SampleInput:
		1
		50.00
		25.00
		10.00
		2
		50.00
		25.00
		10.00
		20.00
		
	SampleOutput:
		27.50
		15.00
		
***/
# include<iostream>
# include<vector>
using namespace std;

int main() {
	// 超时？？？ 超时是因为while(cin>>n, n)加了对n非零的判断？？ 
	// WA是因为，在求A1时A2未知，这里只是恰好测试样例过了，解法有问题，应该先使用数学归纳进行推导 
	int n;
	while(cin >> n) {
		vector<double> a(n+2, 0);
		vector<double> c(n+1, 0);
		cin >> a[0] >> a[n+1];
		for(int i=1; i<=n; i++) {
			cin >> c[i];
		}
		a[1] = (a[0] + a[2]) / 2 - c[1];
		printf("%.2f\n", a[1]);
	}
	
	return 0;
}
