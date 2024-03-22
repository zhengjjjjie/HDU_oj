/***
	No.2097 Sky数
	Sky从小喜欢奇特的东西，而且天生对数字特别敏感，一次偶然的机会，他发现了一个有趣的四位数2992，这个数，它的十进制数表示，其四位数字之和为2+9+9+2=22，
	它的十六进制数BB0，其四位数字之和也为22，同时它的十二进制数表示1894，其四位数字之和也为22，啊哈，真是巧啊。
	Sky非常喜欢这种四位数，由于他的发现，所以这里我们命名其为Sky数。
	但是要判断这样的数还是有点麻烦啊，那么现在请你帮忙来判断任何一个十进制的四位数，是不是Sky数吧。
	
	Input:输入含有一些四位正整数，如果为0，则输入结束。
	Output:若n为Sky数，则输出“#n is a Sky Number.”，否则输出“#n is not a Sky Number.”。每个结果占一行。注意：#n表示所读入的n值。
	
	SampleInput:
		2992
		1234
		0
	
	SampleOutput:
		2992 is a Sky Number.
		1234 is not a Sky Number.
	
	注：这个相同的数不一定是22, 只要是三种结果一致都满足
	
***/
# include<iostream>
using namespace std;

int main() {
	int n;
	while(cin >> n, n) {
		//十进数各位之和 
		int sum1=0, sum2=0, sum3=0, tmp=n;
		while(tmp) {
			sum1 += tmp % 10;
			tmp /= 10;
		} 
		
		//十六进制数各位之和 
		tmp = n;
		while(tmp) {
			sum2 += tmp % 16;
			tmp /= 16;
		}
		
		//十二进制数各位之和 
		tmp = n;
		while(tmp) {
			sum3 += tmp % 12;
			tmp /= 12;
		} 
		if(sum1 == sum2 && sum2 == sum3) printf("%d is a Sky Number.\n", n);
		else printf("%d is not a Sky Number.\n", n);
	}
	return 0;
} 
