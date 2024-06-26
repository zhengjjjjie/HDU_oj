/**
	No.2073 无限的路
	甜甜从小就喜欢画图画，最近他买了一支智能画笔，由于刚刚接触，所以甜甜只会用它来画直线，
	于是他就在平面直角坐标系中画出如下的图形：(详见HDU oj)
	(0,5)`
	(0,4)`      `
	(0,3)`      `      `
	(0,2)`      `      `      `
	(0,1)`      `      `      `      `
	(0,0)` (1,0)` (2,0)` (3,0)` (4,0)` (5,0)`
	
	甜甜的好朋友蜜蜜发现上面的图还是有点规则的，于是他问甜甜：在你画的图中，我给你两个点，
	请你算一算连接两点的折线长度（即沿折线走的路线长度）吧。
		
	Input:第一个数是正整数N（≤100）。代表数据的组数。
		每组数据由四个非负整数组成x1，y1，x2，y2；所有的数都不会大于100。
	Output:对于每组数据，输出两点(x1,y1),(x2,y2)之间的折线距离。注意输出结果精确到小数点后3位。
	
	SampleInput:
		5
		0 0 0 1
		0 0 1 0
		2 3 3 1
		99 99 9 9
		5 5 5 5
	
	SampleOutput:
		1.000
		2.414
		10.646
		54985.047
		0.000
		 
	题解：首先题目是求两点的距离，我们可以先求出第一个点到原点的距离，再求出第二个点到原点的距离，然后两者相减即可
	（注：这里的到原点距离是指中途所经过的所有线段的长度和，不是直接求到原点距离）
	
	递推过程：可以发现，图中的线段长度除了(0,0) -> (0,1)长度是1，其他的只有两种，
		一种是斜率为-1的线段，一种是斜率为-2的线段，
		分别可以用 m=sqrt(i*i+i*i)和 n=sqrt(i*i+(i+1)*(i+1))来表示

**/
# include<iostream>
# include<math.h>
using namespace std;

double dist(int x,int y){ //计算(x,y)到(0,0)的距离 
	if(x == 0 && y == 0)
		return 0; //会出现除数为0的情况 
	int a = x + y; //斜率为-1的直线上，x+y为固定值 
	double distance = 0;
	for(int i=1; i<a; i++) //到点(x,y)前所经过斜率为-1的直线的长度之和 
		distance += sqrt(i*i*2);
		
	distance += sqrt(a*a*2)*((double)x/(double)(x+y));//点(x,y)所在那条直线的长度，占了整条直线的x/(x+y)
	//要注意此处若x和y不做浮点数处理最后结果不正确 
	 
	for(int i=0; i<a; i++)//剩余直线（别忘了(0,0)到(0,1)那段） 
		distance += sqrt(i*i+(i+1)*(i+1));
	return distance; 
}

int main() {
	//数学+找规律 
	int n;
	cin >> n;
	int x1,y1,x2,y2;
	while(n--) {
		cin >> x1 >> y1 >> x2 >> y2;
		double d1 = dist(x1,y1);
		double d2 = dist(x2,y2);
		printf("%.3lf\n",fabs(d1-d2));
	}
	return 0;
}
