/**
	No.2071 Max Num
	There are some students in a class, Can you help teacher find the highest student .
		
	Input:There are some cases. The first line contains an integer t, indicate the cases;
		Each case have an integer n (1 <= n <= 100) , followed n students' height.
	Output:For each case output the highest height, the height to two decimal plases;
	
	SampleInput:
		2
		3 170.00 165.00 180.00
		4 165.00 182.00 172.00 160.00
	
	SampleOutput:
		180.00
		182.00
	
	注：climits头文件中包含有INT_MAX,LONG_MAX,LLONG_MAX,CHAR_MAX，但是没有double 
	 
**/
# include<iostream>
# include<climits>
# include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--) {
		int k;
		cin >> k;
		double maxn = -1;
		double num;
		while(k--) {
			cin >> num;
			maxn = max(num, maxn);
		} 
		printf("%.2f\n", maxn);
	}
	return 0;
}
