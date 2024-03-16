/**
	No.2072 单词数
	lily的好朋友xiaoou333最近很空，他想了一件没有什么意义的事情，就是统计一篇文章里不同单词的总数。
	下面你的任务是帮助xiaoou333解决这个问题。
		
	Input:有多组数据，每组一行，每组就是一篇小文章。
		每篇小文章都是由小写字母和空格组成，没有标点符号，遇到#时表示输入结束。
	Output:每组只输出一个整数，其单独成行，该整数代表一篇文章里不同单词的总数。
	
	SampleInput:
		you are my friend
		#
	
	SampleOutput:
		4
		 
**/
# include<iostream>
# include<string>
# include<set>
using namespace std;

int main() {
	//统计一篇文章不同单词的总数
	string str, word;
	while(getline(cin, str), str!="#") {
		set<string> s;
        word = "";
		for(int i=0; i<=str.size(); i++) {
			if(str[i] == ' ' || str[i] == '\0') { //通过空格判断单词或者是最后一个单词 
				if(word != "") { //若单词不为空 
					s.insert(word);
					word = "";
				}
			} else {
				word += str[i];
			}
		}
		cout << s.size() << endl;
	} 
	return 0;
}
