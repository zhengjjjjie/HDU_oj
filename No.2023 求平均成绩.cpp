/**
	No.2023 ��ƽ���ɼ� 
	����һ������n(n<=50)��ѧ����ÿ�˿�m(m<=5)�ſΣ���ÿ��ѧ����ƽ���ɼ���ÿ�ſε�ƽ���ɼ�����������Ƴɼ������ڵ���ƽ���ɼ���ѧ������
		
	Input:���������ж������ʵ����ÿ������ʵ���ĵ�һ�а�����������n��m���ֱ��ʾѧ�����Ϳγ�����Ȼ����n�����ݣ�ÿ�а���m���������������Է�����
	Output:����ÿ������ʵ�������3�����ݣ���һ�а���n�����ݣ���ʾn��ѧ����ƽ���ɼ������������λС����
		�ڶ��а���m�����ݣ���ʾm�ſε�ƽ���ɼ������������λС������������һ����������ʾ�ð༶�и��Ƴɼ������ڵ���ƽ���ɼ���ѧ��������
		ÿ������ʵ�������һ������
	sample Input:
		2 2
		5 10
		10 20
 
	sample Output:
		7.50 15.00
		7.50 15.00
		1
	
	ע�⣺������������: Ӧ���볣�����ʽ
		View Compilation Error
		0_0_39212628_4281.cpp
		0_0_39212628_4281.cpp(8) : error C2057: Ӧ���볣�����ʽ
		0_0_39212628_4281.cpp(8) : error C2466: ���ܷ��䳣����СΪ 0 ������
		0_0_39212628_4281.cpp(8) : error C2087: ��matrix��: ȱ���±�
		0_0_39212628_4281.cpp(8) : error C2133: ��matrix��: δ֪�Ĵ�С
		0_0_39212628_4281.cpp(9) : error C2057: Ӧ���볣�����ʽ
		0_0_39212628_4281.cpp(9) : error C2466: ���ܷ��䳣����СΪ 0 ������
		0_0_39212628_4281.cpp(9) : error C2133: ��course_avg��: δ֪�Ĵ�С
	
		����취��1.���峣�������ǳ�����ֵ���ܸı䡣�� int n,m; ����const int n=0,m=0;
			2.ʹ��vector�������顣�� int matrix[n][m];�����鹹��������ʽ���� vector<vector<double>> matrix(n, vector<int>(m,0)); 
**/ 
# include<iostream>
# include<vector>
using namespace std;

int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF && n!=0 && m!=0) {
		// n��ѧ�� m�ſ� 
		vector<vector<int>> matrix(n, vector<int>(m,0));
		vector<double> course_avg(m);
		double sum = 0;
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				cin >> matrix[i][j];
			}
		}
		
		// ���n��ѧ����ƽ���ɼ� 
		for(int i=0; i<n; i++) {
			sum = 0;
			for(int j=0; j<m; j++) {
				sum += matrix[i][j];
			}
			printf("%.2f", sum / m);
			if(i<n-1) printf(" ");//ע�����һ��Ԫ�غ�������ո�
		}
		printf("\n");
		
		// ���m�ſε�ƽ���ɼ� 
		for(int j=0; j<m; j++) {
			sum = 0;
			for(int i=0; i<n; i++) {
				sum += matrix[i][j];
			}
			course_avg[j] = sum / n;
			printf("%.2f", course_avg[j]);
			if(j<m-1) printf(" ");//ע�����һ��Ԫ�غ�������ո�
		}
		printf("\n");
		
		// ����ð༶�и��Ƴɼ������ڵ���ƽ���ɼ���ѧ������ 
		int res = 0;
		for(int i=0; i<n; i++) {
			int cnt = 0;
			for(int j=0; j<m; j++) {
				if(matrix[i][j] >= course_avg[j]) {
					cnt++;
				}
			}
			if(cnt == m) {
				res++; 
			}
		} 
		printf("%d\n\n",res);
	}
	
	return 0;
} 
