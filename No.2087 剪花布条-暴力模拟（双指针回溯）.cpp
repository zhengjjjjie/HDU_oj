/***
	No.2087 剪花布条-暴力模拟（双指针回溯） 
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
using namespace std;

int main() {
	//暴力模拟
	string s1, s2; //花布条，小饰条 
	while(cin >> s1 >> s2, s1!="#") {
		int len1 = s1.size();
		int len2 = s2.size();
		int cnt = 0;
		int p1 = 0, p2 = 0; //双指针回溯 
		while(p1 < len1) {
			if(s1[p1] == s2[p2]) {
				p1++; p2++;
				if(p2 == len2) {
					cnt++;
					p2 = 0;
				}
			} else {
				p1 = p1-p2+1;
				p2 = 0;
			}
		}
		printf("%d\n", cnt);
	} 
	return 0;
} 
