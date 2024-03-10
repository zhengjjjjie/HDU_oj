/**
	No.2025 �������Ԫ��
	���������ÿ���ַ������������е������ĸ���ڸ���ĸ��������ַ�����(max)��
		
	Input:�������ݰ����������ʵ����ÿ��ʵ����һ�г��Ȳ�����100���ַ�����ɣ��ַ������ɴ�Сд��ĸ����
	Output:����ÿ������ʵ�����һ���ַ���������Ľ���ǲ����ַ�����(max)����Ľ����
			������ڶ��������ĸ������ÿһ�������ĸ���涼����"(max)"
	sample Input:
		abcdefgfedcba
		xxxxx
 
	sample Output:
		abcdefg(max)fedcba
		x(max)x(max)x(max)x(max)x(max)
	
	ע��A��ASCII����65��a��ASCII����97
	
**/ 
# include<iostream>
# include<string> 
# include<ctype.h>
using namespace std;

int main(){
	string tag;
	while(cin >> tag) {
		char maxAlpha = 'A';
		for(int i=0; i<tag.size(); i++) {
			if(tag[i] > maxAlpha) {
				maxAlpha = tag[i];
			}
		}
		for(auto i : tag) {
			cout << i;
			if(i == maxAlpha) {
				cout << "(max)";
			}
		}
		cout << endl;
	}
	return 0;
} 
