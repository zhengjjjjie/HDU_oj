/**
	No.2002 ��������� 
	��������İ뾶ֵ������������
	
	Input:���������ж��飬ÿ��ռһ�У�ÿ�а���һ��ʵ������ʾ��İ뾶
	Output:�����Ӧ��������������ÿ���������ݣ����һ�У�������������λС��
	Sample Input:
		1
		1.5
	Sample Output:
		4.189
		14.137
**/
# include<iostream>
# include<math.h>
using namespace std;
const double pi = 3.1415927;
int main(){
	double r;
	while(cin >> r) {
		printf("%.3f\n", 4.0/3.0 * pi * pow(r,3));
	}
	return 0;
}
