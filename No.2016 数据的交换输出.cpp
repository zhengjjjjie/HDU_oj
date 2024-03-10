/**
	No.2016 ���ݵĽ������ 
	����n(n<100)�������ҳ�������С��������������ǰ����������������Щ��
		
	Input:���������ж��飬ÿ��ռһ�У�ÿ�еĿ�ʼ��һ������n����ʾ�������ʵ������ֵ�ĸ��������ž���n��������n=0��ʾ����Ľ�������������
	Output:����ÿ���������ݣ��������������У�ÿ�����ռһ��

	sample Input:
		4 2 1 3 4
		5 5 4 3 2 1
		0
 
	sample Output:
		1 2 3 4
		1 4 3 2 5

**/ 
# include<iostream>
# include<vector>
using namespace std;

int main(){
	int n;
	while(cin >> n && n) {
		vector<int> arr;
		int min = INT_MAX,index;
		for(int i=0; i<n; i++) {
			int num;
            cin >> num;
            if (num < min) {
				min = num;
				index = i;
			}
            arr.push_back(num);
		}
		swap(arr[0], arr[index]);
		for(auto value : arr) {
			cout << value << " ";
		}
		cout << endl;
	} 
	return 0; 
} 
