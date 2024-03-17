/**
	No.2074 叠筐 
	需要的时候，就把一个个大小差一圈的筐叠上去，使得从上往下看时，边筐花色交错。
	这个工作现在要让计算机来完成，得看你的了
		
	Input:输入是一个个的三元组，分别是，外筐尺寸n（n为满足0<n<80的奇整数），中心花色字符，外筐花色字符，
		后二者都为ASCII可见字符；
		
	Output:输出叠在一起的筐图案，中心花色与外筐花色字符从内层起交错相叠，多筐相叠时，最外筐的角总是被打磨掉。
		叠筐与叠筐之间应有一行间隔。
	
	SampleInput:
		11 B A
		5 @ W
	
	SampleOutput:
		 AAAAAAAAA 
		ABBBBBBBBBA
		ABAAAAAAABA
		ABABBBBBABA
		ABABAAABABA
		ABABABABABA
		ABABAAABABA
		ABABBBBBABA
		ABAAAAAAABA
		ABBBBBBBBBA
		 AAAAAAAAA 
		
		 @@@ 
		@WWW@
		@W@W@
		@WWW@
		 @@@ 

	注：相似题目 No.2052 Picture
	
**/
# include<iostream>
using namespace std;

int main() {
	int n;
	char c1,c2;
	char res[85][85];
	int t=0;//辅助换行 
	while(cin >> n >> c1 >> c2) { //B A
		if(t++) cout << endl;
		if(n/2%2==0) swap(c1,c2); 
		for(int k=0; k<n; k++){ //按行优先遍历 
			for(int i=k; i<n-k; i++) { //内部全刷成一色（暴力刷墙） 
				for(int j=k; j<n-k; j++) {
					if(k%2) //k为奇数 
                        res[i][j]=c1;
                    else
                        res[i][j]=c2;
				}
			} 
		} 
		if(n!=1) {
			res[0][n-1]=res[0][0]=res[n-1][0]=res[n-1][n-1]=' ';
		}
		//输出
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				cout << res[i][j];
			}
			cout << endl;
		}
		
	}
	return 0;
}
