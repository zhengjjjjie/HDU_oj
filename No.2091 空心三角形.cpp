/***
	No.2091 空心三角形 
	把一个字符三角形掏空，就能节省材料成本，减轻重量，但关键是为了追求另一种视觉效果。
	在设计的过程中，需要给出各种花纹的材料和大小尺寸的三角形样板，通过电脑临时做出来，以便看看效果。
	
	Input:每行包含一个字符和一个整数n(0<n<41)，不同的字符表示不同的花纹，整数n表示等腰三角形的高。显然其底边长为2n-1。
		如果遇到@字符，则表示所做出来的样板三角形已经够了。
	
	Output:每个样板三角形之间应空上一行，三角形的中间为空。显然行末没有多余的空格。
	
	SampleInput:
		X 2
		A 7
		@
	
	SampleOutput:
		 X
		XXX
		　
		      A
		     A A
		    A   A
		   A     A
		  A       A
		 A         A
		AAAAAAAAAAAAA
		
***/ 
# include<iostream>
# include<cstring>
using namespace std;

int res[42][84];

int main() {
	//模拟
	//第一次WA，是因为res数组不够大[42][42]无法满足[42, 83]
	char c;
	int n;
	while(cin >> c, c!='@') {
		cin >> n;
		getchar(); //很重要！！！ 
		memset(res, 0, sizeof(res));
		res[1][n] = 1; //第1行
		for(int i=2; i<n; i++) { //第2行到n-1行
			res[i][n-i+1] = 1;
			res[i][n+i-1] = 1;
		}
		for(int i=1; i<=2*n-1; i++) { //第n行
			res[n][i] = 1;
		} 
		//输出 [n, 2*n-1] 
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=2*n-1; j++) {
				if(res[i][j]) cout << c;
				else cout << " "; 
			}
			cout << endl;
		} 
		cout << endl;
	}
	return 0;
} 
