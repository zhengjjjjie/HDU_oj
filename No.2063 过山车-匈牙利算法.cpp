/**
	No.2063 过山车-匈牙利算法 
	RPG girls今天和大家一起去游乐场玩，终于可以坐上梦寐以求的过山车了。可是，过山车的每一排只有两个座位，而且还有条不成文的规矩，就是每个女生必须找个个
	男生做partner和她同坐。但是，每个女孩都有各自的想法，举个例子把，Rabbit只愿意和XHD或PQK做partner，Grass只愿意和linle或LL做partner，PrincessSnow愿意
	和水域浪子或伪酷儿做partner。考虑到经费问题，boss刘决定只让找到partner的人去坐过山车，其他的人，嘿嘿，就站在下面看着吧。聪明的Acmer，你可以帮忙算算
	最多有多少对组合可以坐上过山车吗？
	
	Input:输入数据的第一行是三个整数K , M , N，分别表示可能的组合数目，女生的人数，男生的人数。0<K<=1000 1<=N 和M<=500.
		接下来的K行，每行有两个数，分别表示女生Ai愿意和男生Bj做partner。最后一个0结束输入。

	Output:对于每组数据，输出一个整数，表示可以坐上过山车的最多组合数
		
	SampleInput:
		6 3 3
		1 1
		1 2
		1 3
		2 1
		2 3
		3 1
		0
		
	SampleOutput:
		3

	注：匈牙利算法的核心是寻找増广路，是一种用增广路径求二分图最大匹配的算法。如果找不到増广路了，说明已经达到最大匹配。
	
**/
# include<iostream>
# include<algorithm> //find()函数用于普通数组 
# include<cstring> //memset()函数对数组初始化 
using namespace std;

bool map[501][501], visited[501]; //map表示匹配图，map[i,j]表示女生i对男生j有无兴趣，visited[i]表示男生i是否被访问过
int match[501]; //match[i]表示与男生i匹配的女生的编号

bool find(int x, int n) { //遍历男生判断是否有和 x号女生配对的 
	for(int i=1; i<=n; i++) {
		if(!visited[i] && map[x][i]) { //男生i还没被访问而且女生x对男生i有兴趣 
			visited[i] = 1; //访问 i
			if(match[i] == -1 || find(match[i],n)) { //递归 
			//match[i]=-1表示男生i还未匹配，如果这位男生还未匹配，或者已经匹配了，但原先与他匹配的女生，可以去和别的男生匹配，就把这个男生让给女生x
				match[i] = x; 
				return true; //匹配成功 
			} 
		}
	}
	return false; //匹配失败 
}
int main() {
	// 二分图匹配问题-匈牙利算法（双向图）
	// 最大匹配 
	int k, m, n;
	int a,b;
	while(cin >> k, k) {
		cin >> m >> n;
		for(int i=1; i<=m; i++) { //初始化 
			for(int j=1; j<=n; j++) { 
				map[i][j] = 0;
			} 
		} 
		memset(match, -1, sizeof(match)); //初始化 
		for(int i=1; i<=k; i++) { //记录女生选择搭档 
			scanf("%d%d",&a,&b);
			map[a][b] = 1;
		} 
		int sum = 0;
		for(int i=1; i<=m; i++) {
			for(int j=1; j<=n; j++) {
				visited[j] = 0; //初始化 
			} 
			if(find(i,n)) sum++; //i号女生是否配对 
		}
		cout << sum << endl;
	}
	return 0;
} 
