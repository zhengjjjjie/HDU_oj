/**
	No.2026 ����ĸ���д
	����һ��Ӣ�ľ��ӣ���ÿ�����ʵĵ�һ����ĸ�ĳɴ�д��ĸ
	Input:�������ݰ����������ʵ����ÿ������ʵ����һ�����Ȳ�����100��Ӣ�ľ��ӣ�ռһ��
	Output:���������Ҫ���д���Ӣ�ľ���
	
	Sample Input:
		i like acm
		i want to get an accepted
		
	Sample Output:
		I Like Acm
		I Want To Get An Accepted
		
**/
# include<iostream>
# include<string>
# include<ctype.h>
using namespace std;

int main() {
	string tag;
	while(getline(cin, tag)) {
		cout << (char) toupper(tag[0]);
		for(int i=1; i<tag.size(); i++) {
			if(tag[i-1] == ' '){
				cout << (char)toupper(tag[i]);
			} else {
				cout << tag[i]; 
			}
		} 
		cout << endl;
	}
	return 0;
}
