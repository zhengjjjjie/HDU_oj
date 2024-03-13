/**
	No.2055 An easy problem
	we define f(A) = 1, f(a) = -1, f(B) = 2, f(b) = -2, ... f(Z) = 26, f(z) = -26;
	Give you a letter x and a number y , you should output the result of y+f(x).
	
	Input:On the first line, contains a number T.then T lines follow, each line is a case.each case contains a letter and a number.
	Output:for each case, you should the result of y+f(x) on a line.
	
	SampleInput:
		6
		R 1
		P 2
		G 3
		r 1
		p 2
		g 3
		
	SampleOutput:
		19
		18
		10
		-17
		-14
		-4

**/ 
# include<iostream>
using namespace std;

int main() {
	// Output Limit Exceeded:不能用while(cin>>n, n)只能输入一次n 
	// A-65 a-97
	int n;
	char c; long long int y;
	cin >> n;
	getchar(); 
	for(int i=0; i<n; i++) {
		cin >> c >> y;
		getchar(); //去除回车符 
		if(c>='A' && c<='Z') {
			printf("%d\n", y+c-64);
		}else {
			printf("%d\n", y-c+96);
		}
	}
	
	return 0;
} 
