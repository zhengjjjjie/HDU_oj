/**
	No.2032 杨辉三角 递归 
	还记得中学时候学过的杨辉三角吗？具体的定义这里不再描述，你可以参考以下的图形：
		1
		1 1
		1 2 1
		1 3 3 1
		1 4 6 4 1
		1 5 10 10 5 1
	
	Input:输入数据包含多个测试实例，每个测试实例的输入只包含一个正整数n（1<=n<=30），表示将要输出的杨辉三角的层数
	Output:对应于每一个输入，请输出相应层数的杨辉三角，每一层的整数之间用一个空格隔开，每一个杨辉三角后面加一个空行
	
	Sample Input:
		2 3
		
	Sample Output:
		1
		1 1
		
		1
		1 1
		1 2 1
	
	题解：杨辉三角第i行第j列的数值： 
		a[i][j] = a[i-1][j] + a[i-1][j-1] 
**/
# include<iostream>
using namespace std;

// 使用递归，oj超时 
int Yanghui(int m, int n) {
	if(n == 0 || n == m) return 1; //递归出口 
	return Yanghui(m-1,n) + Yanghui(m-1,n-1);
}
int main() {
	int n;
	while(cin >> n && n) {
		for(int i=0; i<n; i++) {
			for(int j=0; j<=i; j++) {
				if(j!=i) {
					cout << Yanghui(i,j) << " ";
				} else {
					cout << Yanghui(i,j) << endl;
				}
			}
		}
		cout << endl;
	}
	return 0;
} 
