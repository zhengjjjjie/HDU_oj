/**
	No.2043 密码 
	网上流传一句话:"常在网上飘啊，哪能不挨刀啊～"。其实要想能安安心心地上网其实也不难，学点安全知识就可以。
	
	首先，我们就要设置一个安全的密码。那什么样的密码才叫安全的呢？一般来说一个比较安全的密码至少应该满足下面两个条件：
	(1).密码长度大于等于8，且不要超过16。
	(2).密码中的字符应该来自下面“字符类别”中四组中的至少三组。
	
	这四个字符类别分别为：
	1.大写字母：A,B,C...Z;
	2.小写字母：a,b,c...z;
	3.数字：0,1,2...9;
	4.特殊符号：~,!,@,#,$,%,^;
	
	给你一个密码，你的任务就是判断它是不是一个安全的密码。
	
	Input:输入数据第一行包含一个数M，接下有M行，每行一个密码（长度最大可能为50），密码仅包括上面的四类字符
	Output:对于每个测试实例，判断这个密码是不是一个安全的密码，是的话输出YES，否则输出NO
	
	SampleInput:
		3
		a1b2c3d4
		Linle@ACM
		^~^@^@!%
		
	SampleOutput:
		NO
		YES
		NO
		
**/ 
# include<iostream>
# include<string>
# include<ctype.h>
using namespace std;

bool isSafe(string s) { //判断字符串s是否安全 
	int len = s.size();
	int f1=0,f2=0,f3=0,f4=0;
	if(len<8 || len>16) return false;
	for(int i=0; i<len; i++) { //遍历s的每个字符 
		if(s[i]>='A' && s[i]<='Z') {
			f1 = 1;
		}
		if(s[i]>='a' && s[i]<='z') {
			f2 = 1;
		} 
		if(s[i]>='0' && s[i]<='9') {
			f3 = 1;
		}
		if(s[i]=='~' || s[i]=='!' || s[i]=='@' || s[i]=='#' || s[i]=='&' || s[i]=='%' || s[i]=='^'){
			f4 = 1;
		}
	}
	if(f1+f2+f3+f4 < 3) {
		return false;
	}
	return true;
}
int main() {
	int n;
	while(cin >> n && n) {
		getchar(); //去除回车符 
		while(n--) {
			string key;
			getline(cin, key);
			if(isSafe(key)) 
				cout << "YES" << endl;
			else  
				cout << "NO" << endl;
		}
	}
	return 0;
} 
