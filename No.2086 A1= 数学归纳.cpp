/***
	No.2086 A1 = ?-优化（数学归纳推导） 
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
	//数学归纳 
	//如果加上对n非零的判断，会导致oj超时？ 
	int n;
	while(cin >> n) {
		double a0, an1;
		vector<double> c(n+1, 0); //初始化c[] 
		vector<double> sum(n+1, 0); //c的前缀和 
		cin >> a0 >> an1;
		
		double sum_n = 0; 
		for(int i=1; i<=n; i++) {
			cin >> c[i];
			sum[i] = sum[i-1] + c[i];
			sum_n += sum[i];       //借助前缀和数组，一重循环把和求出
		}
		double a1 = 1.0 * (n*a0+an1-2*sum_n) / (n+1);
		printf("%.2f\n", a1);
	}
	return 0;
}
