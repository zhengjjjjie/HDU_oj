/**
	No.2057 A + B Again
	There must be many A + B problems in our HDOJ , now a new one is coming.
	Give you two hexadecimal integers , your task is to calculate the sum of them,and print it in hexadecimal too.
	Easy ? AC it !
	
	Input:The input contains several test cases, please process to the end of the file.
		Each case consists of two hexadecimal integers A and B in a line seperated by a blank.
		The length of A and B is less than 15.
	Output:For each test case,print the sum of A and B in hexadecimal in one line.
	
	SampleInput:
		+A -A
		+1A 12
		1A -9
		-1A -12
		1A -AA
		
	SampleOutput:
		0
		2C
		11
		-2C
		-90
	
	注：注意输出应为大写，所以是%X。此外16进制负数的负号不是“-”表示，所以需要自行输出“-”。 
		题目说明，输入的16进制数最大为15位，转换为2进制（每1位16进制，可转为4位2进制数）60位，则32位int型已经无法满足。
		可以采用__int64（vc中可用）或long long来装即可。 这里我的最终写法使用了__int64（用的vc没法用long long）
	
**/ 
# include<iostream>
# include<string>
# include<ctype.h> 
using namespace std;

int main() {
	// 十六进制加法 
//	int a,b;
//	int ans
	__int64 a,b; //输入的16进制数最大为15位，可转化为60位二进制，32位int无法满足 
	__int64 ans;
	
//	while(scanf("%x%x",&a,&b)!=EOF) {
	while(scanf("%I64x%I64x",&a,&b)!=EOF) {
		ans = a + b;
		if(ans < 0) {
			printf("-");
			ans *= -1;
		} 
//		printf("%X\n", ans);
		printf("%I64X\n",ans);
	} 
	return 0;
}
