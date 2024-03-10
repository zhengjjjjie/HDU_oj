/**
	No.2007 ƽ������������  
	����һ���������������������������ż����ƽ�����Լ�����������������
	
	Input:�������ݰ����������ʵ����ÿ�����ʵ������һ�У�����������m��n���
	Output:����ÿ���������ݣ����һ�У�Ӧ������������x��y���ֱ��ʾ�ö�����������������ż����ƽ�����Լ����������������͡� 
			�������Ϊ32λ�������Ա�������

	sample Input:
		1 3
		2 5
	sample Output:
		4 28
		20 152
	ע�⣺�������׳���ĵط����ڣ�Ҫ����������������Ĵ�С��һ����С����ǰ������ں�
**/ 
# include<iostream>
using namespace std;

int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF) {
		int squareSum = 0;
		int cubicSum = 0;
		int tmp;
		if(a > b) { //��֤ a<b 
			tmp = a;
			a = b;
			b = tmp;
		}
		for(int i=a; i<=b; i++) { 
			if(i % 2 == 0) {
				squareSum += i*i;
			} else {
				cubicSum += i*i*i;
			}
		}
		cout << squareSum << " " << cubicSum << endl;
	} 
	return 0; 
} 
