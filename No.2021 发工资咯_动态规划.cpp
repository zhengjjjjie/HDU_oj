/**
	No.2021 发工资咯--零钱兑换问题 
	作为杭电的老师，最盼望的日子就是每月的8号了，因为这一天是发工资的日子，养家糊口就靠它了，呵呵
	但是对于学校财务处的工作人员来说，这一天则是很忙碌的一天，财务处的小胡老师最近就在考虑一个问题：
		如果每个老师的工资额都知道，最少需要准备多少张人民币，才能在给每位老师发工资的时候都不用老师找零呢？
		这里假设老师的工资都是正整数，单位元，人民币一共有100元、50元、10元、5元、2元和1元六种。
		
	Input:输入数据包含多个测试实例，每个测试实例的第一行是一个整数n（n<100），表示老师的人数，然后是n个老师的工资。
		n=0表示输入的结束，不做处理。
	Output:对于每个测试实例输出一个整数x,表示至少需要准备的人民币张数。每个输出占一行。

	sample Input:
		3
		1 2 3
		0
 
	sample Output:
		4

	注：Runtime Error (ACCESS_VIOLATION) 即运行时访问了非法内存导致异常
	主要有以下三种情况会导致这种错误：
		1.数组开的不够大，假如题目的数据范围是1e6，而我们如果只开了1e5的数组就会导致这个错误
		解决办法：查看题目数据范围和自己所开数组
		2.数组访问异常，有时候即使我们申请的内存是可用的，但在下面访问时不小心访问了所开范围外数组下标
		解决办法:把代码认真看一遍
		3.使用了未知内存，假如我们设置了变量a，但是却忘记对a初始化，导致代码的运算都是错误的，比如我前几天刚刚出现的zz错误
		如：int n,m; scanf("%d",&n,&m); //m的输入格式错误 
		解决办法：检查所有变量看看有没有忘记输入或者输入格式错误
	
**/ 
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;

int main(){
	//动态规划
	int n;
	vector<int> coins = {1, 2, 5, 10, 50, 100};
	while(scanf("%d", &n) && n) {
		int res = 0; //最终输出 
		int amount;
		for(int s=0; s<n; s++) { //输入背包 
			cin >> amount;
			vector<int> dp(amount+1, INT_MAX);
			dp[0] = 0; 
			for(int i=1; i<=amount; i++) { //遍历背包 
				for(int j=0; j<coins.size(); j++) { //遍历物品--硬币 
					if(i - coins[j] >= 0 && dp[i-coins[j]] != INT_MAX) {
	                    dp[i] = min(dp[i-coins[j]] + 1, dp[i]); //找到代价最小的面额硬币
	                }
				}
			}
			
			if(dp[amount]!=INT_MAX) {
				res += dp[amount];
			}
		} 
		
		printf("%d\n", res);
	}
	
	return 0; 
} 
