/***
	No.2082 找单词-一维动态规划（多重背包问题） 
	假设有x1个字母A， x2个字母B,..... x26个字母Z，同时假设字母A的价值为1，字母B的价值为2,..... 字母Z的价值为26。
	那么，对于给定的字母，可以找到多少价值<=50的单词呢？
	单词的价值就是组成一个单词的所有字母的价值之和，比如，单词ACM的价值是1+3+14=18，单词HDU的价值是8+4+21=33。
	(组成的单词与排列顺序无关，比如ACM与CMA认为是同一个单词）。
	
	Input:输入首先是一个整数N，代表测试实例的个数。
		然后包括N行数据，每行包括26个<=20的整数x1,x2,.....x26.
		
	Output:对于每个测试实例，请输出能找到的总价值<=50的单词数,每个实例的输出占一行。
	
	SampleInput:
		2
		1 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
		9 2 6 2 10 2 2 5 6 1 0 2 7 0 2 2 7 5 10 6 10 2 10 6 1 9
		
	SampleOutput:
		7
		379297
	
	分析： 
		
***/ 
# include<iostream>
# include<cstring>
using namespace std;

int arr[27];
int dp[51]; //dp[n] = 总价值为 n 的单词数

int main() {
	//动态规划-多重背包问题 
	int n;
	cin >> n;
	while(n--) {
		for(int i=1; i<=26; i++) { //arr[i] = i对应单词的个数 
			cin >> arr[i];
		}
		memset(dp,0,sizeof(dp));
		dp[0] = 1;
		for(int i=1; i<=26; i++) {//遍历物品（单词） 
			for(int j=50; j>=0; j--) {
				for(int k=1; k<=arr[i] && k*i+j<=50; k++) {
					dp[k*i+j] += dp[j];
				} 
			} 
		}
		long long int sum=0;
    	for(int i=1; i<=50; i++)
            sum += dp[i];
        printf("%lld\n",sum);
	} 
	return 0;
} 
