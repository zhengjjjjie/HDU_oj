/**
	No.2058 The sum problem-暴力解法（超时）
	Given a sequence 1,2,3,......N, your job is to calculate all the possible sub-sequences that the sum of the sub-sequence is M.
	
	Input:Input contains multiple test cases. each case contains two integers N, M( 1 <= N, M <= 1000000000).input ends with N = M = 0.
	Output:For each test case, print all the possible sub-sequence that its sum is M.The format is show in the sample below.
		print a blank line after each test case.
		
	SampleInput:
		20 10
		50 30
		0 0
		
	SampleOutput:
		[1,4]
		[10,10]
		
		[4,8]
		[6,9]
		[9,11]
		[30,30]
		
**/ 
# include<iostream>
using namespace std;

int main() {
	// 暴力解法-超时 
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF, n && m) {
		for(int i=1; i<=n; i++) {
			int sum = 0;
			for(int j=i; j<=n; j++) {
				sum += j;
				if(sum == m) {
					printf("[%d,%d]\n", i, j);
				}
				if(sum >= m) //剪枝 
					break;
			} 
		}
		printf("\n");
	}
	return 0;
}
