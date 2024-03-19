/***
	No.2086 A1 = ?-�Ż�����ѧ�����Ƶ��� 
	�����·��̣�Ai = (Ai-1 + Ai+1)/2 - Ci (i = 1, 2, 3, .... n).
	������A0, An+1, �� C1, C2, .....Cn.
	���̼���A1 = ?
	
	Input:��������������ʵ����
		����ÿ��ʵ����������һ��������n,(n <= 3000); Ȼ����2����a0, an+1.��������n��ÿ����һ����ci(i = 1, ....n);
		�������ļ�������������
	Output:����ÿ������ʵ������һ���������õ�a1(����2λС��).
	
	SampleInput:
		1
		50.00
		25.00
		10.00
		2
		50.00
		25.00
		10.00
		20.00
		
	SampleOutput:
		27.50
		15.00
		
***/
# include<iostream>
# include<vector>
using namespace std;

int main() {
	//��ѧ���� 
	//������϶�n������жϣ��ᵼ��oj��ʱ�� 
	int n;
	while(cin >> n) {
		double a0, an1;
		vector<double> c(n+1, 0); //��ʼ��c[] 
		vector<double> sum(n+1, 0); //c��ǰ׺�� 
		cin >> a0 >> an1;
		
		double sum_n = 0; 
		for(int i=1; i<=n; i++) {
			cin >> c[i];
			sum[i] = sum[i-1] + c[i];
			sum_n += sum[i];       //����ǰ׺�����飬һ��ѭ���Ѻ����
		}
		double a1 = 1.0 * (n*a0+an1-2*sum_n) / (n+1);
		printf("%.2f\n", a1);
	}
	return 0;
}
