/**
	No.2053 Switch Game
	There are many lamps in a line. All of them are off at first. A series of operations are carried out on 
	these lamps. On the i-th operation, the lamps whose numbers are the multiple of i change the condition
	 ( on to off and off to on ).
	
	Input:Each test case contains only a number n (0<n<=10^5) in a line.
	Output:Output the condition of the n-th lamp after infinity operations (0-off, 1-on).
	
	SampleInput:
		1
		5
		
	SampleOutput:
		1
		0

		Consider the second test case:
		
		The initial condition	   : 0 0 0 0 0 …
		After the first operation  : 1 1 1 1 1 …
		After the second operation : 1 0 1 0 1 …
		After the third operation  : 1 0 0 0 1 …
		After the fourth operation : 1 0 0 1 1 …
		After the fifth operation  : 1 0 0 1 0 …
		
		The later operations cannot change the condition of the fifth lamp any more. So the answer is 0.
	
	题解：这道题的意思是，有很多个灯泡一开始都是关着的，我们要输入灯泡数n，同时n也是我们对灯泡的操作总次数，
	每当第某个灯泡能整除第某次操作，即对这个灯泡做一次开关操作（从开到关或从关到开）。
	
	例，输入的数的1，即有一个灯泡和一次操作，把灯打开即可；输入的数为5，有5个灯泡从1开始编号，
	第一次操作，1~5都能被1整除，全打开，第二次操作，只有2和4能被2整除，对2,4灯泡操作，以此类推。
	注意，最终输入的数只有第n个灯泡的状态。一开始代码把所有的的灯都操作了一遍，结果是，超时了.. 

	随后想到，既然只需要输入第n的灯泡的状态，那么只需要对第n个灯泡操作即可，因此并不需要列出其他灯泡对其操作

**/
# include<iostream>
using namespace std;

int main() {
	// 双重循环暴力解法超时
	// 一次遍历优化：只考虑第n个lamp 
    int n;
    while(cin >> n && n) {   
        int num = 0;
        for(int i=1; i<=n; i++) { //i:1-n n次operation 
            if(n%i == 0) { //如果能被i整除，则operate 
                num++;
            }
        }
        if(num%2 == 1)  cout << "1"<< endl;
        else cout << "0" << endl;
    }
    return 0;
}
