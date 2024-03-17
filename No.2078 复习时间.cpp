/**
	No.2078 复习时间
	为了能过个好年，xhd开始复习了，于是每天晚上背着书往教室跑。xhd复习有个习惯，在复习完一门课后，
	他总是挑一门更简单的课进行复习，而他复习这门课的效率为两门课的难度差的平方,而复习第一门课的效率为100
	和这门课的难度差的平方。xhd这学期选了n门课，但是一晚上他最多只能复习m门课，
	请问他一晚上复习的最高效率值是多少？
	
	Input:输入数据的第一行是一个数据T，表示有T组数据。
		每组数据的第一行是两个整数n(1 <= n <= 40)，m(1 <= m <= n)。
		接着有n行，每行有一个正整数a(1 <= a <= 100)，表示这门课的难度值。
		
	Output:对于每组输入数据，输出一个整数，表示最高效率值。
	
	SampleInput:
		2
		2 2
		52
		25
		12 5
		89
		64
		6
		43
		56
		72
		92
		23
		20
		22
		37
		31
	
	SampleOutput:
		5625
		8836
		 
	注：输入之后直接排序，希望找到差值的平方最大，我想到双端扫描，两个指针从头尾各自做运算 
	实际上他给的数据范围是1~100，那么实际上第一次效率是最高的，(100 - x)2，这个x是序列中的最小值，
	所以答案直接就是(100 - a[0])2，再往后运算，每次都是越来越接近，越靠近序列中心两个数字差的平方越小
	所以上面那个算法设计有问题，但他还是给A了。修改过后的代码如下，
**/
# include<iostream>
# include<vector>
# include<cmath>
# include<algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;
	int n,m;
	while(T--) {
		cin >> n >> m;
		vector<int> arr(n);
		for(int i=0; i<n; i++) {
			cin >> arr[i];
		}
		sort(arr.begin(), arr.end()); //从小到大 
		int res = 0, pos = 0, pre = 100;
		for(int i=0; i<m; i++) {
			if(i%2 == 0) {
				pos = i / 2;
			} else {
				pos = n - (i+1) / 2;
			}
			res = max(res, (pre-arr[pos])*(pre-arr[pos]));
			pre = arr[pos];
		}
		cout << res << endl;
	}
	return 0;
} 
