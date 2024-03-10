/**
	No.2011 多项式求和 
	多项式的描述如下：
		1 - 1/2 + 1/3 - 1/4 + 1/5 - 1/6 + ...
		现在请你求出该多项式的前n项的和
	
	Input:输入数据由2行组成，首先是一个正整数m（m<100），表示测试实例的个数，第二行包含m个正整数，
		对于每一个整数(不妨设为n,n<1000），求该多项式的前n项的和
	Output:对于每个测试实例n，要求输出多项式前n项的和。每个测试实例的输出占一行，结果保留2位小数

	sample Input:
		2 
		1 2
 
	sample Output:
		1.00
		0.50
		
**/ 
# include<iostream>
using namespace std;

int main(){
	int m,n;
	scanf("%d", &m);
	for(int i=0; i<m; i++) {
		cin >> n;
		double sum =0, sign=1;
		for(int j=1; j<=n; j++) {
			sum += sign * (1.0 / j);
			sign = -sign;
		}
		printf("%.2f\n", sum); 
	}
	return 0; 
} 
