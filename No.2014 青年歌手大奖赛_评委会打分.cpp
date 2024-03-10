/**
	No.2014 ������ִ���_��ί���� 
	������ִ����У���ί�������ѡ�ִ�֡�ѡ�ֵ÷ֹ���Ϊȥ��һ����߷ֺ�һ����ͷ֣�Ȼ�����ƽ���÷֣��������ĳѡ�ֵĵ÷֡�
		
	Input:���������ж��飬ÿ��ռһ�У�ÿ�еĵ�һ������n(2<n<=100)����ʾ��ί��������Ȼ����n����ί�Ĵ�֡�
	Output:����ÿ���������ݣ����ѡ�ֵĵ÷֣��������2λС����ÿ�����ռһ�С�

	sample Input:
		3 99 98 97
		4 100 99 98 97
 
	sample Output:
		98.00
		98.50

**/ 
# include<iostream>
using namespace std;

int main(){
	int n;
	while(scanf("%d", &n)!=EOF) {
		int sum = 0,score;
		int max=INT_MIN ,min=INT_MAX;
		for(int i=0; i<n; i++) {
			cin >> score;
			if(score > max) {
				max = score;
			}
			if(score < min) {
				min = score;
			}
			sum += score;
		}
		printf("%.2f\n",(double)(sum - max -min) / (n-2));
	} 
	
	return 0; 
} 
