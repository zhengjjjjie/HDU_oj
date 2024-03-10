/**
	No.2011 ����ʽ��� 
	����ʽ���������£�
		1 - 1/2 + 1/3 - 1/4 + 1/5 - 1/6 + ...
		������������ö���ʽ��ǰn��ĺ�
	
	Input:����������2����ɣ�������һ��������m��m<100������ʾ����ʵ���ĸ������ڶ��а���m����������
		����ÿһ������(������Ϊn,n<1000������ö���ʽ��ǰn��ĺ�
	Output:����ÿ������ʵ��n��Ҫ���������ʽǰn��ĺ͡�ÿ������ʵ�������ռһ�У��������2λС��

	sample Input:
		2 
		1 2
 
	sample Output:
		1.00
		0.50
		
**/ 
# include<iostream>
using namespace std;

int main(){
	int m,n;
	scanf("%d", &m);
	for(int i=0; i<m; i++) {
		cin >> n;
		double sum =0, sign=1;
		for(int j=1; j<=n; j++) {
			sum += sign * (1.0 / j);
			sign = -sign;
		}
		printf("%.2f\n", sum); 
	}
	return 0; 
} 
