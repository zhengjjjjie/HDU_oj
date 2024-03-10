/**
	No.2032 杨辉三角 动态规划 
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
	
	注：数组最好定义成全局变量，初始为 0，不会受随机初始影响 
**/
# include<iostream>
# include<vector>
using namespace std;
int a[31][31]; // 最好定义成全局变量，初始为 0，不会受随机初始影响 

// 动态规划 
int main() {
	int n;
	while(cin >> n && n) {
		a[0][0] = 1;
		for(int i=1; i<n; i++) {
			a[i][0] = 1;
			for(int j=1; j<=i; j++) {
				a[i][j] = a[i-1][j] + a[i-1][j-1];
			}
		}
		for(int i=0; i<n; i++) {
			for(int j=0; j<=i; j++) {
				if(j!=i) {
					cout << a[i][j] << " ";
				}else {
					cout << a[i][j] << endl;
				}
			}
		}
		cout << endl;
	}
	return 0;
} 
