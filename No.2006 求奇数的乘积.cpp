/**
	No.2006 �������ĳ˻� 
	����n�������������������������ĳ˻�
	
	Input:�������ݰ����������ʵ����ÿ������ʵ��ռһ�У�ÿ�еĵ�һ����Ϊn����ʾ��������һ����n����������n������������Լ���ÿ�����ݱض����ٴ���һ������
	Output:���ÿ�����е����������ĳ˻������ڲ���ʵ�������һ��
	Sample Input:
		3 1 2 3
		4 2 3 4 5
	Sample Output:
		3
		15

	ע�⣺# include<bits/stdc++.h> //HDUoj��֧������ͷ�ļ� 
**/
 
# include<iostream>
using namespace std;

int main() {
	int n;
	while(cin >> n) {
		int res = 1;
		for(int i=0; i<n; i++) {
			int num;
			cin >> num;
			if(num % 2 == 1) {
				res *= num;
			}
		}
		cout << res << endl;
	}
	return 0;
}
