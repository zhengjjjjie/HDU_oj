/**
	No.2072 ������
	lily�ĺ�����xiaoou333����ܿգ�������һ��û��ʲô��������飬����ͳ��һƪ�����ﲻͬ���ʵ�������
	������������ǰ���xiaoou333���������⡣
		
	Input:�ж������ݣ�ÿ��һ�У�ÿ�����һƪС���¡�
		ÿƪС���¶�����Сд��ĸ�Ϳո���ɣ�û�б����ţ�����#ʱ��ʾ���������
	Output:ÿ��ֻ���һ���������䵥�����У�����������һƪ�����ﲻͬ���ʵ�������
	
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
	//ͳ��һƪ���²�ͬ���ʵ�����
	string str, word;
	while(getline(cin, str), str!="#") {
		set<string> s;
        word = "";
		for(int i=0; i<=str.size(); i++) {
			if(str[i] == ' ' || str[i] == '\0') { //ͨ���ո��жϵ��ʻ��������һ������ 
				if(word != "") { //�����ʲ�Ϊ�� 
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
