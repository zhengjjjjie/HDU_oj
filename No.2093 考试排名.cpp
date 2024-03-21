/***
	No.2093 ��������
	C++��̿���ʹ�õ�ʵʱ�ύϵͳ�����м�ʱ��óɼ��������ص㡣���Ĺ�������ôʵ�ֵ��أ�
	������������Ŀ�Ľ���ύ֮��Ҫô��AC����Ҫô���󣬲��������������Ǹ������һ�ʣ������������й�һ�δ����ύ���������һ���ύ���⡰AC����
	��Ҫ������һ�����ˣ��ܹ���������ύ�˼��ء���Ȼ���������ϣ��󲽵�Ծ����һ��̨�ף������ں�ʱ��Ҫ̯���㹲��ȥ��ʱ�䡣�ر��ǣ������й��Ĵ����ύ��
	ÿ�ζ�Ҫ̯��һ���ĵ�λʱ��֡�����һ�������������������ϣ��������ȱ��˺ܶ࣬���ǣ�������ͬ����������Ⱥ�У�����ܻ��ں�ʱ�ϴ������������ơ�
	
	���磺ĳ�ο���һ��8�⣨A��B��C��D��E��F��G��H����ÿ���������ⶼ�ڶ�Ӧ��������и�������ǣ�������ʾ��ѧ���ڸ������й��Ĵ����ύ������
	�������ڻ�û��AC��������ʾAC���ĵ�ʱ�䣬�������a����һ�����ţ������и�����b���Ǿͱ�ʾ��ѧ���ύ����AC�ˣ���ȥ��ʱ��a��ͬʱ�����������ύ��b�Σ�
	��˶��������������ݣ�
	
	name         A      B      C      D     E     F     G      H
	Smith       -1     -16     8      0     0    120    39     0
	John        116    -2     11      0     0     82   55(1)   0
	Josephus   72(3)   126    10     -3     0     47   21(2)  -2
	Bush        0      -1     -8      0     0      0     0     0
	Alice      -2      67     13     -1     0    133   79(1)  -1
	Bob         0      0    57(5)     0     0    168    -7     0
	
	��ÿ�δ����ύ�ķ���Ϊ20�֣����������Ӹߵ���Ӧ���������ģ�
	Josephus 5 376
	John 4 284
	Alice 4 352
	Smith 3 167
	Bob 2 325
	Bush 0 0

	Input:�������ݵĵ�һ���ǿ�������n��1��n��12���Լ���λ������m��10��m��20����ÿ����������һ��ѧ�����û�����������10���ַ����ִ����Լ�������n����Ĵ�����״��
		�������������������е�������ǵĸ�ʽ��������ı���ύ��������С��100��AC����ʱ������С��1000��
	
	Output:����Щѧ���Ŀ�����״�����һ��ʵʱ������ʵʱ������Ȼ�Ȱ�AC�����Ķ����ţ������ǰ���ٰ�ʱ��ֵĶ����ţ��ٵ���ǰ���������ǰ���߶���ȣ�
		�����ֵ��ֵ����ţ�С����ǰ��ÿ��ѧ��ռһ�У�������֣�10���ַ�����������������2���ַ����Ҷ��룩��ʱ��֣�4���ַ����Ҷ��룩��
		���֡�������ʱ����໥֮����һ���ո�
	
	SampleInput:
		8 20
		Smith	  -1	-16	8	0	0	120	39	0
		John	  116	-2	11	0	0	82	55(1)	0
		Josephus  72(3)	126	10	-3	0	47	21(2)	-2
		Bush	  0	-1	-8	0	0	0	0	0
		Alice	  -2	67(2)	13	-1	0	133	79(1)	-1
		Bob	  0	0	57(5)	0	0	168	-7	0
	
	SampleOutput:
		Josephus    5  376
		John        4  284
		Alice       4  352
		Smith       3  167
		Bob         2  325
		Bush        0    0
	
***/ 
# include<iostream>
# include<vector>
# include<string>
# include<sstream>
# include<algorithm>
using namespace std;

typedef struct student {
	string name; //ѧ������
	int AC_num; //AC����Ŀ�� 
	int time_score; //ʱ��� 
}stu_record[1001];


int toInt(string number){ //���ַ�������numת��Ϊint�� 
	
	stringstream ss;
	ss << number;
	
	int intNumber;
	ss >> intNumber;
	
	return intNumber;
}
 
int AC_WA_score(string score, int de_score){ //���WA���AC����Ŀ��������ʱ��� 
	string this_time_score; //����AC��õ�ʱ���
	int ptr;
	
	for(int i=0; i<score.size(); i++){
		this_time_score += score[i];
		if(score[i] == '(') {
			ptr = i + 1;
			break;
		}
	}
	
	string WA_times; //()�м�¼��WA�Ĵ���;
	while(score[ptr] != ')')
		WA_times += score[ptr++];
		
	return toInt(this_time_score) + toInt(WA_times) * de_score;
}		

bool cmp(student stu1, student stu2) {
	if(stu1.AC_num > stu2.AC_num) {
		return true;
	}
	return false;
}
int main() {
	int n, m; //n-��Ŀ������m-��λ������ 
	cin >> n >> m;
	getchar();
	int i = 0;
	stu_record stu;
	while(cin >> stu[i].name) {
		stu[i].AC_num = 0;
		stu[i].time_score = 0;
		
		string score; //ÿ����Ŀ��Ӧ�ķ�����¼
		for(int j=0; j<n; j++) { //����n����Ŀ�ķ��� 
			cin >> score;
			if(score[0] == '-' || score == "0") { //��Ŀ��δAC
				continue; 
			} else if(score[score.size()-1] == ')') { //��Ŀ�ڶ��WA��AC 
				stu[i].AC_num += 1;
				stu[i].time_score += AC_WA_score(score, m);
				
			} else { //��Ŀһ�ξ�AC 
				stu[i].AC_num++;
				stu[i].time_score += toInt(score);
			} 
		}
		
		i++;
	}
	sort(stu, stu+i, cmp);
	
	for(int k=0; k<i; k++) {
		//%-10sʮ���ַ��� ������Ҳ��ո�
		//%2d �����ַ���ȣ��Ҷ���
		printf("%-10s %2d %4d\n", stu[k].name.c_str(), stu[k].AC_num, stu[k].time_score);
	}
	
	return 0;
}
