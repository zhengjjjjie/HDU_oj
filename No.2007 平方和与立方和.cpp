/**
	No.2007 平方和与立方和  
	给定一段连续的整数，求出他们中所有偶数的平方和以及所有奇数的立方和
	
	Input:输入数据包含多组测试实例，每组测试实例包含一行，由两个整数m和n组成
	Output:对于每组输入数据，输出一行，应包括两个整数x和y，分别表示该段连续的整数中所有偶数的平方和以及所有奇数的立方和。 
			你可以认为32位整数足以保存结果。

	sample Input:
		1 3
		2 5
	sample Output:
		4 28
		20 152
	注意：本题容易出错的地方在于：要考虑输入的两个数的大小，一定是小的在前，大的在后
**/ 
# include<iostream>
using namespace std;

int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF) {
		int squareSum = 0;
		int cubicSum = 0;
		int tmp;
		if(a > b) { //保证 a<b 
			tmp = a;
			a = b;
			b = tmp;
		}
		for(int i=a; i<=b; i++) { 
			if(i % 2 == 0) {
				squareSum += i*i;
			} else {
				cubicSum += i*i*i;
			}
		}
		cout << squareSum << " " << cubicSum << endl;
	} 
	return 0; 
} 
