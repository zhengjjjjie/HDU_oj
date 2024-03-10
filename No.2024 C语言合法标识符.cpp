/**
	No.2024 C���ԺϷ���ʶ�� 
	����һ���ַ������ж����Ƿ���C�ĺϷ���ʶ��
		
	Input:�������ݰ����������ʵ�������ݵĵ�һ����һ������n,��ʾ����ʵ���ĸ�����Ȼ����n���������ݣ�ÿ����һ�����Ȳ�����50���ַ���
	Output:����ÿ���������ݣ����һ�С��������������C�ĺϷ���ʶ���������"yes"�����������no��
	sample Input:
		3
		12ajf
		fi8x_a
		ff  ai_2
 
	sample Output:
		no
		yes
		no
	
**/ 
# include<iostream>
# include<ctype.h> //����ַ� 
# include<string> 
# include<fstream>
using namespace std;

bool isItem(char c) //��Ч��ʶ�� 
{
    if (c >= '0' && c <= '9' || c >= 'A' && c < 'Z' || c >= 'a' && c <= 'z' || c == '_')
        return true;
    return false;
}
bool isValid(string tag) {
	//���ֿ�ͷ
	if(isdigit(tag[0])) {
		return false;
	}
	//����Ч��ʶ����ͷ 
	if(!isItem(tag[0])) {
		return false;
	} 
	 
	for(int i=1; i<tag.size(); i++) {
		if(!isItem(tag[i]))
			return false;
	}
	return true;
}
int main(){
	int n;
	while(cin >> n) {
		getchar(); //ȥ�����з� 
		for(int i=0; i<n; i++) {
			string tag;
			getline(cin, tag); //��ȡ���ո��һ�д���
			if(isValid(tag)) {
				puts("yes");
			} else {
				puts("no");
			}
		} 
	} 
	return 0;
} 
