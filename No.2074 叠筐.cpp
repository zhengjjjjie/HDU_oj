/**
	No.2074 ���� 
	��Ҫ��ʱ�򣬾Ͱ�һ������С��һȦ�Ŀ����ȥ��ʹ�ô������¿�ʱ���߿�ɫ����
	�����������Ҫ�ü��������ɣ��ÿ������
		
	Input:������һ��������Ԫ�飬�ֱ��ǣ����ߴ�n��nΪ����0<n<80���������������Ļ�ɫ�ַ������ɫ�ַ���
		����߶�ΪASCII�ɼ��ַ���
		
	Output:�������һ��Ŀ�ͼ�������Ļ�ɫ�����ɫ�ַ����ڲ��𽻴������������ʱ�������Ľ����Ǳ���ĥ����
		���������֮��Ӧ��һ�м����
	
	SampleInput:
		11 B A
		5 @ W
	
	SampleOutput:
		 AAAAAAAAA 
		ABBBBBBBBBA
		ABAAAAAAABA
		ABABBBBBABA
		ABABAAABABA
		ABABABABABA
		ABABAAABABA
		ABABBBBBABA
		ABAAAAAAABA
		ABBBBBBBBBA
		 AAAAAAAAA 
		
		 @@@ 
		@WWW@
		@W@W@
		@WWW@
		 @@@ 

	ע��������Ŀ No.2052 Picture
	
**/
# include<iostream>
using namespace std;

int main() {
	int n;
	char c1,c2;
	char res[85][85];
	int t=0;//�������� 
	while(cin >> n >> c1 >> c2) { //B A
		if(t++) cout << endl;
		if(n/2%2==0) swap(c1,c2); 
		for(int k=0; k<n; k++){ //�������ȱ��� 
			for(int i=k; i<n-k; i++) { //�ڲ�ȫˢ��һɫ������ˢǽ�� 
				for(int j=k; j<n-k; j++) {
					if(k%2) //kΪ���� 
                        res[i][j]=c1;
                    else
                        res[i][j]=c2;
				}
			} 
		} 
		if(n!=1) {
			res[0][n-1]=res[0][0]=res[n-1][0]=res[n-1][n-1]=' ';
		}
		//���
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				cout << res[i][j];
			}
			cout << endl;
		}
		
	}
	return 0;
}
