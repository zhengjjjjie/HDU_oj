/**
	No.2032 ������� �ݹ� 
	���ǵ���ѧʱ��ѧ������������𣿾���Ķ������ﲻ������������Բο����µ�ͼ�Σ�
		1
		1 1
		1 2 1
		1 3 3 1
		1 4 6 4 1
		1 5 10 10 5 1
	
	Input:�������ݰ����������ʵ����ÿ������ʵ��������ֻ����һ��������n��1<=n<=30������ʾ��Ҫ�����������ǵĲ���
	Output:��Ӧ��ÿһ�����룬�������Ӧ������������ǣ�ÿһ�������֮����һ���ո������ÿһ��������Ǻ����һ������
	
	Sample Input:
		2 3
		
	Sample Output:
		1
		1 1
		
		1
		1 1
		1 2 1
	
	��⣺������ǵ�i�е�j�е���ֵ�� 
		a[i][j] = a[i-1][j] + a[i-1][j-1] 
**/
# include<iostream>
using namespace std;

// ʹ�õݹ飬oj��ʱ 
int Yanghui(int m, int n) {
	if(n == 0 || n == m) return 1; //�ݹ���� 
	return Yanghui(m-1,n) + Yanghui(m-1,n-1);
}
int main() {
	int n;
	while(cin >> n && n) {
		for(int i=0; i<n; i++) {
			for(int j=0; j<=i; j++) {
				if(j!=i) {
					cout << Yanghui(i,j) << " ";
				} else {
					cout << Yanghui(i,j) << endl;
				}
			}
		}
		cout << endl;
	}
	return 0;
} 
