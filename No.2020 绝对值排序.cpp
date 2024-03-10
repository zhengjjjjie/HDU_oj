/**
	No.2020 ����ֵ���� 
	����n(n<=100)�����������վ���ֵ�Ӵ�С������������Ŀ��֤����ÿһ������ʵ�������е����ľ���ֵ������ȡ�
		
	Input:���������ж��飬ÿ��ռһ�У�ÿ�еĵ�һ������Ϊn,������n��������n=0��ʾ�������ݵĽ�������������
	Output:����ÿ������ʵ������������Ľ����������֮����һ���ո������ÿ������ʵ��ռһ��

	sample Input:
		3 3 -4 2
		4 0 1 2 -3
		0
 
	sample Output:
		-4 3 2
		-3 2 1 0

**/ 
# include<iostream>
# include<vector>
# include<algorithm>
# include<cmath>
using namespace std;

bool cmp(int x,int y) { //������ֵ�Ӵ�С���� 
	return abs(x) > abs(y);
}
int main(){
	int n;
	while(scanf("%d",&n) && n) {
		vector<int> arr(n);
		for(int i=0; i<n; i++) {
			cin >> arr[i];
		}
		sort(arr.begin(),arr.end(),cmp); //�Ӵ�С���� 
		for(auto i : arr) {
			cout << i << " ";
		}
		cout << endl;
	}
	return 0; 
} 
