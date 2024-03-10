/**
	No.2027 统计元音
	统计每个元音字母在字符串中出现的次数
	
	Input:输入数据首先包括一个整数n，表示测试实例的个数，然后是n行长度不超过100的字符串
	Output:对于每个测试实例输出5行，格式如下：
			a:num1
			e:num2
			i:num3
			o:num4
			u:num5
			多个测试实例之间由一个空行隔开。
			
			请特别注意：最后一块输出后面没有空行：）
	
	Sample Input:
		2
		aeiou
		my name is ignatius
		
	Sample Output:
		a:1
		e:1
		i:1
		o:1
		u:1
		
		a:2
		e:1
		i:3
		o:0
		u:1
		
**/
# include<iostream>
# include<string>
# include<ctype.h>
# include<map>
using namespace std;

int main() {
	int n;
	cin >> n;
	getchar();
	while(n--) {
		map<char, int> map = {
			{'a', 0},
			{'e', 0},
			{'i', 0},
			{'o', 0},
			{'u', 0}
		};
		string tag;
		getline(cin, tag);
		for(auto ch : tag) {
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
				map[ch]++;
		}
		for(auto it=map.begin(); it!=map.end(); it++){
        	cout<<it->first<<":"<<it->second<<endl;
    	}
	}
	
	return 0;
} 
