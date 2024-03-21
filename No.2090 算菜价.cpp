/***
	No.2090 算菜价 
	妈妈每天都要出去买菜，但是回来后，兜里的钱也懒得数一数，到底花了多少钱真是一笔糊涂帐。现在好了，作为好儿子（女儿）的你可以给她用程序算一下了，呵呵。
	
	Input:输入含有一些数据组，每组数据包括菜种（字串），数量（计量单位不论，一律为double型数）和单价（double型数，表示人民币元数），
		因此，每组数据的菜价就是数量乘上单价啊。菜种、数量和单价之间都有空格隔开的。
	
	Output:支付菜价的时候，由于最小支付单位是角，所以总是在支付的时候采用四舍五入的方法把分头去掉。最后，请输出一个精度为角的菜价总量。
	
	SampleInput:
		青菜 1  2
		罗卜 2  1.5
		鸡腿 2  4.2
	
	SampleOutput:
		13.4
		
	注： 
		
***/ 
# include<iostream>
using namespace std;

int main() {
	string name;
	double num, price;
	double cost = 0;
	//没有输入终止符号？？？ 
	while(scanf("%s%lf%lf",&name,&num,&price)!=EOF) {
		cost += num * price;
	}
	printf("%.1lf\n", cost);
	return 0;
} 
