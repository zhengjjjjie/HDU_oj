/**
	No.2076 夹角有多大(题目已修改,注意读题)
	时间过的好快，一个学期就这么的过去了，xhd在傻傻的看着表，出于对数据的渴望，突然他想知道这个表的时针和分
	针的夹角是多少。现在xhd知道的只有时间，请你帮他算出这个夹角。

	注：夹角的范围[0，180]，时针和分针的转动是连续而不是离散的。
		
	Input:输入数据的第一行是一个数据T，表示有T组数据。
		每组数据有三个整数h(0 <= h < 24)，m(0 <= m < 60)，s(0 <= s < 60)分别表示时、分、秒。
		
	Output:对于每组输入数据，输出夹角的大小的整数部分。
	
	SampleInput:
		2
		8 3 17
		5 13 30
	
	SampleOutput:
		138
		75
	
**/
# include<iostream>
# include<cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	double h,m,s; //注意输入要是double类型，否则会存在整除产生误差 
	double theta_h,theta_m,res;
	while(n--) {
		cin >> h >> m >> s;
		h = int(h) % 12;
		theta_h = (h + m/60 + s/3600) * 360 / 12; //theta_h表示时针与0点的夹角
		theta_m = (m + s/60) * 360 / 60; //theta_m表示分针与0分位置的夹角

		res = floor(fabs(theta_h-theta_m)>180? 360-fabs(theta_h-theta_m): fabs(theta_h-theta_m));
		printf("%.0lf\n", res); //注：夹角的范围[0，180]
	} 
	return 0;
} 
