/***
	2019年杭电笔试题1-奇偶数统计easy 
	
	有一群人去电影院看电影。但电影院有个很奇怪的规定：成人只能分到数字奇数座位号，未满18岁的
	儿童只能分到数字为偶数的座位号。
	
	输入：输入共有n个人去看电影 (1<=n<1000)，接下来输入n个人的座位号，每个座位号用空格隔开
	输出：依次输出此次看电影成人的人数以及成人在所有人中所占的比例、未成年人的人数以及未成年
	人在所有人中所占的比例，计算出的比例保留两位小数，每个输出用空格隔开
	
	SampleInput： 
		8 13 12 10 8 3 24 21 19
		
	SampleOutput：
		4 0.50 4 0.50


***/

# include<iostream>
using namespace std;

int main() {
	int n, seat;
	int cnt1=0, cnt2=0;
	cin >> n;
	while(n--) {
		cin >> seat;
		if(seat%2 != 0){
			//记录成人人数 
			cnt1++;
		} else {
			//记录未成年人人数 
			cnt2++;
		} 
	}
	printf("%d %.2f %d %.2f\n", cnt1, cnt1*1.0/(cnt1+cnt2), cnt2, cnt2*1.0/(cnt1+cnt2));
	return 0;
}

