/**
	No.2017 �ַ���ͳ�� 
	���ڸ�����һ���ַ�����ͳ�����������ַ����ֵĴ���
		
	Input:���������ж��У���һ����һ������n����ʾ����ʵ���ĸ������������n�У�ÿ�а���һ������ĸ��������ɵ��ַ���
	Output:����ÿ������ʵ��������ô�����ֵ�ĸ�����ÿ�����ռһ��

	sample Input:
		2
		asdfasdf123123asdfasdf
		asdf111111111asdfasdfasdf

 
	sample Output:
		6
		9

**/ 
# include<iostream>
# include<string> 
using namespace std;

//bool isNum(char c) { //�ж�c�ǲ������� 
//	if(c-'0'>=0 && c-'0'<=9) {
//		return true;
//	}
//	return false;
//}

int main(){
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		int cnt = 0;
		string row;
		cin >> row;
		for(auto i : row) {
			if(isdigit(i)) { //ͳ�������ַ� C++�Դ�isdigit() 
				cnt++;
			}
		}
		cout << cnt << endl; 
	}	
	return 0; 
} 
