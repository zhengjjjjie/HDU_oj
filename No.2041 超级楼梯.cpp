/**
	No.2041 超级楼梯 
	有一楼梯共M级，刚开始时你在第一级，若每次只能跨上一级或二级，要走上第M级，共有多少种走法？
	
	Input:输入数据首先包含一个整数N，表示测试实例的个数，然后是N行数据，每行包含一个整数M（1<=M<=40）,表示楼梯的级数
	Output:对于每个测试实例，请输出不同走法的数量
	
	SampleInput:
		2
		2
		3
		
	SampleOutput:
		1
		2 
		
**/ 
# include<iostream>
# include<vector>
using namespace std;

int main() {
	// 动态规划 
	int n;
	
	while(cin >> n && n) {
		while(n--) { //输入n行数据 
			int m;
			cin >> m; //m级楼梯 
			vector<int> dp(m+1,0);
			dp[0] = 1; //注意刚开始在第一级 
			dp[1] = 1; //0:1级 1:2级 
			for(int i=2; i<m; i++) {
				dp[i] = dp[i-1] + dp[i-2];
			}
			cout << dp[m-1] << endl; 
		}
	}
	return 0;
} 
