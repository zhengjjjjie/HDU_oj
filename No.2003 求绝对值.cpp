/**
	No.2003 �����ֵ 
	��ʵ���ľ���ֵ
	
	Input:���������ж��飬ÿ��ռһ�У�ÿ�а���һ��ʵ��
	Output:����ÿ���������ݣ�������ľ���ֵ��Ҫ��ÿ���������һ�У����������λС��
	Sample Input:
		123
		-234.00
	Sample Output:
		123.00
		234.00
**/
//# include<bits/stdc++.h> //HDUoj��֧������ͷ�ļ� 
# include<iostream>
# include<cmath> 
using namespace std;
int main() {
	double number;
	while(cin >> number) {
		printf("%.2f\n", abs(number));
	} 
	return 0;
}
