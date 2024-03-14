/**
	No.2058 The sum problem-优化 
	Given a sequence 1,2,3,......N, your job is to calculate all the possible sub-sequences that the sum of the sub-sequence is M.
	
	Input:Input contains multiple test cases. each case contains two integers N, M( 1 <= N, M <= 1000000000).input ends with N = M = 0.
	Output:For each test case, print all the possible sub-sequence that its sum is M.The format is show in the sample below.
		print a blank line after each test case.
		
	SampleInput:
		20 10
		50 30
		0 0
		
	SampleOutput:
		[1,4]
		[10,10]
		
		[4,8]
		[6,9]
		[9,11]
		[30,30]
		
**/ 
# include<iostream>
using namespace std;

int main() {
	// 暴力解法-超时 
	// 优化：1、先对长度上限x进行判断 2、筛出符合要求的子数列 
	int n,m,i;
	int x,sum; 
	while(scanf("%d%d",&n,&m)!=EOF, n && m) {
		// 先进行长度x上限的判断 
		for(i=1,sum=0; sum<=m; i++) {
			sum += i;
		}
		x = i-1; //x代表长度 
		
		int p,q,t;
		// 筛选出符合要求的子数列 
		for(i=x; i>=2; i--) { // 长度依次递减 
			if(m%i == 0) { // 如果平均数是整数 
				p = m/i - i/2;
				q = m/i + i/2; // 计算开始点和结束点 (格式：[p,q]) 
			} else if(2*m%i == 0) { //如果平均数乘上2是整数 
				p = m/i - i/2 + 1;
				q = m/i + i/2; //计算得到数列的各元素之和，用于检验是否符合条件 
			} else {
				continue;
			} 
			t = (q-p+1)*(p+q)/2; //计算得到的数列各元素之和，用于检验是否符合条件 
			if(t==m && p>0) { //如果检验成功就按格式输出 
				printf("[%d,%d]\n",p,q);
			}
		}
		printf ("[%d,%d]\n\n",m,m);//输出本身的那一种情况
	}
	return 0;
}
