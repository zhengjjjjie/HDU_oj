/***
	No.2084 数塔-动态规划 
	在讲述DP算法的时候，一个经典的例子就是数塔问题，它是这样描述的：
	有如下所示的数塔，要求从顶层走到底层，若每一步只能走到相邻的结点，则经过的结点的数字之和最大是多少？ 
	
		         9                       9
		       12 15      输入初始化dp   12 15
		     10  6  8          ==        10 6  8   
		   2  18  9  5                   2  18 9  5
		19  7  10  4  16                 19 7  10 4  16
	
	已经告诉你了，这是个DP的题目，你能AC吗?
	
	Input:输入数据首先包括一个整数C,表示测试实例的个数，每个测试实例的第一行是一个整数N(1 <= N <= 100)，
		表示数塔的高度，接下来用N行数字表示数塔，其中第i行有个i个整数，且所有的整数均在区间[0,99]内。
		
	Output:对于每个测试实例，输出可能得到的最大和，每个实例的输出占一行。
	
	SampleInput:
		1
		5
		7
		3 8
		8 1 0 
		2 7 4 4
		4 5 2 6 5
	
	SampleOutput:
		30
	
***/ 
# include<iostream>
# include<cstring>
# include<algorithm> 
using namespace std;

int dp[101][101];

int main() {
	//动态规划 
	//输出可能得到的最大和
	int C;
	cin >> C;
	while(C--) {
		int n;
		cin >> n;
		memset(dp, 0, sizeof(dp)); //清空数组 
		for(int i=0; i<n; i++) {
			for(int j=0; j<=i; j++) {
				cin >> dp[i][j];
			} 
		}
		//从后往前找（从下往上找）
		for(int i=n-1; i>0; i--) {
			for(int j=n-1; j>0; j--) {
				dp[i-1][j-1] += max(dp[i][j], dp[i][j-1]);
			} 
		} 
		cout << dp[0][0] << endl;
		
	}
	return 0;
}


