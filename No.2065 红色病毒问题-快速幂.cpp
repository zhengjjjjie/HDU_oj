/**
	No.2065 "红色病毒"问题
	医学界发现的新病毒因其蔓延速度和Internet上传播的"红色病毒"不相上下,被称为"红色病毒",经研究发现,该病毒及其变种的DNA的一条单链中,胞嘧啶,腺嘧啶均是成对出现的。
	现在有一长度为 N 的字符串,满足一下条件:
	(1) 字符串仅由 A,B,C,D 四个字母组成;
	(2) A出现偶数次(也可以不出现);
	(3) C出现偶数次(也可以不出现);
	计算满足条件的字符串个数.
	当 N=2 时,所有满足条件的字符串有如下6个:BB,BD,DB,DD,AA,CC.
	由于这个数据肯能非常庞大,你只要给出最后两位数字即可.
	
	Input:每组输入的第一行是一个整数T,表示测试实例的个数,下面是T行数据,每行一个整数N(1<=N<2^64),当T=0时结束.
	Output:对于每个测试实例,输出字符串个数的最后两位,每组输出后跟一个空行.
		
	SampleInput:
		4
		1
		4
		20
		11
		3
		14
		24
		6
		0
		
	SampleOutput:
		Case 1: 2
		Case 2: 72
		Case 3: 32
		Case 4: 0
		
		Case 1: 56
		Case 2: 72
		Case 3: 56
	
	注：快速幂：时间复杂度为 O(log2n)，与朴素的 O(n)相比效率有了极大的提高---二进制与指数折半
		核心思想：利用二进制来加速运算
**/
# include<iostream>
using namespace std;

int ksm(long long base, long long power) { //快速幂 
	int res = 1;
	while(power) {
		if(power & 1) { //指数的末尾位是非零时 
			res = (res * base) % 100; //累乘当前项并保存后两位 
		}
		power >>= 1; //向右移位: pow = pow/2
		base = (base * base) % 100; 
	} 
	return res;
}
int main() {
	long long int n;
	while(scanf("%lld", &n)!=EOF, n) {
		long long int m;
        long long int co = 1;
        while(n--) {
            cin >> m;
			cout << "Case " << co << ": ";
            cout << (ksm(4, m - 1) + ksm(2, m - 1)) % 100 << endl;
            co++;
		}
	}
	return 0; 
} 
