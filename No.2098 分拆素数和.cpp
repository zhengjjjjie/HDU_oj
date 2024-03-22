/***
	No.2098 �ֲ�������
	��һ��ż�����������ͬ�����ĺͣ��м��ֲ��أ�
	
	Input:�������һЩ����ż������ֵ���ᳬ��10000���������ᳬ��500������0���������
	Output:��Ӧÿ��ż����������ɲ�ͬ�����ĸ�����ÿ�����ռһ�С�
	
	SampleInput:
		30
		26
		0
	
	SampleOutput:
		3
		2
	
***/
# include<iostream>
# include<algorithm>
using namespace std;

bool isPrime(int num) { //�ж����� 
	if(num < 2) return false;
	if(num == 2) return true;
	if(num%2 == 0) return false; 
	
	for(int i=2; i<=sqrt(num); i++) {
		if(num%i == 0) return false;
	}
	return true;
} 
int main() {
	//������ 
	int n;
	while(cin >> n, n) {
		int cnt = 0;
		for(int i=2; i<n/2; i++) { //nΪż������������ͬ������� 
			if(isPrime(i) && isPrime(n-i)) {
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
