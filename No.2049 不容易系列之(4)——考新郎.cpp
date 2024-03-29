/**
	No.2049 不容易系列之(4)——考新郎
	HDU 2006'10 ACM contest的颁奖晚会隆重开始了！
	国庆期间,省城HZ刚刚举行了一场盛大的集体婚礼,为了使婚礼进行的丰富一些,司仪临时想出了有一个有意思的节目,叫做"考新郎",具体的操作是这样的:
		首先,给每位新娘打扮得几乎一模一样,并盖上大大的红盖头随机坐成一排;
		然后,让各位新郎寻找自己的新娘.每人只准找一个,并且不允许多人找一个.
		最后,揭开盖头,如果找错了对象就要当众跪搓衣板...
	
	看来做新郎也不是容易的事情...
	
	假设一共有N对新婚夫妇,其中有M个新郎找错了新娘,求发生这种情况一共有多少种可能.
	
	Input:输入数据的第一行是一个整数C,表示测试实例的个数，然后是C行数据，每行包含两个整数N和M(1<M<=N<=20)。
	Output:对于每个测试实例，请输出一共有多少种发生这种情况的可能，每个实例的输出占一行。
	
	SampleInput:
		2
		2 2
		3 2
		
	SampleOutput:
		1
		3
	
	解题思路：组合 + 错排 
		组合：C(N,M)+=N!/(M!*(N-M)!)。即C(N,M)=N!/M!/(N-M)!。
		错排：f[n]=(n-1)*(f[n-1]+f[n-2])。
	
**/ 
# include<iostream>
using namespace std;

int main() {
	// 动态规划---部分错排列 
	// 组合 + 错排 
	int c,n,m;
	long long int num = 0;
	long long int fact[21] = {1,1,2};
	long long int dp[21] = {0,1,1,2};
	
	for(int i=3; i<21; i++) { //求阶乘 
		fact[i] = fact[i-1]*i;
	}
	for(int i=4; i<21; i++) { //求错排数组 
		dp[i] = (i-1) * (dp[i-1] + dp[i-2]);
	}
	while(cin >> c && c) {
		while(c--) {
			cin >> n >> m;
			num = fact[n]/fact[m]/fact[n-m] * dp[m];
			cout << num << endl; 
		} 
	}
	return 0;
}
