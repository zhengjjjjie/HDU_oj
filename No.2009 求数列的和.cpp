/**
	No.2009 �����еĺ� 
	���еĶ������£�
		���еĵ�һ��Ϊ n���Ժ����Ϊǰһ���ƽ�����������е�ǰm��ĺ͡�
	
	Input:���������ж��飬ÿ��ռһ�У�����������n��n<10000����m(m<1000)��ɣ�n��m�ĺ�����ǰ������
	Output:����ÿ���������ݣ���������еĺͣ�ÿ������ʵ��ռһ�У�Ҫ�󾫶ȱ���2λС����

	sample Input:
		81 4
		2 2
 
	sample Output:
		94.73
		3.41
		
**/ 
# include<iostream>
# include<cmath>
using namespace std;

int main(){
	// �����еĺ�
	int m;
	double n;
	while(scanf("%lf%d", &n,&m)!=EOF) {
		double sum=0;
		for(int i=0; i<m; i++) {
			sum += n;
			n = sqrt(n);
		}
		printf("%.2f\n", sum);
	} 
	 
	return 0; 
} 
