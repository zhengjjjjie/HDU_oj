/**
	No.2024 C语言合法标识符 
	输入一个字符串，判断其是否是C的合法标识符
		
	Input:输入数据包含多个测试实例，数据的第一行是一个整数n,表示测试实例的个数，然后是n行输入数据，每行是一个长度不超过50的字符串
	Output:对于每组输入数据，输出一行。如果输入数据是C的合法标识符，则输出"yes"，否则，输出“no”
	sample Input:
		3
		12ajf
		fi8x_a
		ff  ai_2
 
	sample Output:
		no
		yes
		no
	
**/ 
# include<iostream>
# include<ctype.h> //检查字符 
# include<string> 
# include<fstream>
using namespace std;

bool isItem(char c) //有效标识符 
{
    if (c >= '0' && c <= '9' || c >= 'A' && c < 'Z' || c >= 'a' && c <= 'z' || c == '_')
        return true;
    return false;
}
bool isValid(string tag) {
	//数字开头
	if(isdigit(tag[0])) {
		return false;
	}
	//非有效标识符开头 
	if(!isItem(tag[0])) {
		return false;
	} 
	 
	for(int i=1; i<tag.size(); i++) {
		if(!isItem(tag[i]))
			return false;
	}
	return true;
}
int main(){
	int n;
	while(cin >> n) {
		getchar(); //去除换行符 
		for(int i=0; i<n; i++) {
			string tag;
			getline(cin, tag); //获取带空格的一行处理
			if(isValid(tag)) {
				puts("yes");
			} else {
				puts("no");
			}
		} 
	} 
	return 0;
} 
