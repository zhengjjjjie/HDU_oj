/***
	No.2083 简易版之最短距离 
	寒假的时候，ACBOY要去拜访很多朋友，恰巧他所有朋友的家都处在坐标平面的X轴上。
	ACBOY可以任意选择一个朋友的家开始访问，但是每次访问后他都必须回到出发点，然后才能去访问下一个朋友。
	比如有4个朋友，对应的X轴坐标分别为1， 2， 3， 4。当ACBOY选择坐标为2的点做为出发点时，则他最终需要的时间为 |1-2|+|2-2|+|3-2|+|4-2| = 4。
	现在给出Ｎ个朋友的坐标，那么ACBOY应该怎么走才会花费时间最少呢？
	
	Input:输入首先是一个正整数M，表示M个测试实例。每个实例的输入有2行，首先是一个正整数N（N <= 500)，表示有N个朋友，
		下一行是N个正整数，表示具体的坐标(所有数据均<=10000).
		
	Output:对于每一个测试实例，请输出访问完所有朋友所花的最少时间，每个实例的输出占一行。
	
	SampleInput:
		2
		2 
		2 4 
		3 
		2 4 6
		
	SampleOutput:
		2
		4
	
	分析： 
		
***/ 
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;

int main() {
	//暴力解法 
	int m;
	cin >> m;
	while(m--) {
		int n;
		cin >> n;
		vector<int> arr(n, 0);
		vector<int> cost(n, 0);
		for(int i=0; i<n; i++) {
			cin >> arr[i];
		}
		for(int i=0; i<n; i++) { //选择不同的点i作为出发点 
			for(int j=0; j<n; j++) {
				cost[i] += abs(arr[i] - arr[j]);
			} 
		} 
		sort(cost.begin(), cost.end());
		printf("%d\n", cost[0]);
	} 
	return 0;
} 
