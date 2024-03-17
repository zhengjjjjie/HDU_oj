/***
	No.2080 夹角有多大II
	这次xhd面临的问题是这样的：在一个平面内有两个点，求两个点分别和原点的连线的夹角的大小。

	注：夹角的范围[0，180]，两个点不会在圆心出现。
	
	Input:输入数据的第一行是一个数据T，表示有T组数据。
		每组数据有四个实数x1,y1,x2,y2分别表示两个点的坐标,这些实数的范围是[-10000,10000]。
		
	Output:对于每组输入数据，输出夹角的大小精确到小数点后两位。
	
	SampleInput:
		2
		1 1 2 2
		1 1 1 0
		
	SampleOutput:
		0.00
		45.00
		
	注：这道题不难，运用余弦定理，根据向量坐标来求夹角的余弦。
		
		cos<a,b>=a*b/(|a|*|b|)
		a*b = x1*x2+y1*y2
		|a| = √(x12+y12)
	
		acos()是反余弦函数，cosπ= -1，所以π= acos(-1)
***/ 
# include<iostream>
# include<cmath>
using namespace std;

const double pi = acos(-1.0);

int main() {
	int T;
	cin >> T;
	while(T--) {
		double x1,y1,x2,y2;
		cin >> x1 >> y1 >> x2 >> y2; 
		double s1 = x1*x2 + y1*y2;
        double s2 = sqrt(x1*x1 + y1*y1) * sqrt(x2*x2 + y2*y2);
        double res = acos(s1/s2)/pi*180;
        printf("%.2f\n",res);
	}
	return 0;
}
