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
	
	ע��ע�����ӦΪ��д��������%X������16���Ƹ����ĸ��Ų��ǡ�-����ʾ��������Ҫ���������-���� 
		��Ŀ˵���������16���������Ϊ15λ��ת��Ϊ2���ƣ�ÿ1λ16���ƣ���תΪ4λ2��������60λ����32λint���Ѿ��޷����㡣
		���Բ���__int64��vc�п��ã���long long��װ���ɡ� �����ҵ�����д��ʹ����__int64���õ�vcû����long long��
	
**/ 
# include<iostream>
# include<string>
# include<ctype.h> 
using namespace std;

int main() {
	// ʮ�����Ƽӷ� 
//	int a,b;
//	int ans
	__int64 a,b; //�����16���������Ϊ15λ����ת��Ϊ60λ�����ƣ�32λint�޷����� 
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
