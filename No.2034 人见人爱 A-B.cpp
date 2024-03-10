/**
	No.2034 �˼��˰� A-B
	�μӹ��ϸ���������ͬѧһ�����ǵ����е�һ����򵥵���Ŀ������{A}+{B}���Ǹ���Ŀ������������ϵĲ�����
	�����������A-B������������ϵĲ���������ϵļ������㡣
	����Ȼ����Ҷ�֪�����ϵĶ��壬����ͬһ�������в�����������ͬ��Ԫ�أ����ﻹ�����Ѵ��һ�£�
	�Ǻǣ��ܼ򵥰ɣ�
	
	Input:ÿ����������ռ1��,ÿ�����ݵĿ�ʼ��2������n(0<=n<=100)��m(0<=m<=100),�ֱ��ʾ����A�ͼ���B��Ԫ�ظ�����
		Ȼ�������n+m��Ԫ�أ�ǰ��n��Ԫ�����ڼ���A����������ڼ���B. ÿ��Ԫ��Ϊ������int��Χ������,Ԫ��֮����һ���ո����.
		���n=0����m=0��ʾ����Ľ�������������

	Output:���ÿ���������һ������,��ʾA-B�Ľ��,������Ϊ�ռ��ϣ��������NULL��,�����С����������,Ϊ�˼����⣬
		ÿ��Ԫ�غ����һ���ո�
	
	Sample Input:
		3 3 1 2 3 1 4 7
		3 7 2 5 8 2 3 4 5 6 7 8 
		0 0
		
	Sample Output:
		2 3 
		NULL
	 
**/
# include<iostream>
# include<set>
using namespace std;

int main() {
	int n,m;
	set<int> set;
	while(scanf("%d%d", &n, &m)!=EOF && (n || m)) {
		for(int i=0; i<n; i++) {
			int temp;
			cin >> temp;
			set.insert(temp);
		} 
		for(int i=0; i<m; i++) {
			int temp;
			cin >> temp;
			if(set.count(temp)) {
				set.erase(temp);
			}
		}
		// setĬ������
		if(set.size()) {
			for(auto it : set) {
				cout << it << " ";
			}
		} else {
			cout << "NULL";
		}
		cout << endl;
		set.clear();
	}
	return 0;
}
