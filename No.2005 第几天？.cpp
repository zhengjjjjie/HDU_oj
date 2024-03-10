/**
	No.2005 �ڼ��죿 
	����һ�����ڣ������������Ǹ���ĵڼ��졣
	
	Input:���������ж��飬ÿ��ռһ�У����ݸ�ʽΪYYYY/MM/DD��ɣ�����μ�sample input ,���⣬��������ȷ�����е����������ǺϷ���
	Output:����ÿ���������ݣ����һ�У���ʾ�������Ǹ���ĵڼ���
	Sample Input:
		1985/1/20
		2006/3/12
	Sample Output:
		20
		71

	ע�⣺# include<bits/stdc++.h> //HDUoj��֧������ͷ�ļ� 
**/
 
# include<iostream>
# include<cmath>
using namespace std;
const int runDay[12] = {31,29,31,30,31,30,31,31,30,31,30,31}; //���� 
const int monthDay[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

bool isRunYear(int year) { //�ж��Ƿ�Ϊ���� 
	if(year%4 == 0 && year%100 != 0) {
		return true;
	}
	if(year%400 == 0) {
		return true;
	}
	return false;
} 
int main() {
	int year,month,day;
	while(scanf("%d/%d/%d",&year,&month,&day) != EOF) {
		int res = 0;
		if(isRunYear(year)) {
			for(int i=0; i<month-1; i++) {
				res+=runDay[i];
			}
		}else {
			for(int i=0; i<month-1; i++) {
				res+=monthDay[i]; 
			}
		}
		res += day;
		cout << res << endl;
	}
	return 0;
}
