/**
	No.2009 求数列的和 
	数列的定义如下：
		数列的第一项为 n，以后各项为前一项的平方根，求数列的前m项的和。
	
	Input:输入数据有多组，每组占一行，由两个整数n（n<10000）和m(m<1000)组成，n和m的含义如前所述。
	Output:对于每组输入数据，输出该数列的和，每个测试实例占一行，要求精度保留2位小数。

	sample Input:
		81 4
		2 2
 
	sample Output:
		94.73
		3.41
		
**/ 
# include<iostream>
# include<cmath>
using namespace std;

int main(){
	// 求数列的和
	int m;
	double n;
	while(scanf("%lf%d", &n,&m)!=EOF) {
		double sum=0;
		for(int i=0; i<m; i++) {
			sum += n;
			n = sqrt(n);
		}
		printf("%.2f\n", sum);
	} 
	 
	return 0; 
} 
