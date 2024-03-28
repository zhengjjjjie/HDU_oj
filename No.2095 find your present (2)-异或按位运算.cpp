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
		
	��⣺�����������������ҳ�����ֻ���������ε�һ�����֡�
		
		ԭʼ˼·�ܼ򵥣����Կ������¼ÿ�����ֳ��ֵĴ���������һ�θ�����+1��������Ϊ1�������±꼴�ɣ�����������Ҫ���鿪���㹻�󣬻ᱬ�ڴ档
		�Ľ�����������������飬ǰ����ͬ��ȫ����0������������������������TLE����ʱ��
		��õķ����ǽ���λ���㣬�����õ�����^(���)����0ȥ^ÿһ����������֡�
		
***/ 
# include<iostream>
using namespace std;

int main() {
	int n;
	//���������������λ����ķ�����ͬһ����λ�������Σ���Ϊ0��������Ļ��������˳��ִ������������Ǹ�����
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
