/***
	No.2097 Sky��
	Sky��Сϲ�����صĶ��������������������ر����У�һ��żȻ�Ļ��ᣬ��������һ����Ȥ����λ��2992�������������ʮ��������ʾ������λ����֮��Ϊ2+9+9+2=22��
	����ʮ��������BB0������λ����֮��ҲΪ22��ͬʱ����ʮ����������ʾ1894������λ����֮��ҲΪ22�������������ɰ���
	Sky�ǳ�ϲ��������λ�����������ķ��֣�������������������ΪSky����
	����Ҫ�ж��������������е��鷳������ô���������æ���ж��κ�һ��ʮ���Ƶ���λ�����ǲ���Sky���ɡ�
	
	Input:���뺬��һЩ��λ�����������Ϊ0�������������
	Output:��nΪSky�����������#n is a Sky Number.�������������#n is not a Sky Number.����ÿ�����ռһ�С�ע�⣺#n��ʾ�������nֵ��
	
	SampleInput:
		2992
		1234
		0
	
	SampleOutput:
		2992 is a Sky Number.
		1234 is not a Sky Number.
	
	ע�������ͬ������һ����22, ֻҪ�����ֽ��һ�¶�����
	
***/
# include<iostream>
using namespace std;

int main() {
	int n;
	while(cin >> n, n) {
		//ʮ������λ֮�� 
		int sum1=0, sum2=0, sum3=0, tmp=n;
		while(tmp) {
			sum1 += tmp % 10;
			tmp /= 10;
		} 
		
		//ʮ����������λ֮�� 
		tmp = n;
		while(tmp) {
			sum2 += tmp % 16;
			tmp /= 16;
		}
		
		//ʮ����������λ֮�� 
		tmp = n;
		while(tmp) {
			sum3 += tmp % 12;
			tmp /= 12;
		} 
		if(sum1 == sum2 && sum2 == sum3) printf("%d is a Sky Number.\n", n);
		else printf("%d is not a Sky Number.\n", n);
	}
	return 0;
} 
