/***
	No.2087 ��������-KMP�㷨��˫ָ�벻���ݣ� 
	һ�黨������������Щͼ��������һ��ֱ�ӿ��õ�С����������Ҳ��һЩͼ�������ڸ����Ļ�������С����������һ���ܴӻ������о����ܼ�������С�������أ�
	
	Input:�����к���һЩ���ݣ��ֱ��ǳɶԳ��ֵĻ�������С�������䲼�������ÿɼ�ASCII�ַ���ʾ�ģ��ɼ���ASCII�ַ��ж��ٸ��������Ļ���Ҳ�ж����ֻ�����
		��������С�������ᳬ��1000���ַ������������#�ַ������ٽ��й�����
 
	Output:����ܴӻ��Ʋ��м��������С�������������һ�鶼û�У��Ǿ�����ʵʵ���0��ÿ�����֮��Ӧ���С�
	
	SampleInput:
		abcde a3
		aaaaaa  aa
		#
		
	SampleOutput:
		0
		3
		
***/
# include<iostream>
# include<string>
# include<vector>
using namespace std;

vector<int> nextarr(1001, 0); //next���� 
string s1, s2; //��������С���� (ע�⣺��������Σ���Ҫ����ȫ�ֱ���)

void getnext() {
	int n = s2.size();
	int k = -1;
	nextarr[0] = -1;
	for(int i=1; i<n; i++) {
		while(k>=0 && s2[k+1]!=s2[i]) { //ǰ��׺����ͬ
			k = nextarr[k]; //��ǰ���� 
		}
		if(s2[k+1] == s2[i]) { //�ҵ���ͬ��ǰ��׺
			k++;
		} 
		nextarr[i] = k; 
	}
} 

int kmp() {
	int p1 = 0, p2 = 0; //˫ָ�벻���� 
	int cnt = 0;
	while(p1 < s1.size()) {
		if (p2==-1 || s1[p1]==s2[p2]) {
			p1++; p2++;
		} else {
			p2 = nextarr[p2];
		}
		if(p2 == s2.size()) {
			cnt++;
			p2 = 0;
		}
	}
	return cnt;
}

int main() {
	//KMP�㷨
	while(cin >> s1, s1!="#") {
		cin >> s2;
		getnext(); //��ȡnext����
		cout << kmp() << endl;
	} 
	return 0;
} 
