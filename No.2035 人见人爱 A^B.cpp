/**
	No.2035 �˼��˰� A^B
	��A^B�������λ����ʾ��������
	˵����A^B�ĺ����ǡ�A��B�η���
	
	Input:�������ݰ����������ʵ����ÿ��ʵ��ռһ�У�������������A��B��ɣ�1<=A,B<=10000����
		���A=0, B=0�����ʾ�������ݵĽ�������������

	Output:����ÿ������ʵ���������A^B�������λ��ʾ��������ÿ�����ռһ��
	
	Sample Input:
		2 3
		12 6
		6789 10000
		0 0
		
	Sample Output:
		8
		984
		1
	
	��⣺���ֻҪ����λ����ʵ����ֻ����ģ��1000��Ľ���������� 
**/
# include<iostream>
# include<algorithm> 
using namespace std;

int main() {
	int a, b;
	// a�� b�η� 
	while(scanf("%d%d",&a,&b)!=EOF, a || b) {
		int res = 1;
		while(b--) {
			res = res * a % 1000;
		} 
		cout << res << endl;
	} 
	return 0;
}
