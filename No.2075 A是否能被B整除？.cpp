/**
	No.2075 A|B?
	正整数A是否能被正整数B整除，不知道为什么xhd会研究这个问题，来帮帮他吧。
		
	Input:输入数据的第一行是一个数据T，表示有T组数据。每组数据有两个正整数A和B(A,B<10^9)。
		
	Output:对于每组输入数据，输出"YES"表示可以被整除，"NO"表示不能被整除。
	
	SampleInput:
		2
		4 2
		5 3
	
	SampleOutput:
		YES
		NO
	
**/
# include<iostream>
using namespace std;

int main() {
	int n;
	long long int a,b;
	cin >> n;
	while(n--) {
		cin >> a >> b;
		if(a%b == 0) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	} 
	return 0;
} 
