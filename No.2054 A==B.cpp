/**
	No.2054 A==B
	Give you two numbers A and B, if A is equal to B, you should print "YES", or print "NO".
	
	Input:each test case contains two numbers A and B. 
	Output:for each case, if A is equal to B, you should print "YES", or print "NO".
	
	SampleInput:
		1 2
		2 2
		3 3
		4 3
		
	SampleOutput:
		NO
		YES
		YES
		NO
		
	��⣺��Ŀ˵���ǱȽ�A B�Ƿ���ͬ ����ȴû˵��A��B�Ƿ�ΪС�����߷�Χ��С�ȡ�
		�������Ҫ���������档����Ҳ���ܴ浽�����ֱ�Ӷ��ַ���������бȽϣ���Ϊ�п�����1.00��1��
		������Ҫ�Ի�ȡ����a��b���л���Ȼ�����ַ����Ƚϡ�
		���⣬����a��b����Ĵ�С��Ҫ�����ܴ�Щ��֮ǰ��С�ˣ���ʱ�������������С��1000��10000�����ո�Ϊ100005����ac�ġ�  
		
		����˼·Ϊ����ȥ��������Ϊ���'ǰ��0'��Ȼ���ж��Ƿ�ΪС����С�����ֵ�'��0'����С�����ֶ����㣬��ȥ���㼰С���㣻 

**/ 
# include<iostream>
# include<string>
# include<ctype.h> 
using namespace std;

char a[100005], b[100005];

string erase_zero(string str) {
	//ɾ��'ǰ����'
	if(str[0] == '0') {
    	str.erase(0, str.find_first_not_of('0')); //find_first_not_of('0')�ҵ���һ������Ԫ�� 
    }
    
	int i,pos,len;
	pos = str.find(".");
	//���ж��Ƿ�ΪС��
	if(pos != string::npos) {
		len = str.length();
		//�ҵ�'����' �Ŀ�ʼλ��
		for(i=len-1; str[i]=='0'; i--);
		if(i == pos) {
			//���С�����ȫ��Ϊ�㣬��Ҫɾ��С���� 
			str.erase(i, len-i);
		} else {
			//ɾ��'����'
			str.erase(i+1, len-i-1); 
		} 
	} 
	return str;
}
int main() {
	string a,b;
	while(cin >> a >> b) {
		if(erase_zero(a) != erase_zero(b)) 
			cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
} 
