/***
	No.2085 核反应堆
	某核反应堆有两类事件发生：
	高能质点碰击核子时，质点被吸收，放出3个高能质点和1个低能质点；
	低能质点碰击核子时，质点被吸收，放出2个高能质点和1个低能质点。
	假定开始的时候（0微秒）只有一个高能质点射入核反应堆，每一微秒引起一个事件发生
	(对于一个事件，当前存在的所有质点都会撞击核子)
	试确定n微秒时高能质点和低能质点的数目。
	
	Input:输入含有一些整数n(0≤n≤33)，以微秒为单位，若n为-1表示处理结束
	Output:分别输出n微秒时刻高能质点和低能质点的数量，高能质点与低能质点数量之间以逗号空格分隔
		每个输出占一行。
	
	SampleInput:
		5 2
		-1
	
	SampleOutput:
		571, 209
		11, 4
		
	提示：可以使用long long int对付GNU C++，使用__int64对付VC6
	
	注：long long int - printf("%lld, %lld",dp1[n],dp2[n]);
		__int64 - printf("%I64d, %I64d", dp1[n], dp2[n]);
	
***/ 
# include<iostream>
using namespace std;

__int64 dp1[34];
__int64 dp2[34];

int main() {
	//动态规划
	dp1[0] = 1;//高能质点（0微秒时） 
	dp2[0] = 0;//低能质点
	for(int i=1; i<=33; i++) {
		dp1[i] = 3*dp1[i-1] + 2*dp2[i-1];
		dp2[i] = 1*dp1[i-1] + 1*dp2[i-1];
	} 
	int n;
	while(cin >> n, n!=-1) {
		printf("%I64d, %I64d\n", dp1[n], dp2[n]);
	}
	return 0;
} 
