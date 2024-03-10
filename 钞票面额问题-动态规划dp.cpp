/**
	钞票面额问题-动态规划 DP 
	假设您是个土豪，身上带了足够的1、5、11元面值的钞票。现在您的目标是凑出某个金额w，需要用到尽量少的钞票。
	
	Input:  15
	Output:
			f[1]=1
			f[2]=2
			f[3]=3
			f[4]=4
			f[5]=1
			f[6]=2
			f[7]=3
			f[8]=4
			f[9]=5
			f[10]=2
			f[11]=1
			f[12]=2
			f[13]=3
			f[14]=4
			f[15]=3 凑出15最少使用3张钞票 15=5+5+5 
	
	总结：大事化小，小事化了。DP自带剪枝，尽量缩小可能解的空间。 
		将一个大问题转化成几个小问题；求解小问题；推出大问题的解。 
	关键：设计状态转移方程，我是谁，我从哪里来，我要到哪里去 
**/ 
# include<iostream>
# include<vector>
using namespace std;

int main(){
	int f[105],n,cost;
	scanf("%d", &n);//目标w
	f[0] = 0;
	
	for(int i=1; i<=n; i++) {
		cost = INT_MAX;
		if(i-1>=0) cost=min(cost,f[i-1]+1);
		if(i-5>=0) cost=min(cost,f[i-5]+1);
		if(i-11>=0) cost=min(cost,f[i-11]+1);
		f[i] = cost;
		printf("f[%d]=%d\n",i,f[i]); 
	} 

	return 0;
} 
