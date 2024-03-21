/***
	No.2087 剪花布条-KMP算法
	一块花布条，里面有些图案，另有一块直接可用的小饰条，里面也有一些图案。对于给定的花布条和小饰条，计算一下能从花布条中尽可能剪出几块小饰条来呢？
	
	Input:输入中含有一些数据，分别是成对出现的花布条和小饰条，其布条都是用可见ASCII字符表示的，可见的ASCII字符有多少个，布条的花纹也有多少种花样。
		花纹条和小饰条不会超过1000个字符长。如果遇见#字符，则不再进行工作。
 
	Output:输出能从花纹布中剪出的最多小饰条个数，如果一块都没有，那就老老实实输出0，每个结果之间应换行。
	
	SampleInput:
		abcde a3
		aaaaaa  aa
		#
		
	SampleOutput:
		0
		3
		
***/
# include<iostream>
# include<string>
# include<vector>
using namespace std;

vector<int> nextarr(1001, 0); //next数组 
string s1, s2; //花布条，小饰条 (注意：如果不传参，需要定义全局变量)

void getnext() { //求next数组 
	int k = -1, j = 0;
	nextarr[0] = -1;
	while(j < s2.size()-1) { //模式串最后一位不需要判断
		if(k==-1 || s2[j]==s2[k]) {
			j++;
			k++;
			nextarr[j]=k;
		} else { //前后缀不匹配，k回溯 
			k=nextarr[k];
		}
	}
} 

int kmp() { //p1遍历主串，p2遍历模式串 
	int p1 = 0, p2 = 0; 
	int cnt = 0;
	while(p1 < s1.size()) {
		if (p2==-1 || s1[p1]==s2[p2]) {
			p1++; p2++;
		} else {
			p2 = nextarr[p2];
		}
		if(p2 == s2.size()) {
			cnt++;
			p2 = 0;
		}
	}
	return cnt;
}

int main() {
	//KMP算法
	while(cin >> s1, s1!="#") {
		cin >> s2;
		getnext(); //获取next数组
		cout << kmp() << endl;
	} 
	return 0;
} 
