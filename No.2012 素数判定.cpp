/**
	No.2012 素数判定 
	对于表达式 n^2+n+41，当 n在（x,y）范围内取整数值时（包括x,y）(-39<=x<y<=50)，判定该表达式的值是否都为素数
	
	Input:输入数据有多组，每组占一行，由两个整数x，y组成，当x=0,y=0时，表示输入结束，该行不做处理。
	Output:对于每个给定范围内的取值，如果表达式的值都为素数，则输出"OK",否则请输出“Sorry”,每组输出占一行

	sample Input:
		0 1 
		0 0
 
	sample Output:
		OK
		
**/ 
# include<iostream>
# include<cmath>
using namespace std;

bool isPrime(int num){ //判断素数 
	for(int i=2; i<=sqrt(num); i++) {
		if(num % i == 0) {
			return false;
		}
	}
	return true;
}
int main(){
	int x,y,i;
	while(scanf("%d%d",&x,&y) && (x || y)) {
		for(i=x; i<y; i++) {
			//n^2+n+41
			if(!isPrime(pow(i,2)+i+41)){
				break;
			}
		}
		if(i < y) printf("Sorry\n"); //代表循环提前结束 
		else printf("OK\n");
	} 
	return 0; 
} 
