/***
	2019�꺼�������2-���鼯 
	
	��һȺ�ˣ����ڸ���������֮������ѹ�ϵ����A��B�����ѣ�B��C�����ѣ���A��CҲ�����ѡ����ѹ�
	ϵ����˫��ģ���A��B�����ѣ�B��AҲ�����ѡ���ôA��B��C����ͬһ��������Ȧ��
	
	���룺��������n,m��ʾ��n���ˣ�m�Թ�ϵ (1<=n<2000)����������m��ÿһ�б�ʾһ�Թ�ϵ����
	��ÿ�����ִ���һ���ˣ�
	���������ڵ�ǰ�����ϵ������¡�����Ȧ��������
	
	Sample Input
		8 7 
		1 2 
		2 4 
		4 1 
		5 7 
		4 3 
		6 2 
		7 8
	
	Sample Output
	2

***/

# include<iostream>
# include<vector>

using namespace std;

int Find(int x, vector<int>& pre) {
	if(pre[x] == -1) {
		return x;
	}
	int root = Find(pre[x], pre);
	pre[x] = root;
	return root;
}

int main() {
	int n, m;
	cin >> n >> m;
	int cnt = 0; 
	vector<int> pre(n, -1);
	while(m--) {
		int a,b;
		cin >> a >> b;
		if(Find(a, pre) != Find(b, pre)) { //a��b�����ѣ���������һ������Ȧ 
			pre[a] = b;
			cnt++; 
		} 
	}
	cout << n-cnt << endl; 
} 
