/**
	No.2053 Switch Game
	There are many lamps in a line. All of them are off at first. A series of operations are carried out on 
	these lamps. On the i-th operation, the lamps whose numbers are the multiple of i change the condition
	 ( on to off and off to on ).
	
	Input:Each test case contains only a number n (0<n<=10^5) in a line.
	Output:Output the condition of the n-th lamp after infinity operations (0-off, 1-on).
	
	SampleInput:
		1
		5
		
	SampleOutput:
		1
		0

		Consider the second test case:
		
		The initial condition	   : 0 0 0 0 0 …
		After the first operation  : 1 1 1 1 1 …
		After the second operation : 1 0 1 0 1 …
		After the third operation  : 1 0 0 0 1 …
		After the fourth operation : 1 0 0 1 1 …
		After the fifth operation  : 1 0 0 1 0 …
		
		The later operations cannot change the condition of the fifth lamp any more. So the answer is 0.
	
**/ 
# include<iostream>
using namespace std;

int a[10001]={0};
int main() {
	// 暴力解法-超时 
	int n;
	while(cin >> n, n) {
		// 输入n，有 n个灯泡，n次operations
		if(n<0) continue;
		for(int i=1; i<=n; i++) { //i:1-n n次operations 
			for(int j=1; j<=n; j++) { //n个灯遍历 
				if(j%i == 0) { //对能被i整除的灯operate 
					a[j]=!a[j]; 
				}
			}
		}
		cout << a[n] << endl;
	}
	return 0;
} 
