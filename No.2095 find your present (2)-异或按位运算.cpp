/***
	No.2095 find your present (2)
	In the new year party, everybody will get a "special present".Now it's your turn to get your special present, a lot of presents now putting on the 
	desk, and only one of them will be yours.Each present has a card number on it, and your present's card number will be the one that different from all 
	the others, and you can assume that only one number appear odd times.For example, there are 5 present, and their card numbers are 1, 2, 3, 2, 1.
	so your present will be the one with the card number of 3, because 3 is the number that different from all the others.

	Input:The input file will consist of several cases.
		Each case will be presented by an integer n (1<=n<1000000, and n is odd) at first. 
		Following that, n positive integers will be given in a line, all integerswill smaller than 2^31. 
		These numbers indicate the card numbers of the presents.n = 0 ends the input.
	
	Output:For each case, output an integer in a line, which is the card number of your present.
	
	SampleInput:
		5
		1 1 3 2 2
		3
		1 2 1
		0
	
	SampleOuput:
		3
		2
		use scanf to avoid Time Limit Exceeded
		
	题解：给定奇数个整数，找出其中只出现奇数次的一个数字。
		
		原始思路很简单，可以开数组记录每个数字出现的次数，出现一次该数字+1，最后输出为1的数组下标即可，但是这样需要数组开到足够大，会爆内存。
		改进点可以排序后遍历数组，前后相同的全部置0，最后输出非零项，但是这样会出TLE，超时。
		最好的方法是进行位运算，这里用到的是^(异或)，用0去^每一个输入的数字。
		
***/ 
# include<iostream>
using namespace std;

int main() {
	int n;
	//这题巧妙的运用了位运算的方法，同一个数位运算两次，化为0；多个数的话就留下了出现次数是奇数的那个数；
	while(scanf("%d", &n)!=EOF, n) {
		int num, temp = 0;
		for(int i=0; i<n; i++) {
			scanf("%d", &num);
			temp = temp ^ num;
		}
		printf("%d\n", temp);
	}
	return 0;
}
