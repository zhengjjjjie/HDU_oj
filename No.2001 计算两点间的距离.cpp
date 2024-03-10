/**
	No.2001 ���������ľ���
	�����������꣨X1,Y1��,��X2,Y2��,���㲢��������ľ���
	
	Input:���������ж��飬ÿ��ռһ�У���4��ʵ����ɣ��ֱ��ʾx1,y1,x2,y2,����֮���ÿո����
	Output:����ÿ���������ݣ����һ�У����������λС��
	Sample Input:
		0 0 0 1
		0 1 1 0
	Sample Output:
		1.00
		1.41
**/
# include<iostream>
# include <cmath>
using namespace std;
int main() {
	double point[4];
	// ���ڴ��ո�Ĺ̶���ʽ��������������õ����뷽��
	while (scanf("%lf%lf%lf%lf", &point[0], &point[1], &point[2], &point[3]) != EOF) {
		double x = abs(point[0] - point[2]);
		double y = abs(point[1] - point[3]);
		printf("%.2f\n", sqrt(x * x + y * y));
	}
	return 0;
}
