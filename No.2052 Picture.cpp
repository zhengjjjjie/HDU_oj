/**
	No.2052 Picture
	Give you the width and height of the rectangle,darw it.
	
	Input:Input contains a number of test cases.For each case ,there are two numbers n and m (0 < n,m < 75)
		indicate the width and height of the rectangle.Iuput ends of EOF.
	Output:For each case,you should draw a rectangle with the width and height giving in the input.
		after each case, you should a blank line.
	
	SampleInput:
		3 2
		
	SampleOutput:
		+---+
		|   |
		|   |
		+---+
	
**/ 
# include<iostream>
# include<string>
using namespace std;

int main() {
  	int n, m; //n-width m-height
  	while(cin >> n >> m, n && m) {
    	for(int i=0; i<=m+1; i++) { //按行优先遍历 
	      	for(int j=0; j<=n+1; j++) {
		        if(i == 0 || i == m+1) { //首行或者是末行 
		          	if(j == 0) {
		            	cout << "+";
		          	} else if (j == n+1) {
		          		cout << "+" << endl;
					} else {
						cout << "-";
					} 
		        } else if(j == 0) {
		        	cout << "|";
				} else if (j == n+1) {
					cout << "|" << endl;
				} else {
		        	cout << " ";
				}
		    }
		}
	}
  	return 0;
}
