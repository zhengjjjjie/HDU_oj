/**
	No.2025 查找最大元素
	对于输入的每个字符串，查找其中的最大字母，在该字母后面插入字符串“(max)”
		
	Input:输入数据包括多个测试实例，每个实例由一行长度不超过100的字符串组成，字符串仅由大小写字母构成
	Output:对于每个测试实例输出一行字符串，输出的结果是插入字符串“(max)”后的结果，
			如果存在多个最大的字母，就在每一个最大字母后面都插入"(max)"
	sample Input:
		abcdefgfedcba
		xxxxx
 
	sample Output:
		abcdefg(max)fedcba
		x(max)x(max)x(max)x(max)x(max)
	
	注：A的ASCII码是65，a的ASCII码是97
	
**/ 
# include<iostream>
# include<string> 
# include<ctype.h>
using namespace std;

int main(){
	string tag;
	while(cin >> tag) {
		char maxAlpha = 'A';
		for(int i=0; i<tag.size(); i++) {
			if(tag[i] > maxAlpha) {
				maxAlpha = tag[i];
			}
		}
		for(auto i : tag) {
			cout << i;
			if(i == maxAlpha) {
				cout << "(max)";
			}
		}
		cout << endl;
	}
	return 0;
} 
