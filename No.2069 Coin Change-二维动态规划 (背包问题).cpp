/**
	No.2069 Coin Change-��ά��̬�滮 (��������)
	Suppose there are 5 types of coins: 50-cent, 25-cent, 10-cent, 5-cent, and 1-cent. We want to make 
	changes with these coins for a given amount of money.
	
	For example, if we have 11 cents, then we can make changes with one 10-cent coin and one 1-cent coin, 
	or two 5-cent coins and one 1-cent coin, or one 5-cent coin and six 1-cent coins, or eleven 1-cent coins. 
	So there are four ways of making changes for 11 cents with the above coins.
	Note that we count that there is one way of making change for zero cent.
	
	Write a program to find the total number of different ways of making changes for any amount of money incents. 
	Your program should be able to handle up to 100 coins.
	
	Input:The input file contains any number of lines, each one consisting of a number ( ��250 ) for the amount of money in cents.
	Output:For each input line, output a line containing the number of different ways of making changes with the above 5 types of coins.
		
	SampleInput:
		11
		26
		
	SampleOutput:
		4
		13

	���⣺��������Ӳ�ң�1,5,10,25,50�����ڸ���һ��n���������ЩӲ����ɼ�ֵΪn�ķ�������
	ע�������� No.2021 �����ʿ�--��Ǯ�һ����� ���������������� 
		��������ȫ�������⣬״̬ת�Ʒ���dp[k][v] = dp[k][v]+dp[k-1][v-coins[i]]��
		����dp[k][v]��ʾ��k��Ӳ�Ҵճɼ�ֵΪv�ķ�����,coins[i]��ʾӲ��i�ļ�ֵ�� 
**/
# include<iostream>
# include<cstring>
using namespace std;

int dp[101][251]; //dp[i][v]��ʾ��i��Ӳ�Ҵճɼ�ֵΪv�ķ�����   
int coins[5] = {1,5,10,25,50}; //��5��Ӳ�� 

int main() {
	int n;
	while(cin >> n) {
		memset(dp, 0, sizeof(dp));
		dp[0][0] = 1; //0������0��Ӳ�� ��һ�����
		for(int i=0; i<5; i++) { //5��Ӳ�� 
			for(int k=1; k<=100; k++) { //1-100��Ӳ��
				for(int j=coins[i]; j<=n; j++) { //������ 
					dp[k][j] += dp[k-1][j-coins[i]]; //���뵱ǰӲ�� 
				} 
			}
		} 
		int res = 0;
		for(int i=0; i<=100; i++) {
			res += dp[i][n];
		}
		cout << res << endl;
	}
	return 0;
} 
