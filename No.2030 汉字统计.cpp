/**
	No.2030 ����ͳ��
	ͳ�Ƹ����ı��ļ��к��ֵĸ���
	
	Input:�����ļ����Ȱ���һ������n����ʾ����ʵ���ĸ�����Ȼ����n���ı�
	Output:����ÿһ���ı���������еĺ��ֵĸ�����ÿ������ʵ�������ռһ�С�
			[Hint:]�Ӻ��ֻ�������ص㿼��~
	
	Sample Input:
		2
		WaHaHa! WaHaHa! ������ڲ�˵��Ҫ˵ֻ˵��ͨ��WaHaHa! WaHaHa!
		���Ͼ�Ҫ��ĩ������Are you ready?
		
	Sample Output:
		14
		9
		
**/
# include<iostream>
# include<string>
# include<ctype.h>
using namespace std;

int main() {
	int n;
	while(cin >> n && n) {
		getchar();
		while(n--) {
			string tag;
			getline(cin, tag);
			int cnt = 0;
			for(int i=0; i<tag.size(); i++) {
				// ���ֻ��������ַ�Ϊ 1����ʾ��������ռ����char��С
				if(tag[i] < 0) {
					i += 1;
					cnt ++; 
				}
			} 
			cout << cnt << endl;
		}
	} 
	return 0;
} 
