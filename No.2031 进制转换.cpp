/**
	No.2031 ����ת�� 
	����һ��ʮ������N������ת����R���������
	
	Input:�������ݰ����������ʵ����ÿ������ʵ��������������N(32λ����)��R��2<=R<=16, R<>10��
	Output:Ϊÿ������ʵ�����ת���������ÿ�����ռһ�С����R����10�����Ӧ�����ֹ���ο�16���ƣ����磬10��A��ʾ���ȵȣ�
	
	Sample Input:
		7 2
		23 12
		-4 3
		
	Sample Output:
		111
		1B
		-11
		
**/
# include<iostream>
# include<vector> //abs
# include<algorithm>
using namespace std;

char meta[] = {'0','1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
int main() {
	int n,r; //n��ʮ�������� r:r���� 
	while(scanf("%d%d",&n,&r)!=EOF) {
		bool negativeFlag = n < 0 ? true : false; //ע����� 
		n = abs(n);
		vector<char> result;
		while(n) {
			result.push_back(meta[n % r]);
			n /= r;
		}
		if(negativeFlag) {
			cout << "-";
		}
		reverse(result.begin(), result.end());
		for(auto i : result) {
			cout << i;
		}
		cout << endl;
	} 
	return 0;
} 
