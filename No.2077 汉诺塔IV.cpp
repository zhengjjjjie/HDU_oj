/**
	No.2077 汉诺塔IV
	还记得汉诺塔III吗？他的规则是这样的：不允许直接从最左(右)边移到最右(左)边(每次移动一定是移到中间杆或从中间
	移出)，也不允许大盘放到小盘的上面。xhd在想如果我们允许最大的盘子放到最上面会怎么样呢？
	（只允许最大的放在最上面）当然最后需要的结果是盘子从小到大排在最右边。
		
	Input:输入数据的第一行是一个数据T，表示有T组数据。
		每组数据有一个正整数n(1 <= n <= 20)，表示有n个盘子。
		
	Output:对于每组输入数据，最少需要的摆放次数
	
	SampleInput:
		2
		1
		10
	
	SampleOutput:
		2
		19684
		
	注：与汉诺塔III相比，允许最大的盘子在上面。
		理解为n-1个盘子移到相邻杆上，再移动最大盘子。即总步数为2*dp[i-1]+2 ; 
		而移到相邻杆步数dp[i]=3*dp[i-1]+1 
	
**/
# include<iostream>
using namespace std;

int dp[21];

int main() {
	//动态规划 
	int T;
	cin >> T;
	
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 4;
	for(int i=3; i<=20; i++) { //移到相邻杆所需步数
		dp[i] = 3 * dp[i-1] + 1;
	}
	
	while(T--) {
		int n;
		cin >> n;
		//n-1个盘子移到相邻杆上，再移动最大盘子
		cout << 2*dp[n-1]+2 << endl;
	}
	return 0;
} 
