/**
	No.2076 �н��ж��(��Ŀ���޸�,ע�����)
	ʱ����ĺÿ죬һ��ѧ�ھ���ô�Ĺ�ȥ�ˣ�xhd��ɵɵ�Ŀ��ű����ڶ����ݵĿ�����ͻȻ����֪��������ʱ��ͷ�
	��ļн��Ƕ��١�����xhd֪����ֻ��ʱ�䣬��������������нǡ�

	ע���нǵķ�Χ[0��180]��ʱ��ͷ����ת����������������ɢ�ġ�
		
	Input:�������ݵĵ�һ����һ������T����ʾ��T�����ݡ�
		ÿ����������������h(0 <= h < 24)��m(0 <= m < 60)��s(0 <= s < 60)�ֱ��ʾʱ���֡��롣
		
	Output:����ÿ���������ݣ�����нǵĴ�С���������֡�
	
	SampleInput:
		2
		8 3 17
		5 13 30
	
	SampleOutput:
		138
		75
	
**/
# include<iostream>
# include<cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	double h,m,s; //ע������Ҫ��double���ͣ�������������������� 
	double theta_h,theta_m,res;
	while(n--) {
		cin >> h >> m >> s;
		h = int(h) % 12;
		theta_h = (h + m/60 + s/3600) * 360 / 12; //theta_h��ʾʱ����0��ļн�
		theta_m = (m + s/60) * 360 / 60; //theta_m��ʾ������0��λ�õļн�

		res = floor(fabs(theta_h-theta_m)>180? 360-fabs(theta_h-theta_m): fabs(theta_h-theta_m));
		printf("%.0lf\n", res); //ע���нǵķ�Χ[0��180]
	} 
	return 0;
} 
