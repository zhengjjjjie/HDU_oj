
/**
	No.2000 ASCII码排序
	输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符。
	
	Input:输入数据有多组，每组占一行，有三个字符组成，之间无空格。
	Output:对于每组输入数据，输出一行，字符中间用一个空格分开
	sample Input:
		qwe
		asd
		zxc
	sample Output:
		e q w
		a d s
		c x z
**/ 

#include<iostream>
using namespace std;
//void swap(char &s1, char &s2){
//	char temp;
//	temp = s1;
//	s1 = s2;
//	s2 = temp;
//} 
int main() {
	char collect[4];
    while (cin >> collect) {
        if (collect[1] < collect[0])
            swap(collect[1], collect[0]);
        if (collect[2] < collect[1])
            swap(collect[2], collect[1]);
        if (collect[0] > collect[1])
            swap(collect[1], collect[0]);
        cout << collect[0] << " " << collect[1] << " " << collect[2] << endl;
    }
    return 0;
}

