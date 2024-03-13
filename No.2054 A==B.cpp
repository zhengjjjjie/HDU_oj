/**
	No.2054 A==B
	Give you two numbers A and B, if A is equal to B, you should print "YES", or print "NO".
	
	Input:each test case contains two numbers A and B. 
	Output:for each case, if A is equal to B, you should print "YES", or print "NO".
	
	SampleInput:
		1 2
		2 2
		3 3
		4 3
		
	SampleOutput:
		NO
		YES
		YES
		NO
		
	题解：题目说明是比较A B是否相同 ，但却没说明A、B是否为小数或者范围大小等。
		这道题需要用数组来存。此外也不能存到数组后，直接对字符串数组进行比较，因为有可能是1.00和1。
		所以需要对获取到的a、b进行化简，然后再字符串比较。
		此外，设置a、b数组的大小，要尽可能大些，之前设小了，超时。后来把数组大小从1000到10000，最终改为100005，才ac的。  
		
		整体思路为，先去掉首数字为零的'前导0'；然后，判断是否为小数，小数部分的'后导0'；若小数部分都是零，则去除零及小数点； 

**/ 
# include<iostream>
# include<string>
# include<ctype.h> 
using namespace std;

char a[100005], b[100005];

string erase_zero(string str) {
	//删除'前导零'
	if(str[0] == '0') {
    	str.erase(0, str.find_first_not_of('0')); //find_first_not_of('0')找到第一个非零元素 
    }
    
	int i,pos,len;
	pos = str.find(".");
	//先判断是否为小数
	if(pos != string::npos) {
		len = str.length();
		//找到'后导零' 的开始位置
		for(i=len-1; str[i]=='0'; i--);
		if(i == pos) {
			//如果小数点后全部为零，还要删除小数点 
			str.erase(i, len-i);
		} else {
			//删除'后导零'
			str.erase(i+1, len-i-1); 
		} 
	} 
	return str;
}
int main() {
	string a,b;
	while(cin >> a >> b) {
		if(erase_zero(a) != erase_zero(b)) 
			cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
} 
