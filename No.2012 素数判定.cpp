/**
	No.2012 �����ж� 
	���ڱ��ʽ n^2+n+41���� n�ڣ�x,y����Χ��ȡ����ֵʱ������x,y��(-39<=x<y<=50)���ж��ñ��ʽ��ֵ�Ƿ�Ϊ����
	
	Input:���������ж��飬ÿ��ռһ�У�����������x��y��ɣ���x=0,y=0ʱ����ʾ������������в�������
	Output:����ÿ��������Χ�ڵ�ȡֵ��������ʽ��ֵ��Ϊ�����������"OK",�����������Sorry��,ÿ�����ռһ��

	sample Input:
		0 1 
		0 0
 
	sample Output:
		OK
		
**/ 
# include<iostream>
# include<cmath>
using namespace std;

bool isPrime(int num){ //�ж����� 
	for(int i=2; i<=sqrt(num); i++) {
		if(num % i == 0) {
			return false;
		}
	}
	return true;
}
int main(){
	int x,y,i;
	while(scanf("%d%d",&x,&y) && (x || y)) {
		for(i=x; i<y; i++) {
			//n^2+n+41
			if(!isPrime(pow(i,2)+i+41)){
				break;
			}
		}
		if(i < y) printf("Sorry\n"); //����ѭ����ǰ���� 
		else printf("OK\n");
	} 
	return 0; 
} 
