/**
	No.2019 ��������
	��n(n<=100)���������Ѿ����մ�С����˳�����кã����������һ������x���뽫�������뵽�����У���ʹ�µ�������Ȼ����
		
	Input:�������ݰ����������ʵ����ÿ��������������ɣ���һ����n��m���ڶ������Ѿ������n���������С�n��mͬʱΪ0��ʾ�������ݵĽ��������в�������
	Output:����ÿ������ʵ������������µ�Ԫ�غ�����С�

	sample Input:
		3 3
		1 2 4
		0 0
 
	sample Output:
		1 2 3 4

**/ 
# include<iostream>
# include<vector> 
# include<algorithm>
using namespace std;

int main(){
	int n,m;
	while(scanf("%d%d",&n,&m) && n && m) {
		vector<int> arr(n);
		if(n == 0) {
			printf("%d\n", m);
			continue;
		}
		
		for(int i=0; i<n; i++) {
			cin >> arr[i];
		}
		arr.push_back(m);
		sort(arr.begin(), arr.end());
		for(auto i : arr) {
			cout << i << " ";
		}
		cout << endl;
	}
	
	return 0; 
} 
