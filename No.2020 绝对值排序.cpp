/**
	No.2020 绝对值排序 
	输入n(n<=100)个整数，按照绝对值从大到小排序后输出。题目保证对于每一个测试实例，所有的数的绝对值都不相等。
		
	Input:输入数据有多组，每组占一行，每行的第一个数字为n,接着是n个整数，n=0表示输入数据的结束，不做处理
	Output:对于每个测试实例，输出排序后的结果，两个数之间用一个空格隔开。每个测试实例占一行

	sample Input:
		3 3 -4 2
		4 0 1 2 -3
		0
 
	sample Output:
		-4 3 2
		-3 2 1 0

**/ 
# include<iostream>
# include<vector>
# include<algorithm>
# include<cmath>
using namespace std;

bool cmp(int x,int y) { //按绝对值从大到小排序 
	return abs(x) > abs(y);
}
int main(){
	int n;
	while(scanf("%d",&n) && n) {
		vector<int> arr(n);
		for(int i=0; i<n; i++) {
			cin >> arr[i];
		}
		sort(arr.begin(),arr.end(),cmp); //从大到小排序 
		for(auto i : arr) {
			cout << i << " ";
		}
		cout << endl;
	}
	return 0; 
} 
