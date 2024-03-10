/**
	No.2004 成绩转换 
	输入一个百分制的成绩t，将其转换成对应的等级，具体转换规则如下：
		90~100为A;
		80~89为B;
		70~79为C;
		60~69为D;
		0~59为E;
	
	Input:输入数据有多组，每组占一行，由一个整数组成
	Output:对于每组输入数据，输出一行。如果输入数据不在0~100范围内，请输出一行：“Score is error!”
	Sample Input:
		56
		67
		100
		123
	Sample Output:
		E
		D
		A
		Score is error!

	注意：# include<bits/stdc++.h> //HDUoj不支持万能头文件 
**/
 
# include<iostream>
# include<cmath>
using namespace std;
int main() {
	int num;
	while(cin >> num) {
		if(num>=90 && num<=100) {
			printf("A\n");
		}else if(num>=80 && num<=89) {
			printf("B\n");
		}else if(num>=70 && num<=79) {
			printf("C\n");
		}else if(num>=60 && num<=69) {
			printf("D\n");
		}else if(num>=0 && num<=59) {
			printf("E\n");
		}else{
			printf("Score is error!");
		}
	} 
	return 0;
}
