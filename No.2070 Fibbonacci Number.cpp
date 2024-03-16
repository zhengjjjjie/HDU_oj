/**
	No.2070 Fibbonacci Number
	Your objective for this question is to develop a program which will generate a fibbonacci number. The fibbonacci function is defined as such:
	
	f(0) = 0
	f(1) = 1
	f(n) = f(n-1) + f(n-2)
	
	Your program should be able to handle values of n in the range 0 to 50.
		
	Input:Each test case consists of one integer n in a single line where 0≤n≤50. The input is terminated by -1.
	Output:Print out the answer in a single line for each test case.
	
	SampleInput:
		3
		4
		5
		-1
	
	SampleOutput:
		2
		3
		5
		
	you can use 64bit integer: __int64 
		 
**/
# include<iostream>
using namespace std;

__int64 dp[51];

int main() {
	//动态规划-斐波那契数列
	int n;
	dp[0] = 0;
	dp[1] = 1;
	
	for(int i=2; i<=50; i++) {
		dp[i] = dp[i-1] + dp[i-2];
	}
	while(cin >> n, n!=-1) {
		printf("%I64d\n",dp[n]);
	}
	return 0;
} 
