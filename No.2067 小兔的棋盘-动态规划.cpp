/***
	No.2067 小兔的棋盘
	小兔的叔叔从外面旅游回来给她带来了一个礼物，小兔高兴地跑回自己的房间，拆开一看是一个棋盘，小兔有所失望。不过没过几天发现了棋盘的好玩之处。
	从起点(0，0)走到终点(n,n)的最短路径数是C(2n,n),现在小兔又想如果不穿越对角线(但可接触对角线上的格点)，这样的路径数有多少?小兔想了很长时间都没想出来，
	现在想请你帮助小兔解决这个问题，对于你来说应该不难吧!

	Input:每次输入一个数n(1<=n<=35)，当n等于－1时结束输入。
	Output:对于每个输入数据输出路径数，具体格式看Sample。
	
	SampleInput:
		1
		3
		12
		-1
		
	SampleOutput:
		1 1 2
		2 3 10
		3 12 416024
		
***/ 
# include<iostream>
# include<cstring>
using namespace std;

long long int dp[36][36]; 

int main() {
	// 动态规划
	int n;
	int cnt = 1;
	while(cin >> n && n!=-1) {
		cout << cnt << " " << n << " ";
		memset(dp, 0, sizeof(dp));
		dp[0][0] = 1;
		for(int i=1; i<=n; i++) {
			dp[i][0] = dp[i-1][0];
			for(int j=1; j<=i; j++) {
				dp[i][j] = dp[i][j-1] + dp[i-1][j];
			}
		}
		cnt++;
		cout << 2*dp[n][n] << endl;
	}
	
	return 0;
}
