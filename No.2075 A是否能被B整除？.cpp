/**
	No.2075 A|B?
	������A�Ƿ��ܱ�������B��������֪��Ϊʲôxhd���о�������⣬��������ɡ�
		
	Input:�������ݵĵ�һ����һ������T����ʾ��T�����ݡ�ÿ������������������A��B(A,B<10^9)��
		
	Output:����ÿ���������ݣ����"YES"��ʾ���Ա�������"NO"��ʾ���ܱ�������
	
	SampleInput:
		2
		4 2
		5 3
	
	SampleOutput:
		YES
		NO
	
**/
# include<iostream>
using namespace std;

int main() {
	int n;
	long long int a,b;
	cin >> n;
	while(n--) {
		cin >> a >> b;
		if(a%b == 0) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	} 
	return 0;
} 
