/**
	No.2004 �ɼ�ת�� 
	����һ���ٷ��Ƶĳɼ�t������ת���ɶ�Ӧ�ĵȼ�������ת���������£�
		90~100ΪA;
		80~89ΪB;
		70~79ΪC;
		60~69ΪD;
		0~59ΪE;
	
	Input:���������ж��飬ÿ��ռһ�У���һ���������
	Output:����ÿ���������ݣ����һ�С�����������ݲ���0~100��Χ�ڣ������һ�У���Score is error!��
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

	ע�⣺# include<bits/stdc++.h> //HDUoj��֧������ͷ�ļ� 
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
