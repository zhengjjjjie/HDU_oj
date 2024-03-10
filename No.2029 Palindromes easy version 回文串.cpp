/**
	No.2029 Palindromes easy version(回文串)
	“回文串”是一个正读和反读都一样的字符串，比如“level”或者“noon”等等就是回文串。请写一个程序判断读入的字符串是否是“回文”
	
	Input:输入包含多个测试实例，输入数据的第一行是一个正整数n,表示测试实例的个数，后面紧跟着是n个字符串 
	Output:如果一个字符串是回文串，则输出"yes",否则输出"no"
	
	Sample Input:
		4
		level
		abcde
		noon
		haha
		
	Sample Output:
		yes
		no
		yes
		no
		
**/
# include<iostream>
# include<string>
# include<ctype.h>
using namespace std;

int main(){
	// 双指针思想 
	int n;
	while(cin>>n && n) {
		string tag;
		getchar(); //去除换行符 
		while(n--) {
			getline(cin,tag);
			int left=0,right=tag.size()-1; //左右指针 
			while(left<=right) {
				if(tag[left] == tag[right]) {
					left++;
					right--;
				}else {
					break;
				}
			}
			if(left<right) cout << "no" << endl;
			else cout << "yes" << endl;	
		}
	} 
	return 0;
} 
