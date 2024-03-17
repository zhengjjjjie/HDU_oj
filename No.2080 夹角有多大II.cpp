/***
	No.2080 �н��ж��II
	���xhd���ٵ������������ģ���һ��ƽ�����������㣬��������ֱ��ԭ������ߵļнǵĴ�С��

	ע���нǵķ�Χ[0��180]�������㲻����Բ�ĳ��֡�
	
	Input:�������ݵĵ�һ����һ������T����ʾ��T�����ݡ�
		ÿ���������ĸ�ʵ��x1,y1,x2,y2�ֱ��ʾ�����������,��Щʵ���ķ�Χ��[-10000,10000]��
		
	Output:����ÿ���������ݣ�����нǵĴ�С��ȷ��С�������λ��
	
	SampleInput:
		2
		1 1 2 2
		1 1 1 0
		
	SampleOutput:
		0.00
		45.00
		
	ע������ⲻ�ѣ��������Ҷ�������������������нǵ����ҡ�
		
		cos<a,b>=a*b/(|a|*|b|)
		a*b = x1*x2+y1*y2
		|a| = ��(x12+y12)
	
		acos()�Ƿ����Һ�����cos��= -1�����Ԧ�= acos(-1)
***/ 
# include<iostream>
# include<cmath>
using namespace std;

const double pi = acos(-1.0);

int main() {
	int T;
	cin >> T;
	while(T--) {
		double x1,y1,x2,y2;
		cin >> x1 >> y1 >> x2 >> y2; 
		double s1 = x1*x2 + y1*y2;
        double s2 = sqrt(x1*x1 + y1*y1) * sqrt(x2*x2 + y2*y2);
        double res = acos(s1/s2)/pi*180;
        printf("%.2f\n",res);
	}
	return 0;
}
