/***
	No.2094 产生冠军
	有一群人，打乒乓球比赛，两两捉对撕杀，每两个人之间最多打一场比赛。
	球赛的规则如下：
	如果A打败了B，B又打败了C，而A与C之间没有进行过比赛，那么就认定，A一定能打败C。
	如果A打败了B，B又打败了C，而且，C又打败了A，那么A、B、C三者都不可能成为冠军。
	根据这个规则，无需循环较量，或许就能确定冠军。你的任务就是面对一群比赛选手，在经过了若干场撕杀之后，确定是否已经实际上产生了冠军。
	
	Input:输入含有一些选手群，每群选手都以一个整数n(n<1000)开头，后跟n对选手的比赛结果，比赛结果以一对选手名字（中间隔一空格）表示，前者战胜后者。
		如果n为0，则表示输入结束。
	
	Output:对于每个选手群，若你判断出产生了冠军，则在一行中输出“Yes”，否则在一行中输出“No”。
	
	SampleInput:
		3
		Alice Bob
		Smith John
		Alice Smith
		5
		a c
		c d
		d e
		b e
		a d
		0
	
	SampleOutput:
		Yes
		No
		
	解题思路：定义所有人集合、输者集合，若所有人数量减去输者数量等于一，则能判断出冠军。思路实在巧妙！
	偏序关系中最大元：输与赢的关系就是一个偏序关系，最大元就是那个冠军，想要有最大元（唯一的极大元），就需要有且只有一个人没输过，也就是A-B=1 

***/ 
# include<iostream>
# include<set>
# include<string>
using namespace std;

int main() {
	int n;
	while(cin >> n, n) {
		string winner, loser;
		set<string> all, losers;
		
		while(n--) {
			cin >> winner >> loser;
			all.insert(winner);
			all.insert(loser);
			losers.insert(loser);
		}
		//若所有人数量减去输者数量等于1，则判断出冠军（没输过） 
		cout << (all.size() - losers.size() == 1? "Yes" :"No") << endl;
	}
}
