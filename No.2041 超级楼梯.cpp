/**
	No.2041 ����¥�� 
	��һ¥�ݹ�M�����տ�ʼʱ���ڵ�һ������ÿ��ֻ�ܿ���һ���������Ҫ���ϵ�M�������ж������߷���
	
	Input:�����������Ȱ���һ������N����ʾ����ʵ���ĸ�����Ȼ����N�����ݣ�ÿ�а���һ������M��1<=M<=40��,��ʾ¥�ݵļ���
	Output:����ÿ������ʵ�����������ͬ�߷�������
	
	SampleInput:
		2
		2
		3
		
	SampleOutput:
		1
		2 
		
**/ 
# include<iostream>
# include<vector>
using namespace std;

int main() {
	// ��̬�滮 
	int n;
	
	while(cin >> n && n) {
		while(n--) { //����n������ 
			int m;
			cin >> m; //m��¥�� 
			vector<int> dp(m+1,0);
			dp[0] = 1; //ע��տ�ʼ�ڵ�һ�� 
			dp[1] = 1; //0:1�� 1:2�� 
			for(int i=2; i<m; i++) {
				dp[i] = dp[i-1] + dp[i-2];
			}
			cout << dp[m-1] << endl; 
		}
	}
	return 0;
} 
