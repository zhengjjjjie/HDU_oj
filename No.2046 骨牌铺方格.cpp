/**
	No.2046 骨牌铺方格
	在 2xn的一个长方形方格中,用一个 1x2的骨牌铺满方格,输入n,输出铺放方案的总数.
	例如n=3时,为2x3方格，骨牌的铺放方案有三种,如下图：
	
	Input:输入数据由多行组成，每行包含一个整数n,表示该测试实例的长方形方格的规格是2xn (0<n<=50)
	Output:对于每个测试实例，请输出铺放方案的总数，每个实例的输出占一行
	
	SampleInput:
		1
		3
		2
		
	SampleOutput:
		1
		3
		2
	
	解题思路：递归思想求解，第n个直接竖着放上去有a[n-1]种可能，如果第n-1个方块是竖着放的话，可以把第n个和第n-1个横着放，
			前面说了第n-1个竖着放有a[n-2]种可能，得出a[n]=a[n-1]+a[n-2]。其实是一个斐波那契数列。 
**/ 
# include<iostream>
using namespace std;

long long int dp[51]; 

int main() {
	// 动态规划 ---斐波那契数列 
	int n;
	dp[0]=0;
	dp[1]=1;
	dp[2]=2;
	for(int i=3; i<=50; i++) {
		dp[i] = dp[i-1] + dp[i-2];
	}
	while(cin >> n && n) {
		cout << dp[n] << endl;	
	}
	return 0;
} 
