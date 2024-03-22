/***
	No.2098 分拆素数和
	把一个偶数拆成两个不同素数的和，有几种拆法呢？
	
	Input:输入包含一些正的偶数，其值不会超过10000，个数不会超过500，若遇0，则结束。
	Output:对应每个偶数，输出其拆成不同素数的个数，每个结果占一行。
	
	SampleInput:
		30
		26
		0
	
	SampleOutput:
		3
		2
	
***/
# include<iostream>
# include<algorithm>
using namespace std;

bool isPrime(int num) { //判断素数 
	if(num < 2) return false;
	if(num == 2) return true;
	if(num%2 == 0) return false; 
	
	for(int i=2; i<=sqrt(num); i++) {
		if(num%i == 0) return false;
	}
	return true;
} 
int main() {
	//暴力法 
	int n;
	while(cin >> n, n) {
		int cnt = 0;
		for(int i=2; i<n/2; i++) { //n为偶数，由两个不同素数相加 
			if(isPrime(i) && isPrime(n-i)) {
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
