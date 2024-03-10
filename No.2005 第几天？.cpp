/**
	No.2005 第几天？ 
	给定一个日期，输出这个日期是该年的第几天。
	
	Input:输入数据有多组，每组占一行，数据格式为YYYY/MM/DD组成，具体参见sample input ,另外，可以向你确保所有的输入数据是合法的
	Output:对于每组输入数据，输出一行，表示该日期是该年的第几天
	Sample Input:
		1985/1/20
		2006/3/12
	Sample Output:
		20
		71

	注意：# include<bits/stdc++.h> //HDUoj不支持万能头文件 
**/
 
# include<iostream>
# include<cmath>
using namespace std;
const int runDay[12] = {31,29,31,30,31,30,31,31,30,31,30,31}; //闰年 
const int monthDay[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

bool isRunYear(int year) { //判断是否为闰年 
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
