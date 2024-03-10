/**
	No.2008 ��ֵͳ�� 
	ͳ�Ƹ�����n�����У���������������ĸ�����
	
	Input:���������ж��飬ÿ��ռһ�У�ÿ�еĵ�һ����������n��n<100������ʾ��Ҫͳ�Ƶ���ֵ�ĸ�����Ȼ����n��ʵ����
		���n=0�����ʾ������������в�������
	Output:����ÿ���������ݣ����һ��a,b��c���ֱ��ʾ�����������и�������������ĸ�����

	sample Input:
		6 0 1 2 3 -1 0
		5 1 2 3 4 0.5
		0 
	sample Output:
		1 2 3
		0 0 5
		
**/ 
# include<iostream>
using namespace std;

int main(){
	while(true) {
		int n;
		scanf("%d", &n);
		if(n == 0) break;
		int positive=0, zero=0, negative=0;
		for (int i=0; i<n; i++) {
			//ע�����⣬���ﴫ�����ʵ��
			double u;
			cin >> u;
			if(u>0) {
				positive++;
			} else if(u==0) {
				zero++;
			} else{
				negative++;
			}
			
		}
		printf("%d %d %d\n",negative, zero, positive); 
	}
	
	return 0; 
} 
