/**
	No.2028 Lowest Common Multiple Plus
	��n��������С������
	
	Input:��������������ʵ����ÿ������ʵ���Ŀ�ʼ��һ��������n��Ȼ����n��������
	Output:Ϊÿ���������������ǵ���С��������ÿ������ʵ�������ռһ�С�����Լ������������һ��32λ������
	
	Sample Input:
		2 4 6
		3 2 5 7
		
	Sample Output:
		12
		70
		
**/
# include<iostream>
# include<algorithm> 
using namespace std;

int GCD(int a, int b) { //���Լ�� 
	return b==0?a:GCD(b,a%b);
} 
int LCM(int unsigned a,int unsigned b) { //��С������ 
	return (a*b)/GCD(a,b); //int�������л���ʽת��Ϊ unsigned int���� 
}
int main() {
	int n;
	while(cin >> n && n) {
		int res;
		cin >> res;
		for(int i=1; i<n; i++) {
			int u;
			cin >> u;
			res = LCM(u, res);
		}
		cout << res << endl;
	}
	return 0;
}
