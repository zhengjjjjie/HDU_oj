/**
	No.2031 进制转换 
	输入一个十进制数N，将它转换成R进制数输出
	
	Input:输入数据包含多个测试实例，每个测试实例包含两个整数N(32位整数)和R（2<=R<=16, R<>10）
	Output:为每个测试实例输出转换后的数，每个输出占一行。如果R大于10，则对应的数字规则参考16进制（比如，10用A表示，等等）
	
	Sample Input:
		7 2
		23 12
		-4 3
		
	Sample Output:
		111
		1B
		-11
		
**/
# include<iostream>
# include<vector> //abs
# include<algorithm>
using namespace std;

char meta[] = {'0','1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
int main() {
	int n,r; //n：十进制数， r:r进制 
	while(scanf("%d%d",&n,&r)!=EOF) {
		bool negativeFlag = n < 0 ? true : false; //注意符号 
		n = abs(n);
		vector<char> result;
		while(n) {
			result.push_back(meta[n % r]);
			n /= r;
		}
		if(negativeFlag) {
			cout << "-";
		}
		reverse(result.begin(), result.end());
		for(auto i : result) {
			cout << i;
		}
		cout << endl;
	} 
	return 0;
} 
