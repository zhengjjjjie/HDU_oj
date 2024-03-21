/***
	No.2089 不要62-暴力法
	杭州人称那些傻乎乎粘嗒嗒的人为62（音：laoer）。
	杭州交通管理局经常会扩充一些的士车牌照，新近出来一个好消息，以后上牌照，不再含有不吉利的数字了，这样一来，就可以消除个别的士司机和乘客的心理障碍，更安全地服务大众。
	不吉利的数字为所有含有4或62的号码。例如：
	62315 73418 88914
	都属于不吉利号码。但是，61152虽然含有6和2，但不是62连号，所以不属于不吉利数字之列。
	你的任务是，对于每次给出的一个牌照区间号，推断出交管局今次又要实际上给多少辆新的士车上牌照了。
	
	Input:输入的都是整数对n、m（0<n≤m<1000000），如果遇到都是0的整数对，则输入结束。
	
	Output:对于每个整数对，输出一个不含有不吉利数字的统计个数，该数值占一行位置。
	
	SampleInput:
		1 100
		0 0
	
	SampleOutput:
		80
		
	题意：给一个区间，统计区间中不含4和62的数字个数
		
***/ 
# include<iostream>
# include<cstring>
using namespace std;

int main() {
	//暴力遍历法 转化成字符串进行处理
	char str[10];
	int *dp = new int[1000001]; //直接静态申请，可能开不出1000000这么大的数组，用动态申请一个
	for(int i=1; i<1000000; i++) {
		sprintf(str, "%d", i); //sprintf类似于printf，将i写入str数组中 
		if(strstr(str, "62")==NULL && strstr(str, "4")==NULL) { //strstr(str, "62") 判断str是有"62"的子串 
			dp[i] = 1;
		}
		dp[i] += dp[i-1];
	}
	long long int n, m;
	while(cin >> n >> m, n || m) {
		cout << dp[m] - dp[n-1] << endl;
	}
	return 0;
}
