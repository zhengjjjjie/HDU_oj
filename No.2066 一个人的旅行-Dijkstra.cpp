/***
	No.2066 一个人的旅行
	虽然草儿是个路痴（就是在杭电待了一年多，居然还会在校园里迷路的人，汗~),但是草儿仍然很喜欢旅行，因为在旅途中 会遇见很多人（白马王子，^0^），
	很多事，还能丰富自己的阅历，还可以看美丽的风景……草儿想去很多地方，她想要去东京铁塔看夜景，去威尼斯看电影，去阳明山上看海芋，去纽约纯粹看雪景，
	去巴黎喝咖啡写信，去北京探望孟姜女……眼看寒假就快到了，这么一大段时间，可不能浪费啊，一定要给自己好好的放个假，可是也不能荒废了训练啊，
	所以草儿决定在要在最短的时间去一个自己想去的地方！因为草儿的家在一个小镇上，没有火车经过，所以她只能去邻近的城市坐火车（好可怜啊~）。

	Input:输入数据有多组，每组的第一行是三个整数T，S和D，表示有T条路，和草儿家相邻的城市的有S个，草儿想去的地方有D个；
		接着有T行，每行有三个整数a，b，time,表示a,b城市之间的车程是time小时；(1=<(a,b)<=1000;a,b 之间可能有多条路)
		接着的第T+1行有S个数，表示和草儿家相连的城市；
		接着的第T+2行有D个数，表示草儿想去地方。 
	Output:输出草儿能去某个喜欢的城市的最短时间。
	
	SampleInput:
		6 2 3
		1 3 5
		1 4 7
		2 8 12
		3 8 4
		4 9 12
		9 10 2
		1 2
		8 9 10
		
	SampleOutput:
		9
		
	注：Dijkstra 算法是一个基于「贪心」、「广度优先搜索」、「动态规划」求一个图中一个点到其他所有点的最短路径的算法，时间复杂度 O(n2) 
		每次从「未求出最短路径的点」中取出 距离起点 最小路径的点，以这个点为桥梁 刷新「未求出最短路径的点」的距离
		 
***/ 
# include<iostream>
# include<cstring>
# include<climits> //INT_MAX,INT_MIN 
using namespace std;

const int inf=0x3f3f3f;
int arr[1001][1001]; //邻接矩阵 
int visited[1001]; //标记是否已取出 
int n;

void dijkstra() {
	int u;
	memset(visited, 0, sizeof(visited));
	for(int i=1; i<=n; i++) {
		int min = INT_MAX;
		for(int j=1; j<=n; j++) {
			if(visited[j]==0 && arr[0][j]<min) { //先取距离草儿家最近的点 
				min = arr[0][j];
				u = j;
			}
		}
		if(min == INT_MAX) break;
		visited[u] = 1; //标记已求出 u 的最短路径 
		for(int v=1; v<=n; v++) { //从未求出最短路径的点中取 
			if(visited[v]==0 && arr[0][v] > arr[0][u]+arr[u][v]) {
				arr[0][v] = arr[0][u] + arr[u][v];
			}
		}
	}
}
int main() {
	// Dijkstra
	int T,S,D;
	while(cin >> T >> S >> D) {
		memset(arr, inf, sizeof(arr));
		int a,b,time;
		n = 0; //统计有几个结点（城市） 
		for(int i=1; i<=T; i++) { //有T条路
			cin >> a >> b >> time;
			if(time < arr[a][b]) {
				arr[a][b] = arr[b][a] = time;
				if(a > n) n = a;
				if(b > n) n = b;
			}
		}
		int c;
		for(int i=1; i<=S; i++) { //和草儿家相邻的城市的有S个
			cin >> c;
			arr[0][c] = arr[c][0] = 0;
		}
		
		dijkstra();
		
		int dd;
		int res = INT_MAX;
		for(int i=1; i<=D; i++) { //草儿想去的地方有D个
			cin >> dd;
			if(arr[0][dd] < res) {
				res = arr[0][dd];
			} 
		} 
		cout << res << endl;
	}
	return 0;
}
