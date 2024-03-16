/**
	No.2069 Coin Change-二维动态规划 (背包问题)
	Suppose there are 5 types of coins: 50-cent, 25-cent, 10-cent, 5-cent, and 1-cent. We want to make 
	changes with these coins for a given amount of money.
	
	For example, if we have 11 cents, then we can make changes with one 10-cent coin and one 1-cent coin, 
	or two 5-cent coins and one 1-cent coin, or one 5-cent coin and six 1-cent coins, or eleven 1-cent coins. 
	So there are four ways of making changes for 11 cents with the above coins.
	Note that we count that there is one way of making change for zero cent.
	
	Write a program to find the total number of different ways of making changes for any amount of money incents. 
	Your program should be able to handle up to 100 coins.
	
	Input:The input file contains any number of lines, each one consisting of a number ( ≤250 ) for the amount of money in cents.
	Output:For each input line, output a line containing the number of different ways of making changes with the above 5 types of coins.
		
	SampleInput:
		11
		26
		
	SampleOutput:
		4
		13

	题意：给你五种硬币：1,5,10,25,50，现在给出一个n，求出用这些硬币组成价值为n的方法数。
	注：区别于 No.2021 发工资咯--零钱兑换问题 求的是最少人民币数 
		这题是完全背包问题，状态转移方程dp[k][v] = dp[k][v]+dp[k-1][v-coins[i]]，
		其中dp[k][v]表示用k个硬币凑成价值为v的方法数,coins[i]表示硬币i的价值。 
**/
# include<iostream>
# include<cstring>
using namespace std;

int dp[101][251]; //dp[i][v]表示用i个硬币凑成价值为v的方法数   
int coins[5] = {1,5,10,25,50}; //有5种硬币 

int main() {
	int n;
	while(cin >> n) {
		memset(dp, 0, sizeof(dp));
		dp[0][0] = 1; //0美分用0个硬币 有一种组合
		for(int i=0; i<5; i++) { //5种硬币 
			for(int k=1; k<=100; k++) { //1-100个硬币
				for(int j=coins[i]; j<=n; j++) { //总美分 
					dp[k][j] += dp[k-1][j-coins[i]]; //放入当前硬币 
				} 
			}
		} 
		int res = 0;
		for(int i=0; i<=100; i++) {
			res += dp[i][n];
		}
		cout << res << endl;
	}
	return 0;
} 
