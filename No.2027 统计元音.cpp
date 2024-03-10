/**
	No.2027 ͳ��Ԫ��
	ͳ��ÿ��Ԫ����ĸ���ַ����г��ֵĴ���
	
	Input:�����������Ȱ���һ������n����ʾ����ʵ���ĸ�����Ȼ����n�г��Ȳ�����100���ַ���
	Output:����ÿ������ʵ�����5�У���ʽ���£�
			a:num1
			e:num2
			i:num3
			o:num4
			u:num5
			�������ʵ��֮����һ�����и�����
			
			���ر�ע�⣺���һ���������û�п��У���
	
	Sample Input:
		2
		aeiou
		my name is ignatius
		
	Sample Output:
		a:1
		e:1
		i:1
		o:1
		u:1
		
		a:2
		e:1
		i:3
		o:0
		u:1
		
**/
# include<iostream>
# include<string>
# include<ctype.h>
# include<map>
using namespace std;

int main() {
	int n;
	cin >> n;
	getchar();
	while(n--) {
		map<char, int> map = {
			{'a', 0},
			{'e', 0},
			{'i', 0},
			{'o', 0},
			{'u', 0}
		};
		string tag;
		getline(cin, tag);
		for(auto ch : tag) {
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
				map[ch]++;
		}
		for(auto it=map.begin(); it!=map.end(); it++){
        	cout<<it->first<<":"<<it->second<<endl;
    	}
	}
	
	return 0;
} 
