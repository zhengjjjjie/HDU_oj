/**
	No.2023 求平均成绩 
	假设一个班有n(n<=50)个学生，每人考m(m<=5)门课，求每个学生的平均成绩和每门课的平均成绩，并输出各科成绩均大于等于平均成绩的学生数量
		
	Input:输入数据有多个测试实例，每个测试实例的第一行包括两个整数n和m，分别表示学生数和课程数。然后是n行数据，每行包括m个整数（即：考试分数）
	Output:对于每个测试实例，输出3行数据，第一行包含n个数据，表示n个学生的平均成绩，结果保留两位小数；
		第二行包含m个数据，表示m门课的平均成绩，结果保留两位小数；第三行是一个整数，表示该班级中各科成绩均大于等于平均成绩的学生数量。
		每个测试实例后面跟一个空行
	sample Input:
		2 2
		5 10
		10 20
 
	sample Output:
		7.50 15.00
		7.50 15.00
		1
	
	注意：数组声明错误: 应输入常量表达式
		View Compilation Error
		0_0_39212628_4281.cpp
		0_0_39212628_4281.cpp(8) : error C2057: 应输入常量表达式
		0_0_39212628_4281.cpp(8) : error C2466: 不能分配常量大小为 0 的数组
		0_0_39212628_4281.cpp(8) : error C2087: “matrix”: 缺少下标
		0_0_39212628_4281.cpp(8) : error C2133: “matrix”: 未知的大小
		0_0_39212628_4281.cpp(9) : error C2057: 应输入常量表达式
		0_0_39212628_4281.cpp(9) : error C2466: 不能分配常量大小为 0 的数组
		0_0_39212628_4281.cpp(9) : error C2133: “course_avg”: 未知的大小
	
		解决办法：1.定义常量，但是常量的值不能改变。将 int n,m; 换成const int n=0,m=0;
			2.使用vector定义数组。将 int matrix[n][m];的数组构造申明方式换成 vector<vector<double>> matrix(n, vector<int>(m,0)); 
**/ 
# include<iostream>
# include<vector>
using namespace std;

int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF && n!=0 && m!=0) {
		// n个学生 m门课 
		vector<vector<int>> matrix(n, vector<int>(m,0));
		vector<double> course_avg(m);
		double sum = 0;
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				cin >> matrix[i][j];
			}
		}
		
		// 输出n个学生的平均成绩 
		for(int i=0; i<n; i++) {
			sum = 0;
			for(int j=0; j<m; j++) {
				sum += matrix[i][j];
			}
			printf("%.2f", sum / m);
			if(i<n-1) printf(" ");//注意最后一个元素后不能输出空格
		}
		printf("\n");
		
		// 输出m门课的平均成绩 
		for(int j=0; j<m; j++) {
			sum = 0;
			for(int i=0; i<n; i++) {
				sum += matrix[i][j];
			}
			course_avg[j] = sum / n;
			printf("%.2f", course_avg[j]);
			if(j<m-1) printf(" ");//注意最后一个元素后不能输出空格
		}
		printf("\n");
		
		// 输出该班级中各科成绩均大于等于平均成绩的学生数量 
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
