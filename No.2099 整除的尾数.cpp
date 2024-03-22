/***
	No.2099 整除的尾数
	一个整数，只知道前几位，不知道末二位，被另一个整数除尽了，那么该数的末二位该是什么呢？
	
	Input:输入数据有若干组，每组数据包含二个整数a，b（0<a<10000, 10<b<100），若遇到0 0则处理结束。
	Output:对应每组数据，将满足条件的所有尾数在一行内输出，格式见样本输出。同组数据的输出，其每个尾数之间空一格，行末没有空格。
	
	SampleInput:
		200 40
		1992 95
		0 0
	
	SampleOutput:
		00 40 80
		15
	
***/
# include<iostream>
using namespace std;

int main() {
	int a,b;
	while(cin >> a >> b, a || b) {
		for(int i=0; i<100; i++) {
			if((a*100+i) % b == 0) {
				printf("%02d ", i);
			}
		}
		cout << endl;
	}
	return 0;
} 
