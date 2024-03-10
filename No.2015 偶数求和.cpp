/**
	No.2015 ż����� 
	��һ������Ϊn(n<=100)�����У������ж���Ϊ��2��ʼ�ĵ�������ż��������Ҫ���㰴��˳��ÿm�������һ��ƽ��ֵ��
	��������m��������ʵ��������ƽ��ֵ����������ƽ��ֵ���С�
		
	Input:���������ж��飬ÿ��ռһ�У���������������n��m��n��m�ĺ�������������
	Output:����ÿ���������ݣ����һ��ƽ��ֵ���У�ÿ�����ռһ�С�

	sample Input:
		3 2
		4 2
 
	sample Output:
		3 6
		3 7

**/ 
# include<iostream>
using namespace std;

int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF) {
		int res = 0;
		for(int i=1; i<=n; i++) {
			res += 2*i;
			if(i%m==0){
				printf("%d ", res / m);
				res = 0; //��ԭ 
			}else if(i==n) {
				printf("%d", res / (i % m)); 
			}
		}
	}
	return 0; 
} 
