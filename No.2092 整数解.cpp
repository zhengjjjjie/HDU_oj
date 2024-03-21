/***
	No.2092 整数解 
	有二个整数，它们加起来等于某个整数，乘起来又等于另一个整数，它们到底是真还是假，也就是这种整数到底存不存在，实在有点吃不准，你能快速回答吗？
	看来只能通过编程。例如：
	x + y = 9，x * y = 15 ? 找不到这样的整数x和y
	1+4=5，1*4=4，所以，加起来等于5，乘起来等于4的二个整数为1和4
	7+(-8)=-1，7*（-8）=-56，所以，加起来等于-1，乘起来等于-56的二个整数为7和-8
	
	Input:输入数据为成对出现的整数n，m（-10000<n,m<10000），它们分别表示整数的和与积，如果两者都为0，则输入结束。
	Output:只需要对于每个n和m，输出“Yes”或者“No”，明确有还是没有这种整数就行了。
	
	SampleInput:
		9 15
		5 4
		1 -56
		0 0
	
	SampleOutput:
		No
		Yes
		Yes
	
	注：可以用判别式 judge=n^2-4m 进行判断，如果judge<0，则方程式没有解，输出“No”;
		如果 judge>=0，则进一步判断方程式的解是否为整数，这里可以将判别式judge开方，如果开方是正整数，则方程式一定存在整数解，输出“Yes”，否则输出“No” 
***/ 
# include<iostream>
# include<algorithm>
using namespace std;

int main() {
	//借用数学方程简化问题 
	int n,m;
	while(cin >> n >> m, n||m) {
		int judge = n*n - 4*m;
		if(judge < 0) {
			cout << "No" << endl;
		} else {
			int tmp = sqrt(judge); //sqrt()的返回值是double型，将其强转为int型
			if(tmp == sqrt(judge)) {
				cout << "Yes" << endl;
			} else {
				cout << "No" << endl;
			}
		}
	}
	return 0;
} 
