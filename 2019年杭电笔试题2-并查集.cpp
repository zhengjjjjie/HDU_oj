/***
	2019年杭电笔试题2-并查集 
	
	有一群人，现在告诉你他们之间的朋友关系。若A与B是朋友，B是C的朋友，则A与C也是朋友。朋友关
	系都是双向的，即A与B是朋友，B与A也是朋友。那么A、B、C就在同一个“朋友圈”
	
	输入：首先输入n,m表示有n个人，m对关系 (1<=n<2000)，接下来有m行每一行表示一对关系（输
	入每个数字代表一个人）
	输出：输出在当前输入关系的情况下“朋友圈”的数量
	
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
		if(Find(a, pre) != Find(b, pre)) { //a和b是朋友，但还不在一个朋友圈 
			pre[a] = b;
			cnt++; 
		} 
	}
	cout << n-cnt << endl; 
} 
