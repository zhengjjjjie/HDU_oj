/**
	No.2010 水仙花数 
	春天是鲜花的季节，水仙花就是其中最迷人的代表，数学上有个水仙花数，他是这样定义的：
	"水仙花数"是指一个三位数，它的各位数字的立方和等于其本身，比如：153=1^3+5^3+3^3。
	现在要求输出所有在m和n范围内的水仙花数。
	
	Input:输入数据有多组，每组占一行，包括两个整数m和n（100<=m<=n<=999）
	Output:对于每个测试实例，要求输出所有在给定范围内的水仙花数，就是说，输出的水仙花数必须大于等于m,并且小于等于n，如果有多个，则要求从小到大排列在一行内输出，之间用一个空格隔开;
		如果给定的范围内不存在水仙花数，则输出no; 每个测试实例的输出占一行。

	sample Input:
		100 120
		300 380
 
	sample Output:
		no
		370 371
		
**/ 
# include<iostream>
# include<cmath>
using namespace std;

int cal_(int num) {
	int a = num % 10;
	int b = (num / 10) % 10;
	int c = num / 100;
	return pow(a,3) + pow(b,3) +pow(c,3);
}
int main(){
	// 水仙花数 
	int m,n;
	while(scanf("%d%d",&m,&n)!=EOF) {
		int flag = 1;
		for(int i=m; i<=n; i++) {
			if(cal_(i) == i) {
				printf("%d ",i);
				flag = 0;
			}
		}
		if(flag) {
			printf("no\n");
		}
	} 
	return 0; 
} 
