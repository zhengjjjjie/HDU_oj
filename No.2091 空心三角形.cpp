/***
	No.2091 ���������� 
	��һ���ַ��������Ϳգ����ܽ�ʡ���ϳɱ����������������ؼ���Ϊ��׷����һ���Ӿ�Ч����
	����ƵĹ����У���Ҫ�������ֻ��ƵĲ��Ϻʹ�С�ߴ�����������壬ͨ��������ʱ���������Ա㿴��Ч����
	
	Input:ÿ�а���һ���ַ���һ������n(0<n<41)����ͬ���ַ���ʾ��ͬ�Ļ��ƣ�����n��ʾ���������εĸߡ���Ȼ��ױ߳�Ϊ2n-1��
		�������@�ַ������ʾ���������������������Ѿ����ˡ�
	
	Output:ÿ������������֮��Ӧ����һ�У������ε��м�Ϊ�ա���Ȼ��ĩû�ж���Ŀո�
	
	SampleInput:
		X 2
		A 7
		@
	
	SampleOutput:
		 X
		XXX
		��
		      A
		     A A
		    A   A
		   A     A
		  A       A
		 A         A
		AAAAAAAAAAAAA
		
***/ 
# include<iostream>
# include<cstring>
using namespace std;

int res[42][84];

int main() {
	//ģ��
	//��һ��WA������Ϊres���鲻����[42][42]�޷�����[42, 83]
	char c;
	int n;
	while(cin >> c, c!='@') {
		cin >> n;
		getchar(); //����Ҫ������ 
		memset(res, 0, sizeof(res));
		res[1][n] = 1; //��1��
		for(int i=2; i<n; i++) { //��2�е�n-1��
			res[i][n-i+1] = 1;
			res[i][n+i-1] = 1;
		}
		for(int i=1; i<=2*n-1; i++) { //��n��
			res[n][i] = 1;
		} 
		//��� [n, 2*n-1] 
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=2*n-1; j++) {
				if(res[i][j]) cout << c;
				else cout << " "; 
			}
			cout << endl;
		} 
		cout << endl;
	}
	return 0;
} 
