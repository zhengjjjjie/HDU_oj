/**
	No.2068 RPG的错排 
	今年暑假杭电ACM集训队第一次组成女生队,其中有一队叫RPG,但做为集训队成员之一的野骆驼竟然不知道RPG三个人
	具体是谁谁。RPG给他机会让他猜猜，第一次猜：R是公主，P是草儿，G是月野兔；
	第二次猜：R是草儿，P是月野兔，G是公主；
	第三次猜：R是草儿，P是公主，G是月野兔；......
	可怜的野骆驼第六次终于把RPG分清楚了。
	由于RPG的带动，做ACM的女生越来越多，我们的野骆驼想都知道她们，可现在有N多人，他要猜的次数可就多了，
	为了不为难野骆驼，女生们只要求他答对一半或以上就算过关，请问有多少组答案能使他顺利过关。
	
	Input:输入的数据里有多个case,每个case包括一个n，代表有几个女生，（n<=25）, n = 0输入结束。

	Output:对于每组数据，输出一个整数，表示可以坐上过山车的最多组合数
		
	SampleInput:
		1
		2
		0
		
	SampleOutput:
		1
		1
	
	注：经典的错排题 - 类似题目 NO.2048 神、上帝、老天爷 
		这个题要求就是答对一半或一半以上就可以过关 反过来想就是我们错排少于等于一半就可以了
		关键在于我们从n个人里面选几个人是不确定的 所以用组合公式 C(n,m)来求
		比如从5个人里面我们错排两个人，是哪两个人呢，我也不确定，所以用C(5,2)来随机选取
		然后错排两个人的方法数就是 dp[2]
		总的方案数就是它们的乘积：C(5,2)*dp[2]
		
		C(n,m) = A(n,m)/m! = n!/(m!*(n-m)!) 

**/
# include<iostream>
using namespace std;

int dp[26];  

long long int C(int n, int m) {
	long long res1 = 1;
	long long res2 = 1;
	for(int i=n; i>=n-m+1; i--) { //A(n,m) 
		res1 *= i;
	}
	for(int i=1; i<=m; i++) { //m!
		res2 *= i;
	}
	return res1/res2;
}
int main() {
	//动态规划-错排 
	int n;
	dp[0] = 0;
	dp[1] = 0;
	dp[2] = 1; 
	for(int i=3; i<=25; i++) { //计算全错排列 
		dp[i] = (i-1) * (dp[i-1] + dp[i-2]);
	}
	while(cin >> n, n) {
		long long int cnt = 1;
		for(int i=1; i<=n/2; i++) {
			cnt += C(n,i) * dp[i];
		}
		cout << cnt << endl;
	}
	
	return 0;
} 
