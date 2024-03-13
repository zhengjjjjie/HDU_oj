/**
	No.2051 Bitset
	Give you a number on base ten,you should output it on base two.(0 < n < 1000)
	
	Input:For each case there is a postive number n on base ten, end of file.
	Output:For each case output a number on base two.
	
	SampleInput:
		1
		2
		3
		
	SampleOutput:
		1
		10
		11
	
**/ 
# include<iostream>
# include<string>
# include<ctype.h>
using namespace std;

int main() {
	// 十进制转二进制
	int n;
	string s[1001];
	while(cin >> n && n) {
		int i = 0;
		while(n) {
			s[i++] = n % 2 + '0';
			n /= 2;
		}
		while(i--) {
			cout << s[i];
		}
		cout << endl;
	} 
	return 0;
}
