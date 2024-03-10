/**
	No.2039 三角形
	给定三条边，请你判断一下能不能组成一个三角形
	 
	Input:输入数据第一行包含一个数M，接下有M行，每行一个实例，包含三个正数A,B,C。其中A,B,C <1000;
	Output:对于每个测试实例，如果三条边长A,B,C能组成三角形的话，输出YES，否则NO。
	
	Sample Input:
		2
		1 2 3
		2 2 2
		
	Sample Output:
		NO
		YES
		
**/ 
# include<iostream>
using namespace std;

int main() {
	int n;
	double a,b,c;
	while(cin >> n && n) {
		while(n--){
			cin >> a >> b >> c;
			if (a+b>c && a+c>b && b+c>a)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
	return 0;
}
