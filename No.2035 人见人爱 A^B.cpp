/**
	No.2035 人见人爱 A^B
	求A^B的最后三位数表示的整数。
	说明：A^B的含义是“A的B次方”
	
	Input:输入数据包含多个测试实例，每个实例占一行，由两个正整数A和B组成（1<=A,B<=10000），
		如果A=0, B=0，则表示输入数据的结束，不做处理

	Output:对于每个测试实例，请输出A^B的最后三位表示的整数，每个输出占一行
	
	Sample Input:
		2 3
		12 6
		6789 10000
		0 0
		
	Sample Output:
		8
		984
		1
	
	题解：如果只要后三位，其实可以只保存模除1000后的结果继续运算 
**/
# include<iostream>
# include<algorithm> 
using namespace std;

int main() {
	int a, b;
	// a的 b次方 
	while(scanf("%d%d",&a,&b)!=EOF, a || b) {
		int res = 1;
		while(b--) {
			res = res * a % 1000;
		} 
		cout << res << endl;
	} 
	return 0;
}
