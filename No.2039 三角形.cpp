/**
	No.2039 ������
	���������ߣ������ж�һ���ܲ������һ��������
	 
	Input:�������ݵ�һ�а���һ����M��������M�У�ÿ��һ��ʵ����������������A,B,C������A,B,C <1000;
	Output:����ÿ������ʵ������������߳�A,B,C����������εĻ������YES������NO��
	
	Sample Input:
		2
		1 2 3
		2 2 2
		
	Sample Output:
		NO
		YES
		
**/ 
# include<iostream>
using namespace std;

int main() {
	int n;
	double a,b,c;
	while(cin >> n && n) {
		while(n--){
			cin >> a >> b >> c;
			if (a+b>c && a+c>b && b+c>a)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
	return 0;
}
